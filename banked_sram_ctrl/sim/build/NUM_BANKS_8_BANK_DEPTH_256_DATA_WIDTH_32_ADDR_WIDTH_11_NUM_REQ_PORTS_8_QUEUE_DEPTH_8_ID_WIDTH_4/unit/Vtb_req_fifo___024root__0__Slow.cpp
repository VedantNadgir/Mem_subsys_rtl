// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_req_fifo.h for the primary calling header

#include "Vtb_req_fifo__pch.h"

void Vtb_req_fifo___024root___timing_ready(Vtb_req_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_req_fifo___024root___eval_static(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_static\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_req_fifo__DOT__error_count = 0U;
        vlSelfRef.tb_req_fifo__DOT__test_id = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__clk__0 
        = vlSelfRef.tb_req_fifo__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__rst_n__0 
        = vlSelfRef.tb_req_fifo__DOT__rst_n;
    Vtb_req_fifo___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_req_fifo___024root___eval_final(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_final\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_req_fifo___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_req_fifo___024root___eval_phase__stl(Vtb_req_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_req_fifo___024root___eval_settle(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_settle\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_req_fifo___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_req_fifo___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_req_fifo___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_req_fifo___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_req_fifo___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_req_fifo___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vtb_req_fifo___024root___eval_phase__stl(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_phase__stl\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_req_fifo___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_req_fifo___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_req_fifo__DOT__dut__DOT__nxt_occupancy 
                        = vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy;
                    if (((IData)(vlSelfRef.tb_req_fifo__DOT__push_valid) 
                         & (IData)(vlSelfRef.tb_req_fifo__DOT__push_ready))) {
                        vlSelfRef.tb_req_fifo__DOT__dut__DOT__nxt_occupancy 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__nxt_occupancy)));
                    }
                    if (((IData)(vlSelfRef.tb_req_fifo__DOT__pop) 
                         & (0U != (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy)))) {
                        vlSelfRef.tb_req_fifo__DOT__dut__DOT__nxt_occupancy 
                            = (7U & ((IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__nxt_occupancy) 
                                     - (IData)(1U)));
                    }
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_req_fifo___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_req_fifo___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_req_fifo___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_req_fifo.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_req_fifo.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_req_fifo.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_req_fifo___024root___ctor_var_reset(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___ctor_var_reset\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_req_fifo__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9813226174737643961ull);
    vlSelf->tb_req_fifo__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1336636666872902434ull);
    vlSelf->tb_req_fifo__DOT__push_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2642284592510477738ull);
    vlSelf->tb_req_fifo__DOT__push_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8951456213067133912ull);
    vlSelf->tb_req_fifo__DOT__push_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14738780875951604207ull);
    vlSelf->tb_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1241527097106135766ull);
    vlSelf->tb_req_fifo__DOT__A = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7795802358642025314ull);
    vlSelf->tb_req_fifo__DOT__B = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2892267922063434032ull);
    vlSelf->tb_req_fifo__DOT__C = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3072962278822747088ull);
    vlSelf->tb_req_fifo__DOT__D = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12024515123545322086ull);
    vlSelf->tb_req_fifo__DOT__D0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17895408045165694068ull);
    vlSelf->tb_req_fifo__DOT__D1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18121597817409608387ull);
    vlSelf->tb_req_fifo__DOT__D2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15375626422449763153ull);
    vlSelf->tb_req_fifo__DOT__D3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3662600806708351340ull);
    vlSelf->tb_req_fifo__DOT__D4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18128935330672836855ull);
    vlSelf->tb_req_fifo__DOT__D5 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4313136525984522885ull);
    vlSelf->tb_req_fifo__DOT__D6 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4319761744825440001ull);
    vlSelf->tb_req_fifo__DOT__D7 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12927394401150110115ull);
    vlSelf->tb_req_fifo__DOT__old_head = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17583989420868695533ull);
    vlSelf->tb_req_fifo__DOT__cap_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10370525369250617322ull);
    vlSelf->tb_req_fifo__DOT__exp_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16929574486037010156ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_req_fifo__DOT__dut__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14476617579912454249ull);
    }
    vlSelf->tb_req_fifo__DOT__dut__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17392692382774001113ull);
    vlSelf->tb_req_fifo__DOT__dut__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17898672296541317829ull);
    vlSelf->tb_req_fifo__DOT__dut__DOT__occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16612089231567406918ull);
    vlSelf->tb_req_fifo__DOT__dut__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7802643991640405112ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_req_fifo__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_req_fifo__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
