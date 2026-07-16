// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_perf_counter__Syms.h"


VL_ATTR_COLD void Vtb_perf_counter___024root__trace_init_sub__TOP__sram_ctrl_pkg__0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_perf_counter___024root__trace_init_sub__TOP__verif_pkg__0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_init_sub__TOP__0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_init_sub__TOP__0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "sram_ctrl_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_perf_counter___024root__trace_init_sub__TOP__sram_ctrl_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "tb_perf_counter", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"NUM_COUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"OFF_REQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"OFF_RSP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"OFF_CONF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"OFF_QF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"OFF_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"req_accept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"rsp_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"conflict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"req_queue_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"bank_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"csr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"csr_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"test_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"req_accept",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"rsp_issue",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"conflict",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"req_queue_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"bank_idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"csr_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"csr_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"N_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "counter", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"OFF_REQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"OFF_RSP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"OFF_CONF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"OFF_QF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"OFF_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "verif_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_perf_counter___024root__trace_init_sub__TOP__verif_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_init_sub__TOP__sram_ctrl_pkg__0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_init_sub__TOP__sram_ctrl_pkg__0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+48,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"BANK_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"BANK_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"BANK_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"PORT_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"TOTAL_ID_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"STROBE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_init_sub__TOP__verif_pkg__0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_init_sub__TOP__verif_pkg__0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+48,0,"NUM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"BANK_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"NUM_REQ_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"QUEUE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"STROBE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"BANK_SEL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"BANK_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"MAX_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"CSR_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"OFF_REQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"OFF_RSP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"OFF_CONF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"OFF_QF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"OFF_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_init_top(Vtb_perf_counter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_init_top\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_perf_counter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_perf_counter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_perf_counter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_perf_counter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_register(Vtb_perf_counter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_register\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_perf_counter___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_perf_counter___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_perf_counter___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_perf_counter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_const_0_sub_0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_const_0\n"); );
    // Body
    Vtb_perf_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_perf_counter___024root*>(voidSelf);
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_perf_counter___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_const_0_sub_0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_const_0_sub_0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+48,(4U),32);
    bufp->fullIData(oldp+49,(0x00000020U),32);
    bufp->fullIData(oldp+50,(5U),32);
    bufp->fullIData(oldp+51,(0U),32);
    bufp->fullIData(oldp+52,(8U),32);
    bufp->fullIData(oldp+53,(0x00000018U),32);
    bufp->fullIData(oldp+54,(0x0000001cU),32);
    bufp->fullIData(oldp+55,(0x00000100U),32);
    bufp->fullIData(oldp+56,(0x0000000aU),32);
    bufp->fullIData(oldp+57,(2U),32);
    bufp->fullIData(oldp+58,(6U),32);
    bufp->fullIData(oldp+59,(0x000003ffU),32);
}

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_full_0_sub_0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_full_0\n"); );
    // Body
    Vtb_perf_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_perf_counter___024root*>(voidSelf);
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_perf_counter___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_perf_counter___024root__trace_full_0_sub_0(Vtb_perf_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root__trace_full_0_sub_0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_perf_counter__DOT__rst_n));
    bufp->fullCData(oldp+1,(vlSelfRef.tb_perf_counter__DOT__req_accept),4);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_perf_counter__DOT__rsp_issue),4);
    bufp->fullSData(oldp+3,(vlSelfRef.tb_perf_counter__DOT__conflict),16);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_perf_counter__DOT__req_queue_full),4);
    bufp->fullCData(oldp+5,(vlSelfRef.tb_perf_counter__DOT__bank_idle),4);
    bufp->fullBit(oldp+6,(vlSelfRef.tb_perf_counter__DOT__csr_req));
    bufp->fullCData(oldp+7,(vlSelfRef.tb_perf_counter__DOT__csr_addr),5);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[0]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[1]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[2]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[3]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[4]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[5]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[6]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[7]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[8]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[9]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[10]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[11]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[12]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[13]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[14]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[15]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[16]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[17]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[18]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[19]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[20]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[21]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[22]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[23]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[24]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[25]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[26]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[27]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[28]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[29]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[30]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[31]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_perf_counter__DOT__csr_rdata),32);
    bufp->fullBit(oldp+41,(vlSelfRef.tb_perf_counter__DOT__csr_ack));
    bufp->fullIData(oldp+42,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__i),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_perf_counter__DOT__dut__DOT__b),32);
    bufp->fullBit(oldp+44,(vlSelfRef.tb_perf_counter__DOT__clk));
    bufp->fullIData(oldp+45,(vlSelfRef.tb_perf_counter__DOT__error_count),32);
    bufp->fullIData(oldp+46,(vlSelfRef.tb_perf_counter__DOT__test_id),32);
    bufp->fullIData(oldp+47,(vlSelfRef.tb_perf_counter__DOT__rdata),32);
}
