###############################################################################
# Banked SRAM Controller Simulation
###############################################################################

.DEFAULT_GOAL := help

include config.mk

.PHONY: \
	help \
	build \
	run \
	sim \
	smoke \
	regress \
	wave \
	clean

###############################################################################
# Help
###############################################################################

help:
	@echo ""
	@echo "Simulation Targets"
	@echo "------------------"
	@echo "make build    Compile simulation"
	@echo "make run      Run simulation"
	@echo "make sim      Build + run"
	@echo "make smoke    Quick smoke test"
	@echo "make regress  Run regression suite"
	@echo "make wave     Open waveform"
	@echo "make clean    Remove artifacts"
	@echo ""

###############################################################################
# Build
###############################################################################

build:
	@echo ""
	@echo "[INFO] Testbench not implemented yet."
	@echo "[INFO] Build target is currently a placeholder."
	@echo ""

###############################################################################
# Run
###############################################################################

run:
	@echo ""
	@echo "[INFO] Simulation not implemented yet."
	@echo ""

###############################################################################
# Sim
###############################################################################

sim: build run

###############################################################################
# Smoke
###############################################################################

smoke:
	@echo ""
	@echo "[INFO] Smoke test not implemented yet."
	@echo ""

###############################################################################
# Regression
###############################################################################

regress:
	@echo ""
	@echo "[INFO] Regression suite not implemented yet."
	@echo ""

###############################################################################
# Waveforms
###############################################################################

wave:
	@echo ""
	@echo "[INFO] No waveform generated."
	@echo ""

###############################################################################
# Clean
###############################################################################

clean:
	@echo "[CLEAN] Simulation artifacts"

	@rm -rf $(BUILD_DIR)
	@rm -rf $(LOG_DIR)
	@rm -rf $(WAVE_DIR)

	@mkdir -p $(LOG_DIR)
	@mkdir -p $(WAVE_DIR)

	@echo "[DONE]"