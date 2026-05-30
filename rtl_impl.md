# RTL Implementation Guide — Banked On-Chip SRAM Controller
**Based on:** Microarchitecture Spec v1.1 (LOCKED)

---

## Part 1 — Filesystem Hierarchy

Establish this directory layout before writing a single line of RTL. Every path below is referenced in the build and verification flows.

```
banked_sram_ctrl/
│
├── rtl/                          # Synthesizable RTL only
│   ├── banked_sram_ctrl.sv       # Top-level (parameters live here)
│   ├── req_fifo.sv               # Synchronous FIFO — request side
│   ├── rsp_fifo.sv               # Synchronous FIFO — response side
│   ├── per_bank_arb.sv           # Per-bank round-robin arbiter
│   ├── bank_scheduler.sv         # Conflict check + pipeline issue
│   ├── sram_array.sv             # Behavioral SRAM macro (byte-enable)
│   ├── rsp_mux.sv                # Response routing by TOTAL_ID
│   ├── perf_counters.sv          # Saturating 32-bit CSR counters
│   └── pkg/
│       └── sram_ctrl_pkg.sv      # Shared structs: req_pkt_t, rsp_pkt_t
│
├── verif/
│   ├── tb/
│   │   └── tb_banked_sram_ctrl.sv   # Top-level testbench
│   ├── sva/
│   │   ├── handshake_props.sv       # Valid/ready protocol assertions
│   │   ├── ordering_props.sv        # In-order response assertions
│   │   ├── conflict_props.sv        # Arbitration / conflict assertions
│   │   └── param_legality.sv        # §12 legality checks ($fatal)
│   ├── sequences/
│   │   ├── seq_single_rw.sv         # Single read/write
│   │   ├── seq_multiport.sv         # N ports issuing concurrently
│   │   ├── seq_conflict.sv          # Forced bank conflicts
│   │   └── seq_backpressure.sv      # Response queue fill scenarios
│   └── scoreboard/
│       └── sram_scoreboard.sv       # Golden reference model
│
├── sim/
│   ├── Makefile                  # Simulator invocation (VCS / Questa / Verilator)
│   └── waves/                    # .vcd / .fsdb dumps
│
├── constraints/
│   └── timing.xdc                # FPGA timing constraints (250 MHz)
│
└── docs/
    └── Project_spec.md           # Locked spec — read-only reference
```

---

## Part 2 — Build Order (Bottom-Up)

Follow this strict bottom-up sequence. Each block is independently compilable and testable before the next layer depends on it. Never integrate upward until the unit below passes its own checklist.

```
Step 1  ──►  sram_ctrl_pkg.sv        (structs, localparams)
Step 2  ──►  sram_array.sv           (behavioral SRAM)
Step 3  ──►  req_fifo.sv / rsp_fifo.sv
Step 4  ──►  per_bank_arb.sv
Step 5  ──►  bank_scheduler.sv
Step 6  ──►  rsp_mux.sv
Step 7  ──►  perf_counters.sv
Step 8  ──►  banked_sram_ctrl.sv     (wire everything together)
Step 9  ──►  Full integration sim + SVA bind
```

---

## Part 3 — Step-by-Step Implementation Details

### Step 1 — `sram_ctrl_pkg.sv`

**What to implement:**

Declare all parameters, derived localparams, and struct definitions here. Import this package in every other module with `` `include `` or `import sram_ctrl_pkg::*;`.

```systemverilog
package sram_ctrl_pkg;

  // ── User parameters (override at instantiation) ──────────────────────────
  parameter int NUM_BANKS      = 4;
  parameter int BANK_DEPTH     = 256;
  parameter int DATA_WIDTH     = 32;
  parameter int ADDR_WIDTH     = 10;
  parameter int NUM_REQ_PORTS  = 4;
  parameter int QUEUE_DEPTH    = 4;
  parameter int PIPELINE_STAGES = 2;
  parameter int ID_WIDTH       = 4;

  // ── Derived (localparam — do NOT override) ────────────────────────────────
  localparam int BANK_SEL_BITS  = $clog2(NUM_BANKS);
  localparam int BANK_ADDR_BITS = $clog2(BANK_DEPTH);
  localparam int PORT_ID_BITS   = $clog2(NUM_REQ_PORTS);
  localparam int TOTAL_ID_BITS  = ID_WIDTH + PORT_ID_BITS;
  localparam int STROBE_WIDTH   = DATA_WIDTH / 8;

  // ── Structs ───────────────────────────────────────────────────────────────
  typedef struct packed {
    logic [ADDR_WIDTH-1:0]   addr;
    logic [DATA_WIDTH-1:0]   data;
    logic [STROBE_WIDTH-1:0] strobe;
    logic [ID_WIDTH-1:0]     id;
    logic                    we;
  } req_pkt_t;

  typedef struct packed {
    logic [DATA_WIDTH-1:0] data;
    logic [ID_WIDTH-1:0]   id;
    logic                  err;
  } rsp_pkt_t;

endpackage
```

**Spec cross-reference:** §2.1, §2.2, §4.1, §4.2.

**Check:** Does every derived parameter match the formula table in §2.2 exactly? No magic numbers anywhere.

---

### Step 2 — `sram_array.sv`

**What to implement:**

Behavioral synchronous SRAM with byte-enable. This is your golden memory model — it must be functionally correct before anything else is layered on top.

```systemverilog
module sram_array #(
  parameter int DEPTH      = 256,
  parameter int DATA_WIDTH = 32
)(
  input  logic                       clk,
  input  logic                       we,
  input  logic [$clog2(DEPTH)-1:0]   addr,
  input  logic [DATA_WIDTH-1:0]      wdata,
  input  logic [DATA_WIDTH/8-1:0]    bwe,    // byte-enable
  output logic [DATA_WIDTH-1:0]      rdata
);
  logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];

  always_ff @(posedge clk) begin
    if (we) begin
      for (int i = 0; i < DATA_WIDTH/8; i++)
        if (bwe[i]) mem[addr][i*8 +: 8] <= wdata[i*8 +: 8];
    end
    rdata <= mem[addr];   // read registered (single-cycle latency)
  end
endmodule
```

**Spec cross-reference:** §11.4 (byte-enable strobe), §5.1 (single-cycle SRAM access assumed in pipeline latency count).

**Check:**
- Write with `bwe = 4'b0101` — only bytes 0 and 2 change; bytes 1 and 3 are unchanged.
- Read the same address the cycle after write — confirm `rdata` matches written lanes.
- No ECC, no tag array — §1.3 is firm.

---
## Step 3 — `req_fifo.sv`

**What to implement:** Synchronous write / synchronous read FIFO with **registered `ready`** and **combinational head visibility**. The arbiter must see the head packet and a `head_valid` bit without clock latency, and the FIFO must expose an explicit `pop` input.

```verilog
module req_fifo #(
  parameter int DATA_WIDTH = 64,        // Width of req_pkt_t
  parameter int DEPTH      = 4          // QUEUE_DEPTH
)(
  input  logic               clk,
  input  logic               rst_n,

  // Push interface (from requestor)
  input  logic               push_valid,
  output logic               push_ready,
  input  logic [DATA_WIDTH-1:0] push_data,

  // Head interface (to arbiter — combinational)
  output logic               head_valid,
  output logic [DATA_WIDTH-1:0] head_data,

  // Pop control (from top-level arbiter grant logic)
  input  logic               pop,

  // Status
  output logic               full,
  output logic               empty
);

  localparam int PTR_W = $clog2(DEPTH);

  logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];
  logic [PTR_W-1:0] wr_ptr, rd_ptr;
  logic [PTR_W:0]   count, count_next;   // Extra bit for full/empty

  // Combinational head — memory read is async; rd_ptr may advance same cycle
  logic [PTR_W-1:0] rd_ptr_next;
  assign rd_ptr_next = pop ? rd_ptr + 1'b1 : rd_ptr;
  assign head_data   = mem[rd_ptr_next];
  assign head_valid  = (count != 0);
  assign full        = (count == DEPTH);
  assign empty       = (count == 0);

  // Registered backpressure: requestor sees push_ready reflect NEXT cycle's capacity
  always_comb begin
    case ({push_valid && push_ready, pop})
      2'b10:  count_next = count + 1'b1;
      2'b01:  count_next = count - 1'b1;
      default: count_next = count;
    endcase
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      wr_ptr     <= '0;
      rd_ptr     <= '0;
      count      <= '0;
      push_ready <= 1'b1;              // Empty after reset → ready to accept
    end else begin
      if (push_valid && push_ready) begin
        mem[wr_ptr] <= push_data;
        wr_ptr      <= wr_ptr + 1'b1;
      end
      if (pop) begin
        rd_ptr <= rd_ptr + 1'b1;
      end
      count      <= count_next;
      push_ready <= (count_next < DEPTH);
    end
  end
endmodule
```

**Spec cross-reference:** §4.3 (handshake), §8.1 (registered ready), §7.3 (head-of-line blocking requires explicit pop).

**Checks:**
- `push_ready` must be a flop (not combinational `!full`). §8.1 explicitly requires one-cycle-delayed backpressure.
- `head_data` must update combinationally on `pop` so the arbiter sees the next entry if the queue isn't empty (fall-through behavior).
- `pop` must only be asserted by the top-level when `grant_valid && grant_ready` for this port.

---


## Step 3 (cont.) — `rsp_fifo.sv`

**What to implement:** Standard synchronous FIFO. The push side comes from the Response Mux; the pop side drives the external port. No need for combinational head exposure — the requestor consumes via valid/ready.

```verilog
module rsp_fifo #(
  parameter int DATA_WIDTH = 64,        // Width of rsp_pkt_t
  parameter int DEPTH      = 4
)(
  input  logic               clk,
  input  logic               rst_n,

  // Push from response mux
  input  logic               push_valid,
  output logic               push_ready,   // = !full
  input  logic [DATA_WIDTH-1:0] push_data,

  // Pop to requestor
  output logic               pop_valid,    // = !empty
  input  logic               pop_ready,
  output logic [DATA_WIDTH-1:0] pop_data,

  output logic               full,
  output logic               empty
);

  localparam int PTR_W = $clog2(DEPTH);
  logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];
  logic [PTR_W-1:0] wr_ptr, rd_ptr;
  logic [PTR_W:0]   count;

  assign push_ready = (count < DEPTH);
  assign pop_valid  = (count != 0);
  assign full       = (count == DEPTH);
  assign empty      = (count == 0);
  assign pop_data   = mem[rd_ptr];   // Registered output — rd_ptr flops address

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      wr_ptr <= '0; rd_ptr <= '0; count <= '0;
    end else begin
      case ({push_valid && push_ready, pop_valid && pop_ready})
        2'b10: count <= count + 1'b1;
        2'b01: count <= count - 1'b1;
        default: ;
      endcase
      if (push_valid && push_ready) begin
        mem[wr_ptr] <= push_data;
        wr_ptr      <= wr_ptr + 1'b1;
      end
      if (pop_valid && pop_ready) begin
        rd_ptr <= rd_ptr + 1'b1;
      end
    end
  end
endmodule
```

**Spec cross-reference:** §4.2, §4.3, §8.2 (response queue backpressure).

**Checks:**
- `push_ready` can be combinational here because the upstream Response Mux is allowed to look at it combinationally (no external protocol requirement for registered ready on push side).
- Ensure `pop_data` is read directly from memory addressed by flopped `rd_ptr` — this gives single-cycle latency from `pop_ready` to new data.


---

## Step 4 — `per_bank_arb.sv`

**What to implement:** Purely combinational round-robin arbiter *except* for the `priority_ptr` flop. Must hold `grant_valid`/`grant_port` stable when `grant_ready` is low.

```verilog
module per_bank_arb #(
  parameter int NUM_REQ_PORTS = 4
)(
  input  logic                    clk,
  input  logic                    rst_n,

  // One-hot-ish request vector from top-level (already bank-filtered)
  input  logic [NUM_REQ_PORTS-1:0] req_valid,

  // Grant outputs (stable when grant_ready=0)
  output logic                    grant_valid,
  output logic [$clog2(NUM_REQ_PORTS)-1:0] grant_port,

  // Backpressure from downstream pipeline
  input  logic                    grant_ready
);

  localparam int P_W = $clog2(NUM_REQ_PORTS);
  logic [P_W-1:0] priority_ptr;
  logic multiple_req;

  // Detect contention (>1 requester) so we only rotate pointer when true arbitration occurs
  always_comb begin
    // $countones is synthesizable for small vectors in all modern tools
    multiple_req = ($countones(req_valid) > 1);
  end

  // Combinational next-state (internal only)
  logic            grant_valid_next;
  logic [P_W-1:0]  grant_port_next;

  // Registered outputs (held when grant_ready=0)
  logic            grant_valid_q;
  logic [P_W-1:0]  grant_port_q;

  // Combinational priority search: start at priority_ptr, wrap around
  always_comb begin
    grant_valid_next = 1'b0;
    grant_port_next  = '0;
    for (int i = 0; i < NUM_REQ_PORTS; i++) begin
      // Because NUM_REQ_PORTS is 2 or 4, wrap is free bit-truncation:
      logic [P_W-1:0] port_idx;
      port_idx = P_W'(priority_ptr + i);
      if (!grant_valid_next && req_valid[port_idx]) begin
        grant_valid_next = 1'b1;
        grant_port_next  = port_idx;
      end
    end
  end

  // Hold register: update only when grant_ready is high OR when currently idle
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      grant_valid_q <= 1'b0;
      grant_port_q  <= '0;
    end else if (grant_ready || !grant_valid_q) begin
      grant_valid_q <= grant_valid_next;
      grant_port_q  <= grant_port_next;
    end
  end

  assign grant_valid = grant_valid_q;
  assign grant_port  = grant_port_q;

  // Pointer update
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      priority_ptr <= '0;
    end else begin
      if (grant_valid && grant_ready && multiple_req) begin
        priority_ptr <= grant_port + 1'b1;
      end
    end
  end
endmodule
```

**Spec cross-reference:** §6.2 (algorithm), §6.3 (hold when grant_ready low).

**Checks:**
- If `grant_ready` is low, `grant_valid` and `grant_port` must remain unchanged (fed by flop `priority_ptr` and combinational logic fed by stable `req_valid`). The req FIFO must **not** pop until `grant_ready` goes high.
- `multiple_req` must be computed combinationally every cycle; do not rotate on single-request cycles.

---

## Step 5 — `bank_scheduler.sv`

**What to implement:** This is the **core pipeline**. It contains **PP0** (arbiter-to-SRAM), the **SRAM command interface**, and **PP1** (SRAM-to-response). It also computes OOB and gates the SRAM write-enable.

```verilog
module bank_scheduler #(
  parameter int ADDR_WIDTH     = 10,
  parameter int BANK_SEL_BITS  = 2,
  parameter int BANK_ADDR_BITS = 8,
  parameter int DATA_WIDTH     = 32,
  parameter int STROBE_WIDTH   = 4,
  parameter int TOTAL_ID_BITS  = 6,
  parameter int NUM_REQ_PORTS  = 4,
  parameter int PORT_ID_BITS   = 2
)(
  input  logic                  clk,
  input  logic                  rst_n,

  // From arbiter (combinational grant, valid for one cycle unless held)
  input  logic                  grant_valid,
  input  logic [ADDR_WIDTH-1:0] grant_addr,

  input  logic [DATA_WIDTH-1:0] grant_data,
  input  logic [STROBE_WIDTH-1:0] grant_strobe,
  input  logic                  grant_we,
  input  logic [TOTAL_ID_BITS-1:0] grant_id,

  // Backpressure to arbiter
  output logic                  grant_ready,

  // To SRAM array (registered outputs — drawn from PP0)
  output logic                  sram_we,
  output logic [BANK_ADDR_BITS-1:0] sram_addr,
  output logic [DATA_WIDTH-1:0]     sram_wdata,
  output logic [STROBE_WIDTH-1:0]   sram_bwe,

  // From SRAM array
  input  logic [DATA_WIDTH-1:0] sram_rdata,

  // To Response Mux (PP1 output)
  output logic                  pp1_valid,
  output logic [DATA_WIDTH-1:0] pp1_rdata,
  output logic [TOTAL_ID_BITS-1:0] pp1_id,
  output logic                  pp1_we,     // so mux can zero data for writes
  output logic                  pp1_err,

  // Backpressure from rsp_mux (bank_pp1_ready tells this scheduler it may advance PP1)
  input  logic                     bank_pp1_ready
);

  //--------------------------------------------------------------------------
  // PP0 stage: Captures the grant
  //--------------------------------------------------------------------------
  logic                  pp0_valid;
  logic [BANK_ADDR_BITS-1:0] pp0_addr;
  logic [DATA_WIDTH-1:0]     pp0_data;
  logic [STROBE_WIDTH-1:0]   pp0_strobe;
  logic                  pp0_we;
  logic [TOTAL_ID_BITS-1:0]  pp0_id;
  logic                  pp0_err;

  // Out-of-range check (§9.1): OR of unused upper address bits
  logic addr_oob;
  if (ADDR_WIDTH > (BANK_SEL_BITS + BANK_ADDR_BITS)) begin : gen_oob_check
    assign addr_oob = |grant_addr[ADDR_WIDTH-1 : BANK_SEL_BITS + BANK_ADDR_BITS];
  end else begin : gen_no_oob
    assign addr_oob = 1'b0;
  end

  // Pipeline backpressure:
  // PP1 can shift if it is empty OR if rsp_mux says this bank may advance.
  // PP0 can shift if it is empty OR if PP1 can shift.
  logic pp1_ready;
  assign pp1_ready   = !pp1_valid || bank_pp1_ready;
  assign grant_ready = !pp0_valid || pp1_ready;

  // PP0 load
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pp0_valid <= 1'b0;
    end else if (grant_ready) begin
      pp0_valid  <= grant_valid;
      pp0_addr   <= grant_addr[BANK_SEL_BITS + BANK_ADDR_BITS - 1 : BANK_SEL_BITS];
      pp0_data   <= grant_data;
      pp0_strobe <= grant_strobe;
      pp0_we     <= grant_we;
      pp0_id     <= grant_id;
      pp0_err    <= addr_oob;
    end
  end

  // SRAM command outputs (direct from PP0 flops for clean timing)
  // Suppress write when OOB to avoid corrupting physical memory
  assign sram_addr  = pp0_addr;
  assign sram_wdata = pp0_data;
  assign sram_we    = pp0_valid && pp0_we && !pp0_err;

  genvar b;
  generate
    for (b = 0; b < STROBE_WIDTH; b++) begin : g_bwe
      assign sram_bwe[b] = pp0_valid && !pp0_err && pp0_we && pp0_strobe[b];
    end
  endgenerate

  //-------------------------------------------------------------------------
  // PP1 stage: Captures SRAM read data (and write-completed bubbles)
  //--------------------------------------------------------------------------
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      pp1_valid <= 1'b0;
    end else if (pp1_ready) begin
      pp1_valid <= pp0_valid;            // bubble if PP0 was empty
      pp1_id    <= pp0_id;
      pp1_we    <= pp0_we;
      pp1_err   <= pp0_err;
      // If OOB, force data to 0; otherwise passthrough SRAM read data
      // For writes, SRAM read data is don't-care; mux will zero it anyway
      pp1_rdata <= pp0_err ? '0 : sram_rdata;
    end
  end
endmodule
```

**Spec cross-reference:** §5.2 (PP0/PP1), §9.1 (addr_oob), §8.2 (pipeline stall), §11.4 (bwe generation).

**Checks:**
- `addr_oob` is computed on the *grant* address *before* it enters PP0. If OOB, the SRAM write-enable is forced low.
- `grant_ready` low when PP1 is stalled prevents PP0 from overwriting, which in turn prevents the SRAM address from changing — this is critical for read data stability.
- `pp1_rdata` is forced to `'0` whenever `pp0_err` is set, regardless of what the SRAM returns.

---

## Step 6 — `rsp_mux.sv`

**What to implement:** Route `NUM_BANKS` PP1 outputs to `NUM_REQ_PORTS` response FIFOs. **Critical detail:** multiple banks may finish simultaneously targeting the **same port**, but each response FIFO only has **one write port**. You need a simple priority resolution (lowest bank wins) and stall the losing bank's PP1.

```verilog
module rsp_mux #(
  parameter int NUM_BANKS     = 4,
  parameter int NUM_REQ_PORTS = 4,
  parameter int DATA_WIDTH    = 32,
  parameter int ID_WIDTH      = 4,
  parameter int TOTAL_ID_BITS = 6,
  parameter int PORT_ID_BITS  = 2
)(
  input  logic [NUM_BANKS-1:0]                  pp1_valid,
  input  logic [NUM_BANKS-1:0][DATA_WIDTH-1:0]  pp1_rdata,
  input  logic [NUM_BANKS-1:0][TOTAL_ID_BITS-1:0] pp1_id,
  input  logic [NUM_BANKS-1:0]                  pp1_we,
  input  logic [NUM_BANKS-1:0]                  pp1_err,

  // To response queues
  output logic [NUM_REQ_PORTS-1:0]                  rsp_valid,
  output logic [NUM_REQ_PORTS-1:0][DATA_WIDTH-1:0]  rsp_data,
  output logic [NUM_REQ_PORTS-1:0][ID_WIDTH-1:0]    rsp_id,
  output logic [NUM_REQ_PORTS-1:0]                  rsp_err,

  // Backpressure: which response queue can accept a push?
  input  logic [NUM_REQ_PORTS-1:0]                  rsp_fifo_ready,

  // Back to each bank scheduler: your PP1 can advance this cycle
  output logic [NUM_BANKS-1:0]                      bank_pp1_ready
);

  // Extract destination port per bank
  logic [NUM_BANKS-1:0][PORT_ID_BITS-1:0] dest_port;
  genvar b;
  generate
    for (b = 0; b < NUM_BANKS; b++) begin : g_dest
      assign dest_port[b] = pp1_id[b][TOTAL_ID_BITS-1 : ID_WIDTH];
    end
  endgenerate

  // Per-port grant matrix: which bank wins this port?
  logic [NUM_BANKS-1:0] bank_granted;
  always_comb begin
    bank_granted = '0;
    // For each port, grant the lowest-indexed bank requesting it
    for (int p = 0; p < NUM_REQ_PORTS; p++) begin
      logic found;
      found = 1'b0;
      for (int b = 0; b < NUM_BANKS; b++) begin
        if (!found && pp1_valid[b] && (dest_port[b] == p) && rsp_fifo_ready[p]) begin
          bank_granted[b] = 1'b1;
          found = 1'b1; // suppress higher banks targeting same port
        end
      end
    end
  end

  // Assemble outputs per response port (OR-mux of granted bank data)
  always_comb begin
    rsp_valid = '0;
    rsp_data  = '0;
    rsp_id    = '0;
    rsp_err   = '0;
    for (int b = 0; b < NUM_BANKS; b++) begin
      logic [PORT_ID_BITS-1:0] p;
      p = dest_port[b];
      if (bank_granted[b]) begin
        rsp_valid[p] = 1'b1;
        rsp_data[p]  = pp1_we[b] ? '0 : pp1_rdata[b];  // zero data on writes
        rsp_id[p]    = pp1_id[b][ID_WIDTH-1:0];        // strip port prefix
        rsp_err[p]   = pp1_err[b];
      end
    end
  end

  // A bank's PP1 can advance if:
  // 1. Its PP1 is invalid (bubble), OR
  // 2. It was granted and its target port accepted the push
  always_comb begin
    for (int b = 0; b < NUM_BANKS; b++) begin
      if (!pp1_valid[b])
        bank_pp1_ready[b] = 1'b1;
      else if (bank_granted[b])
        bank_pp1_ready[b] = 1'b1;
      else
        bank_pp1_ready[b] = 1'b0;  // stalled — another bank got this port or rsp_fifo full
    end
  end
endmodule
```

**Spec cross-reference:** §3.1 (response mux), §4.2 (data=0 on writes), §8.2 (backpressure).

**Checks:**
- If two banks complete for Port 0 in the same cycle and Port 0's rsp_fifo is ready, only the lower bank wins; the other bank's `bank_pp1_ready` stays low, stalling its PP1. This is **not** explicitly stated in the spec but is required for single-port FIFO correctness.
- `rsp_id` strips the upper `PORT_ID_BITS` from `pp1_id` so the requestor gets its original `ID_WIDTH` tag back.


---

## Step 7 — `perf_counters.sv`

**What to implement:** Event counters, saturating at 32 bits, with a registered CSR read port.

```verilog
module perf_counters #(
  parameter int NUM_REQ_PORTS = 4,
  parameter int NUM_BANKS     = 4,
  parameter int ID_WIDTH      = 4
)(
  input  logic                  clk,
  input  logic                  rst_n,

  // Event strobes (asserted for one cycle per event)
  input  logic [NUM_REQ_PORTS-1:0] req_accept,       // request pushed to req_fifo
  input  logic [NUM_REQ_PORTS-1:0] rsp_issue,        // response popped from rsp_fifo
  input  logic [NUM_BANKS-1:0][NUM_REQ_PORTS-1:0] conflict, // arbiter lost per bank/port
  input  logic [NUM_REQ_PORTS-1:0] req_queue_full,
  input  logic [NUM_BANKS-1:0]     bank_idle,        // no req_valid for this bank this cycle

  // CSR read port
  input  logic                  csr_req,
  input  logic [$clog2(2*NUM_REQ_PORTS +
                       NUM_BANKS*NUM_REQ_PORTS +
                       NUM_REQ_PORTS +
                       NUM_BANKS)-1:0] csr_addr,
  output logic [31:0]             csr_rdata,
  output logic                    csr_ack
);

  localparam int N_COUNTERS = (2*NUM_REQ_PORTS)
                            + (NUM_BANKS*NUM_REQ_PORTS)
                            + NUM_REQ_PORTS
                            + NUM_BANKS;
  localparam int AW = $clog2(N_COUNTERS);

  logic [31:0] counters [0:N_COUNTERS-1];

  // Address decode helpers
  localparam int OFF_REQ  = 0;
  localparam int OFF_RSP  = NUM_REQ_PORTS;
  localparam int OFF_CONF = 2*NUM_REQ_PORTS;
  localparam int OFF_QF   = OFF_CONF + NUM_BANKS*NUM_REQ_PORTS;
  localparam int OFF_IDLE = OFF_QF + NUM_REQ_PORTS;

  // Increment logic (saturating)
  function automatic logic [31:0] sat_inc(logic [31:0] val, logic en);
    return en ? ((val == 32'hFFFF_FFFF) ? val : val + 1'b1) : val;
  endfunction

  integer i, b;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (i = 0; i < N_COUNTERS; i++) counters[i] <= 32'd0;
    end else begin
      // req_count
      for (i = 0; i < NUM_REQ_PORTS; i++)
        counters[OFF_REQ + i] <= sat_inc(counters[OFF_REQ + i], req_accept[i]);

      // rsp_count
      for (i = 0; i < NUM_REQ_PORTS; i++)
        counters[OFF_RSP + i] <= sat_inc(counters[OFF_RSP + i], rsp_issue[i]);

      // conflict_count[bank][port]
      for (b = 0; b < NUM_BANKS; b++)
        for (i = 0; i < NUM_REQ_PORTS; i++)
          counters[OFF_CONF + b*NUM_REQ_PORTS + i] <=
            sat_inc(counters[OFF_CONF + b*NUM_REQ_PORTS + i], conflict[b][i]);

      // queue_full_count
      for (i = 0; i < NUM_REQ_PORTS; i++)
        counters[OFF_QF + i] <= sat_inc(counters[OFF_QF + i], req_queue_full[i]);

      // idle_count
      for (b = 0; b < NUM_BANKS; b++)
        counters[OFF_IDLE + b] <= sat_inc(counters[OFF_IDLE + b], bank_idle[b]);
    end
  end

  // Registered read
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      csr_rdata <= 32'd0;
      csr_ack   <= 1'b0;
    end else begin
      csr_ack   <= csr_req;
      if (csr_req)
        csr_rdata <= counters[csr_addr];
    end
  end
endmodule
```

**Spec cross-reference:** §11.5, Appendix D.

**Checks:**
- **Do not** accidentally create multi-driven nets when flattening `conflict` — ensure the top-level OR-reduces the per-bank grant/not-granted status into a per-port conflict pulse each cycle.
- If simulation performance matters, the nested `for` loops are fine because `NUM_BANKS` × `NUM_REQ_PORTS` is tiny (≤ 64 entries). This is not a gate-count concern.

---

## Step 8 — `banked_sram_ctrl.sv`

**What to implement:** Top-level module. Declare all parameters, derived `localparam`s, instantiate the grid of request queues, per-bank arbiters/schedulers/SRAMs, response FIFOs, mux, and counters. Wire the conflict/idle strobes into the counters.

```verilog
module banked_sram_ctrl #(
  parameter int NUM_BANKS       = 4,
  parameter int BANK_DEPTH      = 256,
  parameter int DATA_WIDTH      = 32,
  parameter int ADDR_WIDTH      = 10,
  parameter int NUM_REQ_PORTS   = 4,
  parameter int QUEUE_DEPTH     = 4,
  parameter int PIPELINE_STAGES = 2,   // Default locked to 2
  parameter int ID_WIDTH        = 4
)(
  input  logic                          clk,
  input  logic                          rst_n,

  // Request ports
  input  logic [NUM_REQ_PORTS-1:0]                         req_valid,
  output logic [NUM_REQ_PORTS-1:0]                         req_ready,
  input  logic [NUM_REQ_PORTS-1:0][ADDR_WIDTH-1:0]         req_addr,
  input  logic [NUM_REQ_PORTS-1:0][DATA_WIDTH-1:0]         req_data,
  input  logic [NUM_REQ_PORTS-1:0][DATA_WIDTH/8-1:0]       req_strobe,
  input  logic [NUM_REQ_PORTS-1:0][ID_WIDTH-1:0]           req_id,
  input  logic [NUM_REQ_PORTS-1:0]                         req_we,

  // Response ports
  output logic [NUM_REQ_PORTS-1:0]                         rsp_valid,
  input  logic [NUM_REQ_PORTS-1:0]                         rsp_ready,
  output logic [NUM_REQ_PORTS-1:0][DATA_WIDTH-1:0]         rsp_data,
  output logic [NUM_REQ_PORTS-1:0][ID_WIDTH-1:0]           rsp_id,
  output logic [NUM_REQ_PORTS-1:0]                         rsp_err,

  // CSR status port
  input  logic                                             csr_req,
  input  logic [$clog2(2*NUM_REQ_PORTS +
                       NUM_BANKS*NUM_REQ_PORTS +
                       NUM_REQ_PORTS +
                       NUM_BANKS)-1:0] csr_addr,
  output logic [31:0]                                      csr_rdata,
  output logic                                             csr_ack
);

  //------------------------------------------------------------------------
  // Derived parameters & legality checks
  //------------------------------------------------------------------------
  localparam int BANK_SEL_BITS  = $clog2(NUM_BANKS);
  localparam int BANK_ADDR_BITS = $clog2(BANK_DEPTH);
  localparam int PORT_ID_BITS   = $clog2(NUM_REQ_PORTS);
  localparam int TOTAL_ID_BITS  = ID_WIDTH + PORT_ID_BITS;
  localparam int STROBE_WIDTH   = DATA_WIDTH / 8;

  // §12 legality assertions
  initial begin
    if ((NUM_BANKS & (NUM_BANKS-1)) != 0) $fatal("NUM_BANKS must be power of 2");
    if ((BANK_DEPTH & (BANK_DEPTH-1)) != 0) $fatal("BANK_DEPTH must be power of 2");
    if ((QUEUE_DEPTH & (QUEUE_DEPTH-1)) != 0) $fatal("QUEUE_DEPTH must be power of 2");
    if (NUM_REQ_PORTS != 2 && NUM_REQ_PORTS != 4) $fatal("NUM_REQ_PORTS must be 2 or 4");
    if (ADDR_WIDTH < (BANK_SEL_BITS + BANK_ADDR_BITS)) $fatal("ADDR_WIDTH too small");
    if (!(DATA_WIDTH inside {8, 16, 32, 64, 128})) $fatal("DATA_WIDTH illegal");
    if (PIPELINE_STAGES < 1 || PIPELINE_STAGES > 4) $fatal("PIPELINE_STAGES out of range");
    if (ID_WIDTH < 1 || ID_WIDTH > 8) $fatal("ID_WIDTH out of range");
  end

  //------------------------------------------------------------------------
  // Import package for struct typing (assumes sram_ctrl_pkg.sv exists)
  //------------------------------------------------------------------------
  import sram_ctrl_pkg::*;

  // Flat arrays for FIFO datapaths (struct-based wiring)
  logic [NUM_REQ_PORTS-1:0]               req_fifo_pop;
  logic [NUM_REQ_PORTS-1:0]               req_fifo_head_valid;
  req_pkt_t [NUM_REQ_PORTS-1:0]           req_fifo_head_pkt;

  // Per-bank request qualification
  logic [NUM_BANKS-1:0][NUM_REQ_PORTS-1:0] bank_req_valid;

  // Arbiter grants (per bank)
  logic [NUM_BANKS-1:0]                   arb_grant_valid;
  logic [NUM_BANKS-1:0][PORT_ID_BITS-1:0] arb_grant_port;
  logic [NUM_BANKS-1:0]                   arb_grant_ready;

  // Bank scheduler <-> SRAM
  logic [NUM_BANKS-1:0]                   sram_we;
  logic [NUM_BANKS-1:0][BANK_ADDR_BITS-1:0] sram_addr;
  logic [NUM_BANKS-1:0][DATA_WIDTH-1:0]     sram_wdata;
  logic [NUM_BANKS-1:0][STROBE_WIDTH-1:0]   sram_bwe;
  logic [NUM_BANKS-1:0][DATA_WIDTH-1:0]     sram_rdata;

  // PP1 outputs
  logic [NUM_BANKS-1:0]                   pp1_valid;
  logic [NUM_BANKS-1:0][DATA_WIDTH-1:0]   pp1_rdata;
  logic [NUM_BANKS-1:0][TOTAL_ID_BITS-1:0] pp1_id;
  logic [NUM_BANKS-1:0]                   pp1_we;
  logic [NUM_BANKS-1:0]                   pp1_err;

  // Feedback from rsp_mux to bank schedulers (stall on bank-to-port collision)
  logic [NUM_BANKS-1:0]                   bank_pp1_ready;

  // Response side
  logic [NUM_REQ_PORTS-1:0]               rsp_fifo_push_valid;
  logic [NUM_REQ_PORTS-1:0]               rsp_fifo_push_ready;
  rsp_pkt_t [NUM_REQ_PORTS-1:0]           rsp_fifo_push_pkt;
  logic [NUM_REQ_PORTS-1:0]               rsp_fifo_full;

  // Counter events
  logic [NUM_REQ_PORTS-1:0]               cnt_req_accept;
  logic [NUM_REQ_PORTS-1:0]               cnt_rsp_issue;
  logic [NUM_BANKS-1:0][NUM_REQ_PORTS-1:0] cnt_conflict;
  logic [NUM_REQ_PORTS-1:0]               cnt_queue_full;
  logic [NUM_BANKS-1:0]                   cnt_bank_idle;

  //------------------------------------------------------------------------
  // Per-port request queues
  //------------------------------------------------------------------------
  genvar p;
  generate
    for (p = 0; p < NUM_REQ_PORTS; p++) begin : g_req_ports
      req_pkt_t push_pkt;
      assign push_pkt.addr   = req_addr[p];
      assign push_pkt.data   = req_data[p];
      assign push_pkt.strobe = req_strobe[p];
      assign push_pkt.id     = req_id[p];
      assign push_pkt.we     = req_we[p];

      assign cnt_req_accept[p] = req_valid[p] && req_ready[p];
      assign cnt_queue_full[p] = !req_ready[p];

      req_fifo #(
        .DATA_WIDTH ($bits(req_pkt_t)),
        .DEPTH      (QUEUE_DEPTH)
      ) u_req_fifo (
        .clk         (clk),
        .rst_n       (rst_n),
        .push_valid  (req_valid[p]),
        .push_ready  (req_ready[p]),
        .push_data   (push_pkt),
        .head_valid  (req_fifo_head_valid[p]),
        .head_data   (req_fifo_head_pkt[p]),
        .pop         (req_fifo_pop[p]),
        .full        (),
        .empty       ()
      );
    end
  endgenerate

  //------------------------------------------------------------------------
  // Per-bank arbitration & scheduling grid
  //------------------------------------------------------------------------
  genvar b;
  generate
    for (b = 0; b < NUM_BANKS; b++) begin : g_bank
      integer p;

      // Pre-qualify requests: only assert bank_req_valid if head targets this bank
      always_comb begin
        for (p = 0; p < NUM_REQ_PORTS; p++) begin
          bank_req_valid[b][p] = req_fifo_head_valid[p] &&
                                 (req_fifo_head_pkt[p].addr[BANK_SEL_BITS-1:0] == b);
        end
      end

      per_bank_arb #(
        .NUM_REQ_PORTS (NUM_REQ_PORTS)
      ) u_arb (
        .clk         (clk),
        .rst_n       (rst_n),
        .req_valid   (bank_req_valid[b]),
        .grant_valid (arb_grant_valid[b]),
        .grant_port  (arb_grant_port[b]),
        .grant_ready (arb_grant_ready[b])
      );

      // Pop the winning port's request queue
      // This creates per-bank pop signals; we OR them outside the generate
      logic [NUM_REQ_PORTS-1:0] bank_pop;
      always_comb begin
        for (p = 0; p < NUM_REQ_PORTS; p++) begin
          bank_pop[p] = (arb_grant_valid[b] && arb_grant_ready[b] && (arb_grant_port[b] == p));
        end
      end

      // Mux the winning packet and assemble TOTAL_ID
      req_pkt_t grant_pkt;
      logic [TOTAL_ID_BITS-1:0] grant_id;

      // Select head_data of winning port using a mux
      // Since NUM_REQ_PORTS is small (2 or 4), use a case statement or simple mux
      always_comb begin
        grant_pkt = req_fifo_head_pkt[arb_grant_port[b]];
        grant_id  = {arb_grant_port[b], grant_pkt.id};
      end

      bank_scheduler #(
        .ADDR_WIDTH     (ADDR_WIDTH),
        .BANK_SEL_BITS  (BANK_SEL_BITS),
        .BANK_ADDR_BITS (BANK_ADDR_BITS),
        .DATA_WIDTH     (DATA_WIDTH),
        .STROBE_WIDTH   (STROBE_WIDTH),
        .TOTAL_ID_BITS  (TOTAL_ID_BITS),
        .NUM_REQ_PORTS  (NUM_REQ_PORTS),
        .PORT_ID_BITS   (PORT_ID_BITS)
      ) u_scheduler (
        .clk            (clk),
        .rst_n          (rst_n),
        .grant_valid    (arb_grant_valid[b]),
        .grant_addr     (grant_pkt.addr),
        .grant_data     (grant_pkt.data),
        .grant_strobe   (grant_pkt.strobe),
        .grant_we       (grant_pkt.we),
        .grant_id       (grant_id),
        .grant_ready    (arb_grant_ready[b]),
        .sram_we        (sram_we[b]),
        .sram_addr      (sram_addr[b]),
        .sram_wdata     (sram_wdata[b]),
        .sram_bwe       (sram_bwe[b]),
        .sram_rdata     (sram_rdata[b]),
        .pp1_valid      (pp1_valid[b]),
        .pp1_rdata      (pp1_rdata[b]),
        .pp1_id         (pp1_id[b]),
        .pp1_we         (pp1_we[b]),
        .pp1_err        (pp1_err[b]),
        .bank_pp1_ready (bank_pp1_ready[b])
      );

      sram_array #(
        .DEPTH      (BANK_DEPTH),
        .DATA_WIDTH (DATA_WIDTH)
      ) u_sram (
        .clk    (clk),
        .we     (sram_we[b]),
        .addr   (sram_addr[b]),
        .wdata  (sram_wdata[b]),
        .bwe    (sram_bwe[b]),
        .rdata  (sram_rdata[b])
      );

      assign cnt_bank_idle[b] = ~|bank_req_valid[b];
      // Conflict: multiple reqs presented, one won; losers pulse conflict
      assign cnt_conflict[b]  = '0;  // TODO: expose multiple_req from arbiter as output
    end
  endgenerate

  // OR-reduce all per-bank pops into per-port req_fifo_pop
  always_comb begin
    integer p, b;
    for (p = 0; p < NUM_REQ_PORTS; p++) begin
      req_fifo_pop[p] = '0;
      for (b = 0; b < NUM_BANKS; b++) begin
        // Access the generate block's bank_pop signal
        req_fifo_pop[p] |= g_bank[b].bank_pop[p];
      end
    end
  end

  //------------------------------------------------------------------------
  // Response Mux + Response FIFOs
  //------------------------------------------------------------------------
  // Intermediate flattened vectors for rsp_mux (since it uses vector ports)
  logic [NUM_BANKS-1:0][DATA_WIDTH-1:0]   mux_pp1_rdata;
  logic [NUM_BANKS-1:0][TOTAL_ID_BITS-1:0] mux_pp1_id;
  logic [NUM_BANKS-1:0]                   mux_pp1_we;
  logic [NUM_BANKS-1:0]                   mux_pp1_err;
  logic [NUM_REQ_PORTS-1:0][DATA_WIDTH-1:0] mux_rsp_data;
  logic [NUM_REQ_PORTS-1:0][ID_WIDTH-1:0]   mux_rsp_id;
  logic [NUM_REQ_PORTS-1:0]                 mux_rsp_err;

  always_comb begin
    for (b = 0; b < NUM_BANKS; b++) begin
      mux_pp1_rdata[b] = pp1_rdata[b];
      mux_pp1_id[b]    = pp1_id[b];
      mux_pp1_we[b]    = pp1_we[b];
      mux_pp1_err[b]   = pp1_err[b];
    end
  end

  rsp_mux #(
    .NUM_BANKS     (NUM_BANKS),
    .NUM_REQ_PORTS (NUM_REQ_PORTS),
    .DATA_WIDTH    (DATA_WIDTH),
    .ID_WIDTH      (ID_WIDTH),
    .TOTAL_ID_BITS (TOTAL_ID_BITS),
    .PORT_ID_BITS  (PORT_ID_BITS)
  ) u_rsp_mux (
    .pp1_valid      (pp1_valid),
    .pp1_rdata      (mux_pp1_rdata),
    .pp1_id         (mux_pp1_id),
    .pp1_we         (mux_pp1_we),
    .pp1_err        (mux_pp1_err),
    .rsp_valid      (rsp_fifo_push_valid),
    .rsp_data       (mux_rsp_data),
    .rsp_id         (mux_rsp_id),
    .rsp_err        (mux_rsp_err),
    .rsp_fifo_ready (rsp_fifo_push_ready),
    .bank_pp1_ready (bank_pp1_ready)
  );

  // Response FIFOs + counter wiring
  generate
    for (p = 0; p < NUM_REQ_PORTS; p++) begin : g_rsp_ports
      rsp_pkt_t push_pkt, pop_pkt;
      assign push_pkt.data = mux_rsp_data[p];
      assign push_pkt.id   = mux_rsp_id[p];
      assign push_pkt.err  = mux_rsp_err[p];

      assign cnt_rsp_issue[p] = rsp_valid[p] && rsp_ready[p];

      rsp_fifo #(
        .DATA_WIDTH ($bits(rsp_pkt_t)),
        .DEPTH      (QUEUE_DEPTH)
      ) u_rsp_fifo (
        .clk         (clk),
        .rst_n       (rst_n),
        .push_valid  (rsp_fifo_push_valid[p]),
        .push_ready  (rsp_fifo_push_ready[p]),
        .push_data   (push_pkt),
        .pop_valid   (rsp_valid[p]),
        .pop_ready   (rsp_ready[p]),
        .pop_data    (pop_pkt),
        .full        (rsp_fifo_full[p]),
        .empty       ()
      );

      assign rsp_data[p] = pop_pkt.data;
      assign rsp_id[p]   = pop_pkt.id;
      assign rsp_err[p]  = pop_pkt.err;
    end
  endgenerate

  //------------------------------------------------------------------------
  // Performance counters
  //------------------------------------------------------------------------
  perf_counters #(
    .NUM_REQ_PORTS (NUM_REQ_PORTS),
    .NUM_BANKS     (NUM_BANKS),
    .ID_WIDTH      (ID_WIDTH)
  ) u_perf (
    .clk            (clk),
    .rst_n          (rst_n),
    .req_accept     (cnt_req_accept),
    .rsp_issue      (cnt_rsp_issue),
    .conflict       (cnt_conflict),
    .req_queue_full (cnt_queue_full),
    .bank_idle      (cnt_bank_idle),
    .csr_req        (csr_req),
    .csr_addr       (csr_addr),
    .csr_rdata      (csr_rdata),
    .csr_ack        (csr_ack)
  );

endmodule
```

**Spec cross-reference:** §2 (parameters), §3.1 (block diagram), §12 (legality), Appendix B (hierarchy).

**Critical implementation notes:**
- **Use the package struct** (`req_pkt_t`, `rsp_pkt_t`) at the top-level to eliminate manual bit-slice bugs.
- The `req_fifo_pop` signal uses an OR-reduction across all banks. Since a port's head can only target one bank at a time, only one bank asserts `bank_pop[p]` per cycle. This avoids multi-driver issues.
- The `cnt_conflict` wiring requires exposing `multiple_req` and the loser mask from `per_bank_arb` as outputs. Add `output logic [NUM_REQ_PORTS-1:0] conflict_mask` to the arbiter and compute it as `req_valid & ~grant_onehot` when `multiple_req` is true.
- Ensure `PIPELINE_STAGES=2` is enforced. Add `$fatal` if `PIPELINE_STAGES != 2` for v1.0.

---

## Step 9 — Verification & SVA Integration Outline

You already created the directory structure. Here is the minimum viable verification plan.

### SVA Properties to Implement (`verif/sva/`)

1. **`handshake_props.sv`** (bind to `banked_sram_ctrl`)
   - Once `req_valid` rises, it must stay stable and high until `req_ready` rises (no renege).
   - `req_addr`, `req_data`, etc. are stable during the same window.

2. **`ordering_props.sv`**
   - For each port, response IDs must be returned in the same order they were issued. This requires a small reference queue inside the property set.

3. **`conflict_props.sv`**
   - If two ports target the same bank and are both head-valid, the arbiter must grant exactly one within one cycle (no deadlock). Round-robin pointer must eventually advance.

4. **`param_legality.sv`**
   - Replicate the $fatal checks as formal assumes/assertions if running in JasperGold.

### Test Sequences (`verif/sequences/`)

1. **`seq_single_rw.sv`**: One port, sequential reads and writes, check data integrity. Zero-conflict baseline.
2. **`seq_multiport.sv`**: All ports issue to different banks simultaneously. Verify peak throughput = NUM_BANKS requests/cycle.
3. **`seq_conflict.sv`**: Force all ports to target Bank 0. Verify throughput = 1/N and round-robin fairness (check that each port gets a turn every N cycles).
4. **`seq_backpressure.sv`**: Hold `rsp_ready` low on Port 0. Verify Port 0's `req_ready` eventually falls, but other ports continue.

### Scoreboard

- Build a **golden memory map** (plain SystemVerilog associative array or `logic [DATA_WIDTH-1:0] mem [0:(NUM_BANKS*BANK_DEPTH)-1]`).
- On every accepted request (sample `req_valid && req_ready`), predict the response cycle based on `PIPELINE_STAGES + 1` and enqueue the expected response.
- When `rsp_valid && rsp_ready` occurs on a port, compare against the predicted head-of-queue entry.

---

## Final Build Order Checklist

| Step | File | Self-Test Before Proceeding |
|------|------|----------------------------|
| 1 | `sram_ctrl_pkg.sv` | Compile only. Check that `req_pkt_t` width matches §2.2. |
| 2 | `sram_array.sv` | Directed test: write `0xA`, read it back. Test partial strobe. |
| 3 | `req_fifo.sv`, `rsp_fifo.sv` | Push full, pop empty, simultaneous push/pop, check `ready` timing. |
| 4 | `per_bank_arb.sv` | Drive two req_valids, verify alternating grants. Assert `grant_ready=0`, verify grant holds. |
| 5 | `bank_scheduler.sv` | Feed a grant, verify SRAM receives correct addr. Force `rsp_fifo_full`, verify `grant_ready` falls. |
| 6 | `rsp_mux.sv` | Drive two banks targeting same port; verify one wins, other stalls. |
| 7 | `perf_counters.sv` | Pulse events, read CSR, verify saturation at 0xFFFFFFFF. |
| 8 | `banked_sram_ctrl.sv` | Full integration: random traffic, check scoreboard. |
| 9 | SVA bind | Run all sequences. |

