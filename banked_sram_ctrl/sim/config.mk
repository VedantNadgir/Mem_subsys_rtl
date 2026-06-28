###############################################################################
# Simulation Configuration
###############################################################################

# Simulator
VERILATOR := verilator

# Build directories
BUILD_DIR := obj_dir
LOG_DIR   := logs
WAVE_DIR  := waves

# Default test
TEST ?= banked_sram_ctrl

# Waveform generation
TRACE ?= 1

# Random seed
SEED ?= 1

# Verilator compile flags
VERILATOR_FLAGS := \
	--binary \
	--sv \
	-Wall \
	--timing \
	--assert

# Trace option
ifeq ($(TRACE),1)
VERILATOR_FLAGS += --trace
endif