###############################################################################
# Synthesis Configuration
###############################################################################

YOSYS := yosys

TOP := banked_sram_ctrl

FILELIST := ../sim/filelist.f

REPORT_DIR := reports
NETLIST_DIR := netlists
LOG_DIR := logs

GENERATED_DIR := generated
READ_RTL_SCRIPT := $(GENERATED_DIR)/read_rtl.ys