# Banked SRAM Controller — RTL Implementation

A fully parameterized, banked, synchronous on-chip SRAM controller written in SystemVerilog.
Designed, verified, and synthesized using open-source ASIC tooling against the SkyWater 130nm process.

---

## What It Does

The controller accepts read and write requests from multiple independent ports, arbitrates among them
using a per-bank round-robin policy, routes each transaction to the correct SRAM bank based on the
address, and returns read data with the original transaction ID to the requesting port.

It is a **shared memory resource with multi-port access**, not a cache. There is no tag array,
no miss handling, and no eviction. Every address maps to exactly one bank slot.

---

## Architecture

```
                     BANKED SRAM CONTROLLER
 ┌─────────────────────────────────────────────────────────┐
 │                                                         │
 │  Port 0..N   ┌──────────┐                               │
 │  ──req────►  │ req_fifo │ ──┐    ┌──────────────────┐   │
 │  ◄─rsp────   │ (×ports) │   ├──► │  per_bank_arb    │   │
 │              └──────────┘   │    │  round-robin     │   │
 │                             │    │  (×banks)        │   │
 │  Port 0..N   ┌──────────┐   │    └────────┬─────────┘   │
 │  ──req────►  │ req_fifo │ ──┘             │  [PP0]      │
 │  ◄─rsp────   │          │        ┌────────▼─────────┐   │
 │              └──────────┘        │  bank_scheduler  │   │
 │                                  │  OOB check       │   │
 │                                  │  (×banks)        │   │
 │                                  └────────┬─────────┘   │
 │                                           │             │
 │                    ┌──────────────────────┤             │
 │                    │    sram_array        │  [PP1]      │
 │                    │    (×banks)          │             │
 │                    └──────────────────────┘             │
 │                                           │             │
 │                                  ┌────────▼─────────┐   │
 │                                  │    rsp_mux       │   │
 │                                  │  route by tag    │   │
 │                                  └────────┬─────────┘   │
 │              ┌──────────┐                 │             │
 │  ◄─rsp────   │ rsp_fifo │ ◄──────────────┘             │
 │              │ (×ports) │                               │
 │              └──────────┘                               │
 │              ┌──────────────────────────────────────┐   │
 │              │  perf_counter  (CSR port)            │   │
 │              └──────────────────────────────────────┘   │
 └─────────────────────────────────────────────────────────┘
```

### Key Design Decisions

| Decision | Choice | Reason |
|---|---|---|
| Bank selection | Low-order address bits | Interleaves sequential addresses across banks, distributes traffic evenly |
| Arbitration | Round-robin per bank | Fair, starvation-free, single pointer register per bank |
| Conflict handling | Head-of-line stall per port | Simple, no extra queues needed |
| Pipeline depth | 2 stages (PP0 + PP1), fixed | Read latency = 3 cycles, write commit = 2 cycles |
| Clock domains | Single clock | No CDC required in baseline |

### Pipeline

```
Cycle 0   Request accepted into req_fifo (valid/ready handshake)
Cycle 1   Arbiter grants — PP0 captures addr/data/id → SRAM command issued
Cycle 2   PP1 captures SRAM read data → rsp_mux routes to correct rsp_fifo
Cycle 3   Requestor receives response
```

Read latency (no stall): **3 cycles**  
Write commit to SRAM: **2 cycles**  
Conflict penalty: **+1 cycle per lost arbitration round**

---

## Module Hierarchy

```
banked_sram_ctrl          Top-level wrapper and interconnect glue
├── req_fifo  ×N_PORTS    Per-port synchronous request FIFO
├── per_bank_arb  ×N_BANKS  Per-bank round-robin arbiter
├── bank_scheduler  ×N_BANKS  PP0 + PP1 pipeline, OOB check, SRAM control
├── sram_array  ×N_BANKS  Behavioral SRAM with per-byte write enable
├── rsp_mux               Routes PP1 outputs to correct response FIFO
├── rsp_fifo  ×N_PORTS    Per-port synchronous response FIFO
└── perf_counter          32 saturating counters, CSR read port
```

---

## Parameters

| Parameter | Default | Legal Range | Description |
|---|---|---|---|
| `NUM_BANKS` | 4 | 2–16, pow2 | Number of independent SRAM banks |
| `BANK_DEPTH` | 256 | 16–65536, pow2 | Addressable rows per bank |
| `DATA_WIDTH` | 32 | 8, 16, 32, 64, 128 | Data bus width in bits |
| `ADDR_WIDTH` | 10 | ≥ clog2(BANKS)+clog2(DEPTH) | Word-address width |
| `NUM_REQ_PORTS` | 4 | 1–8 | Independent requestor ports |
| `QUEUE_DEPTH` | 4 | 2–16, pow2 | Depth of each request and response FIFO |
| `ID_WIDTH` | 4 | 1–8 | Transaction ID bits per port |

All parameters are validated at elaboration time with `$fatal` checks.
Illegal values are caught at simulation time 0, not silently mis-synthesized.

---

## Repository Structure

```
Mem_subsys_rtl/
├── banked_sram_ctrl/
│   ├── rtl/
│   │   ├── pkg/sram_ctrl_pkg.sv        Parameter package and struct definitions
│   │   ├── banked_sram_ctrl.sv         Top-level module
│   │   ├── bank_scheduler.sv           PP0/PP1 pipeline, OOB detection
│   │   ├── per_bank_arb.sv             Round-robin arbiter
│   │   ├── req_fifo.sv                 Request-side FIFO
│   │   ├── rsp_fifo.sv                 Response-side FIFO
│   │   ├── rsp_mux.sv                  Response routing mux
│   │   ├── sram_array.sv               Behavioral SRAM (byte-enable)
│   │   └── perf_counter.sv             Performance counters + CSR
│   ├── verif/
│   │   ├── unit/                       8 directed unit testbenches
│   │   └── system/                     System-level testbench + 5 test suites
│   ├── sim/
│   │   ├── makefile                    Simulation build engine
│   │   ├── config.mk                   Parameters, flags, regression matrix
│   │   └── filelist.f                  RTL source list for Verilator
│   ├── synth/
│   │   ├── makefile                    Synthesis build engine
│   │   ├── config.mk                   Paths, module lists, clock period
│   │   ├── synth.ys                    Yosys script template
│   │   ├── parse_report.py             Report and summary generator
│   │   ├── leakage_power.py            Leakage power estimator
│   │   └── reports/                    Generated synthesis reports
│   └── docs/
│       └── Project_spec.md             Locked microarchitecture spec (v1.1)
├── pdk/sky130_fd_sc_hd                 Actual Liberty Files
├── pdk_tools/skywater_pdk/             Liberty file generator from SKY130 JSON
├── Resources/                          Design notes and fundamentals
├── setup.sh                            Tool installer (macOS/brew)
├── setup_sky130.sh                     SKY130 Liberty generator
└── makefile                            Root build entry point
```

---

## Setup

### Requirements

- macOS (setup.sh uses Homebrew)
- Verilator ≥ 4.220
- Yosys 0.x
- Verible
- Python 3.x
- iverilog

### Steps

```bash
# 1. Clone
git clone https://github.com/VedantNadgir/Mem_subsys_rtl.git
cd Mem_subsys_rtl

# 2. Install tools (macOS)
./setup.sh

# 3. Generate SKY130 Liberty file (required for synthesis)
./setup_sky130.sh

# 4. Install Python packages
pip3 install -r requirements.txt
```

---

## Build System

All commands run from the repository root.

### Code Quality

```bash
make lint           # Verible lint on all RTL sources
make format         # Verible auto-format in-place (idempotent)
```

### Simulation

```bash
# Unit testbench for a single module (default params)
make unit TEST=sram_array
make unit TEST=req_fifo
make unit TEST=rsp_fifo
make unit TEST=per_bank_arb
make unit TEST=bank_scheduler
make unit TEST=rsp_mux
make unit TEST=perf_counter
make unit TEST=banked_sram_ctrl

# Unit testbench with custom parameters
make unit TEST=banked_sram_ctrl "PARAMS=NUM_BANKS=2 NUM_REQ_PORTS=2 ADDR_WIDTH=5 BANK_DEPTH=16"

# System-level testbench (all 5 test suites)
make sys

# System testbench with custom parameters
make sys "PARAMS=NUM_BANKS=8 NUM_REQ_PORTS=8 ADDR_WIDTH=11 BANK_DEPTH=256"

# Full regression: 12 parameter configurations x (8 unit + 1 system) = 108 tests
make regress
```

### Synthesis

```bash
# Synthesize single module (default: banked_sram_ctrl)
make synth

# Synthesize specific module
make -C banked_sram_ctrl/synth synth MODULE=req_fifo

# Synthesize with a specific clock period target (picoseconds)
make -C banked_sram_ctrl/synth synth MODULE=banked_sram_ctrl PERIOD=4000

# Generate report for a module
make -C banked_sram_ctrl/synth report MODULE=req_fifo

# Synthesize all unit sub-modules + generate summary
make synth_unit

# Synthesize all modules including top-level + generate summary
make synth_all

# Leakage power estimate (no re-synthesis required)
make -C banked_sram_ctrl/synth power
```

### Cleanup

```bash
make clean          # Remove all generated artifacts
```

---

## Verification

### Unit Tests

Each RTL module has a dedicated directed testbench with 8–13 test cases.

| Module | Tests | Coverage |
|---|---|---|
| `sram_array` | 12 TCs | Full-word writes, partial byte-lane writes, same-address RW, boundary addresses |
| `req_fifo` | 13 TCs | Reset, fill-to-full, fall-through head, simultaneous push+pop, pointer wrap, no-comb-path |
| `rsp_fifo` | 12 TCs | Combinational push_ready/pop_valid, full-block, simultaneous ops, pointer wrap |
| `per_bank_arb` | 8 TCs | Reset, single-port no-rotation, 2/4-port contention, full RR sweep, stall, conflict mask |
| `bank_scheduler` | 12 TCs | Reset, 3-cycle read latency, write, partial write, OOB, stall, bubble propagation |
| `rsp_mux` | 12 TCs | Idle, single routing, write zeroing, ID stripping, error, collision, peak throughput |
| `perf_counter` | 12 TCs | All 5 counter types, saturation at 0xFFFFFFFF, CSR timing, non-intrusive reads |
| `banked_sram_ctrl` | 12 TCs | Integration: R/W round-trip, write ACK, multi-port, bank conflict, backpressure, OOB, byte-enable, in-order, random, CSR, cross-port |

### System Tests

The system testbench runs 5 test suites end-to-end with a scoreboard:

| Suite | What it tests |
|---|---|
| Smoke | Basic read and write to every bank |
| Conflict | Bank arbitration with multiple ports targeting the same bank |
| Backpressure | Response queue stall chain and port isolation |
| Random | 40 randomized transactions across ports and banks |
| Stress | 100 sequential writes followed by 100 reads |

### Regression

12 parameter configurations are swept across all unit and system tests:

| Config | Banks | Depth | Width | Ports |
|---|---|---|---|---|
| cfg_minimal | 2 | 16 | 8 | 2 |
| cfg_small_8/16/32 | 2 | 64 | 8/16/32 | 2 |
| cfg_dflt | 4 | 256 | 32 | 4 |
| cfg_deep | 4 | 1024 | 32 | 4 |
| cfg_narrow / cfg_wide | 4 | 256 | 8 / 128 | 4 |
| cfg_large_64 / cfg_large_128 | 8 | 512 | 64 / 128 | 8 |
| cfg_max_ports | 8 | 256 | 32 | 8 |
| cfg_min_ports | 4 | 256 | 32 | 2 |


**Result: 117 / 117 tests pass across all configurations.**

---

## Synthesis Results

**Technology:** SkyWater SKY130 HD — TT corner, 25°C, 1.80V  
**Tool:** Yosys 0.67 + ABC (gate-delay model, no wire parasitics)  
**Clock target:** 4137 ps (242 MHz)

### Area Summary (default parameters)

| Module | Instances | Cells | Area (λ²) |
|---|---|---|---|
| `sram_array` | ×4 | 21 265 | 333 277 × 4 |
| `perf_counter` | ×1 | 4 439 | 48 335 |
| `req_fifo` | ×4 | 490 | 7 433 × 4 |
| `rsp_fifo` | ×4 | 488 | 5 471 × 4 |
| `rsp_mux` | ×1 | 650 | 4 288 |
| `bank_scheduler` | ×4 | 103 | 2 823 × 4 |
| `per_bank_arb` | ×4 | 42 | 410 × 4 |
| `banked_sram_ctrl` (glue) | ×1 | 36 | 317 |
| **Total system** | | **93 573** | **1 450 600** |

> `sram_array` is a behavioral flip-flop model. In physical design this is replaced with a
> SRAM compiler macro — the actual controller logic (everything except sram_array) is ~15 600 cells.

### Timing (gate-delay only)

| Module | Critical path delay | Gate-delay Fmax | Bottleneck path |
|---|---|---|---|
| `rsp_mux` | 4.136 ns | 241 MHz | pp1_id → rsp_data |
| `perf_counter` | 3.266 ns | 306 MHz | csr_addr → counter mux |
| `req_fifo` | 2.135 ns | 468 MHz | rd_ptr → head_data |
| `per_bank_arb` | 1.733 ns | 577 MHz | ptr → conflict_mask |
| `rsp_fifo` | 1.599 ns | 625 MHz | rd_ptr → pop_data |
| `banked_sram_ctrl` (glue) | 0.579 ns | 1 728 MHz | arb_grant_valid → req_fifo_pop |
| `bank_scheduler` | 0.270 ns | 3 700 MHz | bank_pp1_ready → internal |
| `sram_array` | 30.265 ns | 33 MHz | behavioral model — not representative |

**Controller Fmax (excluding behavioral sram_array): ~241 MHz**  
Bottleneck: `rsp_mux` — the combinational bank-to-port routing logic.

> Gate-delay only. Wire delays add approximately 30–60% at 130nm. Use OpenSTA
> with extracted parasitics for production STA.

### Leakage Power (gate-delay estimate, TT 25°C 1.80V)

| Module | Leakage |
|---|---|
| `sram_array` ×4 | 113.594 nW |
| `perf_counter` ×1 | 19.243 nW |
| `req_fifo` ×4 | 3.093 nW |
| `rsp_fifo` ×4 | 3.089 nW |
| `rsp_mux` ×1 | 1.173 nW |
| `banked_sram_ctrl` ×1 | 1.197 nW |
| `bank_scheduler` ×4 | 0.944 nW |
| `per_bank_arb` ×4 | 0.131 nW |

Static leakage from Liberty `cell_leakage_power` values. Dynamic power requires switching activity data.

---

## Features

- **Fully parameterized** — no magic numbers in RTL; every width, depth, and count is a parameter or derived from one
- **Round-robin arbitration** — per-bank, starvation-free, single pointer register
- **Head-of-line conflict stall** — losing port holds at queue head; no extra buffering required
- **2-stage pipeline** — deterministic 3-cycle read latency, 2-cycle write commit
- **Byte-enable strobe** — per-byte write masking across all DATA_WIDTH variants
- **Out-of-range address detection** — returns `err=1` response, suppresses SRAM write
- **In-order responses per port** — FIFO ordering guaranteed by the pipeline structure
- **Write responses** — every accepted write generates exactly one ACK response
- **Backpressure isolation** — a stalled port does not affect other ports
- **Performance counters** — 5 counter types (req, rsp, conflict, queue-full, bank-idle); CSR read port; saturating 32-bit; non-intrusive
- **Single clock domain** — asynchronous reset assert, synchronous deassert; no CDC crossings
- **Parameter legality checks** — `$fatal` at simulation time 0 for all illegal configurations

---

## Results Spreadsheet
Per-Module Synthesis Report (Yosys + ABC → Sky130 (Standard CMOS cells --> High Density))

## Module Summary Table

| Step | Module | Gate Count | Wire Bits | Area (µm²) | Logic Depth | Slack (ns) | Crit Path (ns) | Max Freq (MHz) | Leakage (nW) | Status |
|:----:|:-------|:----------:|:---------:|:----------:|:-----------:|:----------:|:--------------:|:--------------:|:------------:|:------:|
| 1 | sram_array.sv | 21,265 | 21,311 | 333,277.14 | 2 | 0 | 30.265 | 33 | 113.5941 | Done |
| 2 | req_fifo.sv | 490 | 558 | 9,222.60 | 3 | 0.001 | 2.462 | 406.2 | 3.0929 | Done |
| 3 | rsp_fifo.sv | 488 | 556 | 9,187.56 | 3 | 0 | 2.577 | 388.1 | 3.0886 | Done |
| 4 | per_bank_arb.sv | 42 | 49 | 410.39 | 4 | 0 | 1.733 | 577.1 | 0.1312 | Done |
| 5 | bank_scheduler.sv | 103 | 193 | 2,822.71 | 2 | 0.001 | 0.27 | 3,690 | 0.944 | Done |
| 6 | rsp_mux.sv | 650 | 818 | 4,317.89 | 2 | 0 | 5.441 | 183.8 | 1.1732 | Done |
| 7 | perf_counter.sv | 4,439 | 4,479 | 48,282.56 | 7 | 0.001 | 3.208 | 311.67 | 19.2426 | Done |
| 8 | banked_sram_ctrl.sv (wrapper) | 36 | 1,723 | 316.55 | 2 | 0.001 | 0.579 | 1,724.14 | 0.0727 | Done |
| | **SYSTEM TOTAL** | **70,997** | **96,429** | **1,450,600** | **2** | **---** | **4.137*** | **242** | **496.4941** | **Done** |

*\*Critical path corresponds to rsp_mux excluding the SRAM array.*

---

## Detailed Notes by Module

### 1. sram_array.sv
- **Area:** 333,277.14 µm² — FF-inferred memory; area inflated significantly.
- **Power:** Power estimation unavailable in Yosys synth. Requires per-signal toggle count frequency (TCF file).
- **Timing:** 33 MHz (30.265 ns critical path).

### 2. req_fifo.sv
- **Timing:** Clean, 406 MHz. No issues.
- **Area:** 9,222.60 µm².

### 3. rsp_fifo.sv
- **Timing:** Clean, 388 MHz. No issues.
- **Area:** 9,187.56 µm².

### 4. per_bank_arb.sv
- **Timing:** Clean, 577 MHz. No issues.
- **Area:** 410.39 µm².

### 5. bank_scheduler.sv
- **Timing:** 3,690 MHz (0.27 ns). SRAM treated as boundary I/O (blackboxed); excludes actual SRAM access time.
- **Area:** 2,822.71 µm².

### 6. rsp_mux.sv
- **Timing:** 183.8 MHz. Likely critical path bottleneck — **fails 250 MHz target**.
- **Area:** 4,317.89 µm².

### 7. perf_counter.sv
- **Timing:** Passes at 311.67 MHz.
- **Area:** 48,282.56 µm² — area/gate hog after SRAM, due to 32-bit saturating CSR counter.

### 8. banked_sram_ctrl.sv (wrapper)
- **Timing:** 1,724.14 MHz.
- **Area:** 316.55 µm².

---

## System Totals
| Metric | Value |
|:-------|:------|
| **Total Gate Count** | 70,997 |
| **Total Wire Bits** | 96,429 |
| **Total Area** | ~1,450,600 µm² |
| **System Logic Depth** | 2 |
| **System Critical Path** | 4.137 ns (rsp_mux, SRAM excluded) |
| **System Max Freq** | 242 MHz |
| **Total Est. Leakage Power** | 496.4941 nW |
| **Synthesis Status** | Done |
---

## What Is Out of Scope (v1.0)

The following features are explicitly deferred per the locked spec (v1.1):

- ECC (SECDED) — no syndrome bits or correction logic
- Prefetcher — no next-line speculation
- MSHR / out-of-order completion — in-order only
- Weighted round-robin — standard round-robin only
- CDC / multi-clock — single clock domain only
- Gate-level simulation — netlist generated but GLS flow not included

---

## Tools

| Tool | Version | Purpose |
|---|---|---|
| Verilator | ≥ 4.220 | Cycle-accurate RTL simulation |
| Yosys | 0.67+ | RTL synthesis, technology mapping |
| ABC | (bundled with Yosys) | Logic optimization, timing-driven cell mapping |
| Verible | latest | RTL linting, style formatting |
| SKY130 HD | sky130_fd_sc_hd | 130nm open-source standard cell library |
| Python 3 | ≥ 3.8 | Report parsing, leakage estimation, Liberty generation |
| WaveTrace | VSCode extension | VCD waveform viewer |
| iverilog | latest | Checked by synthesis environment |

---

## Specification

Full microarchitecture specification is at:

```
banked_sram_ctrl/docs/Project_spec.md
```

Document version: **v1.1 — LOCKED**  
Covers: parameters, address mapping, pipeline, arbitration, conflict policy, backpressure, error handling, clock domain, performance counters, CSR port.

RTL has been audited against the spec. All architectural decisions in v1.1 are implemented. No deviations.
