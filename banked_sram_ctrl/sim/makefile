###############################################################################
# Banked SRAM Controller Simulation
###############################################################################

.DEFAULT_GOAL := help

include config.mk

###############################################################################
# Derived Variables
###############################################################################

TB_UNIT_DIR   := ../verif/unit
TB_SYSTEM_DIR := ../verif/system

TB_FILE := $(TB_UNIT_DIR)/tb_$(TEST).sv
TOP     := tb_$(TEST)

#Targets
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
	@echo "[BUILD] $(TEST)"
	@mkdir -p $(LOG_DIR)
	@mkdir -p $(WAVE_DIR)

	$(VERILATOR) \
		--binary \
		--sv \
		--trace \
		-f filelist.f \
		$(TB_FILE) \
		--top-module $(TOP)

###############################################################################
# Run
###############################################################################

run:
	@echo ""
	@echo "[RUN] $(TEST)"
	@./$(BUILD_DIR)/V$(TOP) \
		> $(LOG_DIR)/$(TEST).log 2>&1

	@echo ""
	@echo "[DONE]"
	@echo "Log  : $(LOG_DIR)/$(TEST).log"
	@echo "Wave : $(WAVE_DIR)/$(TEST).vcd"

###############################################################################
# Sim
###############################################################################

sim: build run

###############################################################################
# Smoke
###############################################################################

smoke:
	@$(MAKE) sim TEST=req_fifo

###############################################################################
# Regression
###############################################################################

regress:
	@echo ""
	@echo "[REGRESSION]"
	@echo ""

	@$(MAKE) sim TEST=req_fifo
	@$(MAKE) sim TEST=rsp_fifo
	@$(MAKE) sim TEST=sram_array
# 	@$(MAKE) sim TEST=rsp_mux
	@$(MAKE) sim TEST=per_bank_arb
# 	@$(MAKE) sim TEST=bank_scheduler
# 	@$(MAKE) sim TEST=perf_counter

###############################################################################
# Waveforms
###############################################################################

wave:
	@code waves/$(TEST).vcd

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