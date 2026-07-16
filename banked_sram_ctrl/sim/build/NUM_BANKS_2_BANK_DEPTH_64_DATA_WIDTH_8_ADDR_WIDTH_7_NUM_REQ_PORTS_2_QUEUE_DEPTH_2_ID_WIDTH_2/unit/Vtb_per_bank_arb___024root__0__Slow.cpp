// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_per_bank_arb.h for the primary calling header

#include "Vtb_per_bank_arb__pch.h"

void Vtb_per_bank_arb___024root___timing_ready(Vtb_per_bank_arb___024root* vlSelf);

VL_ATTR_COLD void Vtb_per_bank_arb___024root___eval_static(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_static\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_per_bank_arb__DOT__error_count = 0U;
        vlSelfRef.tb_per_bank_arb__DOT__test_id = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__clk__0 
        = vlSelfRef.tb_per_bank_arb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__rst_n__0 
        = vlSelfRef.tb_per_bank_arb__DOT__rst_n;
    Vtb_per_bank_arb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_per_bank_arb___024root___eval_final(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_final\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_per_bank_arb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_per_bank_arb___024root___eval_phase__stl(Vtb_per_bank_arb___024root* vlSelf);

VL_ATTR_COLD void Vtb_per_bank_arb___024root___eval_settle(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_settle\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_per_bank_arb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_per_bank_arb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_per_bank_arb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_per_bank_arb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_per_bank_arb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_per_bank_arb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_per_bank_arb___024root___act_comb__TOP__0(Vtb_per_bank_arb___024root* vlSelf);

VL_ATTR_COLD bool Vtb_per_bank_arb___024root___eval_phase__stl(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_phase__stl\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_per_bank_arb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_per_bank_arb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_per_bank_arb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_per_bank_arb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_per_bank_arb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_per_bank_arb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_per_bank_arb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_per_bank_arb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_per_bank_arb.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_per_bank_arb___024root___ctor_var_reset(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___ctor_var_reset\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_per_bank_arb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7939124822484228359ull);
    vlSelf->tb_per_bank_arb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1380373265516185124ull);
    vlSelf->tb_per_bank_arb__DOT__req_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5457420724598080881ull);
    vlSelf->tb_per_bank_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 760318046487833822ull);
    vlSelf->tb_per_bank_arb__DOT__dut__DOT__conflict_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14069764095325690175ull);
    vlSelf->tb_per_bank_arb__DOT__dut__DOT__ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17619798556852952801ull);
    vlSelf->tb_per_bank_arb__DOT__dut__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 134937851010067776ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
