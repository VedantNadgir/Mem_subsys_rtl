###############################################################################
# Simulation Configuration — Single Source of Truth
###############################################################################

# --- Simulator -------------------------------------------------
VERILATOR := verilator

# --- Directories -----------------------------------------------
BUILD_DIR  := build
LOG_DIR    := $(BUILD_DIR)/logs
WAVE_DIR   := $(BUILD_DIR)/waves
ROOT_DIR   := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

RTL_DIR    := $(ROOT_DIR)../rtl
TB_UNIT    := $(ROOT_DIR)../verif/unit
TB_SYSTEM  := $(ROOT_DIR)../verif/system

# --- Default test selection ------------------------------------
TEST      ?= banked_sram_ctrl
TEST_TYPE ?= unit

# --- Waveform control ------------------------------------------
TRACE ?= 1

# --- Verilator base flags --------------------------------------
VL_FLAGS := --sv --timing -Wall -Wno-WIDTH -Wno-UNUSED -Wno-UNOPTFLAT -Wno-IMPORTSTAR -Wno-VARHIDDEN

ifeq ($(TRACE),1)
VL_FLAGS += --trace
endif

# --- Parameter override (passed via -G) ------------------------
# Usage: make unit TEST=req_fifo PARAMS="NUM_BANKS=2 NUM_REQ_PORTS=2"
PARAMS ?=

# Unit test parameter whitelists: only pass supported parameters through.
UNIT_PARAM_WHITELIST_bank_scheduler := ADDR_WIDTH BANK_SEL_BITS BANK_ADDR_BITS DATA_WIDTH STROBE_WIDTH TOTAL_ID_BITS NUM_REQ_PORTS PORT_ID_BITS
UNIT_PARAM_WHITELIST_banked_sram_ctrl := NUM_BANKS BANK_DEPTH DATA_WIDTH ADDR_WIDTH NUM_REQ_PORTS QUEUE_DEPTH ID_WIDTH
UNIT_PARAM_WHITELIST_per_bank_arb := NUM_REQ_PORTS
UNIT_PARAM_WHITELIST_perf_counter := NUM_REQ_PORTS NUM_BANKS ID_WIDTH
UNIT_PARAM_WHITELIST_req_fifo := DATA_WIDTH QUEUE_DEPTH
UNIT_PARAM_WHITELIST_rsp_fifo := DATA_WIDTH QUEUE_DEPTH
UNIT_PARAM_WHITELIST_rsp_mux := NUM_BANKS NUM_REQ_PORTS DATA_WIDTH ID_WIDTH TOTAL_ID_BITS PORT_ID_BITS
UNIT_PARAM_WHITELIST_sram_array := DEPTH DATA_WIDTH

# Filter params by test-specific whitelist.
define filter_test_params
  $(foreach p,$(PARAMS),$(if $(filter $(word 1,$(subst =, ,$(p))),$$(UNIT_PARAM_WHITELIST_$(1))),-G$(p),))
endef

ifeq ($(TEST_TYPE),system)
PARAM_FLAGS := $(foreach p,$(PARAMS),-G$(p))
else ifeq ($(TEST_TYPE),unit)
PARAM_FLAGS := $(call filter_test_params,$(TEST))
else
PARAM_FLAGS :=
endif

# --- Parameter Regression Matrix -------------------------------
# Format: <name>  NUM_BANKS  BANK_DEPTH  DATA_WIDTH  ADDR_WIDTH  NUM_REQ_PORTS  QUEUE_DEPTH  ID_WIDTH
# ADDR_WIDTH must be >= clog2(NUM_BANKS)+clog2(BANK_DEPTH)
REGRESS_COMBOS := \
    cfg_minimal     2    16    8    5   2   2   1 \
    cfg_small_8     2    64    8    7   2   2   2 \
    cfg_small_16    2    64   16    7   2   2   2 \
    cfg_small_32    2    64   32    7   2   2   2 \
    cfg_dflt        4   256   32   10   4   4   4 \
    cfg_deep        4  1024   32   12   4   4   4 \
    cfg_narrow      4   256    8   10   4   4   4 \
    cfg_wide        4   256  128   10   4   4   4 \
    cfg_large_64    8   512   64   12   8   4   6 \
    cfg_large_128   8   512  128   12   8   8   6 \
    cfg_max_ports   8   256   32   11   8   8   4 \
    cfg_min_ports   4   256   32   10   2   4   4

# Parse helpers: extract N-th field from combo definition
# Usage: $(call get_field,1,cfg_dflt 4 256 32 10 4 4 4) → 4
get_field = $(word $1,$2)