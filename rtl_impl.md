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

## Step 3 (cont.) — `rsp_fifo.s
---

