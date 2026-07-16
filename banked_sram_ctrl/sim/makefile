###############################################################################
# Banked SRAM Controller — Unified Simulation Build Engine
#
# Called by:
#   • Top makefile (ROOT/makefile) via 'make unit', 'make sys', 'make regress'
#   • System makefile (verif/system/makefile) for system test builds
#
# Never invoked directly by the user.
###############################################################################

.DEFAULT_GOAL := help

include config.mk

# --- Derived paths ---------------------------------------------
ifeq ($(TEST_TYPE),unit)
  TB_FILE := $(TB_UNIT)/tb_$(TEST).sv
  TOP     := tb_$(TEST)
else ifeq ($(TEST_TYPE),system)
  TB_FILE := $(TB_SYSTEM)/tb_sys.sv
  TOP     := tb_sys
else
  $(error TEST_TYPE must be 'unit' or 'system')
endif

# File list (RTL sources)
FILELIST := $(ROOT_DIR)/filelist.f

# Build output per combo
ifeq ($(PARAMS),)
  COMBO_DIR := $(BUILD_DIR)/default
else
  # Hash PARAMS into a short dir name: "NUM_BANKS=2_NUM_REQ_PORTS=2"
  COMBO_NAME := $(shell echo "$(PARAMS)" | tr ' ' '_' | tr '=' '_')
  COMBO_DIR  := $(BUILD_DIR)/$(COMBO_NAME)
endif

COMBO_BUILD := $(abspath $(COMBO_DIR)/$(TEST_TYPE))
EXECUTABLE  := $(COMBO_BUILD)/V$(TOP)
LOG_FILE    := $(COMBO_BUILD)/logs/$(TEST).log
WAVE_FILE   := $(COMBO_BUILD)/waves/$(TEST).vcd
# --- Unit test discovery ---------------------------------------
UNIT_TBS    := $(wildcard $(TB_UNIT)/tb_*.sv)
UNIT_TESTS  := $(patsubst tb_%.sv,%,$(notdir $(UNIT_TBS)))

# --- System test discovery -------------------------------------
# System tests are test-task names inside env.sv (all run together in one sim)
# We track only the top-level tb_sys, not individual test-tasks
SYSTEM_TEST := system_all

# --- Targets ---------------------------------------------------
.PHONY: help build run sim wave clean regress regress_unit regress_system

help:
	@echo ""
	@echo "Unified Sim Build Engine (called by top-level makefile)"
	@echo "-------------------------------------------------------"
	@echo "make build   TEST_TYPE=unit   TEST=req_fifo  [PARAMS=...]"
	@echo "make build   TEST_TYPE=system TEST=smoke     [PARAMS=...]"
	@echo "make run     TEST_TYPE=...    TEST=..."
	@echo "make sim     (build + run)"
	@echo "make wave    TEST_TYPE=...    TEST=..."
	@echo "make regress (full parameter sweep)"
	@echo "make clean"
	@echo ""

# --- Build -----------------------------------------------------
build:
	@test -f $(TB_FILE) || \
		{ echo "[ERROR] Testbench not found: $(TB_FILE)"; exit 1; }

	@mkdir -p $(COMBO_BUILD)
	@mkdir -p $(COMBO_BUILD)/logs
	@mkdir -p $(COMBO_BUILD)/waves

	@echo ""
	@echo "=== Building $(TEST_TYPE)/$(TEST) ==="
	@echo "  Params : $(PARAMS)"
	@echo "  Output : $(COMBO_BUILD)"

ifeq ($(TEST_TYPE),unit)
	$(VERILATOR) --binary $(VL_FLAGS) $(PARAM_FLAGS) -I$(TB_SYSTEM) \
		-f $(FILELIST) $(TB_FILE) \
		--top-module $(TOP) \
		-Mdir $(COMBO_BUILD)
else
	$(VERILATOR) --cc --exe --main --build $(VL_FLAGS) $(PARAM_FLAGS) -I$(TB_SYSTEM) \
		-f $(FILELIST) $(TB_FILE) \
		--top-module $(TOP) \
		-Mdir $(COMBO_BUILD)
endif

# --- Run -------------------------------------------------------
run:
	@test -f $(EXECUTABLE) || \
		{ echo "[ERROR] Build first: make build TEST_TYPE=$(TEST_TYPE) TEST=$(TEST)"; exit 1; }

	@echo ""
	@echo "=== Running $(TEST_TYPE)/$(TEST) ==="

	@cd $(COMBO_BUILD) && ./V$(TOP) > $(LOG_FILE) 2>&1; \
		EXIT_CODE=$$?; \
		if [ $$EXIT_CODE -ne 0 ]; then \
			echo "Result: FAILED"; \
			echo "Log: $(LOG_FILE)"; \
			exit 1; \
		fi; \
		if grep -Eq '(\[SB FAIL\]|[0-9]+ TEST\(S\) FAILED|Errors: [1-9][0-9]*|[1-9][0-9]* ERRORS)' $(LOG_FILE); then \
			echo "Result: FAILED"; \
			echo "Log: $(LOG_FILE)"; \
			exit 1; \
		else \
			echo "Result: ALL PASSED"; \
			echo "Log: $(LOG_FILE)"; \
			exit 0; \
		fi

# --- Build + Run -----------------------------------------------
sim: build run

# --- Waveform view ---------------------------------------------
wave:
	@test -f $(WAVE_FILE) || \
		{ echo "[ERROR] Waveform not found: $(WAVE_FILE)"; exit 1; }
	gtkwave $(WAVE_FILE) &

# --- Regression ------------------------------------------------
regress:
	@echo ""
	@echo "=================================================="
	@echo "  FULL REGRESSION — Parameter Sweep"
	@echo "  Combos : 12"
	@echo "  Unit tests per combo : $(words $(UNIT_TESTS))"
	@echo "  System tests per combo : 1 (all 5 tasks)"
	@echo "=================================================="
	@echo ""

	@rm -f regress_report.txt
	@echo "Regression Report" > regress_report.txt
	@echo "Generated: $$(date)" >> regress_report.txt
	@echo "========================================" >> regress_report.txt
	@echo "" >> regress_report.txt

	@TOTAL_PASS=0; TOTAL_FAIL=0; \
	\
	set -- $(REGRESS_COMBOS); \
	while [ $$# -gt 0 ]; do \
		NAME=$$1; NB=$$2; BD=$$3; DW=$$4; AW=$$5; NP=$$6; QD=$$7; IW=$$8; \
		shift 8; \
		P="NUM_BANKS=$$NB BANK_DEPTH=$$BD DATA_WIDTH=$$DW ADDR_WIDTH=$$AW NUM_REQ_PORTS=$$NP QUEUE_DEPTH=$$QD ID_WIDTH=$$IW"; \
		echo ""; \
		echo "=== Combo: $$NAME ==="; \
		echo "  $$P"; \
		echo "--- Combo: $$NAME | $$P ---" >> regress_report.txt; \
		COMBO_PASS=0; COMBO_FAIL=0; \
		\
		for t in $(UNIT_TESTS); do \
			printf "  [UNIT] %-30s " "$$t ..."; \
			if $(MAKE) -s -C $(ROOT_DIR) sim TEST_TYPE=unit TEST=$$t PARAMS="$$P" > /dev/null 2>&1; then \
				echo "PASS"; \
				echo "  [PASS] unit/$$t" >> regress_report.txt; \
				COMBO_PASS=$$((COMBO_PASS + 1)); \
			else \
				echo "FAIL"; \
				echo "  [FAIL] unit/$$t" >> regress_report.txt; \
				COMBO_FAIL=$$((COMBO_FAIL + 1)); \
			fi; \
		done; \
		\
		printf "  [SYS ] %-30s " "tb_sys ..."; \
		if $(MAKE) -s -C $(ROOT_DIR) sim TEST_TYPE=system TEST=$(SYSTEM_TEST) PARAMS="$$P" > /dev/null 2>&1; then \
			echo "PASS"; \
			echo "  [PASS] system/tb_sys" >> regress_report.txt; \
			COMBO_PASS=$$((COMBO_PASS + 1)); \
		else \
			echo "FAIL"; \
			echo "  [FAIL] system/tb_sys" >> regress_report.txt; \
			COMBO_FAIL=$$((COMBO_FAIL + 1)); \
		fi; \
		\
		echo "  Combo result: $$COMBO_PASS passed, $$COMBO_FAIL failed"; \
		echo "  Result: $$COMBO_PASS/$$((COMBO_PASS + COMBO_FAIL))" >> regress_report.txt; \
		echo "" >> regress_report.txt; \
		TOTAL_PASS=$$((TOTAL_PASS + COMBO_PASS)); \
		TOTAL_FAIL=$$((TOTAL_FAIL + COMBO_FAIL)); \
	done; \
	\
	echo "" >> regress_report.txt; \
	echo "========================================" >> regress_report.txt; \
	echo "FINAL: $$TOTAL_PASS passed, $$TOTAL_FAIL failed" >> regress_report.txt; \
	echo "========================================" >> regress_report.txt; \
	echo ""; \
	echo "=================================================="; \
	echo "  REGRESSION COMPLETE"; \
	echo "  Total: $$TOTAL_PASS passed, $$TOTAL_FAIL failed"; \
	echo "  Report: $(ROOT_DIR)/regress_report.txt"; \
	echo "=================================================="

# --- Clean -----------------------------------------------------
clean:
	@echo "[CLEAN] Removing $(BUILD_DIR)..."
	@rm -rf $(BUILD_DIR)
	@rm -f regress_report.txt
	@echo "[DONE]"