###############################################################################
# Banked SRAM Controller — Synthesis Build Engine
#
# Called by:
#   - Top makefile (ROOT/makefile) via 'make synth', 'make synth_all',
#     'make synth_unit'
#
# Stage 4 scope:
#   - synth_unit  : real. Loops synth+report over UNIT_MODULES.
#   - synth_all   : real. Loops synth+report over MODULES (unit + system).
#   - Both regenerate reports/summary.txt and reports/summary.csv from
#     whatever per-module reports exist in reports/ afterward.
#
# Still NOT implemented (later stages):
#   - gate-level simulation (Stage 5)
#
# Never invoked directly by the user with anything other than these
# documented targets.
###############################################################################

.DEFAULT_GOAL := help

include config.mk

MODULE ?= $(DEFAULT_MODULE)

.PHONY: help check dirs clean synth synth_all synth_unit report summary

# --- Help --------------------------------------------------------
help:
	@echo ""
	@echo "===================================================="
	@echo "  Synthesis Build Engine (Stage 4 — full sweeps + summary)"
	@echo "===================================================="
	@echo ""
	@echo "Environment:"
	@echo "  make check                    Validate tools, liberty, RTL paths"
	@echo "  make dirs                     Create generated/reports/logs/netlists"
	@echo "  make clean                    Remove all generated synthesis artifacts"
	@echo ""
	@echo "Synthesis:"
	@echo "  make synth MODULE=req_fifo    Generate .ys script + run Yosys for one module"
	@echo "  make synth_unit               Synthesize + report all unit sub-modules"
	@echo "  make synth_all                Synthesize + report every module (unit + system)"
	@echo ""
	@echo "Reporting:"
	@echo "  make report MODULE=req_fifo   Parse log into reports/req_fifo_report.txt"
	@echo ""
	@echo "Unit modules:"
	@echo "  $(UNIT_MODULES)"
	@echo "System module:"
	@echo "  $(SYSTEM_MODULE)"
	@echo "===================================================="

# --- Environment check ---------------------------------------------
check:
	@echo "[CHECK] Verifying synthesis environment..."

	@command -v $(YOSYS) >/dev/null 2>&1 || \
		{ echo "[ERROR] yosys not found on PATH."; \
		  echo "        Run top-level 'make setup' first."; \
		  exit 1; }
	@echo "[PASS] yosys found: $$(command -v $(YOSYS))"

	@command -v $(IVERILOG) >/dev/null 2>&1 || \
		{ echo "[ERROR] iverilog not found on PATH."; \
		  echo "        Install Icarus Verilog first."; \
		  exit 1; }
	@echo "[PASS] iverilog found: $$(command -v $(IVERILOG))"

	@command -v $(PYTHON3) >/dev/null 2>&1 || \
		{ echo "[ERROR] python3 not found on PATH."; \
		  echo "        parse_report.py requires python3 to run."; \
		  exit 1; }
	@echo "[PASS] python3 found: $$(command -v $(PYTHON3))"

	@test -d $(RTL_DIR) || \
		{ echo "[ERROR] RTL directory not found: $(RTL_DIR)"; \
		  exit 1; }
	@echo "[PASS] RTL directory found: $(RTL_DIR)"

	@test -f $(LIBERTY_FILE) || \
		{ echo "[ERROR] Sky130 liberty file not found:"; \
		  echo "        $(LIBERTY_FILE)"; \
		  echo "        Run top-level 'make setup' to generate it via setup_sky130.sh"; \
		  exit 1; }
	@echo "[PASS] Liberty file found: $(LIBERTY_FILE)"

	@$(MAKE) --no-print-directory dirs

# --- Directory contract ---------------------------------------------
dirs:
	@mkdir -p $(GEN_DIR)
	@mkdir -p $(REPORT_DIR)
	@mkdir -p $(LOG_DIR)
	@mkdir -p $(NETLIST_DIR)
	@echo "[PASS] output directories ready:"
	@echo "        $(GEN_DIR)"
	@echo "        $(REPORT_DIR)"
	@echo "        $(LOG_DIR)"
	@echo "        $(NETLIST_DIR)"

# --- Clean -----------------------------------------------------
clean:
	@echo "[CLEAN] Removing generated synthesis artifacts..."
	@rm -rf $(GEN_DIR) $(REPORT_DIR) $(LOG_DIR) $(NETLIST_DIR)
	@echo "[DONE]"

# --- Module name validation helper ------------------------------
# Not a target: used inline by synth/report via $(call ...)
define require_module
	@if [ -z "$(MODULE)" ]; then \
		echo "[ERROR] MODULE not specified. Usage: make $(1) MODULE=req_fifo"; \
		exit 1; \
	fi
	@case " $(MODULES) " in \
		*" $(MODULE) "*) ;; \
		*) echo "[ERROR] Unknown module: $(MODULE)"; \
		   echo "        Known modules: $(MODULES)"; \
		   exit 1 ;; \
	esac
endef

# --- Synthesis: single module (real implementation) ------------------
synth: check
	$(call require_module,synth)
	@test -f synth.ys || \
		{ echo "[ERROR] Synthesis template not found: synth.ys"; \
		  echo "        Expected at: $(ROOT_DIR)synth.ys"; \
		  exit 1; }
	@echo ""
	@echo "=== Generating Yosys script for $(MODULE) ==="
	@sed \
		-e 's#@MODULE@#$(MODULE)#g' \
		-e 's#@LIBERTY@#$(LIBERTY_FILE)#g' \
		-e 's#@NETLIST@#$(NETLIST_DIR)/$(MODULE)_netlist.v#g' \
		-e 's#@PERIOD@#$(PERIOD)#g' \
		synth.ys > $(GEN_DIR)/synth_$(MODULE).ys
	@echo "  Wrote: $(GEN_DIR)/synth_$(MODULE).ys"
	@echo ""
	@echo "=== Running Yosys synthesis for $(MODULE) ==="
	@$(YOSYS) -s $(GEN_DIR)/synth_$(MODULE).ys > $(LOG_DIR)/$(MODULE).log 2>&1; \
		EXIT_CODE=$$?; \
		if [ $$EXIT_CODE -ne 0 ]; then \
			echo "[ERROR] Yosys synthesis failed for $(MODULE) (exit code $$EXIT_CODE)."; \
			echo "        Log: $(LOG_DIR)/$(MODULE).log"; \
			echo "        Last 20 lines of log:"; \
			tail -n 20 $(LOG_DIR)/$(MODULE).log; \
			exit 1; \
		fi
	@test -s $(NETLIST_DIR)/$(MODULE)_netlist.v || \
		{ echo "[ERROR] Yosys reported success but no netlist was produced:"; \
		  echo "        $(NETLIST_DIR)/$(MODULE)_netlist.v"; \
		  echo "        Check log: $(LOG_DIR)/$(MODULE).log"; \
		  exit 1; }
	@echo "Result: SYNTHESIS OK"
	@echo "  Netlist: $(NETLIST_DIR)/$(MODULE)_netlist.v"
	@echo "  Log:     $(LOG_DIR)/$(MODULE).log"

# --- Synthesis: unit sweep (real implementation) ---------------------
synth_unit: check
	@echo ""
	@echo "=================================================="
	@echo "  Synthesizing UNIT modules: $(UNIT_MODULES)"
	@echo "=================================================="
	@PASS_COUNT=0; FAIL_COUNT=0; \
	for m in $(UNIT_MODULES); do \
		echo ""; \
		echo "--- Module: $$m ---"; \
		if $(MAKE) --no-print-directory -C $(ROOT_DIR) synth MODULE=$$m; then \
			if $(MAKE) --no-print-directory -C $(ROOT_DIR) report MODULE=$$m; then \
				PASS_COUNT=$$((PASS_COUNT + 1)); \
			else \
				echo "[FAIL] report generation failed for $$m"; \
				FAIL_COUNT=$$((FAIL_COUNT + 1)); \
			fi; \
		else \
			echo "[FAIL] synthesis failed for $$m"; \
			FAIL_COUNT=$$((FAIL_COUNT + 1)); \
		fi; \
	done; \
	echo ""; \
	echo "=== Unit synthesis sweep complete: $$PASS_COUNT passed, $$FAIL_COUNT failed ==="; \
	if [ $$FAIL_COUNT -gt 0 ]; then \
		echo "[ERROR] One or more modules failed. Summary not regenerated."; \
		exit 1; \
	fi
	@echo ""
	@echo "=== Generating summary from reports/ ==="
	@$(PYTHON3) $(PARSE_SCRIPT) summarize \
		--report-dir $(REPORT_DIR) \
		--csv-out $(REPORT_DIR)/summary.csv \
		--txt-out $(REPORT_DIR)/summary.txt
	@echo "Result: SYNTH_UNIT OK"
	@echo "  Summary: $(REPORT_DIR)/summary.txt"
	@echo "           $(REPORT_DIR)/summary.csv"

# --- Synthesis: full sweep (real implementation) ----------------------
synth_all: check
	@echo ""
	@echo "=================================================="
	@echo "  Synthesizing ALL modules: $(MODULES)"
	@echo "=================================================="
	@PASS_COUNT=0; FAIL_COUNT=0; \
	for m in $(MODULES); do \
		echo ""; \
		echo "--- Module: $$m ---"; \
		if $(MAKE) --no-print-directory -C $(ROOT_DIR) synth MODULE=$$m; then \
			if $(MAKE) --no-print-directory -C $(ROOT_DIR) report MODULE=$$m; then \
				PASS_COUNT=$$((PASS_COUNT + 1)); \
			else \
				echo "[FAIL] report generation failed for $$m"; \
				FAIL_COUNT=$$((FAIL_COUNT + 1)); \
			fi; \
		else \
			echo "[FAIL] synthesis failed for $$m"; \
			FAIL_COUNT=$$((FAIL_COUNT + 1)); \
		fi; \
	done; \
	echo ""; \
	echo "=== Full synthesis sweep complete: $$PASS_COUNT passed, $$FAIL_COUNT failed ==="; \
	if [ $$FAIL_COUNT -gt 0 ]; then \
		echo "[ERROR] One or more modules failed. Summary not regenerated."; \
		exit 1; \
	fi
	@echo ""
	@echo "=== Generating summary from reports/ ==="
	@$(PYTHON3) $(PARSE_SCRIPT) summarize \
		--report-dir $(REPORT_DIR) \
		--csv-out $(REPORT_DIR)/summary.csv \
		--txt-out $(REPORT_DIR)/summary.txt
	@echo "Result: SYNTH_ALL OK"
	@echo "  Summary: $(REPORT_DIR)/summary.txt"
	@echo "           $(REPORT_DIR)/summary.csv"

# --- Report (real implementation) -------------------------------
report: check
	$(call require_module,report)
	@test -f $(NETLIST_DIR)/$(MODULE)_netlist.v || \
		{ echo "[ERROR] Netlist not found: $(NETLIST_DIR)/$(MODULE)_netlist.v"; \
		  echo "        Run 'make synth MODULE=$(MODULE)' first."; \
		  exit 1; }
	@test -f $(LOG_DIR)/$(MODULE).log || \
		{ echo "[ERROR] Log not found: $(LOG_DIR)/$(MODULE).log"; \
		  echo "        Run 'make synth MODULE=$(MODULE)' first."; \
		  exit 1; }
	@test -f $(PARSE_SCRIPT) || \
		{ echo "[ERROR] parse_report.py not found: $(PARSE_SCRIPT)"; \
		  exit 1; }
	@echo ""
	@echo "=== Parsing report for $(MODULE) ==="
	@$(PYTHON3) $(PARSE_SCRIPT) report \
		--module $(MODULE) \
		--log $(LOG_DIR)/$(MODULE).log \
		--netlist $(NETLIST_DIR)/$(MODULE)_netlist.v \
		--report-out $(REPORT_DIR)/$(MODULE)_report.txt \
		--period $(PERIOD)
	@echo ""
	@echo "Result: REPORT OK"
	@echo "  Report: $(REPORT_DIR)/$(MODULE)_report.txt"

# --- Summary generation (standalone) -------------------------------
summary: check
	@echo ""
	@echo "=== Generating summary from reports/ ==="
	@$(PYTHON3) $(PARSE_SCRIPT) summarize \
		--report-dir $(REPORT_DIR) \
		--csv-out $(REPORT_DIR)/summary.csv \
		--txt-out $(REPORT_DIR)/summary.txt
	@echo "Result: SUMMARY OK"
	@echo "  Summary: $(REPORT_DIR)/summary.txt"
	@echo "           $(REPORT_DIR)/summary.csv"