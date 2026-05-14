# RTL Idioms and Fundamental Hardware Communication Patterns

These are not “advanced optimizations.”  
These are the foundational patterns that almost every serious RTL memory subsystem relies on.

If these concepts are weak:
- caches break
- pipelines deadlock
- FIFOs corrupt data
- interfaces silently lose transactions

The three most important idioms to master early are:

1. Valid/ready handshakes
2. FIFOs with Gray-code pointers
3. Round-robin arbitration

---

# 1. Valid/Ready Handshake

---

# 1.1 Why Handshakes Exist

Hardware blocks rarely operate at identical speeds.

Example:
- CPU may generate requests every cycle
- cache may stall on misses
- DRAM may take 50+ cycles

A handshake protocol allows:
- flow control
- backpressure
- pipelining
- safe transfer timing

without global stall wiring.

---

# 1.2 Core Signals

A valid/ready interface usually contains:

| Signal | Driven By | Meaning |
|---|---|---|
| `valid` | producer | "I have data available" |
| `ready` | consumer | "I can accept data" |
| `data` | producer | payload |

---

# 1.3 Transfer Rule

Data transfer occurs ONLY when:

```text
valid == 1 AND ready == 1
```

This is the single most important rule.

---

# 1.4 Producer and Consumer Roles

## Producer
Controls:
- `valid`
- `data`

Producer says:
> "Here is meaningful data."

---

## Consumer
Controls:
- `ready`

Consumer says:
> "I can accept data right now."

---

# 1.5 Timing Example

Cycle-by-cycle:

| Cycle | valid | ready | transfer? |
|---|---|---|---|
| 0 | 1 | 0 | no |
| 1 | 1 | 0 | no |
| 2 | 1 | 1 | YES |
| 3 | 0 | 1 | no |

Data transfers only in cycle 2.

---

# 1.6 The Hold Rule

Critical rule:

> Once `valid=1`, it must stay asserted until handshake completes.

Incorrect:

```verilog
if(new_data)
    valid <= 1;
else
    valid <= 0;
```

Danger:
- data disappears before consumer accepts it

Correct behavior:
- hold `valid`
- hold data stable
until:
```text
valid && ready
```

---

# 1.7 Data Stability Rule

While:

```text
valid = 1
ready = 0
```

ALL payload signals must remain stable.

Including:
- address
- write enable
- data
- metadata

Violation causes silent corruption.

---

# 1.8 Backpressure

Suppose consumer busy.

Then:
```text
ready = 0
```

Producer must stop advancing.

This propagates backward through pipeline.

Example:

```text
DRAM busy
-> cache ready=0
-> CPU stalled
```

This is called backpressure propagation.

---

# 1.9 Pipeline Decoupling

Handshakes decouple stages.

Without handshakes:
- every stage tightly synchronized

With handshakes:
- each stage operates independently

This improves:
- modularity
- throughput
- timing closure

---

# 1.10 Combinational Loop Problem

Bad design:

```text
ready depends on valid
valid depends on ready
```

Creates:
- combinational loops
- unstable timing
- synthesis problems

---

## Example

```verilog
assign ready = !valid;
assign valid = request && ready;
```

This is dangerous.

---

# 1.11 Solution to Combinational Loops

Register one side.

Common solutions:
- register `ready`
- skid buffer
- pipeline stage insertion

---

# 1.12 Skid Buffers

Small temporary buffers used to:
- absorb stalls
- break combinational paths
- improve timing

Usually:
- 1-entry or 2-entry

Extremely common in AXI pipelines.

---

# 1.13 AXI-Style Philosophy

AXI-stream uses:
- independent channels
- valid/ready everywhere

Reason:
- scalable pipelining
- modular interconnects
- clean backpressure handling

---

# 1.14 Why This Matters for Memory Systems

Caches constantly stall.

Examples:
- cache miss
- refill
- writeback
- MSHR full
- DRAM busy

Without proper handshakes:
- requests drop
- deadlock occurs
- data corrupts

---

# 2. FIFO with Gray-Code Pointers

---

# 2.1 What a FIFO Is

FIFO = First-In First-Out queue.

Behavior:

```text
first data in
-> first data out
```

Used everywhere in hardware:
- request queues
- response queues
- CDC bridges
- buffering
- arbitration queues

---

# 2.2 FIFO Components

Core FIFO pieces:

| Component | Purpose |
|---|---|
| memory array | stores entries |
| write pointer | insertion location |
| read pointer | removal location |
| full logic | prevent overwrite |
| empty logic | prevent underflow |

---

# 2.3 Synchronous FIFO

Read and write use same clock.

Simpler:
- no CDC problems
- easier verification

---

# 2.4 Asynchronous FIFO

Read and write use different clocks.

Example:

| Domain | Clock |
|---|---|
| CPU | 1 GHz |
| DDR PHY | 400 MHz |

Now:
- pointers cross clock domains
- metastability becomes dangerous

---

# 2.5 Clock Domain Crossing (CDC)

Signals crossing domains may violate:
- setup time
- hold time

Flip-flops can enter metastable states.

Meaning:
- undefined intermediate voltage
- unpredictable logic result

---

# 2.6 Why Binary Counters Fail

Binary pointers change multiple bits simultaneously.

Example:

```text
0111 -> 1000
```

Four bits change.

If receiving domain samples mid-transition:

```text
1111
0000
1010
```

Invalid values may appear.

This corrupts FIFO status logic.

---

# 2.7 Gray Code

Gray code changes exactly ONE bit per transition.

Example:

| Binary | Gray |
|---|---|
| 000 | 000 |
| 001 | 001 |
| 010 | 011 |
| 011 | 010 |

Only one bit changes.

---

# 2.8 Why Gray Code Works

Even if metastability occurs:
- only one bit uncertain

This dramatically reduces incorrect pointer interpretation.

---

# 2.9 Gray-Code FIFO Flow

Typical process:

## Write Domain
1. increment binary write pointer
2. convert to gray code
3. synchronize gray pointer into read domain

---

## Read Domain
1. increment binary read pointer
2. convert to gray code
3. synchronize into write domain

---

# 2.10 Synchronizers

Cross-domain signals use:

```text
FF -> FF
```

two-flop synchronizers.

Purpose:
- reduce metastability propagation probability

---

# 2.11 FIFO Empty Detection

FIFO empty when:

```text
read_ptr == synchronized_write_ptr
```

Meaning:
- nothing left to read

---

# 2.12 FIFO Full Detection

Full detection more complicated.

Need to distinguish:
- wrapped full
- empty

Usually:
- compare pointers
- invert upper bits

---

# 2.13 Why FIFOs Matter in Memory Systems

Used for:
- outstanding memory requests
- write buffers
- cache refill queues
- AXI channels
- DMA buffering

Memory systems are fundamentally queue-heavy.

---

# 2.14 Common FIFO Bugs

## Off-by-One Errors
Classic pointer mistakes.

---

## Full/Empty Ambiguity
Pointers equal in both cases.

---

## CDC Corruption
Unsynchronized pointer crossing.

---

## Sim/Silicon Mismatch
Incorrect nonblocking assignment usage.

---

# 2.15 Cliff Cummings FIFO Paper

Important lessons from the paper:

- use Gray-code synchronized pointers
- separate binary and Gray counters
- synchronize Gray pointers only
- use two-flop synchronizers
- never compare unsynchronized pointers directly

This paper is considered foundational RTL reading.

---

# 3. Round-Robin Arbiter

---

# 3.1 Why Arbitration Exists

Multiple clients compete for shared resource.

Examples:
- IFU
- LSU
- DMA
- prefetcher

Only one may access memory at a time.

Arbiter decides who wins.

---

# 3.2 Fixed Priority Arbiter

Example priority:

```text
CPU > DMA > Prefetcher
```

Simple.

Problem:
- starvation

Low-priority request may never execute.

---

# 3.3 Round-Robin Goal

Provide fairness.

After servicing one requester:
- move priority to next requester

Example:

```text
A -> B -> C -> D -> A
```

---

# 3.4 Rotating Priority Pointer

Arbiter stores:

```text
last_grant
```

Next arbitration starts after it.

---

# 3.5 Example

Suppose:

```text
last_grant = B
```

Current requests:

```text
A=1 B=1 C=1 D=0
```

Search order becomes:

```text
C -> D -> A -> B
```

C wins.

---

# 3.6 Fairness Property

No requester permanently blocked.

Important for:
- throughput stability
- QoS
- avoiding starvation

---

# 3.7 Pointer-Based RTL Design

Simplest implementation:

```text
pointer tracks highest priority
```

Each grant:
```text
pointer <= granted_requester + 1
```

---

# 3.8 Rotate + Priority + Rotate Architecture

Used in optimized arbiters.

Steps:

1. rotate requests
2. apply fixed-priority logic
3. rotate grant back

Efficient hardware structure.

---

# 3.9 Arbiter Timing Concerns

Large arbiters create:
- long combinational paths

Especially:
- 16+
- 32+
- 64 requester systems

Solutions:
- pipelining
- hierarchical arbitration

---

# 3.10 Starvation vs Fairness Tradeoff

Round-robin:
- fair
- predictable

Fixed priority:
- lower latency for critical clients

Real systems sometimes combine both.

---

# 3.11 Arbitration in Memory Systems

Arbiters appear everywhere:

| Resource | Competing Clients |
|---|---|
| cache port | IFU vs LSU |
| DRAM bank | multiple requests |
| AXI interconnect | many masters |
| writeback queue | multiple producers |

---

# 3.12 Common Arbiter Bugs

## Double Grant
Two requesters granted simultaneously.

---

## No Grant
Valid request ignored.

---

## Pointer Corruption
Priority rotation breaks.

---

## Starvation
Rotation logic incorrect.

---

# 4. Relationship Between These Concepts

These three concepts work together constantly.

Example memory path:

```text
CPU
  |
valid/ready
  |
Arbiter
  |
FIFO
  |
Memory Controller
  |
DRAM
```

---

# 5. Why These Idioms Matter So Much

Most hardware bugs are NOT:
- arithmetic mistakes
- logic-gate mistakes

They are:
- timing bugs
- dropped transactions
- deadlocks
- CDC corruption
- backpressure failures
- queue corruption

These RTL idioms exist to solve exactly those problems.

---

# 6. Final Mental Model

## Valid/Ready
Controls safe movement of transactions.

---

## FIFO
Buffers and decouples timing.

---

## Arbiter
Controls fair shared-resource access.

---

Together they form the backbone of:
- cache controllers
- AXI fabrics
- NoCs
- DRAM controllers
- DMA engines
- modern microarchitecture RTL