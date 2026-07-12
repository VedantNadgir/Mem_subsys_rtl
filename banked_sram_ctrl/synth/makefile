###############################################################################
# Banked SRAM Controller — Synthesis Build Engine
#
# Called by:
#   - Top makefile (ROOT/makefile) via 'make synth', 'make synth_all',
#     'make synth_unit'
#
# Stage 3 scope:
#   - synth.ys now emits stat checkpoints at HIERARCHY / PRE_OPT /
#     POST_OPT / POST_TECHMAP.
#   - 'report' target is real: runs parse_report.py against the log
#     produced by 'synth' and writes reports/<module>_report.txt.
#
# Still NOT implemented (later stages):
#   - synth_all / synth_unit looping over all modules   (Stage 4)
#   - summary.txt / summary.csv                          (Stage 4)
#   - gate-level simulation                               (Stage 5)
#
# Never invoked directly by the user with anything other than these
# documented targets.
###############################################################################

.DEFAULT_GOAL := help

include config.mk

MODULE ?= $(DEFAULT_MODULE)

.PHONY: help check dirs clean synth synth_all synth_unit report gls

# --- Help --------------------------------------------------------
help:
	@echo ""
	@echo "===================================================="
	@echo "  Synthesis Build Engine (Stage 3 — reports)"
	@echo "===================================================="
	@echo ""
	@echo "Environment:"
	@echo "  make check                    Validate tools, liberty, RTL paths"
	@echo "  make dirs                     Create generated/reports/logs/netlists/gls"
	@echo "  make clean                    Remove all generated synthesis artifacts"
	@echo ""
	@echo "Synthesis:"
	@echo "  make synth MODULE=req_fifo    Generate .ys script + run Yosys (real)"
	@echo "  make synth_unit               Placeholder — implemented in Stage 4"
	@echo "  make synth_all                Placeholder — implemented in Stage 4"
	@echo ""
	@echo "Reporting:"
	@echo "  make report MODULE=req_fifo   Parse log into reports/req_fifo_report.txt (real)"
	@echo ""
	@echo "GLS (Stage 5 placeholder):"
	@echo "  make gls MODULE=req_fifo      Run gate-level simulation"
	@echo ""
	@echo "Known modules:"
	@echo "  $(MODULES)"
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
	@mkdir -p $(GLS_DIR)
	@echo "[PASS] output directories ready:"
	@echo "        $(GEN_DIR)"
	@echo "        $(REPORT_DIR)"
	@echo "        $(LOG_DIR)"
	@echo "        $(NETLIST_DIR)"
	@echo "        $(GLS_DIR)"

# --- Clean -----------------------------------------------------
clean:
	@echo "[CLEAN] Removing generated synthesis artifacts..."
	@rm -rf $(GEN_DIR) $(REPORT_DIR) $(LOG_DIR) $(NETLIST_DIR) $(GLS_DIR)
	@echo "[DONE]"

# --- Module name validation helper ------------------------------
# Not a target: used inline by synth/report/gls via $(call ...)
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

# --- Synthesis: all/unit sweeps (Stage 4 placeholder) ---------------
synth_unit: check
	@echo "[INFO] Environment validated for unit-level synthesis."
	@echo "[INFO] Per-module synthesis loop is implemented in Stage 4."
	@echo "[INFO] Until then, use: make synth MODULE=<module_name>"

synth_all: check
	@echo "[INFO] Environment validated for full synthesis sweep."
	@echo "[INFO] Full synthesis loop is implemented in Stage 4."
	@echo "[INFO] Until then, use: make synth MODULE=<module_name>"

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
	@$(PYTHON3) $(PARSE_SCRIPT) \
		--module $(MODULE) \
		--log $(LOG_DIR)/$(MODULE).log \
		--netlist $(NETLIST_DIR)/$(MODULE)_netlist.v \
		--report-out $(REPORT_DIR)/$(MODULE)_report.txt
	@echo ""
	@echo "Result: REPORT OK"
	@echo "  Report: $(REPORT_DIR)/$(MODULE)_report.txt"

# --- GLS (Stage 5 placeholder) -----------------------------------
gls: check
	$(call require_module,gls)
	@test -f $(NETLIST_DIR)/$(MODULE)_netlist.v || \
		{ echo "[ERROR] Netlist not found: $(NETLIST_DIR)/$(MODULE)_netlist.v"; \
		  echo "        Run 'make synth MODULE=$(MODULE)' first."; \
		  exit 1; }
	@echo "[INFO] Netlist found: $(NETLIST_DIR)/$(MODULE)_netlist.v"
	@echo "[INFO] Gate-level simulation is implemented in Stage 5."