###############################################################################
# Synthesis Configuration — Sky130 PDK
###############################################################################
# --- Tools -----------------------------------------------------
YOSYS    := yosys
IVERILOG := iverilog
VVP      := vvp
# --- PDK (populated by setup_sky130.sh) ------------------------
PDK_ROOT  := ../../pdk
LIB_DIR   := $(PDK_ROOT)/sky130_fd_sc_hd
LIBERTY   := $(LIB_DIR)/generated_libs/sky130_fd_sc_hd__tt_025C_1v80.lib

# Sky130 cell Verilog models (for GLS)
CELL_VERILOG := $(shell find $(LIB_DIR)/cells -name "*.v" 2>/dev/null | sort)

# --- Directories -----------------------------------------------
REPORT_DIR  := reports
NETLIST_DIR := netlists
LOG_DIR     := logs
SCRIPT_DIR  := scripts
GLS_DIR     := gls

# --- RTL source lists per module -------------------------------
PKG := ../rtl/pkg/sram_ctrl_pkg.sv

RTL_sram_array      := $(PKG) ../rtl/sram_array.sv
RTL_req_fifo        := $(PKG) ../rtl/req_fifo.sv
RTL_rsp_fifo        := $(PKG) ../rtl/rsp_fifo.sv
RTL_per_bank_arb    := $(PKG) ../rtl/per_bank_arb.sv
RTL_bank_scheduler  := $(PKG) ../rtl/bank_scheduler.sv
RTL_rsp_mux         := $(PKG) ../rtl/rsp_mux.sv
RTL_perf_counter    := $(PKG) ../rtl/perf_counter.sv
RTL_banked_sram_ctrl:= $(PKG) ../verif/system/verif_pkg.sv $(wildcard ../rtl/*.sv)

# Module lists
UNIT_MODULES := sram_array req_fifo rsp_fifo per_bank_arb bank_scheduler rsp_mux perf_counter
ALL_MODULES  := $(UNIT_MODULES) banked_sram_ctrl

# --- Timing target (ps) for abc --------------------------------
CLK_PERIOD_PS := 2000