// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rsp_mux.h for the primary calling header

#include "Vtb_rsp_mux__pch.h"

void Vtb_rsp_mux___024root___timing_ready(Vtb_rsp_mux___024root* vlSelf);

VL_ATTR_COLD void Vtb_rsp_mux___024root___eval_static(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_static\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_rsp_mux__DOT__error_count = 0U;
        vlSelfRef.tb_rsp_mux__DOT__test_id = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_mux__DOT__clk__0 
        = vlSelfRef.tb_rsp_mux__DOT__clk;
    Vtb_rsp_mux___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_rsp_mux___024root___eval_final(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_final\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rsp_mux___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_rsp_mux___024root___eval_phase__stl(Vtb_rsp_mux___024root* vlSelf);

VL_ATTR_COLD void Vtb_rsp_mux___024root___eval_settle(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_settle\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_rsp_mux___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_rsp_mux___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_rsp_mux___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rsp_mux___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_rsp_mux___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_rsp_mux___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___trigger_anySet__stl\n"); );
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

void Vtb_rsp_mux___024root___act_comb__TOP__0(Vtb_rsp_mux___024root* vlSelf);

VL_ATTR_COLD bool Vtb_rsp_mux___024root___eval_phase__stl(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_phase__stl\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_rsp_mux___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_rsp_mux___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_rsp_mux___024root___act_comb__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_rsp_mux___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rsp_mux___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_rsp_mux___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_rsp_mux.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_rsp_mux___024root___ctor_var_reset(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___ctor_var_reset\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_rsp_mux__DOT__pp1_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16694777952279600049ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_rsp_mux__DOT__pp1_rdata, __VscopeHash, 8423789344807971279ull);
    vlSelf->tb_rsp_mux__DOT__pp1_id = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6090470853820065412ull);
    vlSelf->tb_rsp_mux__DOT__pp1_we = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1855893978481787321ull);
    vlSelf->tb_rsp_mux__DOT__pp1_err = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8739618003260865088ull);
    vlSelf->tb_rsp_mux__DOT__rsp_fifo_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2099607046793562461ull);
    vlSelf->tb_rsp_mux__DOT__rsp_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5209282869525545857ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_rsp_mux__DOT__rsp_data, __VscopeHash, 5622303770961871354ull);
    vlSelf->tb_rsp_mux__DOT__rsp_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2207516446539241471ull);
    vlSelf->tb_rsp_mux__DOT__rsp_err = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8152091489982741934ull);
    vlSelf->tb_rsp_mux__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18071653914035721448ull);
    vlSelf->tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3997485284445169568ull);
    vlSelf->tb_rsp_mux__DOT__dut__DOT__dest_ports = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9719926150578083444ull);
    vlSelf->tb_rsp_mux__DOT__dut__DOT__p = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5272637849780344430ull);
    vlSelf->tb_rsp_mux__DOT__dut__DOT__found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13175678281311721870ull);
    vlSelf->tb_rsp_mux__DOT__dut__DOT__bank_granted = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16328847066775885049ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_rsp_mux__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
