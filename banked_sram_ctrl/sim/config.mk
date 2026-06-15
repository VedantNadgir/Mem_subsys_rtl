###############################################################################
# Simulation Configuration
###############################################################################

# Verilator
VERILATOR := verilator

# Build outputs
BUILD_DIR := obj_dir
LOG_DIR   := logs
WAVE_DIR  := waves

# Waveform generation
TRACE ?= 1

# Randomization seed
SEED ?= 1

# Test selection
TEST ?= req_fifo