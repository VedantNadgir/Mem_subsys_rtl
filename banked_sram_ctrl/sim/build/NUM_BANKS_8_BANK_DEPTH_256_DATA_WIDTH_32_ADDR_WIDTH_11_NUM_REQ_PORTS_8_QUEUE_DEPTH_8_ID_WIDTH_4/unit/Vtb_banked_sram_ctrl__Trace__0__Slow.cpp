// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_banked_sram_ctrl__Syms.h"


VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__sram_ctrl_pkg__0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype____0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype____1(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype____2(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__verif_pkg__0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "sram_ctrl_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__sram_ctrl_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "tb_banked_sram_ctrl", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"BANK_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"BANK_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"BANK_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"PORT_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"TOTAL_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"STROBE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"N_CSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+465,0,"CSR_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+466,0,"MAX_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+467,0,"OFF_REQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"OFF_RSP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"OFF_CONF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"OFF_QF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+469,0,"OFF_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,0,"req_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_WIDE(tracep,c+4,0,"req_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"req_strobe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"req_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"req_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"rsp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+40,0,"rsp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"rsp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"rsp_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"csr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"csr_addr_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"csr_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+444,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+445,0,"test_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"BANK_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,0,"req_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 39,0);
    VL_TRACE_DECL_WIDE(tracep,c+4,0,"req_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"req_strobe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"req_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"req_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"rsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"rsp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+40,0,"rsp_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"rsp_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"rsp_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"csr_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"csr_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"BANK_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"BANK_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"PORT_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"TOTAL_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"STROBE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+381,0,"req_fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"req_fifo_head_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+49,0,"req_fifo_head_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 203,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"bank_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"arb_grant_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"arb_grant_port",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"arb_grant_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"bank_pop_array",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"sram_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+385,0,"sram_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+386,0,"sram_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"sram_bwe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_WIDE(tracep,c+373,0,"sram_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"pp1_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+60,0,"pp1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"pp1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"pp1_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"pp1_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"bank_pp1_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"rsp_fifo_push_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"rsp_fifo_push_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"rsp_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"cnt_req_accept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+447,0,"cnt_rsp_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"cnt_conflict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"cnt_bank_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"cnt_queue_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"req_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"req_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"rsp_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+60,0,"mux_pp1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"mux_pp1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"mux_pp1_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"mux_pp1_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+77,0,"mux_rsp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"mux_rsp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"mux_rsp_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "g_bank[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"bank_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_QUAD(tracep,c+392,0,"grant_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BUS(tracep,c+448,0,"grant_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"grant_port",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+394,0,"grant_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"conflict_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"port_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"contention",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"tmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"rotate_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"priority_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"tmp_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_scheduler", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"BANK_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"BANK_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"STROBE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"TOTAL_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"PORT_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"grant_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+395,0,"grant_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+396,0,"grant_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"grant_strobe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+398,0,"grant_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+448,0,"grant_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+394,0,"grant_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+399,0,"sram_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"sram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"sram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"sram_bwe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"sram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"pp1_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"pp1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"pp1_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"pp1_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"pp1_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"bank_pp1_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"pp0_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"pp0_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"pp0_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"pp0_strobe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"pp0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"pp0_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"pp0_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"addr_oob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"pp1_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_sram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+399,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"bwe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_bank[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+403,0,"bank_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_QUAD(tracep,c+404,0,"grant_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BUS(tracep,c+449,0,"grant_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"grant_port",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+406,0,"grant_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"conflict_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"port_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"contention",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"tmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"rotate_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"priority_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+114,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"tmp_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_scheduler", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"BANK_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"BANK_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"STROBE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"TOTAL_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"PORT_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"grant_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+407,0,"grant_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+408,0,"grant_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+409,0,"grant_strobe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+410,0,"grant_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+449,0,"grant_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+406,0,"grant_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+411,0,"sram_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"sram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"sram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+414,0,"sram_bwe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+378,0,"sram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+116,0,"pp1_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"pp1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"pp1_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"pp1_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"pp1_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"bank_pp1_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+122,0,"pp0_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"pp0_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"pp0_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"pp0_strobe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+124,0,"pp0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"pp0_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"pp0_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"addr_oob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"pp1_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_sram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+411,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+414,0,"bwe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+378,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_bank[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+415,0,"bank_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_QUAD(tracep,c+416,0,"grant_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BUS(tracep,c+450,0,"grant_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+127,0,"req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"grant_port",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+418,0,"grant_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"conflict_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"port_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"contention",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"tmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"rotate_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"priority_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"tmp_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_scheduler", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"BANK_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"BANK_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"STROBE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"TOTAL_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"PORT_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"grant_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"grant_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"grant_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"grant_strobe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+422,0,"grant_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+450,0,"grant_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+418,0,"grant_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"sram_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"sram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"sram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"sram_bwe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"sram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"pp1_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"pp1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+140,0,"pp1_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"pp1_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"pp1_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"bank_pp1_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+144,0,"pp0_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"pp0_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"pp0_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+145,0,"pp0_strobe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+146,0,"pp0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"pp0_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+148,0,"pp0_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"addr_oob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"pp1_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_sram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"bwe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_bank[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"bank_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_QUAD(tracep,c+428,0,"grant_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BUS(tracep,c+451,0,"grant_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"grant_port",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+430,0,"grant_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+152,0,"conflict_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"port_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+154,0,"contention",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"tmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"rotate_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"priority_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+159,0,"tmp_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_scheduler", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"BANK_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"BANK_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"STROBE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"TOTAL_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"PORT_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"grant_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"grant_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+432,0,"grant_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+433,0,"grant_strobe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"grant_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+451,0,"grant_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+430,0,"grant_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"sram_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"sram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"sram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+438,0,"sram_bwe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+380,0,"sram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"pp1_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+161,0,"pp1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"pp1_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"pp1_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+164,0,"pp1_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"bank_pp1_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"pp0_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"pp0_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"pp0_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"pp0_strobe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"pp0_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"pp0_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+170,0,"pp0_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"addr_oob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"pp1_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_sram", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+438,0,"bwe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+380,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_req_ports[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+14,0,"push_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_req_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"push_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+171,0,"push_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+17,0,"push_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"head_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+173,0,"head_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"ptr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vtb_banked_sram_ctrl___024root__trace_init_dtype____0(vlSelf, tracep, "fifo_mem", 0, c+177, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+452,0,"nxt_occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_req_ports[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+19,0,"push_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_req_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"push_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"push_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+22,0,"push_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"head_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+190,0,"head_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BIT(tracep,c+440,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"ptr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vtb_banked_sram_ctrl___024root__trace_init_dtype____0(vlSelf, tracep, "fifo_mem", 0, c+194, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+202,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+453,0,"nxt_occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_req_ports[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+24,0,"push_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_req_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"push_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"push_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+27,0,"push_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BIT(tracep,c+206,0,"head_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+207,0,"head_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BIT(tracep,c+441,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+209,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"ptr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vtb_banked_sram_ctrl___024root__trace_init_dtype____0(vlSelf, tracep, "fifo_mem", 0, c+211, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+221,0,"occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+454,0,"nxt_occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_req_ports[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+29,0,"push_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_req_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"push_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"push_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+32,0,"push_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BIT(tracep,c+223,0,"head_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+224,0,"head_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 50,0);
    VL_TRACE_DECL_BIT(tracep,c+442,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+226,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"ptr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vtb_banked_sram_ctrl___024root__trace_init_dtype____0(vlSelf, tracep, "fifo_mem", 0, c+228, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+455,0,"nxt_occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_rsp_ports[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+239,0,"push_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_QUAD(tracep,c+241,0,"pop_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_rsp_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+472,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+243,0,"push_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+244,0,"push_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+245,0,"push_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"pop_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"pop_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+248,0,"pop_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+250,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"ptr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vtb_banked_sram_ctrl___024root__trace_init_dtype____1(vlSelf, tracep, "fifo_mem", 0, c+252, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+262,0,"occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_rsp_ports[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+263,0,"push_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_QUAD(tracep,c+265,0,"pop_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_rsp_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+472,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+267,0,"push_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+268,0,"push_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+269,0,"push_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+271,0,"pop_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+35,0,"pop_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+272,0,"pop_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+274,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"ptr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vtb_banked_sram_ctrl___024root__trace_init_dtype____1(vlSelf, tracep, "fifo_mem", 0, c+276, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_rsp_ports[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+287,0,"push_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_QUAD(tracep,c+289,0,"pop_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_rsp_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+472,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+291,0,"push_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+292,0,"push_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+293,0,"push_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+295,0,"pop_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"pop_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+296,0,"pop_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+298,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+299,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"ptr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vtb_banked_sram_ctrl___024root__trace_init_dtype____1(vlSelf, tracep, "fifo_mem", 0, c+300, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+309,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "g_rsp_ports[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+311,0,"push_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_QUAD(tracep,c+313,0,"pop_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_rsp_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+472,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+315,0,"push_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+316,0,"push_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+317,0,"push_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"pop_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+37,0,"pop_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+320,0,"pop_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+322,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+323,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"ptr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vtb_banked_sram_ctrl___024root__trace_init_dtype____1(vlSelf, tracep, "fifo_mem", 0, c+324, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+332,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+333,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"occupancy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_perf", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"req_accept",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+447,0,"rsp_issue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"conflict",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"req_queue_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"bank_idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"csr_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"csr_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"N_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+465,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);

    Vtb_banked_sram_ctrl___024root__trace_init_dtype____2(vlSelf, tracep, "counter", 0, c+335, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+467,0,"OFF_REQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"OFF_RSP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"OFF_CONF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"OFF_QF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+469,0,"OFF_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+367,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_rsp_mux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"TOTAL_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"PORT_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"pp1_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+60,0,"pp1_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"pp1_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"pp1_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"pp1_err",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"rsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+77,0,"rsp_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"rsp_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"rsp_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"rsp_fifo_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"bank_pp1_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+369,0,"dest_ports",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+371,0,"found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"bank_granted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+456,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+457,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "verif_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__verif_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype____0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_init_dtype____0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 50,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____1(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype____1(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_init_dtype____1\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____1(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____1\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 36,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____2(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype____2(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_init_dtype____2\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____2(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____2(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_init_dtype_sub____2\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__sram_ctrl_pkg__0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__sram_ctrl_pkg__0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"BANK_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"BANK_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"BANK_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"PORT_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"TOTAL_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"STROBE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__verif_pkg__0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__verif_pkg__0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"BANK_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"STROBE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"BANK_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"BANK_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+466,0,"MAX_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+465,0,"CSR_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+467,0,"OFF_REQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"OFF_RSP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"OFF_CONF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"OFF_QF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+469,0,"OFF_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_init_top(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_init_top\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_banked_sram_ctrl___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_banked_sram_ctrl___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_banked_sram_ctrl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_register(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_register\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_banked_sram_ctrl___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_banked_sram_ctrl___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_banked_sram_ctrl___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_banked_sram_ctrl___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_const_0_sub_0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_const_0\n"); );
    // Body
    Vtb_banked_sram_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_banked_sram_ctrl___024root*>(voidSelf);
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_banked_sram_ctrl___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_const_0_sub_0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_const_0_sub_0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+458,(4U),32);
    bufp->fullIData(oldp+459,(0x00000100U),32);
    bufp->fullIData(oldp+460,(0x00000020U),32);
    bufp->fullIData(oldp+461,(0x0000000aU),32);
    bufp->fullIData(oldp+462,(2U),32);
    bufp->fullIData(oldp+463,(8U),32);
    bufp->fullIData(oldp+464,(6U),32);
    bufp->fullIData(oldp+465,(5U),32);
    bufp->fullIData(oldp+466,(0x000003ffU),32);
    bufp->fullIData(oldp+467,(0U),32);
    bufp->fullIData(oldp+468,(0x00000018U),32);
    bufp->fullIData(oldp+469,(0x0000001cU),32);
    bufp->fullBit(oldp+470,(0U));
    bufp->fullIData(oldp+471,(0x00000033U),32);
    bufp->fullIData(oldp+472,(0x00000025U),32);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_full_0_sub_0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_full_0\n"); );
    // Body
    Vtb_banked_sram_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_banked_sram_ctrl___024root*>(voidSelf);
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_banked_sram_ctrl___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0;
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_full_dtype____0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*50:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_full_dtype____1(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_full_dtype____2(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_full_0_sub_0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_full_0_sub_0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n));
    bufp->fullCData(oldp+1,(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid),4);
    bufp->fullQData(oldp+2,(vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr),40);
    bufp->fullWData(oldp+4,(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data),128);
    bufp->fullSData(oldp+8,(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe),16);
    bufp->fullSData(oldp+9,(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id),16);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we),4);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready),4);
    bufp->fullBit(oldp+12,(vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req));
    bufp->fullCData(oldp+13,(vlSelfRef.tb_banked_sram_ctrl__DOT__csr_addr_in),5);
    bufp->fullQData(oldp+14,((((QData)((IData)((0x000003ffU 
                                                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr)))) 
                               << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[0U])) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    ((0x000001e0U 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                         << 5U)) 
                                                                     | ((0x0000001eU 
                                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we))))))))),51);
    bufp->fullBit(oldp+16,((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid))));
    bufp->fullQData(oldp+17,((((QData)((IData)((0x000003ffU 
                                                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr)))) 
                               << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[0U])) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    ((0x000001e0U 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                         << 5U)) 
                                                                     | ((0x0000001eU 
                                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we))))))))),51);
    bufp->fullQData(oldp+19,((((QData)((IData)((0x000003ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                                                           >> 0x0000000aU))))) 
                               << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[1U])) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    ((0x000001e0U 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                         << 1U)) 
                                                                     | ((0x0000001eU 
                                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                            >> 3U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we) 
                                                                              >> 1U))))))))),51);
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                                  >> 1U))));
    bufp->fullQData(oldp+22,((((QData)((IData)((0x000003ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                                                           >> 0x0000000aU))))) 
                               << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[1U])) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    ((0x000001e0U 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                         << 1U)) 
                                                                     | ((0x0000001eU 
                                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                            >> 3U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we) 
                                                                              >> 1U))))))))),51);
    bufp->fullQData(oldp+24,((((QData)((IData)((0x000003ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                                                           >> 0x00000014U))))) 
                               << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[2U])) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    ((0x000001e0U 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                         >> 3U)) 
                                                                     | ((0x0000001eU 
                                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                            >> 7U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we) 
                                                                              >> 2U))))))))),51);
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                                  >> 2U))));
    bufp->fullQData(oldp+27,((((QData)((IData)((0x000003ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                                                           >> 0x00000014U))))) 
                               << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[2U])) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    ((0x000001e0U 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                         >> 3U)) 
                                                                     | ((0x0000001eU 
                                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                            >> 7U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we) 
                                                                              >> 2U))))))))),51);
    bufp->fullQData(oldp+29,((((QData)((IData)((0x000003ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                                                           >> 0x0000001eU))))) 
                               << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[3U])) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    ((0x000001e0U 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                         >> 7U)) 
                                                                     | ((0x0000001eU 
                                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                            >> 0x0000000bU)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we) 
                                                                              >> 3U))))))))),51);
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                                  >> 3U))));
    bufp->fullQData(oldp+32,((((QData)((IData)((0x000003ffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                                                           >> 0x0000001eU))))) 
                               << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[3U])) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    ((0x000001e0U 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                         >> 7U)) 
                                                                     | ((0x0000001eU 
                                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                            >> 0x0000000bU)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we) 
                                                                              >> 3U))))))))),51);
    bufp->fullBit(oldp+34,((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                                  >> 1U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                                  >> 2U))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                                  >> 3U))));
    bufp->fullCData(oldp+38,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready),4);
    bufp->fullCData(oldp+39,(((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
    __Vtemp_2[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                             >> 5U));
    __Vtemp_2[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                             >> 5U));
    __Vtemp_2[2U] = (IData)((((QData)((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                               >> 5U))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                 [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                 >> 5U)))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                >> 5U))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                  >> 5U)))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+40,(__Vtemp_2),128);
    bufp->fullSData(oldp+44,(((((0x000000f0U & ((IData)(
                                                        (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                         >> 1U)) 
                                                << 4U)) 
                                | (0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)))) 
                               << 8U) | ((0x000000f0U 
                                          & ((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 1U)) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)))))),16);
    bufp->fullCData(oldp+45,(((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                       << 1U)) | (1U 
                                                  & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                                << 1U)) 
                                         | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))))),4);
    bufp->fullIData(oldp+46,(vlSelfRef.tb_banked_sram_ctrl__DOT__csr_rdata),32);
    bufp->fullBit(oldp+47,(vlSelfRef.tb_banked_sram_ctrl__DOT__csr_ack));
    bufp->fullCData(oldp+48,(((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
    bufp->fullWData(oldp+49,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt),204);
    bufp->fullSData(oldp+56,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid),16);
    bufp->fullCData(oldp+57,((((((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                 << 1U) | Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                               << 2U) | (((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                          << 1U) | Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]))),4);
    bufp->fullCData(oldp+58,((((((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                 << 2U) | Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                          << 2U) | Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]))),8);
    bufp->fullCData(oldp+59,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid),4);
    bufp->fullWData(oldp+60,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata),128);
    bufp->fullIData(oldp+64,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id),24);
    bufp->fullCData(oldp+65,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we),4);
    bufp->fullCData(oldp+66,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err),4);
    bufp->fullCData(oldp+67,(((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready)))),4);
    bufp->fullCData(oldp+68,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid),4);
    bufp->fullCData(oldp+69,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready),4);
    bufp->fullCData(oldp+70,(((((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
    bufp->fullSData(oldp+71,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict),16);
    bufp->fullCData(oldp+72,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__bank_idle),4);
    bufp->fullCData(oldp+73,((0x0000000fU & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready)))),4);
    bufp->fullCData(oldp+74,(((((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                << 3U) | ((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                << 1U) | (4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
    bufp->fullCData(oldp+75,(((((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                << 3U) | ((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                << 1U) | (0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
    bufp->fullCData(oldp+76,(((((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
    bufp->fullWData(oldp+77,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data),128);
    bufp->fullSData(oldp+81,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id),16);
    bufp->fullCData(oldp+82,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err),4);
    bufp->fullCData(oldp+83,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid),4);
    bufp->fullBit(oldp+84,(Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]));
    bufp->fullCData(oldp+85,(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]),2);
    bufp->fullCData(oldp+86,(((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                              & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                 & (- (IData)((VL_LTS_III(32, 1U, 
                                                          VL_COUNTONES_I((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                               & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant])))))),4);
    bufp->fullCData(oldp+87,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr),2);
    bufp->fullBit(oldp+88,(VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))));
    bufp->fullCData(oldp+89,((0x0000000fU & (((0x000000ffU 
                                               & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                              >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                             >> 4U))),4);
    bufp->fullCData(oldp+90,((0x0000000fU & ((0x000000ffU 
                                              & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                             >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),4);
    bufp->fullCData(oldp+91,((0x0000000fU & ((~ (((0x000000ffU 
                                                   & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))))),4);
    bufp->fullCData(oldp+92,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant),4);
    bufp->fullCData(oldp+93,((0x0000000fU & (((~ ((
                                                   (0x000000ffU 
                                                    & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                        << 4U) 
                                                       | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))) 
                                             << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),4);
    bufp->fullBit(oldp+94,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid));
    bufp->fullIData(oldp+95,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata),32);
    bufp->fullCData(oldp+96,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id),6);
    bufp->fullBit(oldp+97,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we));
    bufp->fullBit(oldp+98,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err));
    bufp->fullBit(oldp+99,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
    bufp->fullBit(oldp+100,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid));
    bufp->fullCData(oldp+101,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
    bufp->fullBit(oldp+102,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we));
    bufp->fullCData(oldp+103,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id),6);
    bufp->fullBit(oldp+104,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err));
    bufp->fullCData(oldp+105,((0x0000000fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                              >> 4U))),4);
    bufp->fullBit(oldp+106,(Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]));
    bufp->fullCData(oldp+107,(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]),2);
    bufp->fullCData(oldp+108,((0x0000000fU & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                               >> 4U) 
                                              & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                                 & (- (IData)(
                                                              (VL_LTS_III(32, 1U, 
                                                                          VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                                >> 4U)))) 
                                                               & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]))))))),4);
    bufp->fullCData(oldp+109,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr),2);
    bufp->fullBit(oldp+110,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                              (0x0000000fU 
                                                               & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                  >> 4U))))));
    bufp->fullCData(oldp+111,((0x0000000fU & (((0x000000ffU 
                                                & ((0x000000f0U 
                                                    & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                   | (0x0000000fU 
                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                         >> 4U)))) 
                                               >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                              >> 4U))),4);
    bufp->fullCData(oldp+112,((0x0000000fU & ((0x000000ffU 
                                               & ((0x000000f0U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                  | (0x0000000fU 
                                                     & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                        >> 4U)))) 
                                              >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),4);
    bufp->fullCData(oldp+113,((0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                             >> 4U)))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 4U)))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))))),4);
    bufp->fullCData(oldp+114,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant),4);
    bufp->fullCData(oldp+115,((0x0000000fU & (((~ (
                                                   ((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                              >> 4U)))) 
                                                    >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                               & ((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 4U)))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))) 
                                              << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),4);
    bufp->fullBit(oldp+116,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid));
    bufp->fullIData(oldp+117,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata),32);
    bufp->fullCData(oldp+118,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id),6);
    bufp->fullBit(oldp+119,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we));
    bufp->fullBit(oldp+120,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err));
    bufp->fullBit(oldp+121,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
    bufp->fullBit(oldp+122,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid));
    bufp->fullCData(oldp+123,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
    bufp->fullBit(oldp+124,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we));
    bufp->fullCData(oldp+125,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id),6);
    bufp->fullBit(oldp+126,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err));
    bufp->fullCData(oldp+127,((0x0000000fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                              >> 8U))),4);
    bufp->fullBit(oldp+128,(Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]));
    bufp->fullCData(oldp+129,(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]),2);
    bufp->fullCData(oldp+130,((0x0000000fU & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                               >> 8U) 
                                              & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant)) 
                                                 & (- (IData)(
                                                              (VL_LTS_III(32, 1U, 
                                                                          VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                                >> 8U)))) 
                                                               & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]))))))),4);
    bufp->fullCData(oldp+131,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr),2);
    bufp->fullBit(oldp+132,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                              (0x0000000fU 
                                                               & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                  >> 8U))))));
    bufp->fullCData(oldp+133,((0x0000000fU & (((0x000000ffU 
                                                & ((0x000000f0U 
                                                    & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                       >> 4U)) 
                                                   | (0x0000000fU 
                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                         >> 8U)))) 
                                               >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                              >> 4U))),4);
    bufp->fullCData(oldp+134,((0x0000000fU & ((0x000000ffU 
                                               & ((0x000000f0U 
                                                   & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                      >> 4U)) 
                                                  | (0x0000000fU 
                                                     & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                        >> 8U)))) 
                                              >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),4);
    bufp->fullCData(oldp+135,((0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 4U)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                             >> 8U)))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                         >> 4U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 8U)))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))))),4);
    bufp->fullCData(oldp+136,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant),4);
    bufp->fullCData(oldp+137,((0x0000000fU & (((~ (
                                                   ((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 4U)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                              >> 8U)))) 
                                                    >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                               & ((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 4U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 8U)))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))) 
                                              << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),4);
    bufp->fullBit(oldp+138,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid));
    bufp->fullIData(oldp+139,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata),32);
    bufp->fullCData(oldp+140,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id),6);
    bufp->fullBit(oldp+141,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we));
    bufp->fullBit(oldp+142,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err));
    bufp->fullBit(oldp+143,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
    bufp->fullBit(oldp+144,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid));
    bufp->fullCData(oldp+145,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
    bufp->fullBit(oldp+146,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we));
    bufp->fullCData(oldp+147,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_id),6);
    bufp->fullBit(oldp+148,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err));
    bufp->fullCData(oldp+149,((0x0000000fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                              >> 0x0000000cU))),4);
    bufp->fullBit(oldp+150,(Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]));
    bufp->fullCData(oldp+151,(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]),2);
    bufp->fullCData(oldp+152,((0x0000000fU & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                               >> 0x0000000cU) 
                                              & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant)) 
                                                 & (- (IData)(
                                                              (VL_LTS_III(32, 1U, 
                                                                          VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                                >> 0x0000000cU)))) 
                                                               & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]))))))),4);
    bufp->fullCData(oldp+153,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr),2);
    bufp->fullBit(oldp+154,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                              (0x0000000fU 
                                                               & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                  >> 0x0000000cU))))));
    bufp->fullCData(oldp+155,((0x0000000fU & (((0x000000ffU 
                                                & ((0x000000f0U 
                                                    & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                       >> 8U)) 
                                                   | (0x0000000fU 
                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                         >> 0x0000000cU)))) 
                                               >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                              >> 4U))),4);
    bufp->fullCData(oldp+156,((0x0000000fU & ((0x000000ffU 
                                               & ((0x000000f0U 
                                                   & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                      >> 8U)) 
                                                  | (0x0000000fU 
                                                     & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                        >> 0x0000000cU)))) 
                                              >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),4);
    bufp->fullCData(oldp+157,((0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 8U)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                             >> 0x0000000cU)))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                         >> 8U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 0x0000000cU)))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))))),4);
    bufp->fullCData(oldp+158,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant),4);
    bufp->fullCData(oldp+159,((0x0000000fU & (((~ (
                                                   ((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 8U)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                              >> 0x0000000cU)))) 
                                                    >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                               & ((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 8U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 0x0000000cU)))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))) 
                                              << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),4);
    bufp->fullBit(oldp+160,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid));
    bufp->fullIData(oldp+161,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata),32);
    bufp->fullCData(oldp+162,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id),6);
    bufp->fullBit(oldp+163,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we));
    bufp->fullBit(oldp+164,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err));
    bufp->fullBit(oldp+165,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
    bufp->fullBit(oldp+166,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid));
    bufp->fullCData(oldp+167,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
    bufp->fullBit(oldp+168,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we));
    bufp->fullCData(oldp+169,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_id),6);
    bufp->fullBit(oldp+170,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err));
    bufp->fullBit(oldp+171,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready));
    bufp->fullBit(oldp+172,((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+173,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]),51);
    bufp->fullBit(oldp+175,((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
    bufp->fullBit(oldp+176,((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
    Vtb_banked_sram_ctrl___024root__trace_full_dtype____0(vlSelf, bufp, 177, vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem);
    bufp->fullCData(oldp+185,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
    bufp->fullCData(oldp+186,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
    bufp->fullCData(oldp+187,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy),3);
    bufp->fullBit(oldp+188,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready));
    bufp->fullBit(oldp+189,((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+190,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]),51);
    bufp->fullBit(oldp+192,((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
    bufp->fullBit(oldp+193,((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
    Vtb_banked_sram_ctrl___024root__trace_full_dtype____0(vlSelf, bufp, 194, vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem);
    bufp->fullCData(oldp+202,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
    bufp->fullCData(oldp+203,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
    bufp->fullCData(oldp+204,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy),3);
    bufp->fullBit(oldp+205,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready));
    bufp->fullBit(oldp+206,((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+207,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr]),51);
    bufp->fullBit(oldp+209,((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
    bufp->fullBit(oldp+210,((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
    Vtb_banked_sram_ctrl___024root__trace_full_dtype____0(vlSelf, bufp, 211, vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem);
    bufp->fullCData(oldp+219,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
    bufp->fullCData(oldp+220,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
    bufp->fullCData(oldp+221,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy),3);
    bufp->fullBit(oldp+222,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready));
    bufp->fullBit(oldp+223,((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+224,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr]),51);
    bufp->fullBit(oldp+226,((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
    bufp->fullBit(oldp+227,((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
    Vtb_banked_sram_ctrl___024root__trace_full_dtype____0(vlSelf, bufp, 228, vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem);
    bufp->fullCData(oldp+236,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
    bufp->fullCData(oldp+237,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
    bufp->fullCData(oldp+238,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy),3);
    bufp->fullQData(oldp+239,((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[0U])) 
                                << 5U) | (QData)((IData)(
                                                         ((0x0000001eU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err))))))),37);
    bufp->fullQData(oldp+241,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
    bufp->fullBit(oldp+243,((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid))));
    bufp->fullBit(oldp+244,((4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+245,((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[0U])) 
                                << 5U) | (QData)((IData)(
                                                         ((0x0000001eU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err))))))),37);
    bufp->fullBit(oldp+247,((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+248,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
    bufp->fullBit(oldp+250,((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullBit(oldp+251,((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    Vtb_banked_sram_ctrl___024root__trace_full_dtype____1(vlSelf, bufp, 252, vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
    bufp->fullCData(oldp+260,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
    bufp->fullCData(oldp+261,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
    bufp->fullCData(oldp+262,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
    bufp->fullQData(oldp+263,((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[1U])) 
                                << 5U) | (QData)((IData)(
                                                         ((0x0000001eU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                              >> 3U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err) 
                                                                >> 1U))))))),37);
    bufp->fullQData(oldp+265,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
    bufp->fullBit(oldp+267,((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+268,((4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+269,((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[1U])) 
                                << 5U) | (QData)((IData)(
                                                         ((0x0000001eU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                              >> 3U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err) 
                                                                >> 1U))))))),37);
    bufp->fullBit(oldp+271,((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+272,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
    bufp->fullBit(oldp+274,((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullBit(oldp+275,((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    Vtb_banked_sram_ctrl___024root__trace_full_dtype____1(vlSelf, bufp, 276, vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
    bufp->fullCData(oldp+284,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
    bufp->fullCData(oldp+285,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
    bufp->fullCData(oldp+286,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
    bufp->fullQData(oldp+287,((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[2U])) 
                                << 5U) | (QData)((IData)(
                                                         ((0x0000001eU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                              >> 7U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err) 
                                                                >> 2U))))))),37);
    bufp->fullQData(oldp+289,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
    bufp->fullBit(oldp+291,((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                                   >> 2U))));
    bufp->fullBit(oldp+292,((4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+293,((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[2U])) 
                                << 5U) | (QData)((IData)(
                                                         ((0x0000001eU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                              >> 7U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err) 
                                                                >> 2U))))))),37);
    bufp->fullBit(oldp+295,((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+296,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
    bufp->fullBit(oldp+298,((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullBit(oldp+299,((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    Vtb_banked_sram_ctrl___024root__trace_full_dtype____1(vlSelf, bufp, 300, vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
    bufp->fullCData(oldp+308,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
    bufp->fullCData(oldp+309,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
    bufp->fullCData(oldp+310,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
    bufp->fullQData(oldp+311,((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[3U])) 
                                << 5U) | (QData)((IData)(
                                                         ((0x0000001eU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                              >> 0x0000000bU)) 
                                                          | (1U 
                                                             & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err) 
                                                                >> 3U))))))),37);
    bufp->fullQData(oldp+313,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
    bufp->fullBit(oldp+315,((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                                   >> 3U))));
    bufp->fullBit(oldp+316,((4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+317,((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[3U])) 
                                << 5U) | (QData)((IData)(
                                                         ((0x0000001eU 
                                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                              >> 0x0000000bU)) 
                                                          | (1U 
                                                             & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err) 
                                                                >> 3U))))))),37);
    bufp->fullBit(oldp+319,((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullQData(oldp+320,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
    bufp->fullBit(oldp+322,((4U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    bufp->fullBit(oldp+323,((0U == (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    Vtb_banked_sram_ctrl___024root__trace_full_dtype____1(vlSelf, bufp, 324, vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
    bufp->fullCData(oldp+332,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
    bufp->fullCData(oldp+333,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
    bufp->fullCData(oldp+334,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
    Vtb_banked_sram_ctrl___024root__trace_full_dtype____2(vlSelf, bufp, 335, vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter);
    bufp->fullIData(oldp+367,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__i),32);
    bufp->fullIData(oldp+368,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__b),32);
    bufp->fullCData(oldp+369,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports),8);
    bufp->fullCData(oldp+370,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p),2);
    bufp->fullBit(oldp+371,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found));
    bufp->fullCData(oldp+372,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted),4);
    __Vtemp_4[0U] = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr];
    __Vtemp_4[1U] = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr];
    __Vtemp_4[2U] = (IData)((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr])) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]))));
    __Vtemp_4[3U] = (IData)(((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr])) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                                                 [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+373,(__Vtemp_4),128);
    bufp->fullIData(oldp+377,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
    bufp->fullIData(oldp+378,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
    bufp->fullIData(oldp+379,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
    bufp->fullIData(oldp+380,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
    bufp->fullCData(oldp+381,(((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
                                 << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop)))),4);
    bufp->fullCData(oldp+382,(((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) 
                                 << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready)))),4);
    bufp->fullSData(oldp+383,((((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)))))),16);
    bufp->fullCData(oldp+384,(((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) 
                                 << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we)))),4);
    bufp->fullIData(oldp+385,(((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                 << 0x00000018U) | 
                                ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                 << 0x00000010U)) | 
                               (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                 << 8U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr)))),32);
    __Vtemp_6[0U] = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data;
    __Vtemp_6[1U] = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data;
    __Vtemp_6[2U] = (IData)((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data))));
    __Vtemp_6[3U] = (IData)(((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data)) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data))) 
                             >> 0x00000020U));
    bufp->fullWData(oldp+386,(__Vtemp_6),128);
    bufp->fullSData(oldp+390,(((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                 << 0x0000000cU) | 
                                ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                 << 8U)) | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe)))),16);
    bufp->fullCData(oldp+391,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29) 
                                 << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)))),4);
    bufp->fullQData(oldp+392,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt),51);
    bufp->fullBit(oldp+394,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready));
    bufp->fullSData(oldp+395,((0x000003ffU & (IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                      >> 0x00000029U)))),10);
    bufp->fullIData(oldp+396,((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                       >> 9U))),32);
    bufp->fullCData(oldp+397,((0x0000000fU & (IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                      >> 5U)))),4);
    bufp->fullBit(oldp+398,((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt))));
    bufp->fullBit(oldp+399,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we));
    bufp->fullCData(oldp+400,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr),8);
    bufp->fullIData(oldp+401,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data),32);
    bufp->fullCData(oldp+402,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe),4);
    bufp->fullCData(oldp+403,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25) 
                                 << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)))),4);
    bufp->fullQData(oldp+404,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt),51);
    bufp->fullBit(oldp+406,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready));
    bufp->fullSData(oldp+407,((0x000003ffU & (IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                      >> 0x00000029U)))),10);
    bufp->fullIData(oldp+408,((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                       >> 9U))),32);
    bufp->fullCData(oldp+409,((0x0000000fU & (IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                      >> 5U)))),4);
    bufp->fullBit(oldp+410,((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt))));
    bufp->fullBit(oldp+411,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we));
    bufp->fullCData(oldp+412,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr),8);
    bufp->fullIData(oldp+413,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data),32);
    bufp->fullCData(oldp+414,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe),4);
    bufp->fullCData(oldp+415,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
                                 << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22)))),4);
    bufp->fullQData(oldp+416,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt),51);
    bufp->fullBit(oldp+418,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready));
    bufp->fullSData(oldp+419,((0x000003ffU & (IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                      >> 0x00000029U)))),10);
    bufp->fullIData(oldp+420,((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                       >> 9U))),32);
    bufp->fullCData(oldp+421,((0x0000000fU & (IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                      >> 5U)))),4);
    bufp->fullBit(oldp+422,((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt))));
    bufp->fullBit(oldp+423,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we));
    bufp->fullCData(oldp+424,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr),8);
    bufp->fullIData(oldp+425,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data),32);
    bufp->fullCData(oldp+426,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe),4);
    bufp->fullCData(oldp+427,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                 << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18)))),4);
    bufp->fullQData(oldp+428,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt),51);
    bufp->fullBit(oldp+430,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready));
    bufp->fullSData(oldp+431,((0x000003ffU & (IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                      >> 0x00000029U)))),10);
    bufp->fullIData(oldp+432,((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                       >> 9U))),32);
    bufp->fullCData(oldp+433,((0x0000000fU & (IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                      >> 5U)))),4);
    bufp->fullBit(oldp+434,((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt))));
    bufp->fullBit(oldp+435,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we));
    bufp->fullCData(oldp+436,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr),8);
    bufp->fullIData(oldp+437,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data),32);
    bufp->fullCData(oldp+438,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe),4);
    bufp->fullBit(oldp+439,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop));
    bufp->fullBit(oldp+440,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop));
    bufp->fullBit(oldp+441,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop));
    bufp->fullBit(oldp+442,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop));
    bufp->fullBit(oldp+443,(vlSelfRef.tb_banked_sram_ctrl__DOT__clk));
    bufp->fullIData(oldp+444,(vlSelfRef.tb_banked_sram_ctrl__DOT__error_count),32);
    bufp->fullIData(oldp+445,(vlSelfRef.tb_banked_sram_ctrl__DOT__test_id),32);
    bufp->fullCData(oldp+446,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__req_accept),4);
    bufp->fullCData(oldp+447,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__rsp_issue),4);
    bufp->fullCData(oldp+448,((((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                << 4U) | (0x0000000fU 
                                          & (IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                     >> 1U))))),6);
    bufp->fullCData(oldp+449,((((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                << 4U) | (0x0000000fU 
                                          & (IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                     >> 1U))))),6);
    bufp->fullCData(oldp+450,((((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                << 4U) | (0x0000000fU 
                                          & (IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                     >> 1U))))),6);
    bufp->fullCData(oldp+451,((((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                << 4U) | (0x0000000fU 
                                          & (IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                     >> 1U))))),6);
    bufp->fullCData(oldp+452,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->fullCData(oldp+453,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->fullCData(oldp+454,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->fullCData(oldp+455,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->fullIData(oldp+456,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__unnamedblk3__DOT__z),32);
    bufp->fullIData(oldp+457,(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__unnamedblk3__DOT__y),32);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_full_dtype____0(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*50:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_full_dtype____0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullQData(oldp+0,(__VdtypeVar[0]),51);
    bufp->fullQData(oldp+2,(__VdtypeVar[1]),51);
    bufp->fullQData(oldp+4,(__VdtypeVar[2]),51);
    bufp->fullQData(oldp+6,(__VdtypeVar[3]),51);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_full_dtype____1(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_full_dtype____1\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullQData(oldp+0,(__VdtypeVar[0]),37);
    bufp->fullQData(oldp+2,(__VdtypeVar[1]),37);
    bufp->fullQData(oldp+4,(__VdtypeVar[2]),37);
    bufp->fullQData(oldp+6,(__VdtypeVar[3]),37);
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root__trace_full_dtype____2(Vtb_banked_sram_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root__trace_full_dtype____2\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->fullIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->fullIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->fullIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->fullIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->fullIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->fullIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->fullIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->fullIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->fullIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->fullIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->fullIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->fullIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->fullIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->fullIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->fullIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->fullIData(oldp+31,(__VdtypeVar[31]),32);
}
