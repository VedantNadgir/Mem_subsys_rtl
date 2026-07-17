// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_per_bank_arb.h for the primary calling header

#include "Vtb_per_bank_arb__pch.h"

VlCoroutine Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__0(Vtb_per_bank_arb___024root* vlSelf);
VlCoroutine Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__1(Vtb_per_bank_arb___024root* vlSelf);
VlCoroutine Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__2(Vtb_per_bank_arb___024root* vlSelf);
VlCoroutine Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__3(Vtb_per_bank_arb___024root* vlSelf);

void Vtb_per_bank_arb___024root___eval_initial(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_initial\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("waves/per_bank_arb.vcd"s);
        vlSymsp->_traceDumpOpen();
        vlSelfRef.tb_per_bank_arb__DOT__clk = 0U;
    }
    Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VlCoroutine Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__0(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000000aae60ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                         15);
    VL_WRITEF_NX("WATCHDOG EXPIRED @ %0t\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 17, "");
    co_return;
}

void Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(Vtb_per_bank_arb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__1(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_per_bank_arb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_per_bank_arb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_per_bank_arb__DOT__rst_n = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    tb_per_bank_arb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, tb_per_bank_arb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                               "@(posedge tb_per_bank_arb.clk)");
        co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_per_bank_arb.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                             59);
        tb_per_bank_arb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_per_bank_arb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_per_bank_arb__DOT__rst_n = 1U;
    co_return;
}

void Vtb_per_bank_arb___024root____VbeforeTrig_h61eeb86b__0(Vtb_per_bank_arb___024root* vlSelf, const char* __VeventDescription);
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0;

VlCoroutine Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__2(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__1__cond;
    __Vtask_tb_per_bank_arb__DOT__check__1__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__2__cond;
    __Vtask_tb_per_bank_arb__DOT__check__2__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__3__cond;
    __Vtask_tb_per_bank_arb__DOT__check__3__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__4__cond;
    __Vtask_tb_per_bank_arb__DOT__check__4__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__5__cond;
    __Vtask_tb_per_bank_arb__DOT__check__5__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__7__cond;
    __Vtask_tb_per_bank_arb__DOT__check__7__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__8__cond;
    __Vtask_tb_per_bank_arb__DOT__check__8__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__9__cond;
    __Vtask_tb_per_bank_arb__DOT__check__9__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__12__cond;
    __Vtask_tb_per_bank_arb__DOT__check__12__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__13__cond;
    __Vtask_tb_per_bank_arb__DOT__check__13__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__14__cond;
    __Vtask_tb_per_bank_arb__DOT__check__14__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__16__cond;
    __Vtask_tb_per_bank_arb__DOT__check__16__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__17__cond;
    __Vtask_tb_per_bank_arb__DOT__check__17__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__20__cond;
    __Vtask_tb_per_bank_arb__DOT__check__20__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__21__cond;
    __Vtask_tb_per_bank_arb__DOT__check__21__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__23__cond;
    __Vtask_tb_per_bank_arb__DOT__check__23__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__24__cond;
    __Vtask_tb_per_bank_arb__DOT__check__24__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__26__cond;
    __Vtask_tb_per_bank_arb__DOT__check__26__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__28__cond;
    __Vtask_tb_per_bank_arb__DOT__check__28__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__29__cond;
    __Vtask_tb_per_bank_arb__DOT__check__29__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__31__cond;
    __Vtask_tb_per_bank_arb__DOT__check__31__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__32__cond;
    __Vtask_tb_per_bank_arb__DOT__check__32__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__34__cond;
    __Vtask_tb_per_bank_arb__DOT__check__34__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__35__cond;
    __Vtask_tb_per_bank_arb__DOT__check__35__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__37__cond;
    __Vtask_tb_per_bank_arb__DOT__check__37__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__38__cond;
    __Vtask_tb_per_bank_arb__DOT__check__38__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__40__cond;
    __Vtask_tb_per_bank_arb__DOT__check__40__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__41__cond;
    __Vtask_tb_per_bank_arb__DOT__check__41__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__43__cond;
    __Vtask_tb_per_bank_arb__DOT__check__43__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__44__cond;
    __Vtask_tb_per_bank_arb__DOT__check__44__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__46__cond;
    __Vtask_tb_per_bank_arb__DOT__check__46__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__47__cond;
    __Vtask_tb_per_bank_arb__DOT__check__47__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__49__cond;
    __Vtask_tb_per_bank_arb__DOT__check__49__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__50__cond;
    __Vtask_tb_per_bank_arb__DOT__check__50__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__52__cond;
    __Vtask_tb_per_bank_arb__DOT__check__52__cond = 0;
    IData/*31:0*/ __Vtask_tb_per_bank_arb__DOT__tc_arb_06__53__tb_per_bank_arb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_per_bank_arb__DOT__tc_arb_06__53__tb_per_bank_arb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__54__cond;
    __Vtask_tb_per_bank_arb__DOT__check__54__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__55__cond;
    __Vtask_tb_per_bank_arb__DOT__check__55__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__56__cond;
    __Vtask_tb_per_bank_arb__DOT__check__56__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__57__cond;
    __Vtask_tb_per_bank_arb__DOT__check__57__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__59__cond;
    __Vtask_tb_per_bank_arb__DOT__check__59__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__61__cond;
    __Vtask_tb_per_bank_arb__DOT__check__61__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__62__cond;
    __Vtask_tb_per_bank_arb__DOT__check__62__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__63__cond;
    __Vtask_tb_per_bank_arb__DOT__check__63__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__65__cond;
    __Vtask_tb_per_bank_arb__DOT__check__65__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__66__cond;
    __Vtask_tb_per_bank_arb__DOT__check__66__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__68__cond;
    __Vtask_tb_per_bank_arb__DOT__check__68__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__69__cond;
    __Vtask_tb_per_bank_arb__DOT__check__69__cond = 0;
    IData/*31:0*/ __Vtask_tb_per_bank_arb__DOT__tc_arb_08__70__tb_per_bank_arb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_per_bank_arb__DOT__tc_arb_08__70__tb_per_bank_arb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__71__cond;
    __Vtask_tb_per_bank_arb__DOT__check__71__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__72__cond;
    __Vtask_tb_per_bank_arb__DOT__check__72__cond = 0;
    CData/*0:0*/ __Vtask_tb_per_bank_arb__DOT__check__73__cond;
    __Vtask_tb_per_bank_arb__DOT__check__73__cond = 0;
    // Body
    VL_WRITEF_NX("TB START\n",0);
    Vtb_per_bank_arb___024root____VbeforeTrig_h61eeb86b__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.rst_n)");
    co_await vlSelfRef.__VtrigSched_h61eeb86b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.rst_n)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         326);
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         327);
    vlSelfRef.tb_per_bank_arb__DOT__test_id = 1U;
    VL_WRITEF_NX("\n=== Test %0d: Reset ===\n",1, '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id);
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         96);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__1__msg = "grant_valid should be 0 after reset"s;
    __Vtask_tb_per_bank_arb__DOT__check__1__cond = 
        (1U & (~ (IData)(Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
                         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant])));
    if (__Vtask_tb_per_bank_arb__DOT__check__1__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__1__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__1__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__2__msg = "conflict_mask should be 0 after reset"s;
    __Vtask_tb_per_bank_arb__DOT__check__2__cond = 
        (0U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__2__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__2__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__2__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         103);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__3__msg = "grant_valid should be 1 with single req"s;
    __Vtask_tb_per_bank_arb__DOT__check__3__cond = Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
        [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant];
    if (__Vtask_tb_per_bank_arb__DOT__check__3__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__3__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__3__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__4__msg = "grant_port should be 0 (ptr must be 0)"s;
    __Vtask_tb_per_bank_arb__DOT__check__4__cond = 
        (0U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__4__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__5__msg = "conflict_mask should be 0 with single req"s;
    __Vtask_tb_per_bank_arb__DOT__check__5__cond = 
        (0U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__5__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__5__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__5__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__test_id = 2U;
    VL_WRITEF_NX("\n=== Test %0d: Single Port, No Rotation ===\n",1
                 , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id);
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 4U;
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         117);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__7__msg = "grant_valid should be 1"s;
    __Vtask_tb_per_bank_arb__DOT__check__7__cond = Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
        [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant];
    if (__Vtask_tb_per_bank_arb__DOT__check__7__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__7__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__7__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__8__msg = "grant_port should be 2"s;
    __Vtask_tb_per_bank_arb__DOT__check__8__cond = 
        (2U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__8__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__8__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__8__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__9__msg = "conflict_mask should be 0 (no contention)"s;
    __Vtask_tb_per_bank_arb__DOT__check__9__cond = 
        (0U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__9__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__9__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__9__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__test_id = 3U;
    VL_WRITEF_NX("\n=== Test %0d: Two-Port Contention ===\n",1
                 , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id);
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 3U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         135);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__12__msg = "grant_valid should be 1"s;
    __Vtask_tb_per_bank_arb__DOT__check__12__cond = Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
        [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant];
    if (__Vtask_tb_per_bank_arb__DOT__check__12__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__13__msg = "Port 0 should win with ptr=0"s;
    __Vtask_tb_per_bank_arb__DOT__check__13__cond = 
        (0U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__13__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__14__msg = "conflict_mask should show port 1 lost"s;
    __Vtask_tb_per_bank_arb__DOT__check__14__cond = 
        (2U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__14__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__14__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__14__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         143);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__16__msg = "Port 1 should win after ptr advanced to 1"s;
    __Vtask_tb_per_bank_arb__DOT__check__16__cond = 
        (1U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__16__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__16__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__16__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__17__msg = "conflict_mask should show port 0 lost"s;
    __Vtask_tb_per_bank_arb__DOT__check__17__cond = 
        (1U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__17__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__17__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__17__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__test_id = 4U;
    VL_WRITEF_NX("\n=== Test %0d: Priority Wrap-Around ===\n",1
                 , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id);
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 0x0cU;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         159);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__20__msg = "Port 2 should win with ptr=2"s;
    __Vtask_tb_per_bank_arb__DOT__check__20__cond = 
        (2U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__20__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__20__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__20__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__21__msg = "conflict_mask should show port 3 lost"s;
    __Vtask_tb_per_bank_arb__DOT__check__21__cond = 
        (8U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__21__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__21__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__21__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 9U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         166);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__23__msg = "Port 3 should win with ptr=3"s;
    __Vtask_tb_per_bank_arb__DOT__check__23__cond = 
        (3U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__23__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__24__msg = "conflict_mask should show port 0 lost"s;
    __Vtask_tb_per_bank_arb__DOT__check__24__cond = 
        (1U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__24__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__24__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__24__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         172);
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         174);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__26__msg = "ptr should wrap to 0 (port 0 wins)"s;
    __Vtask_tb_per_bank_arb__DOT__check__26__cond = 
        (0U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__26__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__26__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__26__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__test_id = 5U;
    VL_WRITEF_NX("\n=== Test %0d: Full 4-Port Round-Robin Sweep ===\n",1
                 , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id);
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 0x0fU;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         187);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__28__msg = "RR sweep: port 0"s;
    __Vtask_tb_per_bank_arb__DOT__check__28__cond = 
        (0U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__28__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__28__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__28__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__29__msg = "conflict_mask == 4'b1110"s;
    __Vtask_tb_per_bank_arb__DOT__check__29__cond = 
        (0x0eU == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__29__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__29__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__29__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         193);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__31__msg = "RR sweep: port 1"s;
    __Vtask_tb_per_bank_arb__DOT__check__31__cond = 
        (1U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__31__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__31__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__31__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__32__msg = "conflict_mask == 4'b1101"s;
    __Vtask_tb_per_bank_arb__DOT__check__32__cond = 
        (0x0dU == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__32__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__32__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__32__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         199);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__34__msg = "RR sweep: port 2"s;
    __Vtask_tb_per_bank_arb__DOT__check__34__cond = 
        (2U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__34__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__34__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__34__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__35__msg = "conflict_mask == 4'b1011"s;
    __Vtask_tb_per_bank_arb__DOT__check__35__cond = 
        (0x0bU == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__35__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__35__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__35__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         205);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__37__msg = "RR sweep: port 3"s;
    __Vtask_tb_per_bank_arb__DOT__check__37__cond = 
        (3U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__37__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__37__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__37__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__38__msg = "conflict_mask == 4'b0111"s;
    __Vtask_tb_per_bank_arb__DOT__check__38__cond = 
        (7U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__38__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         211);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__40__msg = "RR sweep: port 0 again"s;
    __Vtask_tb_per_bank_arb__DOT__check__40__cond = 
        (0U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__40__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__40__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__40__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__41__msg = "conflict_mask == 4'b1110"s;
    __Vtask_tb_per_bank_arb__DOT__check__41__cond = 
        (0x0eU == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__41__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__41__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__41__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         217);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__43__msg = "RR sweep: port 1"s;
    __Vtask_tb_per_bank_arb__DOT__check__43__cond = 
        (1U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__43__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__43__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__43__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__44__msg = "conflict_mask == 4'b1101"s;
    __Vtask_tb_per_bank_arb__DOT__check__44__cond = 
        (0x0dU == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__44__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__44__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__44__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         222);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__46__msg = "RR sweep: port 2"s;
    __Vtask_tb_per_bank_arb__DOT__check__46__cond = 
        (2U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__46__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__46__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__46__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__47__msg = "conflict_mask == 4'b1011"s;
    __Vtask_tb_per_bank_arb__DOT__check__47__cond = 
        (0x0bU == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__47__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__47__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__47__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         227);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__49__msg = "RR sweep: port 3"s;
    __Vtask_tb_per_bank_arb__DOT__check__49__cond = 
        (3U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__49__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__49__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__49__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__50__msg = "conflict_mask == 4'b0111"s;
    __Vtask_tb_per_bank_arb__DOT__check__50__cond = 
        (7U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__50__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__50__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__50__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         234);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__52__msg = "ptr returned to 0 after full sweep"s;
    __Vtask_tb_per_bank_arb__DOT__check__52__cond = 
        (0U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__52__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__52__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__52__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    __Vtask_tb_per_bank_arb__DOT__tc_arb_06__53__tb_per_bank_arb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__test_id = 6U;
    VL_WRITEF_NX("\n=== Test %0d: grant_ready=0 Stall ===\n",1
                 , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id);
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 3U;
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         246);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__54__msg = "Initial grant should be port 0"s;
    __Vtask_tb_per_bank_arb__DOT__check__54__cond = 
        (0U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__54__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__54__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__54__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    __Vtask_tb_per_bank_arb__DOT__tc_arb_06__53__tb_per_bank_arb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_per_bank_arb__DOT__tc_arb_06__53__tb_per_bank_arb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                               "@(posedge tb_per_bank_arb.clk)");
        co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_per_bank_arb.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                             251);
        vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__55__msg = "grant_valid should remain 1 during stall"s;
        __Vtask_tb_per_bank_arb__DOT__check__55__cond 
            = Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
            [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant];
        if (__Vtask_tb_per_bank_arb__DOT__check__55__cond) {
            VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__55__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__55__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_per_bank_arb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
        }
        vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__56__msg = "grant_port should remain 0 during stall"s;
        __Vtask_tb_per_bank_arb__DOT__check__56__cond 
            = (0U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
               [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
        if (__Vtask_tb_per_bank_arb__DOT__check__56__cond) {
            VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__56__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__56__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_per_bank_arb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
        }
        vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__57__msg = "conflict_mask should remain stable"s;
        __Vtask_tb_per_bank_arb__DOT__check__57__cond 
            = (2U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
        if (__Vtask_tb_per_bank_arb__DOT__check__57__cond) {
            VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__57__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__57__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_per_bank_arb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
        }
        __Vtask_tb_per_bank_arb__DOT__tc_arb_06__53__tb_per_bank_arb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_per_bank_arb__DOT__tc_arb_06__53__tb_per_bank_arb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         259);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__59__msg = "ptr advanced to 1 after fire (was frozen at 0)"s;
    __Vtask_tb_per_bank_arb__DOT__check__59__cond = 
        (1U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__59__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__59__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__59__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__test_id = 7U;
    VL_WRITEF_NX("\n=== Test %0d: conflict_mask Accuracy ===\n",1
                 , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id);
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 7U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         270);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__61__msg = "grant_valid should be 1 with 3 ports"s;
    __Vtask_tb_per_bank_arb__DOT__check__61__cond = Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
        [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant];
    if (__Vtask_tb_per_bank_arb__DOT__check__61__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__61__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__61__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__62__msg = "Port 1 should win with ptr=1"s;
    __Vtask_tb_per_bank_arb__DOT__check__62__cond = 
        (1U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__62__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__62__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__62__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__63__msg = "conflict_mask should be 4'b0101 (ports 0,2 lost)"s;
    __Vtask_tb_per_bank_arb__DOT__check__63__cond = 
        (5U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__63__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         278);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__65__msg = "grant_valid should be 1 with single port"s;
    __Vtask_tb_per_bank_arb__DOT__check__65__cond = Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
        [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant];
    if (__Vtask_tb_per_bank_arb__DOT__check__65__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__65__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__65__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__66__msg = "conflict_mask should be 0 when no contention"s;
    __Vtask_tb_per_bank_arb__DOT__check__66__cond = 
        (0U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__66__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__66__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__66__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 1U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         81);
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 0U;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         285);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__68__msg = "grant_valid should be 0 with no requests"s;
    __Vtask_tb_per_bank_arb__DOT__check__68__cond = 
        (1U & (~ (IData)(Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
                         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant])));
    if (__Vtask_tb_per_bank_arb__DOT__check__68__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__68__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__68__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__69__msg = "conflict_mask should be 0 when no grant"s;
    __Vtask_tb_per_bank_arb__DOT__check__69__cond = 
        (0U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
    if (__Vtask_tb_per_bank_arb__DOT__check__69__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    __Vtask_tb_per_bank_arb__DOT__tc_arb_08__70__tb_per_bank_arb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__test_id = 8U;
    VL_WRITEF_NX("\n=== Test %0d: No Requests ===\n",1
                 , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id);
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 0U;
    vlSelfRef.tb_per_bank_arb__DOT__grant_ready = 0U;
    __Vtask_tb_per_bank_arb__DOT__tc_arb_08__70__tb_per_bank_arb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_per_bank_arb__DOT__tc_arb_08__70__tb_per_bank_arb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                               "@(posedge tb_per_bank_arb.clk)");
        co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_per_bank_arb.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                             299);
        vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__71__msg = "grant_valid should be 0 with no requests"s;
        __Vtask_tb_per_bank_arb__DOT__check__71__cond 
            = (1U & (~ (IData)(Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
                               [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant])));
        if (__Vtask_tb_per_bank_arb__DOT__check__71__cond) {
            VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__71__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__71__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_per_bank_arb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
        }
        vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__72__msg = "conflict_mask should be 0 with no requests"s;
        __Vtask_tb_per_bank_arb__DOT__check__72__cond 
            = (0U == (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask));
        if (__Vtask_tb_per_bank_arb__DOT__check__72__cond) {
            VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__72__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__72__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_per_bank_arb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
        }
        __Vtask_tb_per_bank_arb__DOT__tc_arb_08__70__tb_per_bank_arb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_per_bank_arb__DOT__tc_arb_08__70__tb_per_bank_arb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.tb_per_bank_arb__DOT__req_valid = 0x0bU;
    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(vlSelf, 
                                                           "@(posedge tb_per_bank_arb.clk)");
    co_await vlSelfRef.__VtrigSched_h8b0fb96c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_per_bank_arb.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                                         306);
    vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__73__msg = "ptr should still be 2 after 5 idle cycles (port 3 wins)"s;
    __Vtask_tb_per_bank_arb__DOT__check__73__cond = 
        (3U == Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
         [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]);
    if (__Vtask_tb_per_bank_arb__DOT__check__73__cond) {
        VL_WRITEF_NX("[OK]    Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__73__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test: %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_per_bank_arb__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_per_bank_arb__DOT__check__73__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_per_bank_arb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    VL_WRITEF_NX("\n=== TESTBENCH SUMMARY ===\n",0);
    if ((0U == vlSelfRef.tb_per_bank_arb__DOT__error_count)) {
        VL_WRITEF_NX("ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("%0d TEST(S) FAILED\n",1, '~',32,vlSelfRef.tb_per_bank_arb__DOT__error_count);
    }
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 346, "");
    co_return;
}

VlCoroutine Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__3(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 
                                             53);
        vlSelfRef.tb_per_bank_arb__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_per_bank_arb__DOT__clk)));
    }
    co_return;
}

bool Vtb_per_bank_arb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___trigger_anySet__act\n"); );
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

void Vtb_per_bank_arb___024root___act_comb__TOP__0(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___act_comb__TOP__0\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant 
        = (0x0000000fU & ((((0x000000f0U & (((~ (((0x000000ffU 
                                                   & (((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                                  >> (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & (((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                                >> (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr))) 
                                            << 4U)) 
                            | (0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & (((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                                                        << 4U) 
                                                       | (IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                                   >> (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & (((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                                                 >> (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr)) 
                          >> 4U));
    vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__conflict_mask 
        = ((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid) 
           & ((~ (IData)(vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant)) 
              & (- (IData)((VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))) 
                            & Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
                            [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant])))));
}

void Vtb_per_bank_arb___024root___timing_ready(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___timing_ready\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready("@(posedge tb_per_bank_arb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h61eeb86b__0.ready("@(posedge tb_per_bank_arb.rst_n)");
    }
}

void Vtb_per_bank_arb___024root___timing_resume(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___timing_resume\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h8b0fb96c__0.moveToResumeQueue(
                                                          "@(posedge tb_per_bank_arb.clk)");
    vlSelfRef.__VtrigSched_h61eeb86b__0.moveToResumeQueue(
                                                          "@(posedge tb_per_bank_arb.rst_n)");
    vlSelfRef.__VtrigSched_h8b0fb96c__0.resume("@(posedge tb_per_bank_arb.clk)");
    vlSelfRef.__VtrigSched_h61eeb86b__0.resume("@(posedge tb_per_bank_arb.rst_n)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_per_bank_arb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_per_bank_arb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_per_bank_arb___024root___eval_phase__act(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_phase__act\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.tb_per_bank_arb__DOT__rst_n) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__rst_n__0))) 
                                                           << 3U) 
                                                          | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 2U)) 
                                                         | ((((~ (IData)(vlSelfRef.tb_per_bank_arb__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_per_bank_arb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__clk__0 
            = vlSelfRef.tb_per_bank_arb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__rst_n__0 
            = vlSelfRef.tb_per_bank_arb__DOT__rst_n;
    }
    Vtb_per_bank_arb___024root___timing_ready(vlSelf);
    Vtb_per_bank_arb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_per_bank_arb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_per_bank_arb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_per_bank_arb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_per_bank_arb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((9ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_per_bank_arb___024root___act_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_per_bank_arb___024root___eval_phase__inact(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_phase__inact\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_per_bank_arb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_per_bank_arb___024root___eval_phase__nba(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_phase__nba\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_per_bank_arb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.tb_per_bank_arb__DOT__rst_n) {
                        if (((Vtb_per_bank_arb__ConstPool__TABLE_h8665d168_0
                              [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant] 
                              & (IData)(vlSelfRef.tb_per_bank_arb__DOT__grant_ready)) 
                             & VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_per_bank_arb__DOT__req_valid))))) {
                            vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr 
                                = (3U & VL_MODDIVS_III(32, 
                                                       ((IData)(1U) 
                                                        + Vtb_per_bank_arb__ConstPool__TABLE_ha1fb25ee_0
                                                        [vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__grant]), (IData)(4U)));
                        }
                    } else {
                        vlSelfRef.tb_per_bank_arb__DOT__dut__DOT__ptr = 0U;
                    }
                }
            }
            if ((0x000000000000000bULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_per_bank_arb___024root___act_comb__TOP__0(vlSelf);
            }
        }
        Vtb_per_bank_arb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_per_bank_arb___024root___eval(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_per_bank_arb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_per_bank_arb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_per_bank_arb.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_per_bank_arb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_per_bank_arb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_per_bank_arb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0(Vtb_per_bank_arb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root____VbeforeTrig_h8b0fb96c__0\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_per_bank_arb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__clk__0 
        = vlSelfRef.tb_per_bank_arb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8b0fb96c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_per_bank_arb___024root____VbeforeTrig_h61eeb86b__0(Vtb_per_bank_arb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root____VbeforeTrig_h61eeb86b__0\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_per_bank_arb__DOT__rst_n) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__rst_n__0))) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__rst_n__0 
        = vlSelfRef.tb_per_bank_arb__DOT__rst_n;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h61eeb86b__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_per_bank_arb___024root___eval_debug_assertions(Vtb_per_bank_arb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_per_bank_arb___024root___eval_debug_assertions\n"); );
    Vtb_per_bank_arb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
