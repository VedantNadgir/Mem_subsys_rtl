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

UNIT_TB := $(wildcard $(TB_UNIT_DIR)/tb_*.sv)
UNIT_TESTS := $(patsubst tb_%.sv,%,$(notdir $(UNIT_TB)))

###############################################################################
# Targets
###############################################################################

.PHONY: \
	help \
	build \
	run \
	sim \
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
	@echo "make build TEST=req_fifo"
	@echo "make run   TEST=req_fifo"
	@echo "make sim   TEST=req_fifo"
	@echo "make regress"
	@echo "make wave TEST=req_fifo"
	@echo "make clean"
	@echo ""

###############################################################################
# Build
###############################################################################

build:
	@test -f $(TB_FILE) || \
		{ echo ""; \
		  echo "[ERROR] Testbench not found:"; \
		  echo "        $(TB_FILE)"; \
		  echo ""; \
		  exit 1; }

	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(LOG_DIR)
	@mkdir -p $(WAVE_DIR)

	@echo ""
	@echo "=================================================="
	@echo "Building $(TOP)"
	@echo "=================================================="

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
	@test -f $(BUILD_DIR)/V$(TOP) || \
		{ echo ""; \
		  echo "[ERROR] Executable not found."; \
		  echo "Run: make build TEST=$(TEST)"; \
		  echo ""; \
		  exit 1; }

	@echo ""
	@echo "=================================================="
	@echo "Running $(TOP)"
	@echo "=================================================="

	@./$(BUILD_DIR)/V$(TOP) \
		> $(LOG_DIR)/$(TEST).log 2>&1 || \
		{ echo ""; \
		  echo "[FAILED]"; \
		  echo "See $(LOG_DIR)/$(TEST).log"; \
		  exit 1; }

	@echo ""
	@echo "[PASS]"
	@echo ""
	@echo "Log  : $(LOG_DIR)/$(TEST).log"

###############################################################################
# Build + Run
###############################################################################

sim: build run

###############################################################################
# Regression
###############################################################################

regress:
	@echo ""
	@echo "=================================================="
	@echo "Running Unit Regression"
	@echo "=================================================="
	@echo ""

	@for t in $(UNIT_TESTS); do \
		echo "===== $$t ====="; \
		$(MAKE) sim TEST=$$t || exit $$?; \
		echo ""; \
	done

	@echo "=================================================="
	@echo "Regression Complete"
	@echo "=================================================="

###############################################################################
# Wave
###############################################################################

wave:
	@test -f $(WAVE_DIR)/$(TEST).vcd || \
		{ echo ""; \
		  echo "Waveform not found."; \
		  exit 1; }

	code $(WAVE_DIR)/$(TEST).vcd

###############################################################################
# Clean
###############################################################################

clean:
	@echo "[CLEAN]"

	@rm -rf $(BUILD_DIR)
	@rm -rf $(LOG_DIR)
	@rm -rf $(WAVE_DIR)

	@mkdir -p $(LOG_DIR)
	@mkdir -p $(WAVE_DIR)

	@echo "[DONE]"