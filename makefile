###############################################################################
# Mem_Subsystem_RTL
#
# Top-Level Project Makefile
#
# Responsibilities:
#   - Environment setup
#   - Linting
#   - Formatting
#   - Synthesis delegation
#   - Simulation delegation
#   - Project cleanup
#
# DOES NOT:
#   - Know simulator flags
#   - Know testbench details
#   - Know waveform locations
#
###############################################################################

.DEFAULT_GOAL := help

ROOT_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

SIM_DIR  := $(ROOT_DIR)banked_sram_ctrl/sim
RTL_DIR  := $(ROOT_DIR)banked_sram_ctrl/rtl

###############################################################################
# Help
###############################################################################

.PHONY: \
	help \
	setup \
	lint \
	format \
	fmt \
	sim \
	regress \
	synth \
	area \
	netlist \
	clean

help:
	@echo ""
	@echo "===================================================="
	@echo " Mem_Subsystem_RTL Build System"
	@echo "===================================================="
	@echo ""
	@echo "Setup:"
	@echo "  make setup       Install tools and Sky130 library"
	@echo ""
	@echo "Code Quality:"
	@echo "  make lint        Run Verible lint"
	@echo "  make format      Format RTL sources"
	@echo ""
	@echo "Simulation:"
	@echo "  make sim         Delegate to sim Makefile"
	@echo "  make regress     Delegate regression suite"
	@echo ""
	@echo "Synthesis:"
	@echo "  make synth       Run synthesis flow"
	@echo "  make area        Generate area report"
	@echo "  make netlist     Generate mapped netlist"
	@echo ""
	@echo "Maintenance:"
	@echo "  make clean       Remove generated artifacts"
	@echo ""
	@echo "===================================================="

###############################################################################
# Setup
###############################################################################

.PHONY: setup

setup:
	@echo "[SETUP] Running environment setup..."
	@bash ./setup.sh
	@bash ./setup_sky130.sh

###############################################################################
# Lint
###############################################################################

.PHONY: lint

lint:
	@echo "[LINT] Running Verible..."
	@find $(RTL_DIR) \
		-type f \
		\( -name "*.sv" -o -name "*.v" \) \
		-exec verible-verilog-lint {} +

###############################################################################
# Format
###############################################################################

.PHONY: format fmt

format:
	@echo "[FORMAT] Formatting RTL..."
	@find $(RTL_DIR) \
		-type f \
		\( -name "*.sv" -o -name "*.v" \) \
		-exec verible-verilog-format --inplace {} +

fmt: format

###############################################################################
# Simulation Delegation
###############################################################################

.PHONY: sim

sim:
	@$(MAKE) -C $(SIM_DIR) sim TEST=$(TEST)

.PHONY: regress

regress:
	@$(MAKE) -C $(SIM_DIR) regress

###############################################################################
# Synthesis Placeholders
###############################################################################

.PHONY: synth

synth:
	@$(MAKE) -C banked_sram_ctrl/synth synth

.PHONY: area

area:
	@echo ""
	@echo "[INFO] Area reporting not implemented yet."
	@echo ""

.PHONY: netlist

netlist:
	@echo ""
	@echo "[INFO] Netlist generation not implemented yet."
	@echo ""

###############################################################################
# Clean
###############################################################################

.PHONY: clean

clean:
	@echo "[CLEAN] Removing generated files..."

	@if [ -f "$(SIM_DIR)/Makefile" ] || [ -f "$(SIM_DIR)/makefile" ]; then \
		$(MAKE) -C $(SIM_DIR) clean; \
	fi

	@if [ -f banked_sram_ctrl/synth/makefile ]; then \
		$(MAKE) -C banked_sram_ctrl/synth clean; \
	fi

	rm -rf "$(SIM_DIR)/logs"
	rm -rf "$(SIM_DIR)/waves"

	@rm -rf build
	@rm -rf reports
	@rm -rf logs
	@rm -rf pdk

	@echo "[DONE]"