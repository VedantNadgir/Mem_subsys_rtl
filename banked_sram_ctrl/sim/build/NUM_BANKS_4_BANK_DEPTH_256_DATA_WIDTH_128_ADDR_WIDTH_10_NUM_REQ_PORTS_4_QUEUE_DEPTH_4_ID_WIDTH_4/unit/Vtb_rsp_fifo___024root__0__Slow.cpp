// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rsp_fifo.h for the primary calling header

#include "Vtb_rsp_fifo__pch.h"

void Vtb_rsp_fifo___024root___timing_ready(Vtb_rsp_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_rsp_fifo___024root___eval_static(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_static\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_rsp_fifo__DOT__error_count = 0U;
        vlSelfRef.tb_rsp_fifo__DOT__test_id = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__clk__0 
        = vlSelfRef.tb_rsp_fifo__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__rst_n__0 
        = vlSelfRef.tb_rsp_fifo__DOT__rst_n;
    Vtb_rsp_fifo___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_rsp_fifo___024root___eval_final(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_final\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rsp_fifo___024root___eval_settle(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_settle\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtb_rsp_fifo___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rsp_fifo___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_rsp_fifo___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_rsp_fifo.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_rsp_fifo.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_rsp_fifo___024root___ctor_var_reset(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___ctor_var_reset\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_rsp_fifo__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11886984411495103079ull);
    vlSelf->tb_rsp_fifo__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9811800446329624554ull);
    vlSelf->tb_rsp_fifo__DOT__push_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15777850039118184120ull);
    vlSelf->tb_rsp_fifo__DOT__push_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16963910220180839740ull);
    vlSelf->tb_rsp_fifo__DOT__pop_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16146035259197343605ull);
    vlSelf->tb_rsp_fifo__DOT__A = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8422806456472536399ull);
    vlSelf->tb_rsp_fifo__DOT__B = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10562088584718694356ull);
    vlSelf->tb_rsp_fifo__DOT__D0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6821586536613837768ull);
    vlSelf->tb_rsp_fifo__DOT__D1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 946124169766831789ull);
    vlSelf->tb_rsp_fifo__DOT__D2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1891899424131817486ull);
    vlSelf->tb_rsp_fifo__DOT__D3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2514671305821612566ull);
    vlSelf->tb_rsp_fifo__DOT__D4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7563607062903081633ull);
    vlSelf->tb_rsp_fifo__DOT__D5 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14881030407942148068ull);
    vlSelf->tb_rsp_fifo__DOT__D6 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 75832211681176615ull);
    vlSelf->tb_rsp_fifo__DOT__D7 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14140916331282865311ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_rsp_fifo__DOT__observed[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14303259771679579955ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_rsp_fifo__DOT__dut__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14035231175807371088ull);
    }
    vlSelf->tb_rsp_fifo__DOT__dut__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13787090547394571840ull);
    vlSelf->tb_rsp_fifo__DOT__dut__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5952993930768602016ull);
    vlSelf->tb_rsp_fifo__DOT__dut__DOT__occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12702586558047435151ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
