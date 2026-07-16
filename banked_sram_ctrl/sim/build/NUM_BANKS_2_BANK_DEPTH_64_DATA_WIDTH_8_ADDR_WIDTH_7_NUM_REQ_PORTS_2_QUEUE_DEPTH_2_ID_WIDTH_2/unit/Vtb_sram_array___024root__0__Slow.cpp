// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sram_array.h for the primary calling header

#include "Vtb_sram_array__pch.h"

void Vtb_sram_array___024root___timing_ready(Vtb_sram_array___024root* vlSelf);

VL_ATTR_COLD void Vtb_sram_array___024root___eval_static(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_static\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_sram_array__DOT__error_count = 0U;
        vlSelfRef.tb_sram_array__DOT__test_id = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sram_array__DOT__clk__0 
        = vlSelfRef.tb_sram_array__DOT__clk;
    Vtb_sram_array___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_sram_array___024root___eval_final(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_final\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_sram_array___024root___eval_settle(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_settle\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtb_sram_array___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sram_array___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sram_array___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_sram_array.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sram_array___024root___ctor_var_reset(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___ctor_var_reset\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_sram_array__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9956656640862869157ull);
    vlSelf->tb_sram_array__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14688268333313981431ull);
    vlSelf->tb_sram_array__DOT__addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10900938530731370673ull);
    vlSelf->tb_sram_array__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12036006670168486978ull);
    vlSelf->tb_sram_array__DOT__bwe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2367748846781886295ull);
    vlSelf->tb_sram_array__DOT__old_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17597941630672502947ull);
    vlSelf->tb_sram_array__DOT__expected = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 928442290206206351ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_sram_array__DOT__dut__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5234594928173243682ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_sram_array__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
