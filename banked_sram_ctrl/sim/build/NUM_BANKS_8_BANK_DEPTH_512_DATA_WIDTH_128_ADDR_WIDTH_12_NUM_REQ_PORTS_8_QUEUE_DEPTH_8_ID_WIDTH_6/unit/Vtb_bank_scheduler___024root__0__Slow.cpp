// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bank_scheduler.h for the primary calling header

#include "Vtb_bank_scheduler__pch.h"

void Vtb_bank_scheduler___024root___timing_ready(Vtb_bank_scheduler___024root* vlSelf);

VL_ATTR_COLD void Vtb_bank_scheduler___024root___eval_static(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_static\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_bank_scheduler__DOT__error_count = 0U;
        vlSelfRef.tb_bank_scheduler__DOT__test_id = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__clk__0 
        = vlSelfRef.tb_bank_scheduler__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__rst_n__0 
        = vlSelfRef.tb_bank_scheduler__DOT__rst_n;
    Vtb_bank_scheduler___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_bank_scheduler___024root___eval_final(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_final\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bank_scheduler___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_bank_scheduler___024root___eval_phase__stl(Vtb_bank_scheduler___024root* vlSelf);

VL_ATTR_COLD void Vtb_bank_scheduler___024root___eval_settle(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_settle\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_bank_scheduler___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_bank_scheduler___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_bank_scheduler___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bank_scheduler___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_bank_scheduler___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_bank_scheduler___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vtb_bank_scheduler___024root___eval_phase__stl(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_phase__stl\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_bank_scheduler___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_bank_scheduler___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we 
                        = ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid) 
                           & ((~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_err)) 
                              & (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_we)));
                    vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready 
                        = (1U & ((~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_valid)) 
                                 | (IData)(vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready)));
                    vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready 
                        = (1U & ((~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid)) 
                                 | (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready)));
                }
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

bool Vtb_bank_scheduler___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bank_scheduler___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_bank_scheduler___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_bank_scheduler.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_bank_scheduler.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_bank_scheduler.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_bank_scheduler___024root___ctor_var_reset(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___ctor_var_reset\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_bank_scheduler__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7403556663596334583ull);
    vlSelf->tb_bank_scheduler__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14147578382193368ull);
    vlSelf->tb_bank_scheduler__DOT__grant_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15531590270606955288ull);
    vlSelf->tb_bank_scheduler__DOT__grant_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3445620326148669461ull);
    vlSelf->tb_bank_scheduler__DOT__grant_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4730698537660776568ull);
    vlSelf->tb_bank_scheduler__DOT__grant_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1329243953452606349ull);
    vlSelf->tb_bank_scheduler__DOT__grant_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1255111279323922527ull);
    vlSelf->tb_bank_scheduler__DOT__grant_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12183807279488056291ull);
    vlSelf->tb_bank_scheduler__DOT__sram_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1167564055595333966ull);
    vlSelf->tb_bank_scheduler__DOT__pp1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14502109294782638325ull);
    vlSelf->tb_bank_scheduler__DOT__pp1_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7272539672422104508ull);
    vlSelf->tb_bank_scheduler__DOT__pp1_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5621734174366440922ull);
    vlSelf->tb_bank_scheduler__DOT__pp1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12341113748476099843ull);
    vlSelf->tb_bank_scheduler__DOT__pp1_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5835326002521690254ull);
    vlSelf->tb_bank_scheduler__DOT__bank_pp1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15651261730613116292ull);
    vlSelf->tb_bank_scheduler__DOT__dut__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1590563183341529205ull);
    vlSelf->tb_bank_scheduler__DOT__dut__DOT__sram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4402443031892291765ull);
    vlSelf->tb_bank_scheduler__DOT__dut__DOT__pp0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1105580544978617796ull);
    vlSelf->tb_bank_scheduler__DOT__dut__DOT__pp0_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16455676444634240733ull);
    vlSelf->tb_bank_scheduler__DOT__dut__DOT__pp0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16969138575161938410ull);
    vlSelf->tb_bank_scheduler__DOT__dut__DOT__pp0_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11648068441845889196ull);
    vlSelf->tb_bank_scheduler__DOT__dut__DOT__pp0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8604782722959939166ull);
    vlSelf->tb_bank_scheduler__DOT__dut__DOT__pp0_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15762408521170229987ull);
    vlSelf->tb_bank_scheduler__DOT__dut__DOT__pp0_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15416462066972300380ull);
    vlSelf->tb_bank_scheduler__DOT__dut__DOT__pp1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8851470608622065707ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
