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

### Step 3 — `req_fifo.sv` / `rsp_fifo.sv`

**What to implement:**

Standard synchronous FIFO with registered output (fall-through style), valid/ready handshake, depth = `QUEUE_DEPTH`. Both FIFOs are structurally identical; parameterize one module and instantiate twice.

Critical behaviors from §8.1:
- `ready` deasserts when `occupancy == QUEUE_DEPTH` (last slot filled).
- `ready` reasserts the cycle after a drain, with no dead cycle if drain and fill are simultaneous.
- Reset clears pointers; SRAM content intentionally undefined (§10.2).

```systemverilog
// Ready/valid timing — the hard part
assign full  = (wr_ptr - rd_ptr) == QUEUE_DEPTH;  // use gray or binary counter
assign empty = (wr_ptr == rd_ptr);
assign ready_out = !full;   // registered one cycle later per §8.1
```

**Spec cross-reference:** §8.1, §8.2, §10.2.

**Check:**
- Fill to `QUEUE_DEPTH` — confirm `ready` goes low exactly on the cycle the last slot is written.
- Simultaneously write and read from a full FIFO — confirm `ready` stays high (no dead cycle).
- Reset — pointers at 0, `empty == 1`, `full == 0`.

---

### Step 4 — `per_bank_arb.sv`

**What to implement:**

One instance per bank. Inputs: `NUM_REQ_PORTS` valid signals (heads of req queues). Output: one `grant_port` per cycle plus `grant_valid`.

The `priority_ptr` register is the core state. Advance it only when more than one port contested (§6.2 — single requester does not rotate the pointer).

```systemverilog
// Priority rotation logic
always_ff @(posedge clk or negedge rst_n) begin
  if (!rst_n)
    priority_ptr <= '0;
  else if (grant_valid && contention)  // contention = >1 port valid
    priority_ptr <= (grant_port + 1) % NUM_REQ_PORTS;
end
```

Address decoding for bank selection (this arbiter only sees requests for ITS bank):
```
bank_sel = req_pkt.addr[BANK_SEL_BITS-1 : 0]   // Option A, §2.3
```
Filter input valids: a port's valid is only presented to bank B's arbiter if `addr[BANK_SEL_BITS-1:0] == B`.

**Spec cross-reference:** §6.1, §6.2, §6.3.

**Check:**
- Two ports targeting same bank: lower-indexed port wins first round, then pointer advances.
- Single port, no contention: pointer does NOT advance.
- All ports idle: no grant, no pointer change.
- Four-port round: grants cycle through 0→1→2→3→0 under sustained 4-way conflict.

---

### Step 5 — `bank_scheduler.sv`

**What to implement:**

Sits between the arbiter and the SRAM. Contains:
1. **PP0 pipeline register** — captures arbiter grant and presents to SRAM on next cycle.
2. **Address slice** — extract `bank_addr` using the correct Option A slice (§5.2 PP0 code block).
3. **Out-of-range check** — `addr_oob` computation, only active when `ADDR_WIDTH > BANK_SEL_BITS + BANK_ADDR_BITS` (§9.1).
4. **Write enable decode** — `sram_bwe[i] = req_we & req_strobe[i]` (§11.4).
5. **PP1 pipeline register** — captures SRAM read data, tags, `we`, `err` (§5.2 PP1 code block).
6. **Stall logic** — PP1 holds when `rsp_queue[dest_port].full` (§8.2 backpressure chain).

The exact PP0 slice to implement (do not use the pre-v1.1 wrong slice):
```verilog
pp0_bank_addr <= grant_pkt.addr[BANK_SEL_BITS + BANK_ADDR_BITS - 1 : BANK_SEL_BITS];
```

The `addr_oob` formula:
```verilog
addr_oob = |grant_pkt.addr[ADDR_WIDTH-1 : BANK_SEL_BITS + BANK_ADDR_BITS];
// Ties to 0 when ADDR_WIDTH == BANK_SEL_BITS + BANK_ADDR_BITS (default config)
```

When `addr_oob == 1`: suppress the SRAM write, inject an error response directly into the response path with `err=1, data='0`, original `id`.

**Spec cross-reference:** §5.1, §5.2, §8.2, §9.1, §11.4.

**Check:**
- Write with `addr_oob == 1` — SRAM must NOT be written. Response must return `err=1`.
- Stall test: assert `rsp_queue.full` for the target port; confirm PP1 holds (no new valid advances).
- PP0 address slice: for `NUM_BANKS=4, BANK_DEPTH=256`, `BANK_SEL_BITS=2, BANK_ADDR_BITS=8`. Confirm `pp0_bank_addr = addr[9:2]`, NOT `addr[7:0]`.

---

### Step 6 — `rsp_mux.sv`

**What to implement:**

Receives PP1 outputs from all `NUM_BANKS` bank pipelines in the same cycle. Routes each valid response to the correct per-port response FIFO based on `TOTAL_ID[TOTAL_ID_BITS-1 : ID_WIDTH]` (the `PORT_ID_BITS` upper bits which encode the originating port).

```
port_id   = pp1_id[TOTAL_ID_BITS-1 : ID_WIDTH]   // PORT_ID_BITS wide
req_id    = pp1_id[ID_WIDTH-1 : 0]               // return verbatim to requestor
```

For write responses: `data = '0` (§4.2 — `data` tied to zero for writes).

For reads: pass `pp1_read_data` only when `pp1_we == 0`.

**Spec cross-reference:** §4.2, §4.5, §5.2 (TOTAL_ID assembly in PP0).

**Check:**
- Issue reads from Port 0 and Port 2 simultaneously to different banks. Confirm each response lands in the correct port's response queue, not the other's.
- Write response: confirm `rsp.data == '0` regardless of data in flight.
- ID passthrough: `rsp.id` must equal the original `req.id` verbatim.

---

### Step 7 — `perf_counters.sv`

**What to implement:**

Saturating 32-bit registers per §11.5. Counters never wrap — they freeze at `32'hFFFF_FFFF`. Reset by `rst_n`. Read-only CSR port (address-decoded, separate from req/rsp ports).

| Counter | Increment condition |
|---|---|
| `req_count[p]` | `req_queue[p]` handshake fires (`valid && ready`) |
| `rsp_count[p]` | `rsp_queue[p]` handshake fires to requestor |
| `conflict_count[b][p]` | Port P presents valid for bank B and loses arbitration |
| `queue_full_count[p]` | `req_queue[p].full == 1` on a clock edge |
| `idle_count[b]` | Bank B has no valid grant in cycle |

**Spec cross-reference:** §11.5, §7.4.

**Check:**
- Run 5 requests from port 0 — confirm `req_count[0] == 5`.
- Force 3-way conflict on bank 0 — one winner, two conflicts per cycle; after 10 cycles confirm `conflict_count[0][losing_port]` increments correctly.
- Saturate a counter: drive past `2^32 - 1`; confirm it stays at max.

---

### Step 8 — `banked_sram_ctrl.sv` (Top-Level Integration)

**What to implement:**

Wire the hierarchy per Appendix B of the spec. All parameters declared here and propagated via `#(...)` to every submodule — no submodule hardcodes any value.

Instantiation checklist:
```
req_fifo        × NUM_REQ_PORTS
per_bank_arb    × NUM_BANKS
bank_scheduler  × NUM_BANKS
sram_array      × NUM_BANKS
rsp_mux         × 1
rsp_fifo        × NUM_REQ_PORTS
perf_counters   × 1
```

Parameter legality assertions go here (§12):
```verilog
initial begin
  assert ((NUM_BANKS & (NUM_BANKS-1)) == 0)         else $fatal(1, "NUM_BANKS not power of 2");
  assert ((BANK_DEPTH & (BANK_DEPTH-1)) == 0)       else $fatal(1, "BANK_DEPTH not power of 2");
  assert ((QUEUE_DEPTH & (QUEUE_DEPTH-1)) == 0)     else $fatal(1, "QUEUE_DEPTH not power of 2");
  assert (NUM_REQ_PORTS == 2 || NUM_REQ_PORTS == 4) else $fatal(1, "NUM_REQ_PORTS must be 2 or 4");
  assert (ADDR_WIDTH >= BANK_SEL_BITS + BANK_ADDR_BITS) else $fatal(1, "ADDR_WIDTH too narrow");
  assert (DATA_WIDTH inside {8,16,32,64,128})        else $fatal(1, "DATA_WIDTH illegal");
  assert (PIPELINE_STAGES >= 1 && PIPELINE_STAGES <= 4) else $fatal(1, "PIPELINE_STAGES out of range");
  assert (ID_WIDTH >= 1 && ID_WIDTH <= 8)            else $fatal(1, "ID_WIDTH out of range");
end
```

---

## Part 4 — Verification Checkpoints (Spec → Assertion Mapping)

For every major architectural decision in the spec, there is a corresponding assertion or scoreboard check below. Use these as your acceptance criteria.

### 4.1 Handshake Protocol (§4.3)

```systemverilog
// Rule 2: producer must hold valid+payload once asserted until ready
property valid_stable_until_ready(valid, ready, payload);
  @(posedge clk) disable iff (!rst_n)
  (valid && !ready) |=> (valid && $stable(payload));
endproperty

// Rule 4: ready must not combinatorially depend on valid (check in lint)
// Use formal tool / CDC lint: no same-cycle path from valid → ready
```

### 4.2 Address Decode — Option A Low-Bit Bank Selection (§2.3)

```systemverilog
// In the scoreboard: for every accepted request,
// expected_bank = req.addr[BANK_SEL_BITS-1 : 0]
// Assert the grant went to that bank, not addr[BANK_SEL_BITS+BANK_ADDR_BITS-1 : BANK_ADDR_BITS]
```

This is the v1.1 Change 1 / Change 3 correction. It is the highest-priority correctness check.

### 4.3 In-Order Response per Port (§4.5)

```systemverilog
// Scoreboard: maintain per-port expected_id queue (FIFO).
// On every rsp_valid[p] && rsp_ready[p]:
//   assert rsp.id == expected_id_queue[p].pop_front()
// Any reordering is a spec violation.
```

### 4.4 Write Response Completeness (§4.5)

```systemverilog
// Scoreboard global counters:
//   wr_req_count[p]++  on accepted write request
//   wr_rsp_count[p]++  on write response received
// At end of test: assert wr_req_count[p] == wr_rsp_count[p] for all p
```

### 4.5 Round-Robin Arbitration (§6.2)

```systemverilog
// After a 2-way conflict where port A wins:
// Next contention cycle, port B must win.
// property: (conflict && grant==A) |=> (next_conflict → grant==B)
```

### 4.6 Head-of-Line Stall — Port Independence (§7.3)

```
Directed test: Port 0 and Port 1 both target Bank 0 continuously.
Port 2 targets Bank 1 only.
Verify: Port 2 achieves 1 req/cycle throughput (no stall)
        Port 0 and Port 1 each achieve ~0.5 req/cycle throughput
```

### 4.7 PP0 Address Slice Correctness (§5.2, Change 3)

```systemverilog
// For default params (NUM_BANKS=4, BANK_DEPTH=256):
//   BANK_SEL_BITS=2, BANK_ADDR_BITS=8
//   addr = 10'b00_1010_1101  (addr = 0x02AD)
//   bank_sel  = addr[1:0]  = 2'b01       → Bank 1
//   bank_addr = addr[9:2]  = 8'b0010_1011 = row 0x2B
// Assert sram_array[1] receives addr=0x2B, NOT addr=0x0AD[7:0]
```

### 4.8 Out-of-Range Error (§9.1)

Only testable when `ADDR_WIDTH > BANK_SEL_BITS + BANK_ADDR_BITS`.
```
Instantiate with ADDR_WIDTH=12, NUM_BANKS=4, BANK_DEPTH=256
  → BANK_SEL_BITS=2, BANK_ADDR_BITS=8, min=10, upper bits = addr[11:10]

Test: addr = 12'hC00  → upper bits = 2'b11 → addr_oob = 1
Assert: rsp.err == 1, rsp.data == '0, SRAM NOT written
Assert: addr = 12'h3FF → upper bits = 2'b00 → addr_oob = 0, normal access
```

### 4.9 Backpressure Isolation (§8.2)

```
Test: Port 3 stops asserting rsp_ready. Run 1000 cycles.
Assert: Port 0, Port 1, Port 2 continue to make forward progress
        (req_count and rsp_count increment for ports 0–2)
Assert: Port 3 req_queue eventually fills; Port 3 req_ready deasserts
Assert: No other port's req_ready deasserts due to Port 3 stall
        (unless contending for the same bank)
```

### 4.10 Latency Check (§5.1, §13.2)

```systemverilog
// Scoreboard: record cycle number when req handshake fires → cycle_issued[id]
// Record cycle number when rsp handshake fires → cycle_received[id]
// For reads:  assert (cycle_received - cycle_issued) == PIPELINE_STAGES + 1
// For writes: assert (cycle_received - cycle_issued) == PIPELINE_STAGES
// Only valid in no-conflict, empty-queue conditions.
```

### 4.11 Byte-Enable Strobe (§11.4)

```
Write addr=A with strobe=4'b0110, data=32'hDEAD_BEEF
Read addr=A
Assert: rdata[23:8]  == 16'hAD_BE   (bytes 1 and 2 written)
        rdata[31:24] == original_byte3  (byte 3 unchanged)
        rdata[7:0]   == original_byte0  (byte 0 unchanged)
```

### 4.12 Parameter Legality (§12)

```
For each rule in §12, run a simulation with the illegal value.
Assert $fatal fires at time 0.
Do this for: NUM_BANKS=3, BANK_DEPTH=100, QUEUE_DEPTH=3,
             NUM_REQ_PORTS=3, ADDR_WIDTH too narrow, DATA_WIDTH=24,
             PIPELINE_STAGES=0, ID_WIDTH=0.
```

---

## Part 5 — Critical Bugs from v1.1 Change Log (Must-Verify First)

These are the eight corrections made in v1.1. Each one corresponds to an easy-to-introduce silent bug in RTL. Check these before any other functional test.

| Change | What to verify | Where to look in RTL |
|---|---|---|
| 1 — Address diagram | `bank_sel = addr[BANK_SEL_BITS-1:0]` NOT high bits | `per_bank_arb.sv` filter logic |
| 2 — Word-addressed | Testbench uses word addresses, not byte offsets | All test sequences |
| 3 — PP0 slice | `addr[BANK_SEL_BITS+BANK_ADDR_BITS-1 : BANK_SEL_BITS]` | `bank_scheduler.sv` PP0 |
| 4 — OOB definition | `addr_oob = \|addr[ADDR_WIDTH-1 : BANK_SEL_BITS+BANK_ADDR_BITS]` | `bank_scheduler.sv` |
| 5 — In-order rsp | Scoreboard enforces FIFO order per port | `sram_scoreboard.sv` |
| 6 — Write rsp count | Every write generates exactly one response | `sram_scoreboard.sv` |
| 7 — Backpressure isolation | Stalled port P does not stall port Q | Directed sim test |
| 8 — Latency parameterized | Scoreboard uses `PIPELINE_STAGES+1` / `PIPELINE_STAGES` | `sram_scoreboard.sv` |

---

## Part 6 — Out-of-Scope Guard Rail

The following must NOT appear in your v1.0 RTL. If you find yourself implementing any of these, stop and re-read the relevant spec section.

| Feature | Section | Status |
|---|---|---|
| Tag array, eviction, miss handling | §1.3 | NOT a cache — reject |
| Address translation | §1.3 | Requestor provides physical addr |
| ECC syndrome bits | §11.7 | Out of scope |
| Prefetch buffer | §11.1 | Out of scope |
| MSHR / out-of-order completion | §11.2 | Stretch goal only |
| Row-buffer hit simulation | §11.3 | Out of scope |
| Weighted round-robin | §11.6 | Out of scope |
| CDC FIFOs / multi-clock | §10.3 | Out of scope |
| Byte-offset bits in address field | §2.3, §4.1 | Word-addressed only |

---

## Part 7 — Quick Reference: Key Formulas

| Formula | Value (default params) | Spec ref |
|---|---|---|
| `bank_sel = addr[BANK_SEL_BITS-1:0]` | `addr[1:0]` | §2.3 |
| `bank_addr = addr[BANK_SEL_BITS+BANK_ADDR_BITS-1 : BANK_SEL_BITS]` | `addr[9:2]` | §2.3, §5.2 |
| `addr_oob = \|addr[ADDR_WIDTH-1 : BANK_SEL_BITS+BANK_ADDR_BITS]` | tied 0 at default | §9.1 |
| `total_id = {grant_port, req.id}` | `{2b port, 4b id}` | §5.2 PP0 |
| `port_id = total_id[TOTAL_ID_BITS-1:ID_WIDTH]` | `total_id[5:4]` | §6, rsp_mux |
| Read latency (no stall) | `PIPELINE_STAGES + 1 = 3` | §5.1, §13.2 |
| Write latency (no stall) | `PIPELINE_STAGES = 2` | §5.1, §13.2 |
| `sram_bwe[i] = req_we & req_strobe[i]` | per byte lane | §11.4 |