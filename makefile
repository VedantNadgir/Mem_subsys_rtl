###############################################################################
# Mem_Subsystem_RTL — Top-Level Makefile
#
# User entry point. Delegates all simulation work to sim/makefile.
# Never defines simulator flags or testbench details.
###############################################################################

.DEFAULT_GOAL := help

ROOT_DIR := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
SIM_DIR  := $(ROOT_DIR)banked_sram_ctrl/sim
RTL_DIR  := $(ROOT_DIR)banked_sram_ctrl/rtl

# --- Help ------------------------------------------------------
.PHONY: help
help:
	@echo ""
	@echo "===================================================="
	@echo "  Mem_Subsystem_RTL Build System"
	@echo "===================================================="
	@echo ""
	@echo "Setup:"
	@echo "  make setup              Install tools and Sky130"
	@echo ""
	@echo "Code Quality:"
	@echo "  make lint               Run Verible lint"
	@echo "  make format             Format RTL sources"
	@echo ""
	@echo "Unit Simulation:"
	@echo "  make unit TEST=req_fifo                  (default params)"
	@echo "  make unit TEST=req_fifo PARAMS=\\\"NUM_BANKS=2 NUM_REQ_PORTS=2\\\""
	@echo ""
	@echo "  Available unit tests:"
	@echo "    bank_scheduler, banked_sram_ctrl, per_bank_arb,"
	@echo "    perf_counter, req_fifo, rsp_fifo, rsp_mux, sram_array"
	@echo ""
	@echo "System Simulation:"
	@echo "  make sys                                   (all 5 tests)"
	@echo "  make sys PARAMS=\\\"NUM_BANKS=8 NUM_REQ_PORTS=8\\\""
	@echo ""
	@echo "Regression:"
	@echo "  make regress            Full parameter sweep (12 combos)"
	@echo ""
	@echo "Synthesis:"
	@echo "  make synth              Run synthesis"
	@echo ""
	@echo "Maintenance:"
	@echo "  make clean              Remove all build artifacts"
	@echo ""
	@echo "===================================================="

# --- Setup -----------------------------------------------------
.PHONY: setup
setup:
	@echo "[SETUP] Running environment setup..."
	@bash ./setup.sh
	@bash ./setup_sky130.sh

# --- Lint ------------------------------------------------------
.PHONY: lint
lint:
	@command -v verible-verilog-lint >/dev/null 2>&1 || \
		{ echo "[ERROR] verible-verilog-lint not found"; exit 1; }
	@echo "[LINT] Running Verible..."
	@find $(RTL_DIR) -type f \( -name "*.sv" -o -name "*.v" \) \
		-exec verible-verilog-lint {} + || true

# --- Format ----------------------------------------------------
.PHONY: format fmt
format:
	@echo "[FORMAT] Formatting RTL..."
	@find $(RTL_DIR) -type f \( -name "*.sv" -o -name "*.v" \) \
		-exec verible-verilog-format --inplace {} +
fmt: format

# --- Unit Simulation (delegate to sim/) ------------------------
.PHONY: unit
unit:
	@$(MAKE) -C $(SIM_DIR) sim TEST_TYPE=unit TEST=$(TEST) PARAMS="$(PARAMS)"

# --- System Simulation (delegate to verif/system/) -------------
.PHONY: sys
sys:
	@$(MAKE) -C banked_sram_ctrl/verif/system sim PARAMS="$(PARAMS)"

# --- Regression (delegate to sim/) -----------------------------
.PHONY: regress
regress:
	@$(MAKE) -C $(SIM_DIR) regress

# --- Synthesis -------------------------------------------------
.PHONY: synth
synth:
	@$(MAKE) -C banked_sram_ctrl/synth synth

# --- Clean -----------------------------------------------------
.PHONY: clean
clean:
	@echo "[CLEAN] Cleaning all generated files..."

	@$(MAKE) -C $(SIM_DIR) clean 2>/dev/null || true
	@$(MAKE) -C banked_sram_ctrl/synth clean 2>/dev/null || true
	@$(MAKE) -C banked_sram_ctrl/verif/system clean 2>/dev/null || true

	@rm -rf build reports logs pdk
	@echo "[DONE]"