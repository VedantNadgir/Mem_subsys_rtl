# Memory System Fundamentals  
*Preparation Notes for `mem_subsystem` Project*

---

# 1. Why Memory Systems Exist

Modern processors are much faster than main memory.  
If the CPU had to wait for DRAM every time it needed data, performance would collapse.

Memory systems exist to solve this **speed gap** by building a hierarchy:

| Level | Speed | Size | Cost/bit |
|---|---|---|---|
| Registers | Fastest | Tiny | Highest |
| L1 Cache | Very fast | Small | High |
| L2/L3 Cache | Medium | Larger | Medium |
| DRAM | Slow | Huge | Low |
| SSD/Disk | Very slow | Massive | Lowest |

The key idea:

> Frequently used data should stay in smaller, faster memories close to the CPU.

This is called the **memory hierarchy**.

---

# 2. Principle of Locality

Caches work because programs show predictable behavior.

## Temporal Locality
If data is used once, it will likely be used again soon.

Example:
```c
for(i=0;i<100;i++)
    sum += A[0];
```

`A[0]` is repeatedly reused.

---

## Spatial Locality
If one memory location is used, nearby addresses are likely used soon.

Example:
```c
for(i=0;i<100;i++)
    sum += A[i];
```

Array accesses are contiguous.

---

# 3. Cache Basics

A cache stores copies of data from lower memory levels.

When the CPU requests data:

- If data exists in cache → **cache hit**
- If not → **cache miss**

Misses are expensive because DRAM access latency is large.

---

# 4. Cache Organization

## Cache Line (Block)

Caches move data in chunks called **cache lines**.

Example:
- 64-byte cache line
- Accessing address `0x1000` may load bytes `0x1000–0x103F`

Reason:
Spatial locality.

---

## Address Breakdown

A memory address is divided into:

| Field | Purpose |
|---|---|
| Tag | Identifies which memory block |
| Index | Selects cache set |
| Offset | Selects byte inside line |

---

Example:

For a 32-bit address:
```text
| Tag | Index | Offset |
```

Offset depends on cache line size.

If line size = 64B:
```text
Offset bits = log2(64) = 6 bits
```

---

# 5. Types of Cache Mapping

## Direct-Mapped Cache

Each memory block maps to exactly one cache location.

### Pros
- Simple
- Fast

### Cons
- High conflict misses

---

## Fully Associative Cache

A block can go anywhere.

### Pros
- Lowest conflict misses

### Cons
- Expensive hardware
- Requires parallel tag comparison

---

## Set-Associative Cache

Compromise between both.

Example:
- 4-way set associative
- Each index has 4 possible slots

Most practical CPUs use this.

---

# 6. Cache Replacement Policies

When a set is full, one line must be evicted.

Common policies:

| Policy | Idea |
|---|---|
| LRU | Remove least recently used |
| FIFO | Remove oldest |
| Random | Random victim |

Real hardware often uses approximated LRU because true LRU is expensive.

---

# 7. Cache Writes

Reads are easier than writes.

For writes, the system must decide when lower memory updates happen.

---

## Write-Through

Every cache write immediately updates DRAM.

### Pros
- Simple consistency

### Cons
- High memory traffic

---

## Write-Back

Writes modify only cache first.

DRAM updated later when line is evicted.

### Pros
- Faster
- Lower bandwidth

### Cons
- Needs dirty bits
- More control complexity

Most modern systems use write-back caches.

---

# 8. Dirty Bit

Each cache line may have:

```text
dirty = 1
```

Meaning:
> Cache data differs from DRAM.

Before eviction:
- Dirty lines must be written back.

---

# 9. Cache Miss Types

Classic “3C” model:

| Type | Meaning |
|---|---|
| Compulsory | First access ever |
| Capacity | Cache too small |
| Conflict | Mapping collisions |

Understanding miss type is critical for optimization.

---

# 10. SRAM vs DRAM

## SRAM

Used for caches.

### Characteristics
- Very fast
- Large area
- Expensive
- No refresh needed

Built using cross-coupled inverters (typically 6T SRAM cell).

---

## DRAM

Used for main memory.

### Characteristics
- Dense
- Cheap
- Slower
- Requires refresh

Stores charge in capacitors.

---

# 11. SRAM Array Organization

An SRAM array consists of:

| Component | Purpose |
|---|---|
| Wordlines | Select rows |
| Bitlines | Carry data |
| Sense amplifiers | Detect stored value |
| Row decoder | Chooses row |
| Column mux | Chooses column |

Typical read flow:

1. Precharge bitlines
2. Activate wordline
3. Cell perturbs bitline
4. Sense amplifier detects value
5. Output data

---

# 12. DRAM Fundamentals

DRAM is organized into:

- Rows
- Columns
- Banks

Access flow:

1. Activate row
2. Row copied into row buffer
3. Read/write columns
4. Precharge bank

Important concept:

> DRAM accesses are fastest when repeatedly using the same open row.

This is called a **row buffer hit**.

---

# 13. DRAM Timing Terms

Important latency parameters:

| Term | Meaning |
|---|---|
| tRCD | Row-to-column delay |
| tCAS | Column access latency |
| tRP | Row precharge time |
| tRAS | Row active time |

Memory controllers schedule requests while obeying these constraints.

---

# 14. Memory Bandwidth vs Latency

## Latency
Time for one request to complete.

## Bandwidth
Amount of data transferred per second.

A system may have:
- High bandwidth
- But still high latency

Example:
DDR memory transfers huge amounts of data but initial access still takes many cycles.

---

# 15. Memory-Level Parallelism (MLP)

Modern CPUs issue multiple outstanding memory requests simultaneously.

Benefits:
- Hides DRAM latency
- Improves throughput

Requires:
- Miss Status Holding Registers (MSHRs)
- Non-blocking caches

---

# 16. Memory Controllers

The memory controller manages communication between:
- CPU/cache subsystem
- DRAM

Responsibilities:
- Request scheduling
- Refresh handling
- Bank management
- Timing enforcement
- Arbitration

This is the heart of most memory subsystem projects.

---

# 17. Arbitration

Multiple clients may request memory simultaneously:
- IFU
- LSU
- DMA
- Prefetcher

An arbiter decides who gets access.

Common schemes:

| Type | Property |
|---|---|
| Fixed priority | Simple but unfair |
| Round-robin | Fair |
| Weighted | QoS-aware |

Round-robin is commonly implemented in RTL projects.

---

# 18. FIFO Buffers

FIFOs decouple producer/consumer timing.

Used everywhere in memory systems:
- Request queues
- Response queues
- Clock domain crossing

Important concepts:
- Full/empty detection
- Gray-code pointers
- Synchronizers

---

# 19. Valid/Ready Handshake

Common RTL protocol.

Transfer occurs only when:

```text
valid == 1 AND ready == 1
```

Rules:
- Producer controls `valid`
- Consumer controls `ready`
- Data stable while valid asserted

This enables fully pipelined interfaces.

---

# 20. Throughput-Oriented Design

Memory systems prioritize:
- Sustained throughput
- Parallel requests
- Pipelining

Not just single-access latency.

Important techniques:
- Request queues
- Banking
- Burst transfers
- Out-of-order scheduling

---

# 21. Banking

Memory split into independent banks.

Benefits:
- Multiple simultaneous accesses
- Higher throughput

Problem:
- Bank conflicts

Good address mapping reduces conflicts.

---

# 22. Coherency (High-Level Intro)

In multicore systems:
- Multiple caches may store same data.

Cache coherence protocols maintain consistency.

Common protocols:
- MSI
- MESI
- MOESI

For a first memory subsystem project, usually only basic awareness is needed.

---

# 23. Prefetching

Hardware predicts future accesses and fetches data early.

Goal:
Hide latency before CPU requests data.

Simple prefetchers:
- Next-line prefetcher
- Stride prefetcher

Bad prefetching wastes bandwidth.

---

# 24. Performance Metrics

Important metrics:

| Metric | Meaning |
|---|---|
| Hit rate | Fraction of hits |
| Miss rate | Fraction of misses |
| Miss penalty | Cost of miss |
| AMAT | Average Memory Access Time |

Core formula:

```text
AMAT = Hit Time + Miss Rate × Miss Penalty
```

Lower AMAT = better memory system.

---

# 25. Key RTL Design Concerns

When implementing memory subsystems in RTL:

## Timing
- Avoid long combinational paths
- Pipeline aggressively

## Backpressure
- Handle stalls cleanly

## Deadlock
- Ensure forward progress

## Synchronization
- Handle clock crossings safely

## Verification
- Memory systems are corner-case heavy
