###############################################################################
# Banked SRAM Controller — Synthesis + GLS
#
# Targets:
#   make synth              Synthesize system top (banked_sram_ctrl)
#   make synth_unit         Synthesize all unit modules
#   make synth_unit MODULE=<name>   Synthesize one module
#   make synth_all          Synthesize everything
#   make report             Show summary report
#   make report MODULE=<name>       Report one module
#   make gls                 Gate-level sim of system
#   make gls_unit MODULE=<name>    Gate-level sim of unit
#   make clean              Remove all outputs
###############################################################################

.DEFAULT_GOAL := help
include config.mk

# --- Internal vars ---------------------------------------------
MODULE ?= banked_sram_ctrl

# --- Help ------------------------------------------------------
.PHONY: help
help:
	@echo ""
	@echo "===================================================="
	@echo "  Synthesis & GLS"
	@echo "===================================================="
	@echo ""
	@echo "Setup (run once):"
	@echo "  bash setup_sky130.sh"
	@echo ""
	@echo "Synthesis:"
	@echo "  make synth                    System top"
	@echo "  make synth_unit               All 7 unit modules"
	@echo "  make synth_unit MODULE=sram_array    Specific module"
	@echo "  make synth_all                Everything"
	@echo ""
	@echo "Reports:"
	@echo "  make report                   Full summary"
	@echo "  make report MODULE=sram_array Single module"
	@echo ""
	@echo "Gate-Level Simulation:"
	@echo "  make gls                      System with tb_sys"
	@echo "  make gls_unit MODULE=sram_array      Unit GLS"
	@echo ""
	@echo "Available modules:"
	@for m in $(ALL_MODULES); do echo "    $$m"; done
	@echo ""
	@echo "Maintenance:"
	@echo "  make clean"
	@echo ""

# --- Directories -----------------------------------------------
$(REPORT_DIR) $(NETLIST_DIR) $(LOG_DIR) $(GLS_DIR) $(SCRIPT_DIR):
	@mkdir -p $@

# --- Synthesis rule generator ----------------------------------
define SYNTH_RULE
$(REPORT_DIR)/$(1)_tech.rpt: $$(RTL_$(1)) $(LIBERTY) | $(REPORT_DIR) $(NETLIST_DIR) $(LOG_DIR)
	@echo ""
	@echo "[SYNTH] $(1)"
	@echo "  Liberty: $(LIBERTY)"
	@$(YOSYS) -p " \
		read_verilog -sv $$(RTL_$(1)); \
		hierarchy -check -top $(1); \
		tee -o $(REPORT_DIR)/$(1)_pre.rpt stat; \
		proc; fsm; memory; opt_clean; \
		tee -o $(REPORT_DIR)/$(1)_opt.rpt stat; \
		techmap; dfflibmap -liberty $(LIBERTY); \
		abc -liberty $(LIBERTY) -D $(CLK_PERIOD_PS); \
		opt_clean; \
		tee -o $(REPORT_DIR)/$(1)_tech.rpt stat -liberty $(LIBERTY); \
		tee -o $(REPORT_DIR)/$(1)_sta.rpt sta -liberty $(LIBERTY); \
		write_verilog -noattr -decimal $(NETLIST_DIR)/$(1)_sky130.v \
	" -l $(LOG_DIR)/$(1).log 2>&1
	@echo "[DONE] $(1)"
endef

$(foreach mod,$(ALL_MODULES),$(eval $(call SYNTH_RULE,$(mod))))

# --- Synthesis targets -----------------------------------------
.PHONY: synth synth_unit synth_all

synth: $(REPORT_DIR)/banked_sram_ctrl_tech.rpt

synth_unit: $(foreach m,$(UNIT_MODULES),$(REPORT_DIR)/$(m)_tech.rpt)

synth_all: $(foreach m,$(ALL_MODULES),$(REPORT_DIR)/$(m)_tech.rpt)
	@echo ""
	@echo "[DONE] All modules synthesized"
	@echo "  Reports : $(REPORT_DIR)/"
	@echo "  Netlists: $(NETLIST_DIR)/"
	@echo "  Logs    : $(LOG_DIR)/"

# --- Report parsing --------------------------------------------
.PHONY: report
report: $(SCRIPT_DIR)/parse_report.py | $(REPORT_DIR)
	@echo ""
ifeq ($(MODULE),banked_sram_ctrl)
	@python3 $(SCRIPT_DIR)/parse_report.py $(REPORT_DIR) "$(ALL_MODULES)"
else
	@python3 $(SCRIPT_DIR)/parse_report.py $(REPORT_DIR) "$(MODULE)"
endif

$(SCRIPT_DIR)/parse_report.py: | $(SCRIPT_DIR)
	@echo "[GEN] Report parser script"

# --- Gate-Level Simulation ------------------------------------
$(GLS_DIR)/sky130_cells.f: $(LIBERTY) | $(GLS_DIR)
	@echo "[GEN] Sky130 cell file list"
	@echo "$(CELL_VERILOG)" | tr ' ' '\n' > $@

.PHONY: gls gls_unit

gls: $(NETLIST_DIR)/banked_sram_ctrl_sky130.v $(GLS_DIR)/sky130_cells.f | $(GLS_DIR)
	@echo ""
	@echo "[GLS] banked_sram_ctrl (system)"
	@cd $(GLS_DIR) && $(IVERILOG) -g2012 -o banked_sram_ctrl_gls.vvp \
		-f sky130_cells.f \
		../$(NETLIST_DIR)/banked_sram_ctrl_sky130.v \
		../verif/system/tb_sys.sv \
		2>&1 | tee banked_sram_ctrl_gls.log
	@cd $(GLS_DIR) && $(VVP) banked_sram_ctrl_gls.vvp 2>&1 | tee -a banked_sram_ctrl_gls.log

gls_unit: $(NETLIST_DIR)/$(MODULE)_sky130.v $(GLS_DIR)/sky130_cells.f | $(GLS_DIR)
	@echo ""
	@echo "[GLS] $(MODULE)"
	@cd $(GLS_DIR) && $(IVERILOG) -g2012 -o $(MODULE)_gls.vvp \
		-f sky130_cells.f \
		../$(NETLIST_DIR)/$(MODULE)_sky130.v \
		../verif/unit/tb_$(MODULE).sv \
		2>&1 | tee $(MODULE)_gls.log
	@cd $(GLS_DIR) && $(VVP) $(MODULE)_gls.vvp 2>&1 | tee -a $(MODULE)_gls.log

# --- Clean -----------------------------------------------------
.PHONY: clean
clean:
	@echo "[CLEAN] Removing synthesis outputs..."
	@rm -rf $(REPORT_DIR) $(NETLIST_DIR) $(LOG_DIR) $(GLS_DIR) $(SCRIPT_DIR)
	@echo "[DONE]"