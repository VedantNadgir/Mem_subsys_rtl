# Memory Subsystem RTL

RTL implementation of a banked SRAM memory subsystem written in SystemVerilog.

The project is focused on RTL design, verification, linting, and synthesis using open-source ASIC tooling.

---

## Repository Structure

```text
Mem_Subsystem_RTL/
├── banked_sram_ctrl/
│   ├── rtl/
│   ├── sim/
│   ├── verif/
│   ├── constraints/
│   └── docs/
├── pdk/
├── pdk_tools/
├── Resources/
├── setup.sh
├── setup_sky130.sh
└── makefile
```

---

## Tools Used

### Simulation

**Verilator**

Used for cycle-accurate RTL simulation.

---

### Waveform Viewing

**WaveTrace**

VSCode extension used for viewing generated VCD waveform files.

---

### Linting

**Verible**

Used for:

* RTL linting
* Style checking
* Formatting

---

### Synthesis

**Yosys**

Used for RTL synthesis.

Use Case:

* Technology mapping
* ABC optimization
* Gate-level netlist generation

---

## Process Design Kit (PDK)

### SkyWater SKY130

Open-source 130nm CMOS process technology.

Used together with Yosys for technology mapping.

---

### Standard Cell Library

**sky130_fd_sc_hd**

High-density standard cell library.

The project setup automatically generates Liberty timing models from the SkyWater JSON timing database.

Generated Liberty:

```text
pdk/sky130_fd_sc_hd/generated_libs/
└── sky130_fd_sc_hd__tt_025C_1v80.lib
```

Current project synthesis target:

```text
TT Corner
25°C
1.80V
```

---

## Setup

Clone repository:

```bash
git clone https://github.com/VedantNadgir/Mem_subsys_rtl.git
cd Mem_subsys_rtl
```

Run environment setup:

```bash
./setup.sh
```

This installs:

* Verilator
* Verible
* Yosys
* Python dependencies

Generate Sky130 Liberty files:

```bash
./setup_sky130.sh
```

---

## Build System

Top-level commands:

```bash
make help
make setup
make lint
make format
make sim
make regress
make synth
make area
make netlist
make clean
```

---

## Simulation Structure

```text
sim/
├── makefile
├── config.mk
├── filelist.f
├── tb/
├── logs/
└── waves/
```

### config.mk

Simulation configuration variables.

Examples:

```make
TOP
TRACE
SEED
TIMEOUT
```

---

### filelist.f

RTL source file list used by Verilator.

---

### tb/

Contains future testbench infrastructure.

---

### logs/

Simulation logs.

---

### waves/

Generated VCD waveform files.

---

## Current Status

Implemented:

* Project structure
* RTL hierarchy
* Root build system
* Simulation infrastructure
* Verible lint integration
* Verible formatting integration
* Sky130 library setup
* Liberty generation flow
* Yosys integration preparation

Planned:

* Directed testbench
* Regression framework
* Synthesis scripts
* Area reporting
* Technology-mapped netlist generation
* Gate-level verification

---

## Notes

The repository currently focuses on RTL development and infrastructure setup.

Verification, synthesis automation, and physical-design-oriented flows will be expanded incrementally as the project matures.
