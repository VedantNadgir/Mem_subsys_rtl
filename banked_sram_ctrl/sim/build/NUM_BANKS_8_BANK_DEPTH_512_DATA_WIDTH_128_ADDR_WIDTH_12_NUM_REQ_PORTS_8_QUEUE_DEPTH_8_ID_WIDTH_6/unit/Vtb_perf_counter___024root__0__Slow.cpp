// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_perf_counter.h for the primary calling header

#include "Vtb_perf_counter__pch.h"

void Vtb_perf_counter___024root___timing_ready(Vtb_perf_counter___024root* vlSelf);

VL_ATTR_COLD void Vtb_perf_counter___024root___eval_static(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_static\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_perf_counter__DOT__error_count = 0U;
        vlSelfRef.tb_perf_counter__DOT__test_id = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0 
        = vlSelfRef.tb_perf_counter__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__rst_n__0 
        = vlSelfRef.tb_perf_counter__DOT__rst_n;
    Vtb_perf_counter___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_perf_counter___024root___eval_final(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_final\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_perf_counter___024root___eval_settle(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_settle\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtb_perf_counter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_perf_counter___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_perf_counter___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_perf_counter.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_perf_counter.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_perf_counter.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge tb_perf_counter.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_perf_counter___024root___ctor_var_reset(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___ctor_var_reset\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_perf_counter__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10600557695208551879ull);
    vlSelf->tb_perf_counter__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3770337671790119748ull);
    vlSelf->tb_perf_counter__DOT__req_accept = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2511965497904229757ull);
    vlSelf->tb_perf_counter__DOT__rsp_issue = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17273982996924191955ull);
    vlSelf->tb_perf_counter__DOT__conflict = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11033034787737082798ull);
    vlSelf->tb_perf_counter__DOT__req_queue_full = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10074461789154417276ull);
    vlSelf->tb_perf_counter__DOT__bank_idle = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6617495020610641854ull);
    vlSelf->tb_perf_counter__DOT__csr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15348799313176986574ull);
    vlSelf->tb_perf_counter__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17957591220213822032ull);
    vlSelf->tb_perf_counter__DOT__csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9099149827526668143ull);
    vlSelf->tb_perf_counter__DOT__csr_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8217706214664195171ull);
    vlSelf->tb_perf_counter__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10492552951015944811ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_perf_counter__DOT__dut__DOT__counter[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8204402345404499434ull);
    }
    vlSelf->tb_perf_counter__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14738083510481680763ull);
    vlSelf->tb_perf_counter__DOT__dut__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8681011807379307104ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_perf_counter__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
