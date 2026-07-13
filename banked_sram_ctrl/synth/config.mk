###############################################################################
# Synthesis Configuration — Single Source of Truth
#
# Included by banked_sram_ctrl/synth/makefile.
# Never invoked directly by the user.
###############################################################################

# --- Directories -----------------------------------------------
ROOT_DIR   := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
REPO_ROOT  := $(ROOT_DIR)../../
RTL_DIR    := $(ROOT_DIR)../rtl

GEN_DIR     := $(ROOT_DIR)generated
REPORT_DIR  := $(ROOT_DIR)reports
LOG_DIR     := $(ROOT_DIR)logs
NETLIST_DIR := $(ROOT_DIR)netlists
GLS_DIR     := $(ROOT_DIR)gls

# --- Tools -------------------------------------------------------
YOSYS    := yosys
IVERILOG := iverilog
PYTHON3  := python3

# --- Helper scripts ------------------------------------------------
PARSE_SCRIPT := $(ROOT_DIR)parse_report.py

# --- Sky130 liberty ------------------------------------------------
LIBERTY_FILE := $(REPO_ROOT)pdk/sky130_fd_sc_hd/generated_libs/sky130_fd_sc_hd__tt_025C_1v80.lib

# --- Modules -------------------------------------------------------
# Single source of truth for every synthesizable RTL module.
# Add new modules here only; nothing else should hardcode this list.
#
# UNIT_MODULES   - individually synthesizable sub-blocks
# SYSTEM_MODULE  - the fully integrated top-level design
# MODULES        - union of both, used for MODULE= validation on the
#                   single-module synth/report/gls targets
UNIT_MODULES := \
    bank_scheduler \
    per_bank_arb \
    perf_counter \
    req_fifo \
    rsp_fifo \
    rsp_mux \
    sram_array

SYSTEM_MODULE := banked_sram_ctrl
MODULES := $(UNIT_MODULES) $(SYSTEM_MODULE)
# --- Default module (used when MODULE is not specified) ------------
DEFAULT_MODULE := banked_sram_ctrl