# Banked On-Chip SRAM Controller — Microarchitecture Specification

**Document Version:** 1.1  
**Status:** LOCKED — RTL implementation baseline  
**Author:** Design Team  
**Date:** 2026-05-17  

---

## Table of Contents

1. [Purpose and Scope](#1-purpose-and-scope)
2. [Top-Level Parameters](#2-top-level-parameters)
3. [Block Diagram](#3-block-diagram)
4. [Interface Contracts](#4-interface-contracts)
5. [Pipeline Architecture](#5-pipeline-architecture)
6. [Arbitration Policy](#6-arbitration-policy)
7. [Bank Conflict Policy](#7-bank-conflict-policy)
8. [Backpressure Rules](#8-backpressure-rules)
9. [Error Handling](#9-error-handling)
10. [Clock Domain Analysis](#10-clock-domain-analysis)
11. [Optional Extensions — Scope Decisions](#11-optional-extensions--scope-decisions)
12. [Parameter Legality Rules](#12-parameter-legality-rules)
13. [Timing and Performance Targets](#13-timing-and-performance-targets)
14. [Revision History](#14-revision-history)

---

## 1. Purpose and Scope

### 1.1 What This Document Is

This is the **locked microarchitecture specification** for a parameterized, banked, synchronous on-chip SRAM subsystem. It is the single source of truth from which RTL and verification engineers implement the design. Every architectural decision is made here with rationale. No decision in this document is deferred to implementation.

### 1.2 What This Subsystem Does

The banked SRAM controller accepts read and write requests from multiple independent requestor ports, arbitrates among them, routes each transaction to the appropriate bank based on address, manages bank conflicts, and returns read data with matching transaction IDs to the originating requestor. It is a **shared memory resource** with multi-port access, not a cache.

### 1.3 What This Subsystem Does NOT Do

- It is **not** a cache. There is no tag array, no miss handling, no eviction. Every address maps to exactly one bank slot.
- It does **not** perform address translation. Physical addresses are presented by the requestor.
- It does **not** implement ECC (Error Correcting Code) correction in the baseline (see Section 11).
- It does **not** have multiple clock domains in the baseline (single-clock design, see Section 10).

### 1.4 Design Philosophy

- **Throughput-first, latency-bounded.** The design targets full throughput (one request per port per cycle in the no-conflict steady state) with a deterministic, parameterized pipeline latency.
- **Simplicity over cleverness.** Conflict handling is explicit and reasoned, not buried in hazard logic.
- **Fully parameterized.** No magic numbers in RTL. Every width, depth, and count is a parameter or derived from one.

---

## 2. Top-Level Parameters

All parameters are defined at the top of the top-level RTL module and propagated downward. No submodule hardcodes any value that can vary.

### 2.1 Parameter Table

| Parameter | Default | Legal Range | Description |
|---|---|---|---|
| `NUM_BANKS` | `4` | 2–16, power of 2 | Number of independent SRAM banks |
| `BANK_DEPTH` | `256` | 16–65536, power of 2 | Number of addressable rows per bank |
| `DATA_WIDTH` | `32` | 8, 16, 32, 64, 128 | Width of the data bus in bits |
| `ADDR_WIDTH` | `10` | ≥ `$clog2(NUM_BANKS) + $clog2(BANK_DEPTH)` | Word-address width presented by requestors (see Section 2.3) |
| `NUM_REQ_PORTS` | `4` | 2 - 8 | Number of independent requestor interfaces |
| `QUEUE_DEPTH` | `4` | 2–16, power of 2 | Depth of each per-port request FIFO and response FIFO |
| `PIPELINE_STAGES` | `2` | 1–4 | Number of pipeline registers between arbiter output and bank output |
| `ID_WIDTH` | `4` | 1–8 | Width of transaction ID field per port |

### 2.2 Derived Parameters (Not User-Set)

These are computed in RTL using `localparam` and must not be overridden:

| Derived Parameter | Formula | Description |
|---|---|---|
| `BANK_SEL_BITS` | `$clog2(NUM_BANKS)` | Bits used to select bank from address |
| `BANK_ADDR_BITS` | `$clog2(BANK_DEPTH)` | Bits used as row address within a bank |
| `PORT_ID_BITS` | `$clog2(NUM_REQ_PORTS)` | Bits to identify the originating port |
| `TOTAL_ID_BITS` | `ID_WIDTH + PORT_ID_BITS` | Width of combined tag in flight |
| `STROBE_WIDTH` | `DATA_WIDTH / 8` | Byte-enable strobe bits for writes |

### 2.3 Address Mapping

**The interface is word-addressed.** Each increment of `addr` by 1 addresses the next `DATA_WIDTH`-wide word. There are no byte-offset bits in the address field; sub-word granularity is achieved exclusively through the `strobe` field (see Section 4.1 and Section 11.4). Requestors must present naturally aligned word addresses.

The `ADDR_WIDTH`-bit address from the requestor is decoded as follows:

```
 ADDR_WIDTH-1                                    0
 ┌───────────────────┬────────────────┬───────────┐
 │    Unused/Upper   │   BANK_ADDR    │  BANK_SEL │
 │ (ADDR_WIDTH -     │ (BANK_ADDR_    │ (BANK_SEL_│
 │  BANK_SEL_BITS -  │  BITS bits)    │  BITS bits│
 │  BANK_ADDR_BITS)  │                │           │
 └───────────────────┴────────────────┴───────────┘
  bits [ADDR_WIDTH-1 :   bits [BANK_SEL_BITS +     bits [BANK_SEL_BITS-1 : 0]
   BANK_SEL_BITS +         BANK_ADDR_BITS - 1 :
   BANK_ADDR_BITS]          BANK_SEL_BITS]
```

**Decision: Bank selection from low-order bits.**

- **Option A (Low bits, committed):** `bank_sel  = addr[BANK_SEL_BITS-1 : 0]`
- `bank_addr = addr[BANK_SEL_BITS + BANK_ADDR_BITS - 1 : BANK_SEL_BITS]`
- **Option B (High bits, rejected):** `bank_sel  = addr[BANK_SEL_BITS + BANK_ADDR_BITS - 1 : BANK_ADDR_BITS]`

**Committed choice: Option A — low-order bits select the bank.**

*Reasoning:* Sequential addresses interleave across banks, which distributes traffic uniformly in the common case (linear scans, array traversals). High-bit selection would send sequential addresses to the same bank, maximizing conflicts for the most common access patterns. Interleaved mapping is standard in DRAM subsystem and multi-bank SRAM design. The trade-off (closely spaced power-of-two stride accesses hit the same bank) is acknowledged and acceptable given that requestors are expected to have diverse, non-strided access patterns.

---

## 3. Block Diagram

### 3.1 Top-Level Block Diagram

```
                     BANKED SRAM CONTROLLER
 ┌───────────────────────────────────────────────────────────────────────┐
 │                                                                       │
 │  Port 0         ┌──────────────┐                                      │
 │ ──req────────►  │  Req Queue 0 │ ──┐                                  │
 │ ◄─rsp────────   │  (QUEUE_DEPTH│   │                                  │
 │ ──ready◄──────  │   entries)   │   │    ┌────────────────────────┐    │
 │                 └──────────────┘   │    │                        │    │
 │                                    │    │      ARBITER           │    │
 │  Port 1         ┌──────────────┐   ├──► │  Round-Robin, per-bank │    │
 │ ──req────────►  │  Req Queue 1 │ ──┤    │  priority              │    │
 │ ◄─rsp────────   │              │   │    │  NUM_REQ_PORTS inputs  │    │
 │ ──ready◄──────  └──────────────┘   │    │  NUM_BANKS grant buses │    │
 │                                    │    └────────────┬───────────┘    │
 │  Port 2         ┌──────────────┐   │                 │                │
 │ ──req────────►  │  Req Queue 2 │ ──┤                 │ [PP0] Pipeline │
 │ ◄─rsp────────   │              │   │                 │  Register 0    │
 │ ──ready◄──────  └──────────────┘   │    ┌────────────▼───────────┐    │
 │                                    │    │                        │    │
 │  Port 3         ┌──────────────┐   │    │   BANK SCHEDULER       │    │
 │ ──req────────►  │  Req Queue 3 │ ──┘    │   Conflict tracker     │    │
 │ ◄─rsp────────   │              │        │   Bank-valid matrix    │    │
 │ ──ready◄──────  └──────────────┘        │   Write enable decode  │    │
 │                                         └────────────┬───────────┘    │
 │                                                      │                │
 │                                         [PP1] Pipeline Register 1     │
 │                                                      │                │
 │                              ┌───────────────────────┼──────────────┐ │
 │                              │       BANK ARRAY      │              │ │
 │                              │  ┌────────┐ ┌────────┐│┌────────┐    │ │
 │                              │  │ Bank 0 │ │ Bank 1 │││ Bank N │    │ │
 │                              │  │ SRAM   │ │ SRAM   │││ SRAM   │    │ │
 │                              │  │BANK_   │ │BANK_   │││BANK_   │    │ │
 │                              │  │DEPTH × │ │DEPTH × │││DEPTH × │    │ │
 │                              │  │DATA_   │ │DATA_   │││DATA_   │    │ │
 │                              │  │WIDTH   │ │WIDTH   │││WIDTH   │    │ │
 │                              │  └───┬────┘ └───┬────┘│└───┬────┘    │ │
 │                              └──────┼──────────┼─────┼────┼─────────┘ │
 │                                     │          │     │    │           │
 │                              ┌──────▼──────────▼─────▼────▼─────────┐ │
 │                              │      RESPONSE MUX & TAG MATCH        │ │
 │                              │  Reconstitute port ID from tag       │ │
 │                              │  Route response to correct RSP queue │ │
 │                              └──────────────────────────────────────┘ │
 │                                                      │                │
 │          ┌───────────────────────────────────────────┘                │
 │          │                                                            │
 │  ┌──────────────┐ ┌──────────────┐ ┌──────────────┐ ┌──────────────┐  │
 │  │ Rsp Queue 0  │ │ Rsp Queue 1  │ │ Rsp Queue 2  │ │ Rsp Queue 3  │  │
 │  │(QUEUE_DEPTH) │ │(QUEUE_DEPTH) │ │(QUEUE_DEPTH) │ │(QUEUE_DEPTH) │  │
 │  └──────┬───────┘ └──────┬───────┘ └───────┬──────┘ └───────┬──────┘  │
 │         │                │                 │                │         │
 └─────────┼────────────────┼─────────────────┼────────────────┼─────────┘
           ▼                ▼                 ▼                ▼
        Port 0           Port 1            Port 2           Port 3
       Response         Response          Response         Response
```

**Legend:**
- `[PPn]` = Pipeline register stage n
- All internal buses are synchronous, single clock domain
- No CDC crossings in the baseline design (see Section 10)

### 3.2 Interface Width Summary

| Interface | Direction | Width | Type |
|---|---|---|---|
| `req` (port → req queue) | IN | `ADDR_WIDTH + DATA_WIDTH + STROBE_WIDTH + ID_WIDTH + 2` | Valid/Ready handshake |
| `req_queue → arbiter` | Internal | Same as above | Valid/Ready handshake |
| `arbiter → bank scheduler` | Internal | Same + `PORT_ID_BITS` | Valid pulse (grant) |
| `bank scheduler → bank` | Internal | `BANK_ADDR_BITS + DATA_WIDTH + STROBE_WIDTH + TOTAL_ID_BITS + 2` | Registered, valid |
| `bank → response mux` | Internal | `DATA_WIDTH + TOTAL_ID_BITS + 1` | Registered, valid |
| `response mux → rsp queue` | Internal | `DATA_WIDTH + ID_WIDTH + 2` | Valid/Ready handshake |
| `rsp` (rsp queue → port) | OUT | `DATA_WIDTH + ID_WIDTH + 2` | Valid/Ready handshake |

---

## 4. Interface Contracts

### 4.1 Request Packet Struct

This is the payload carried on every request interface, from requestor to the controller.

```
Struct: req_pkt_t
Total width: ADDR_WIDTH + DATA_WIDTH + STROBE_WIDTH + ID_WIDTH + 2 bits

Field       Bits                        Direction  Description
─────────── ─────────────────────────── ────────── ───────────────────────────────
addr        [ADDR_WIDTH-1 : 0]          IN         Word address of target location.
                                                   The interface is word-addressed;
                                                   each unit increment addresses the
                                                   next DATA_WIDTH-wide word. There
                                                   are no byte-offset bits. Sub-word
                                                   granularity uses strobe only.
                                                   Bank sel and row addr decoded
                                                   internally (Section 2.3).

data        [DATA_WIDTH-1 : 0]          IN         Write data. Must be valid when
                                                   we == 1 and valid == 1.
                                                   Ignored on reads; can be 'X.

strobe      [STROBE_WIDTH-1 : 0]        IN         Byte-enable mask for writes.
                                                   Bit i controls byte lane i.
                                                   All-1 for full-word writes.
                                                   Must be all-1 on reads (ignored
                                                   but convention is enforced in
                                                   simulation assertions).

id          [ID_WIDTH-1 : 0]            IN         Transaction ID assigned by
                                                   requestor. Returned verbatim
                                                   in the response packet.
                                                   Uniqueness within a port is
                                                   the requestor's responsibility.
                                                   IDs from different ports may
                                                   collide — the PORT_ID tag is
                                                   appended internally.

we          [0]                         IN         Write enable. 1 = write,
                                                   0 = read. Single-bit.

valid       [0]                         IN         Request valid. Asserted by
                                                   requestor when presenting a
                                                   valid packet. The controller
                                                   samples addr/data/we/id/strobe
                                                   only when valid && ready.
```

### 4.2 Response Packet Struct

This is the payload returned by the controller to the requestor.

```
Struct: rsp_pkt_t
Total width: DATA_WIDTH + ID_WIDTH + 2 bits

Field       Bits                        Direction  Description
─────────── ─────────────────────────── ────────── ───────────────────────────────
data        [DATA_WIDTH-1 : 0]          OUT        Read data. Valid only when
                                                   the original request had
                                                   we == 0. Tied to '0 for
                                                   write responses.

id          [ID_WIDTH-1 : 0]            OUT        Transaction ID from the
                                                   originating request packet.
                                                   Returned verbatim.

err         [0]                         OUT        Error flag. Asserted if the
                                                   request was malformed (e.g.,
                                                   address out of range). In
                                                   baseline, only out-of-range
                                                   addresses set this bit.
                                                   Normal transactions return
                                                   err = 0.

valid       [0]                         OUT        Response valid. Asserted by
                                                   controller when presenting a
                                                   valid response packet. The
                                                   requestor samples data/id/err
                                                   only when valid && ready.
```

### 4.3 Handshake Protocol: Valid/Ready

The design uses a **standard valid/ready handshake** on all external-facing interfaces. This is equivalent to AXI4 handshake semantics on the data channel.

**Rules (binding on all interfaces):**

1. **Transfer occurs** when and only when `valid == 1 AND ready == 1` on the rising clock edge. Both sides sample simultaneously.

2. **Producer rule:** Once `valid` is asserted, the producer **must hold** valid and all associated payload stable until the transfer completes (i.e., until `ready` is seen high). The producer must not deassert `valid` mid-transaction.

3. **Consumer rule:** `ready` may be asserted at any time, including before `valid`. The consumer must not require the producer to perform any action before asserting `ready`.

4. **No dependence:** `ready` must not be combinatorially dependent on `valid` on any given cycle (no same-cycle handshake completion dependency). This prevents combinatorial loops. *Valid can go high independently of ready.*

5. **Reset behavior:** Both `valid` and `ready` are deasserted during reset. No transfer is recognized while `rst_n == 0`.

### 4.4 Internal Interface: Arbiter Grant to Bank Scheduler

This is an internal interface and does not appear at module ports. It is documented here for RTL designers.

```
Per bank (NUM_BANKS instances):
  grant_valid   [0]               Arbiter selected one port for this bank
  grant_port    [PORT_ID_BITS-1:0] Which port won the grant
  grant_pkt     [req_pkt_t width] The winning request packet (registered copy
                                  from the request queue)
  grant_ready   [0]               Bank scheduler asserts when it can accept;
                                  deasserts when the bank pipeline is full
```

### 4.5 Response Ordering and Completeness Guarantees

**In-order responses per port:** Responses are returned to each port in request-issue order (FIFO order). The per-port FIFO structure and head-of-line stall policy (Section 7.3) together guarantee that a port never receives response N+1 before response N. No reordering occurs within a port. Responses from different ports are independent and may interleave arbitrarily.

**Write response guarantee:** Every accepted write request generates exactly one response packet. The response has `data = '0` and `err = 0` (or `err = 1` for an out-of-range address). Fire-and-forget writes are not supported. The requestor must consume all response packets — failure to drain the response queue will eventually stall the request port (see Section 8.2).

---

## 5. Pipeline Architecture

### 5.1 Pipeline Stage Definitions

`PIPELINE_STAGES` controls the number of pipeline registers between the arbiter and the bank output. The minimum is 1 (required for timing closure on SRAM access). The default is 2.

**General latency formulas (no stalls):**
- Read latency = `PIPELINE_STAGES + 1` cycles from request handshake to response valid.
- Write latency = `PIPELINE_STAGES + 1` cycles from request handshake to write completion ack in response queue.

For `PIPELINE_STAGES = 2` (the locked default):

```
Cycle 0:   Request arrives at request queue. Valid/Ready handshake.
           Queue issues request to arbiter combinatorially on same cycle
           if queue is non-empty.

Cycle 1:   Arbiter grants one request per bank. [PP0] register captures:
           - BANK_ADDR, DATA, STROBE, WE, TOTAL_ID
           Bank scheduler checks conflict tracker.
           Qualified requests issued to SRAM arrays.

Cycle 2:   SRAM read data available. [PP1] register captures:
           - READ_DATA, TOTAL_ID, VALID, ERR
           (Write completes — no read data returned, only ack)
           Response mux identifies destination port from TOTAL_ID.

Cycle 3:   Response placed into per-port response queue.
           Requestor sees valid response on this cycle if ready.
```

### 5.2 Pipeline Register Details

**PP0 — Arbiter to Bank Scheduler (registered)**

```verilog
// Instantiated once per bank
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        pp0_valid <= 0;
    end else if (pp0_ready) begin  // only advance when scheduler accepts
        pp0_valid     <= grant_valid;
        // BANK_ADDR occupies addr[BANK_SEL_BITS + BANK_ADDR_BITS - 1 : BANK_SEL_BITS]
        // per Option A address layout (BANK_SEL in lowest bits, Section 2.3)
        pp0_bank_addr <= grant_pkt.addr[BANK_SEL_BITS + BANK_ADDR_BITS - 1 : BANK_SEL_BITS];
        pp0_data      <= grant_pkt.data;
        pp0_strobe    <= grant_pkt.strobe;
        pp0_we        <= grant_pkt.we;
        pp0_id        <= {grant_port, grant_pkt.id};  // TOTAL_ID assembly
    end
end
```

**PP1 — Bank Output to Response Mux (registered)**

```verilog
// Instantiated once per bank
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        pp1_valid <= 0;
    end else begin
        pp1_valid     <= pp0_valid;
        pp1_read_data <= sram_rdata;
        pp1_id        <= pp0_id;
        pp1_we        <= pp0_we;   // carry WE to suppress read data on writes
        pp1_err       <= addr_oob; // out-of-range flag computed in cycle 1
                                   // addr_oob = |grant_pkt.addr[ADDR_WIDTH-1 :
                                   //             BANK_SEL_BITS + BANK_ADDR_BITS]
                                   // (see Section 9.1)
    end
end
```

### 5.3 Pipeline Valid Tracking

Each pipeline stage carries its own `valid` bit. This is **not** a global stall pipeline. Because each bank pipeline is independent, a conflict on Bank X stalls only the winning/losing ports' queues; banks Y and Z continue processing their own requests without interruption.

---

## 6. Arbitration Policy

### 6.1 Arbiter Scope

The arbiter performs **per-bank** arbitration. Each bank has an independent arbiter instance. A single cycle can grant one request to each of the `NUM_BANKS` banks simultaneously, for a peak throughput of `NUM_BANKS` requests per cycle.

This means: if Port 0 targets Bank 0 and Port 1 targets Bank 1, both are granted in the same cycle with no interaction. Arbitration is only relevant when two or more ports target the **same bank** in the same cycle.

### 6.2 Arbitration Algorithm

**Committed choice: Round-robin with last-winner rotation.**

- Each bank maintains a `priority_ptr` register, `$clog2(NUM_REQ_PORTS)` bits wide.
- On any cycle where more than one port presents a valid request for a bank, the grant goes to the port at or after `priority_ptr` (wrapping), i.e., standard rotating priority.
- After a grant, `priority_ptr` advances to `(winning_port + 1) % NUM_REQ_PORTS`.
- If only one port has a valid request, it is granted without affecting `priority_ptr`.
- If no port has a valid request for a bank, the bank is idle; `priority_ptr` is unchanged.

**Options considered:**

| Scheme | Throughput | Fairness | Complexity |
|---|---|---|---|
| Fixed priority | Highest for P0 | Starvation possible | Lowest |
| Round-robin | Equal long-run | Guaranteed equal share | Low |
| Weighted round-robin | Configurable | Configurable | Medium |
| Age-based (FIFO order) | Neutral | Order-preserving | Medium-High |

**Rationale for round-robin:** The requestors are assumed to be peers (e.g., multiple CPU cores or DMA engines sharing memory). Fixed priority would starve low-priority ports under heavy load. Round-robin guarantees equal long-run bandwidth with minimal hardware — a single pointer per bank. Weighted round-robin is a stretch goal and is deferred (see Section 11).

### 6.3 Arbitration Timing

The arbiter is **combinatorial** — it looks at the heads of all request queues and produces a grant in the same cycle. The grant is registered by PP0. The arbiter has a maximum combinatorial depth of `O(log NUM_REQ_PORTS)` due to the priority mux. If **grant_ready** (from the Bank Scheduler / PP0 stage) is low, the arbiter must hold its grant decision and **grant_pkt** stable until **grant_ready** returns high.

---

## 7. Bank Conflict Policy

This is the most consequential architectural decision in this subsystem. The choice here affects area, throughput, and implementation complexity significantly.

### 7.1 Conflict Definition

A **bank conflict** occurs when two or more ports present valid requests targeting the **same bank** in the **same arbitration cycle**. Because each bank is single-ported (one access per cycle), only one can be granted per cycle.

This is distinct from a **structural conflict**, which is when a port wishes to issue a new request but the request queue is full.

### 7.2 Options Considered

**Option A: Stall losing port (head-of-line blocking per port)**
When a port loses arbitration, it holds its request at the head of its queue. No new requests from that port are issued. The port is stalled until it wins arbitration. All other ports continue independently.

- Pros: Simple. The losing request stays at queue head and is retried next cycle with updated priority.
- Cons: Head-of-line blocking — a conflicting request blocks later requests from the same port even if they target different, free banks.

**Option B: Queue conflicting requests, continue issuing later entries (out-of-order issue)**
The arbiter looks beyond the queue head for non-conflicting requests and issues them instead.

- Pros: Eliminates head-of-line blocking. Better utilization.
- Cons: Requires either true out-of-order issue logic (complex), or a separate conflict queue (area cost). Adds substantial complexity. Reorder buffer logic for response reconstruction needed.

**Option C: Broadcast block — stall entire port on any conflict**
If any request from a port loses arbitration, the entire port pipeline freezes.

- Pros: Trivially simple.
- Cons: Catastrophically bad for throughput in any realistic multi-bank scenario. Rejected outright.

### 7.3 **Committed Decision: Option A — Per-Port Head-of-Line Stall**

The losing port holds its request at the head of its queue. The port's `ready` signal to its request queue is deasserted for that cycle. On the next cycle, the losing port enters arbitration again with updated (higher) priority due to round-robin rotation.

**Full rule:**
> If port P presents request R targeting bank B, and port Q also presents a request targeting bank B in the same cycle, and the arbiter grants Q, then:
> - Port Q's request queue dequeues (pops) R_Q.
> - Port P's request queue does **not** dequeue. R_P stays at the head.
> - Port P's `priority_ptr` for bank B advances so that P has priority next cycle.
> - No new request is drawn from port P's queue for bank B until R_P is granted.
> - **Because each port has a single FIFP, losing arbitration for any banks stalls the **entire port** until that head request wins. Requestsbehind it - even to free banks - cannot be issued. This is head-of-line blocking cost of Option A**

**Rationale:** Option A is the standard choice for a banked memory subsystem at this complexity level. It is fully implementable within the existing queue structure (no additional conflict queues needed), predictable in behavior, and verifiable with simple assertions. Head-of-line blocking is a real cost, but its impact is mitigated by:
1. The bank interleaving policy (low-address-bit selection) distributes sequential traffic across banks, reducing the conflict probability.
2. The round-robin arbiter ensures the stalled port wins next cycle with high probability.
3. A `QUEUE_DEPTH` of 4 provides absorption headroom while the conflicted request resolves.

Option B is deferred to a stretch goal (see Section 11). If the design is revisited post-tapeout with measured conflict rates above 15%, out-of-order issue should be evaluated.

### 7.4 Conflict Tracker Implementation

A conflict is detected combinatorially in the arbiter. No separate tracker state is needed for the baseline policy — the per-bank ready/not-ready signal back to the queue is sufficient. A `conflict_count` performance counter (one per bank, one per port) is instantiated for observability and benchmarking.

---

## 8. Backpressure Rules

**Key isolation invariant:** A slow consumer on port P stalls only port P. No other port is affected unless it happens to be contending for the same bank as P's blocked requests.

### 8.1 Request-Side Backpressure (Requestor → Controller)

The per-port request queue presents a `ready` signal to the requestor. **`ready` is deasserted when the request queue is full (occupancy == `QUEUE_DEPTH`).**

Precise rule:
```
ready[port] = (req_queue[port].occupancy < QUEUE_DEPTH)
            = !req_queue[port].full
```

This is registered — `ready` reflects the queue state one cycle before. Specifically, the queue uses a **fall-through FIFO with registered output**, so `ready` is deasserted on the cycle when the last slot is filled (after the handshake that fills it). The requestor must respect `ready` on every cycle and must not issue when `ready == 0`.

**Important edge case:** `ready` deasserts one cycle *after* the filling transaction, meaning a requestor that presents a new request in that final cycle will see the transfer complete (valid && ready both high) but `ready` will go low on the next cycle. The requestor must inspect `ready` on the cycle it wants to issue, not a cycle ahead.

### 8.2 Response-Side Backpressure (Controller → Requestor)

The per-port response queue presents a `valid` signal to the requestor. The requestor asserts `ready` when it can consume a response.

**`ready` is the requestor's signal.** The controller has no obligation to hold back responses — it fills the response queue based on pipeline completion. However:

**If the response queue is full**, the bank pipeline for that port's responses **stalls at PP1**. Specifically, if `rsp_queue[port].full == 1`, the PP1 stage holds valid until the queue drains. This creates backpressure through the pipeline.

**Backpressure propagation chain:**
```
rsp_queue[port].full
    → PP1 stall for transactions destined for port
    → PP0 stall for that bank (cannot advance if PP1 is stalled)
    → Bank scheduler does not issue new request to that bank
    → Arbiter holds grant for that bank
    → req_queue[port] stops draining for that bank
    → Upstream requestor sees ready deassert for that bank's slot
```

**Key consequence:** A requestor that does not drain its response queue will eventually stall its own request queue. It will not stall other ports (each port has independent queues), unless the unresponsive port is contending for the same bank. This is the expected behavior — the system is not globally stalled by one slow consumer.

### 8.3 Summary Table

| Condition | Effect | Signal |
|---|---|---|
| `req_queue[p].full` | Port p cannot accept new requests | `req_ready[p] = 0` |
| Port p loses bank arbitration | Port p queue not drained for that bank | `req_ready[p]` held (conditional) |
| `rsp_queue[p].full` | Bank pipeline for port p stalls | Internal stall, PP1 holds |
| Requestor holds `rsp_ready = 0` | Response queue fills, eventually stalls bank | `rsp_valid[p]` asserts, waits |

---

## 9. Error Handling

### 9.1 Address Out-of-Range

**Definition:** An address is out of range if any of the unused upper address bits are non-zero. Formally:

```
addr_oob = | grant_pkt.addr[ADDR_WIDTH-1 : BANK_SEL_BITS + BANK_ADDR_BITS]
```

That is, if `ADDR_WIDTH > BANK_SEL_BITS + BANK_ADDR_BITS` (the parameter minimum permits equality), any address with the upper `ADDR_WIDTH − BANK_SEL_BITS − BANK_ADDR_BITS` bits set is out of range. When `ADDR_WIDTH == BANK_SEL_BITS + BANK_ADDR_BITS` (the minimum and the default configuration), there are no unused bits and no address can be out of range; `addr_oob` is tied to `0` in that case.

> **Note:** A field-overflow condition (`BANK_ADDR ≥ BANK_DEPTH`) cannot occur because `BANK_ADDR_BITS = $clog2(BANK_DEPTH)` and `BANK_DEPTH` is required to be a power of 2, so the `BANK_ADDR_BITS`-wide field can represent at most `BANK_DEPTH − 1`. The only reachable illegal address space is through non-zero upper bits when `ADDR_WIDTH` is set wider than the minimum.

This check is performed in cycle 1 (in the bank scheduler, before issuing to SRAM).

- The request is **not** issued to the SRAM array.
- A response packet is generated with `err = 1`, `data = '0`, and the original `id`.
- The response enters the normal response queue path and is returned to the requestor.
- No write occurs to SRAM for out-of-range write requests.

### 9.2 Protocol Violations (Simulation Only)

The following are protocol violations that are **asserted in simulation** but not handled in hardware (undefined behavior in silicon):

- `valid` deasserted mid-transaction (after rising while `ready == 0`)
- `addr/data/id/we` changed while `valid == 1` and `ready == 0`
- `strobe != '1` on a read request

These assertions are in the verification layer (`bind` statements in SVA), not in RTL.

### 9.3 ECC

Out of scope for baseline. See Section 11.

---

## 10. Clock Domain Analysis

### 10.1 Clock Topology

The baseline design is **single clock domain**. All flip-flops are clocked by `clk`. All reset flops are asynchronously asserted, synchronously deasserted, using `rst_n` (active low).

```
clk  ──────────────────────────────────────────────
      All: req queues, arbiter registers, PP0, PP1,
           SRAM (synchronous), rsp queues
```

**There are zero CDC crossings in the baseline design.**

### 10.2 Reset Strategy

- Reset is **asynchronous assert, synchronous deassert** (industry standard for ASIC methodology).
- `rst_n` is distributed to all flops. A reset synchronizer is assumed to exist at the top level (outside this IP block) and is not instantiated within the controller.
- All FIFOs use a reset pointer clear strategy — no SRAM content initialization on reset is performed (SRAM content is undefined at power-on; this is explicitly documented and verification will not rely on reset-state of SRAM).

### 10.3 Future Multi-Clock Extension

If future integration requires the requestor side to operate at a different clock (e.g., a lower-frequency fabric clock), CDC FIFOs would be inserted at each request queue input and each response queue output. This is a **stretch goal** and is explicitly out of scope for v1.0. The architecture of the queues has been kept modular to allow this insertion without restructuring the core.

---

## 11. Optional Extensions — Scope Decisions

Each potential extension is formally scoped below. **Committed decisions are final for v1.0 RTL.**

### 11.1 Prefetcher (Next-Line)

**Description:** When a read request to address `A` is issued, the prefetcher speculatively issues a read to `A + 1` (the next word) and buffers the result. If a subsequent request for `A + 1` arrives, it is satisfied from the prefetch buffer without consuming a bank cycle.

**Analysis:**
- Benefit: Reduces latency and bank pressure for streaming read patterns.
- Cost: Requires a per-port prefetch buffer (one entry minimum), logic to detect and match prefetch hits, and a way to invalidate stale prefetch entries on writes to the same address.
- Risk: Prefetch pollution on non-sequential access patterns adds useless bank traffic.

**Decision: OUT OF SCOPE for v1.0.**

*Rationale:* The access patterns of the requestors are not yet characterized. Prefetching without a validated workload model can hurt performance. The bank conflict policy already manages throughput for the realistic case. Prefetch can be added in v1.1 after profiling real traffic in simulation.

---

### 11.2 MSHR-Style Outstanding Request Tracker

**Description:** A Miss Status Holding Register (MSHR) table that allows multiple outstanding transactions per port, enabling the requestor to issue request `n+1` without waiting for the response to request `n`. Coupled with an out-of-order response queue that reorders completions by ID.

**Analysis:**
- Benefit: Hides bank latency. A requestor with deep enough IDs can saturate the bank pipeline.
- Cost: Significant complexity. Requires an ID allocation table, a completion reorder buffer, and response tracking logic. Reorder buffer depth must match `QUEUE_DEPTH * PIPELINE_STAGES` to prevent deadlock.
- Current state: The baseline already supports multiple in-flight transactions per port (up to `QUEUE_DEPTH` deep). Responses are returned **in-order per port** in the baseline (because the queue is FIFO). The MSHR extension specifically targets out-of-order completion.

**Decision: STRETCH GOAL — targeted for v1.1 if in-order responses prove to be a bottleneck.**

*Conditions for promotion to In Scope:* Simulation shows requestors stalling on response order more than 10% of cycles over a representative workload.

---

### 11.3 Row-Buffer Hit Policy Simulation

**Description:** Simulation model of a DRAM-style row-buffer that tracks whether a bank's "active row" matches the incoming address. A row-buffer hit is served in fewer cycles than a miss. This is a **simulation model only** — the baseline SRAM array has uniform single-cycle access.

**Analysis:**
- This is a modeling/micro-benchmark exercise, not a hardware change.
- Useful if the controller is later intended to front a DRAM device instead of SRAM.
- Adds complexity to the reference model used in verification.

**Decision: OUT OF SCOPE for v1.0.**

*Rationale:* The baseline target technology is synchronous SRAM. DRAM modeling introduces timing variability that complicates verification. If the design is adapted to front a DRAM controller, this becomes in-scope at that point. The pipeline stage parameter (`PIPELINE_STAGES`) is intentionally left flexible to accommodate longer-latency memory devices in a future variant.

---

### 11.4 Byte-Enable / Partial Write (Strobe)

**Description:** Support for sub-word writes using the `strobe` field. Bit i of strobe controls whether byte lane i is written.

**Decision: IN SCOPE for v1.0.**

The `strobe` field is present in the request packet (see Section 4.1). The SRAM must support byte-enable inputs (standard for synthesized SRAM or behavioral models with per-byte write enables). RTL generates the per-byte write enable vector directly from `strobe`:

```
for (i = 0; i < STROBE_WIDTH; i++) begin
    sram_bwe[i] = req_we & req_strobe[i];
end
```

Verification will include directed tests for partial-word writes at all byte lanes.

---

### 11.5 Performance Counters

**Description:** Cycle-accurate performance counters for observability. Proposed counters:

| Counter | Width | Description |
|---|---|---|
| `req_count[port]` | 32b | Total requests accepted per port |
| `rsp_count[port]` | 32b | Total responses issued per port |
| `conflict_count[bank][port]` | 32b | Cycles port P lost arbitration for bank B |
| `queue_full_count[port]` | 32b | Cycles request queue was full per port |
| `idle_count[bank]` | 32b | Cycles bank had no valid request |

**Decision: IN SCOPE for v1.0.**

Counters are implemented as saturating 32-bit registers. They are reset by `rst_n`. A read interface (simple CSR-style, address-decoded, read-only) is exposed on a dedicated status port. This port is separate from the request/response ports and does not participate in arbitration.

---

### 11.6 Weighted Round-Robin Arbitration

**Description:** Each port has a configurable `weight` parameter controlling how many grants it receives in a round-robin epoch.

**Decision: OUT OF SCOPE for v1.0.**

Standard round-robin is sufficient and verifiable. Weighted arbitration requires weight configuration registers, state machine for epoch tracking, and significantly more verification surface. Deferred to v1.1 if QoS requirements emerge.

---

### 11.7 ECC (Single-Error Correct, Double-Error Detect)

**Description:** SECDED ECC on SRAM data. Syndrome bits stored alongside data. Corrections applied on read. Uncorrectable errors flagged in `rsp.err`.

**Decision: OUT OF SCOPE for v1.0.**

ECC adds `$clog2(DATA_WIDTH) + 2` syndrome bits per SRAM word, increases read latency by 1 cycle for syndrome computation, and requires a corrected-write-back path. The baseline design targets FPGA emulation and simulation where ECC is not critical. A future ASIC hardening revision should add ECC at that stage.

---

## 12. Parameter Legality Rules

The following rules are enforced via `initial begin ... $fatal` checks in RTL (simulation) and via an assertions module bound at instantiation:

```
1. NUM_BANKS must be a power of 2:
   assert (NUM_BANKS & (NUM_BANKS - 1)) == 0

2. BANK_DEPTH must be a power of 2:
   assert (BANK_DEPTH & (BANK_DEPTH - 1)) == 0

3. QUEUE_DEPTH must be a power of 2:
   assert (QUEUE_DEPTH & (QUEUE_DEPTH - 1)) == 0

4. NUM_REQ_PORTS must be 2 or 4:
   assert (NUM_REQ_PORTS == 2 || NUM_REQ_PORTS == 4)

5. ADDR_WIDTH must be wide enough to hold both BANK_SEL and BANK_ADDR:
   assert ADDR_WIDTH >= (BANK_SEL_BITS + BANK_ADDR_BITS)

6. DATA_WIDTH must be a power of 2 between 8 and 128:
   assert DATA_WIDTH inside {8, 16, 32, 64, 128}

7. PIPELINE_STAGES must be between 1 and 4:
   assert PIPELINE_STAGES >= 1 && PIPELINE_STAGES <= 4

8. ID_WIDTH must be between 1 and 8:
   assert ID_WIDTH >= 1 && ID_WIDTH <= 8
```

Violations cause a `$fatal` at simulation time `0`. No hardware behavior is defined for illegal parameter combinations.

---

## 13. Timing and Performance Targets

### 13.1 Throughput

| Metric | Value | Condition |
|---|---|---|
| Peak throughput per bank | 1 request/cycle | No conflict, queue non-empty |
| Peak aggregate throughput | `NUM_BANKS` req/cycle | All banks targeted, no conflicts |
| Throughput under conflict | `1/k` per-bank for k-way conflict | k ports targeting same bank |
| Throughput under backpressure | Reduces to rsp drain rate | Response queue full |

### 13.2 Latency

| Path | Cycles | Notes |
|---|---|---|
| Read latency (no stall) | `PIPELINE_STAGES + 1` | General formula; **3 cycles at default PIPELINE_STAGES=2** |
| Write latency (no stall) | `PIPELINE_STAGES` | General formula; **2 cycles at default PIPELINE_STAGES=2** |
| Conflict penalty | +1 per lost arbitration round | Retry next cycle, round-robin priority |
| Backpressure penalty | Variable | Proportional to response queue depth |

### 13.3 Target Frequency

The design is initially targeting **FPGA emulation** (Xilinx UltraScale+ or equivalent). Target: **250 MHz** on FPGA. The two-stage pipeline (`PIPELINE_STAGES = 2`) is sized to meet this without retiming.

ASIC timing targets are not committed for v1.0.

### 13.4 Area

No area targets are committed for v1.0. The SRAM macro is the dominant area contributor; all control logic is expected to be < 5% of total block area for the default parameters.

---

## 14. Revision History

| Version | Date | Author | Changes |
|---|---|---|---|
| 0.1 | 2026-05-17 | Design Team | Initial draft — all sections complete |
| 1.0 | 2026-05-17 | Design Team | Locked. Scope decisions finalized. Ready for RTL. |
| 1.1 | 2026-05-17 | Design Team | Eight contract-clarity corrections. See change log below. No architectural decisions changed. |

### v1.1 Change Log

Each change is listed with the sections affected, the specific correction made, and its implication for RTL and verification.

---

#### Change 1 — Address diagram corrected (§2.3)

**What changed:** The ASCII address-layout diagram had `BANK_SEL` and `BANK_ADDR` in the wrong order. The original diagram placed `BANK_ADDR` in the lowest bits and `BANK_SEL` above it. The committed Option A formula (`bank_sel = addr[BANK_SEL_BITS-1:0]`) places `BANK_SEL` in the lowest bits. The diagram now matches the formula.

Corrected layout:
```
[ Unused/Upper | BANK_ADDR | BANK_SEL ]
  high bits       mid bits    low bits
```

**Implication:** Any RTL or testbench written from the original diagram would have computed the wrong bank index and wrong row address for every access. This was a silent correctness bug — the SRAM would be functional but every address would route to the wrong bank and wrong row.

---

#### Change 2 — Address interface explicitly declared word-addressed (§2.3, §4.1)

**What changed:** The original spec described `addr` as a "Byte address" in §4.1 but the address-mapping decode in §2.3 consumed all `ADDR_WIDTH` bits for bank selection and row selection with no byte-offset field. The term "Byte address" has been replaced with "Word address" in §4.1, and a clear statement added to §2.3: *"The interface is word-addressed. Each increment of `addr` by 1 addresses the next `DATA_WIDTH`-wide word. There are no byte-offset bits."*

**Implication:** Testbenches that were constructing byte-offset addresses would have presented unexpected bank/row combinations. With word addressing, `addr = N` always refers to word N across the full array. Sub-word granularity is achieved only through `strobe`. The `ADDR_WIDTH` parameter description in §2.1 was updated to say "Word-address width" accordingly.

---

#### Change 3 — PP0 Verilog address slice corrected (§5.2)

**What changed:** The PP0 pseudocode read `grant_pkt.addr[BANK_ADDR_BITS-1:0]` to extract the bank row address. For Option A layout (BANK_SEL in the lowest bits), the correct field is `addr[BANK_SEL_BITS + BANK_ADDR_BITS - 1 : BANK_SEL_BITS]`. The code now reads:

```verilog
pp0_bank_addr <= grant_pkt.addr[BANK_SEL_BITS + BANK_ADDR_BITS - 1 : BANK_SEL_BITS];
```

A comment cross-references §2.3 for the rationale.

**Implication:** The original slice would have presented BANK_SEL bits (and part of BANK_ADDR) as the SRAM row address, causing every bank access to silently hit the wrong row. This is a direct consequence of Change 1 (the diagram inconsistency) and would have been a hard-to-diagnose functional bug in RTL simulation.

---

#### Change 4 — Out-of-range error condition redefined (§9.1)

**What changed:** The original condition was `BANK_ADDR >= BANK_DEPTH`. This condition is **unreachable**: `BANK_ADDR_BITS = $clog2(BANK_DEPTH)` with BANK_DEPTH a power of 2, so the field can represent at most BANK_DEPTH − 1. The new definition is:

```
addr_oob = | addr[ADDR_WIDTH-1 : BANK_SEL_BITS + BANK_ADDR_BITS]
```

An out-of-range address is one where the upper unused bits are non-zero. When `ADDR_WIDTH == BANK_SEL_BITS + BANK_ADDR_BITS` (the default), `addr_oob` is permanently `0` and the error path is never active. The §9.1 note explains this explicitly, and the PP1 pseudocode in §5.2 now includes the concrete formula as a comment.

**Implication:** As written in v1.0, the error path was dead code — `addr_oob` could never fire — making all the error-path logic (response generation with `err=1`, SRAM suppression) unreachable and untestable. With the corrected definition, the path is active only when `ADDR_WIDTH` is set wider than the minimum, which gives system integrators meaningful error detection when they expose a larger address space.

---

#### Change 5 — In-order response guarantee stated explicitly (§4.5, new subsection)

**What changed:** A new subsection §4.5 "Response Ordering and Completeness Guarantees" was added. It states: *"Responses are returned to each port in request-issue order (FIFO order). The per-port FIFO structure and head-of-line stall policy together guarantee that a port never receives response N+1 before response N."*

**Implication:** Without this statement, verification engineers had to infer the ordering guarantee from the microarchitecture rather than from the interface contract. A scoreboard or protocol checker built on the assumption of in-order completion would have had no spec text to cite. Now it is a binding contract: if a future microarchitectural change (e.g., MSHR promotion) would break in-order ordering, the spec change must be explicit.

---

#### Change 6 — Write response completeness stated explicitly (§4.5, new subsection)

**What changed:** §4.5 also states: *"Every accepted write request generates exactly one response packet. Fire-and-forget writes are not supported. The requestor must consume all response packets."*

**Implication:** Without this, a requestor could legally ignore write responses (treating them as optional ACKs), which would eventually fill and stall the response queue, leading to self-induced deadlock. Making it a binding contract means verification can assert that write response count equals write request count, and system designers know to size response-side buffering to account for write ACKs.

---

#### Change 7 — Backpressure isolation invariant made prominent (§8, section intro)

**What changed:** A one-sentence summary was added at the top of §8: *"Key isolation invariant: A slow consumer on port P stalls only port P. No other port is affected unless it happens to be contending for the same bank as P's blocked requests."*

**Implication:** This was already implied by the §8.2 "Key consequence" paragraph but appeared after the full propagation chain. The upfront statement makes the most important property of the backpressure model immediately visible, which reduces misreading of the chain description.

---

#### Change 8 — Latency table parameterized (§13.2)

**What changed:** The read and write latency entries in Table 13.2 previously stated flat cycle counts (3 and 2) without noting their dependence on `PIPELINE_STAGES`. They now read:

| Path | Cycles | Notes |
|---|---|---|
| Read latency (no stall) | `PIPELINE_STAGES + 1` | **3 cycles at default PIPELINE_STAGES=2** |
| Write latency (no stall) | `PIPELINE_STAGES` | **2 cycles at default PIPELINE_STAGES=2** |

**Implication:** Anyone instantiating the block with a non-default `PIPELINE_STAGES` (e.g., 1 for a low-latency variant or 3–4 for a slower technology) would have used the wrong latency in their timing budgets or testbench scoreboard timers. The general formula makes the dependency explicit and allows the scoreboard to parameterize its expected completion cycle.

---

## Appendix A: Interface Signal Naming Convention

All signals follow the pattern:

```
<block>_<direction>_<signal>

Examples:
  req_port_valid      — valid from requestor port to request queue
  req_port_ready      — ready from request queue back to requestor port
  arb_grant_valid     — valid from arbiter grant output
  arb_grant_port      — port ID from arbiter grant output
  bank_req_addr       — address presented to bank SRAM
  bank_rsp_data       — read data from bank SRAM
  rsp_port_valid      — valid from response queue to requestor
  rsp_port_ready      — ready from requestor to response queue
```

## Appendix B: Module Hierarchy (Planned)

```
banked_sram_ctrl (top)
├── req_fifo        [NUM_REQ_PORTS instances] — Synchronous FIFO, QUEUE_DEPTH
├── per_bank_arb    [NUM_BANKS instances]     — Round-robin arbiter, NUM_REQ_PORTS inputs
├── bank_scheduler  [NUM_BANKS instances]     — Conflict check, pipeline issue
├── sram_array      [NUM_BANKS instances]     — SRAM behavioral/macro
├── rsp_mux                                   — Route bank outputs to port queues
├── rsp_fifo        [NUM_REQ_PORTS instances] — Synchronous FIFO, QUEUE_DEPTH
└── perf_counters                             — Counter CSRs, status read port
```

## Appendix C: Scope Summary Table

| Feature | v1.0 Status | Notes |
|---|---|---|
| Banked SRAM, parameterized | **In Scope** | Core deliverable |
| NUM_BANKS, BANK_DEPTH, DATA_WIDTH, ADDR_WIDTH parameters | **In Scope** | All must be parameters |
| NUM_REQ_PORTS (2 or 4) | **In Scope** | 4 is default |
| Per-port request FIFO | **In Scope** | QUEUE_DEPTH entries |
| Per-port response FIFO | **In Scope** | QUEUE_DEPTH entries |
| Round-robin per-bank arbiter | **In Scope** | Single `priority_ptr` per bank |
| Per-port head-of-line conflict stall | **In Scope** | Explicit decision, Section 7 |
| 2-stage pipeline (PP0, PP1) | **In Scope** | PIPELINE_STAGES=2 default |
| Byte-enable strobe | **In Scope** | Full STROBE_WIDTH support |
| Out-of-range address error | **In Scope** | Returns err=1 response; active only when ADDR_WIDTH > min |
| Performance counters | **In Scope** | Per-bank, per-port, CSR read port |
| Single clock domain | **In Scope** | No CDC in v1.0 |
| Prefetcher | **Out of Scope** | Deferred to v1.1 |
| MSHR / OOO completion | **Stretch Goal** | v1.1 if bottleneck proven |
| Row-buffer hit simulation | **Out of Scope** | DRAM-specific, not applicable |
| Weighted round-robin | **Out of Scope** | No QoS requirement in v1.0 |
| ECC (SECDED) | **Out of Scope** | ASIC hardening future work |
| Multi-clock / CDC | **Out of Scope** | v1.0 is single-clock |
# Appendix D: Performance Counter CSR Read Port

## D.1 Interface Signals

| Signal | Width | Direction | Description |
|---|---|---|---|
| `csr_req` | 1 | IN | Read strobe. Asserted for one cycle to request a counter value. |
| `csr_addr` | `$clog2(NUM_COUNTERS)` | IN | Counter index. See §D.2 for decoding. |
| `csr_rdata` | 32 | OUT | Counter value. Valid in the cycle **after** `csr_req`. |
| `csr_ack` | 1 | OUT | Asserted when `csr_rdata` is valid (registered read). |

## D.2 Address Map

NUM_COUNTERS is defined as:

```verilog
localparam int NUM_COUNTERS = (2 * NUM_REQ_PORTS)                     // req_count + rsp_count
                            + (NUM_BANKS * NUM_REQ_PORTS)             // conflict_count
                            + NUM_REQ_PORTS                           // queue_full_count
                            + NUM_BANKS;                              // idle_count
```

| Address Range | Counter | Flattening Formula |
|---|---|---|
| `0 … NUM_REQ_PORTS-1` | `req_count[port]` | `base = 0` |
| `NUM_REQ_PORTS … 2*NUM_REQ_PORTS-1` | `rsp_count[port]` | `base = NUM_REQ_PORTS` |
| `2*NUM_REQ_PORTS … 2*NUM_REQ_PORTS + (NUM_BANKS*NUM_REQ_PORTS) - 1` | `conflict_count[bank][port]` | `base = 2*NUM_REQ_PORTS + bank*NUM_REQ_PORTS + port` |
| `… + NUM_REQ_PORTS` | `queue_full_count[port]` | `base = 2*NUM_REQ_PORTS + NUM_BANKS*NUM_REQ_PORTS` |
| `… + NUM_BANKS` | `idle_count[bank]` | `base = 2*NUM_REQ_PORTS + NUM_BANKS*NUM_REQ_PORTS + NUM_REQ_PORTS` |

## D.3 Timing and Behavior

- **Read-only:** Writes to `csr_addr` are ignored (no decode).
- **Registered read:** `csr_rdata` returns the counter value one cycle after `csr_req` is sampled high.
- **Saturating:** All counters clamp at `32'hFFFF_FFFF` and do not wrap.
- **Clear on reset:** All counters reset to `0` with `rst_n`.
- **Non-intrusive:** The CSR port does **not** participate in request/response arbitration. It is a passive status window.
