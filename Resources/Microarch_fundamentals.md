# Memory Subsystem — Microarchitecture & RTL Design Notes

---

# 1. What Actually Matters From the SRAM / Memory 
The important lessons from SRAM papers and memory-system literature are:

- Latency is real and must be modeled explicitly
- Reads/writes are not instantaneous
- Memory interfaces are contracts
- Pipeline timing determines performance
- Backpressure and concurrency dominate controller complexity
- State management becomes the hard part

---

# 2. SRAM Behavioral Model

At RTL level, SRAM is viewed as a synchronous storage macro with a strict timing interface.

Typical SRAM signals:

| Signal | Purpose |
|---|---|
| `clk` | Clock |
| `addr` | Address |
| `wdata` | Write data |
| `rdata` | Read data |
| `we` | Write enable |
| `ce` | Chip enable |
| `be` | Byte enable |
| `valid` | Output valid (sometimes implicit) |

---

# 3. Synchronous vs Asynchronous SRAM

## Asynchronous Read SRAM

Output changes immediately after address changes.

```text
addr changes -> data changes shortly after
```

### Characteristics
- Combinational read path
- Faster apparent access
- Harder timing closure
- Rare in FPGA BRAMs (Block RAM's)

---

## Synchronous Read SRAM

Address is registered first.

```text
Cycle N:
    address presented

Cycle N+1:
    data becomes valid
```

This is the standard FPGA/block RAM behavior.

### Key Consequence

Your controller must explicitly track latency.

You cannot write:

```verilog
assign data = mem[addr];
```

and assume hardware behaves like simulation.

---

# 4. Read Latency Tracking

Suppose SRAM latency = 2 cycles.

Then:

| Cycle | Action |
|---|---|
| 0 | send address |
| 1 | SRAM processing |
| 2 | data valid |

Your controller must remember:
- which request was issued
- when data should return
- where to send returned data

This is commonly implemented with:
- counters
- pipeline registers
- shift-register valid tracking

Example idea:

```text
req_valid -> delay_1 -> delay_2 -> response_valid
```

---

# 5. SRAM Interface Timing Requirements

Memory macros assume:
- address stable before clock edge
- write data stable before edge
- control signals stable before edge

Meaning:
- combinational glitches are dangerous
- inputs are usually registered before SRAM

---

# 6. Byte Enables

Byte enable allows partial writes.

Example:
- 32-bit word
- only update lower byte

```text
be = 0001
```

Without byte enables:
- read-modify-write required

Caches and CPUs rely heavily on byte masking.

---

# 7. Cache Pipeline Fundamentals

A cache controller is fundamentally a pipeline.

Typical stages:

| Stage | Operation |
|---|---|
| Address receive | CPU request accepted |
| Tag lookup | Compare tags |
| Hit/miss detect | Determine result |
| Data access | Read SRAM |
| Response | Return data |

---

# 8. Cache Hit vs Cache Miss

## Cache Hit

Data exists locally.

Fast path:
```text
CPU -> cache -> response
```

Usually:
- 1–3 cycles

---

## Cache Miss

Data absent.

Slow path:
```text
CPU -> cache -> memory controller -> DRAM
```

Could take:
- tens to hundreds of cycles

This creates pipeline stalls.

---

# 9. Pipeline Stall Behavior

When a miss occurs:
- CPU cannot proceed
- dependent instructions must wait

Controller usually asserts:

```text
stall = 1
```

or

```text
ready = 0
```

to stop upstream pipeline advancement.

---

# 10. Replay vs Stall

Two common strategies:

## Stall-Based

Freeze pipeline until response returns.

Simpler.

---

## Replay-Based

Instruction retries later.

More complex but higher performance.

Most educational projects use stalling first.

---

# 11. Write Policies

---

## Write-Through

Every write updates:
- cache
- lower memory

### Advantages
- simpler coherence
- easier recovery

### Disadvantages
- huge bandwidth cost

---

## Write-Back

Writes update cache only.

DRAM updated on eviction.

Requires:
- dirty bits
- eviction FSM
- writeback handling

Most realistic systems use this.

---

# 12. Dirty Bit Management

Each line stores:

| Bit | Meaning |
|---|---|
| valid | line contains useful data |
| dirty | line modified since DRAM copy |

Before eviction:

```text
if dirty:
    write back first
```

---

# 13. Cache Metadata Packing

Real designs pack metadata together.

Instead of:

```verilog
tag_array[index]
valid_array[index]
dirty_array[index]
```

they use:

```verilog
struct packed {
    logic valid;
    logic dirty;
    logic [TAG_W-1:0] tag;
}
```

Advantages:
- cleaner SRAM storage
- simpler indexing
- easier synthesis
- fewer ports

This idiom appears heavily in CVA6 and Rocket Chip.

---

# 14. Cache State Machines

Most cache controllers are FSM-heavy.

Typical states:

| State | Purpose |
|---|---|
| IDLE | waiting |
| LOOKUP | checking tags |
| MISS | miss detected |
| EVICT | write dirty line |
| REFILL | fetch new line |
| RESPOND | return data |

The complexity comes from:
- overlapping requests
- variable latency
- backpressure

---

# 15. Miss Status Holding Registers (MSHRs)

This is one of the most important concepts.

Without MSHRs:
- cache blocks during miss

With MSHRs:
- multiple misses can exist simultaneously

MSHR stores:
- outstanding miss address
- requester info
- pending operations
- refill tracking

---

## Why MSHRs Matter

Without them:

```text
miss occurs
-> entire cache stalls
```

With them:

```text
miss #1 pending
miss #2 can still issue
```

This creates memory-level parallelism.

---

# 16. Non-Blocking Cache

A cache with MSHRs is called:

> Non-blocking cache

Meaning:
- hits may proceed while misses are outstanding

This dramatically improves throughput.

---

# 17. Why MSHRs Are Hard

Problems:
- duplicate misses to same line
- refill ordering
- merging requests
- eviction races
- response routing

This is why educational projects often delay MSHRs until later.

---

# 18. Pipeline Backpressure

Suppose cache is busy handling a miss.

Then:
```text
cache.ready = 0
```

Upstream pipeline must stop issuing requests.

This propagates backward:

```text
memory busy
-> cache stalls
-> CPU stalls
```

This is called backpressure propagation.

---

# 19. Valid/Ready Handshake

Core rule:

```text
transfer happens only when:

valid == 1 AND ready == 1
```

---

## Signal Ownership

| Signal | Controlled By |
|---|---|
| valid | producer |
| ready | consumer |

---

# 20. The Hold Problem

Critical RTL rule:

> Once `valid` becomes 1, it must remain asserted until handshake completes.

Incorrect:

```verilog
if(valid && ready)
    valid <= 0;
else
    valid <= request;
```

Danger:
- transaction disappears if ready delayed

Correct logic keeps data stable until accepted.

---

# 21. Data Stability Requirement

While:

```text
valid = 1
ready = 0
```

the producer must hold:
- data
- address
- control signals

stable.

Otherwise silent corruption occurs.

---

# 22. The Combinational Loop Problem

Bad design:

```text
ready depends on valid
valid depends on ready
```

This creates:
- zero-cycle loops
- synthesis instability
- timing disasters

---

## Solution

Register one side.

Usually:
- register `ready`
or
- insert skid buffer

---

# 23. Skid Buffers

Small 1-entry buffers used to:
- break combinational paths
- absorb stalls
- improve timing closure

Very common in high-frequency RTL.

---

# 24. FIFO Fundamentals

FIFO = First-In First-Out queue.

Used for:
- decoupling stages
- burst absorption
- latency hiding
- CDC buffering

---

# 25. FIFO Components

Typical FIFO contains:

| Component | Purpose |
|---|---|
| memory array | data storage |
| write pointer | insertion location |
| read pointer | removal location |
| full logic | prevent overwrite |
| empty logic | prevent underflow |

---

# 26. Synchronous vs Asynchronous FIFO

## Synchronous FIFO
- same clock domain

Simpler.

---

## Asynchronous FIFO
- separate read/write clocks

Requires:
- synchronizers
- gray-code pointers

---

# 27. Why Binary Pointers Fail in CDC

Suppose pointer changes:

```text
0111 -> 1000
```

Multiple bits flip simultaneously.

Clock-domain crossing may sample intermediate invalid value:

```text
0000
1111
1010
```

This causes corruption.

---

# 28. Gray Code

Gray code changes only one bit per transition.

Example:

```text
000 -> 001 -> 011 -> 010
```

Only one bit changes each step.

This minimizes metastability risk.

---

# 29. Gray-Code FIFO Concept

Steps:
1. local binary pointer increments
2. convert to gray code
3. synchronize gray code across domain
4. convert back if necessary

Used for:
- safe full detection
- safe empty detection

---

# 30. FIFO Full and Empty Logic

## Empty

```text
read_ptr == synchronized_write_ptr
```

---

## Full

More complex:
- compare pointers with MSB inversion

Needed to distinguish:
- wrapped-around full
- empty

---

# 31. Round-Robin Arbitration

Multiple requesters compete for resource.

Goal:
- fairness
- avoid starvation

---

# 32. Fixed Priority Problem

Example:

```text
CPU > DMA > Prefetcher
```

If CPU constantly active:
- others never serviced

This is starvation.

---

# 33. Round-Robin Solution

Priority rotates after each grant.

Example:

```text
A -> B -> C -> D -> A
```

Fair over time.

---

# 34. Rotating Priority Pointer

Arbiter stores:
- last granted requester

Next arbitration starts after it.

---

# 35. Arbiter Implementation Styles

## Pointer-Based

Simple FSM pointer.

Good for:
- educational RTL

---

## Rotate + Priority + Rotate

Used in optimized designs.

Steps:
1. rotate requests
2. apply fixed-priority arbiter
3. rotate grant back

Efficient hardware structure.

---

# 36. Memory Controller Scheduling

Controller chooses:
- which request issues next
- which bank activates
- when precharge occurs

Goals:
- maximize row-buffer hits
- reduce latency
- maintain fairness

---

# 37. Row Buffer Locality

DRAM row activation expensive.

Best case:
```text
same row repeatedly accessed
```

This avoids reopening rows.

---

# 38. Bank Conflicts

Two requests target same bank:
- one must wait

This reduces throughput.

Address mapping matters heavily.

---

# 39. IFU vs LSU Interfaces

Rocket Chip/CVA6 separate:

| Unit | Purpose |
|---|---|
| IFU | instruction fetch |
| LSU | load/store operations |

Important distinction:
- IFU mostly reads
- LSU performs reads/writes

LSU interfaces are much more complex.

---

# 40. IFU Characteristics

Instruction fetch behavior:
- mostly sequential
- predictable
- high locality

Often easier to cache/prefetch.

---

# 41. LSU Characteristics

Load/store unit handles:
- random accesses
- stores
- hazards
- alignment
- forwarding

Much harder than IFU.

---

# 42. Cache Boundary Interfaces

Most modern RTL uses:
- valid/ready
- request/response channels

Instead of:
```text
stall signals everywhere
```

This modularizes the design.

---

# 43. Common RTL Failure Modes

## Dropped Transactions
Cause:
- invalid valid/ready handling

---

## Deadlock
Cause:
- circular waiting

---

## Livelock
Cause:
- activity without progress

---

## CDC Corruption
Cause:
- unsynchronized signals

---

## Tag/Data Mismatch
Cause:
- pipeline timing bugs

---

# 44. What Actually Matters Before Writing RTL

You do NOT need:
- transistor-level SRAM design
- DDR PHY internals
- physical layout
- analog timing closure

You DO need:
- latency tracking
- pipeline control
- FSM design
- arbitration
- backpressure handling
- valid/ready correctness
- FIFO correctness
- metadata management
- cache miss handling

---