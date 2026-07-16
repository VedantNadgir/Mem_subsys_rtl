// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sram_array.h for the primary calling header

#include "Vtb_sram_array__pch.h"

VlCoroutine Vtb_sram_array___024root___eval_initial__TOP__Vtiming__0(Vtb_sram_array___024root* vlSelf);
VlCoroutine Vtb_sram_array___024root___eval_initial__TOP__Vtiming__1(Vtb_sram_array___024root* vlSelf);
VlCoroutine Vtb_sram_array___024root___eval_initial__TOP__Vtiming__2(Vtb_sram_array___024root* vlSelf);

void Vtb_sram_array___024root___eval_initial(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_initial\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.tb_sram_array__DOT__clk = 0U;
        vlSymsp->_vm_contextp__->dumpfile("waves/sram_array.vcd"s);
        vlSymsp->_traceDumpOpen();
        vlSelfRef.tb_sram_array__DOT__we = 0U;
        vlSelfRef.tb_sram_array__DOT__addr = 0U;
        vlSelfRef.tb_sram_array__DOT__wdata = 0U;
        vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_sram_array___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_sram_array___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_sram_array___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_sram_array___024root___eval_initial__TOP__Vtiming__0(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000002dc6c0ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         40);
    VL_WRITEF_NX("[ERROR] WATCHDOG EXPIRED @ time %0t\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 42, "");
    co_return;
}

void Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(Vtb_sram_array___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_sram_array___024root___eval_initial__TOP__Vtiming__1(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__1__a;
    __Vtask_tb_sram_array__DOT__write_word__1__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__1__d;
    __Vtask_tb_sram_array__DOT__write_word__1__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__1__be;
    __Vtask_tb_sram_array__DOT__write_word__1__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__2__a;
    __Vtask_tb_sram_array__DOT__expect_read__2__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__2__d;
    __Vtask_tb_sram_array__DOT__expect_read__2__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__3__a;
    __Vtask_tb_sram_array__DOT__read_addr__3__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__4__cond;
    __Vtask_tb_sram_array__DOT__check__4__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__7__a;
    __Vtask_tb_sram_array__DOT__write_word__7__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__7__d;
    __Vtask_tb_sram_array__DOT__write_word__7__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__7__be;
    __Vtask_tb_sram_array__DOT__write_word__7__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__8__a;
    __Vtask_tb_sram_array__DOT__read_addr__8__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__9__cond;
    __Vtask_tb_sram_array__DOT__check__9__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__10__a;
    __Vtask_tb_sram_array__DOT__write_word__10__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__10__d;
    __Vtask_tb_sram_array__DOT__write_word__10__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__10__be;
    __Vtask_tb_sram_array__DOT__write_word__10__be = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__11__cond;
    __Vtask_tb_sram_array__DOT__check__11__cond = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__12__cond;
    __Vtask_tb_sram_array__DOT__check__12__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__14__a;
    __Vtask_tb_sram_array__DOT__write_word__14__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__14__d;
    __Vtask_tb_sram_array__DOT__write_word__14__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__14__be;
    __Vtask_tb_sram_array__DOT__write_word__14__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__15__a;
    __Vtask_tb_sram_array__DOT__expect_read__15__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__15__d;
    __Vtask_tb_sram_array__DOT__expect_read__15__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__16__a;
    __Vtask_tb_sram_array__DOT__read_addr__16__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__17__cond;
    __Vtask_tb_sram_array__DOT__check__17__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__19__a;
    __Vtask_tb_sram_array__DOT__write_word__19__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__19__d;
    __Vtask_tb_sram_array__DOT__write_word__19__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__19__be;
    __Vtask_tb_sram_array__DOT__write_word__19__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__20__a;
    __Vtask_tb_sram_array__DOT__write_word__20__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__20__d;
    __Vtask_tb_sram_array__DOT__write_word__20__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__20__be;
    __Vtask_tb_sram_array__DOT__write_word__20__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__21__a;
    __Vtask_tb_sram_array__DOT__expect_read__21__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__21__d;
    __Vtask_tb_sram_array__DOT__expect_read__21__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__22__a;
    __Vtask_tb_sram_array__DOT__read_addr__22__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__23__cond;
    __Vtask_tb_sram_array__DOT__check__23__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__25__a;
    __Vtask_tb_sram_array__DOT__write_word__25__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__25__d;
    __Vtask_tb_sram_array__DOT__write_word__25__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__25__be;
    __Vtask_tb_sram_array__DOT__write_word__25__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__26__a;
    __Vtask_tb_sram_array__DOT__write_word__26__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__26__d;
    __Vtask_tb_sram_array__DOT__write_word__26__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__26__be;
    __Vtask_tb_sram_array__DOT__write_word__26__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__27__a;
    __Vtask_tb_sram_array__DOT__expect_read__27__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__27__d;
    __Vtask_tb_sram_array__DOT__expect_read__27__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__28__a;
    __Vtask_tb_sram_array__DOT__read_addr__28__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__29__cond;
    __Vtask_tb_sram_array__DOT__check__29__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__30__a;
    __Vtask_tb_sram_array__DOT__write_word__30__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__30__d;
    __Vtask_tb_sram_array__DOT__write_word__30__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__30__be;
    __Vtask_tb_sram_array__DOT__write_word__30__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__31__a;
    __Vtask_tb_sram_array__DOT__expect_read__31__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__31__d;
    __Vtask_tb_sram_array__DOT__expect_read__31__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__32__a;
    __Vtask_tb_sram_array__DOT__read_addr__32__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__33__cond;
    __Vtask_tb_sram_array__DOT__check__33__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__34__a;
    __Vtask_tb_sram_array__DOT__write_word__34__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__34__d;
    __Vtask_tb_sram_array__DOT__write_word__34__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__34__be;
    __Vtask_tb_sram_array__DOT__write_word__34__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__35__a;
    __Vtask_tb_sram_array__DOT__expect_read__35__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__35__d;
    __Vtask_tb_sram_array__DOT__expect_read__35__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__36__a;
    __Vtask_tb_sram_array__DOT__read_addr__36__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__37__cond;
    __Vtask_tb_sram_array__DOT__check__37__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__39__a;
    __Vtask_tb_sram_array__DOT__write_word__39__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__39__d;
    __Vtask_tb_sram_array__DOT__write_word__39__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__39__be;
    __Vtask_tb_sram_array__DOT__write_word__39__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__40__a;
    __Vtask_tb_sram_array__DOT__write_word__40__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__40__d;
    __Vtask_tb_sram_array__DOT__write_word__40__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__40__be;
    __Vtask_tb_sram_array__DOT__write_word__40__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__41__a;
    __Vtask_tb_sram_array__DOT__expect_read__41__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__41__d;
    __Vtask_tb_sram_array__DOT__expect_read__41__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__42__a;
    __Vtask_tb_sram_array__DOT__read_addr__42__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__43__cond;
    __Vtask_tb_sram_array__DOT__check__43__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__45__a;
    __Vtask_tb_sram_array__DOT__write_word__45__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__45__d;
    __Vtask_tb_sram_array__DOT__write_word__45__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__45__be;
    __Vtask_tb_sram_array__DOT__write_word__45__be = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__46__cond;
    __Vtask_tb_sram_array__DOT__check__46__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__47__a;
    __Vtask_tb_sram_array__DOT__read_addr__47__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__48__cond;
    __Vtask_tb_sram_array__DOT__check__48__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__50__a;
    __Vtask_tb_sram_array__DOT__write_word__50__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__50__d;
    __Vtask_tb_sram_array__DOT__write_word__50__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__50__be;
    __Vtask_tb_sram_array__DOT__write_word__50__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__51__a;
    __Vtask_tb_sram_array__DOT__write_word__51__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__51__d;
    __Vtask_tb_sram_array__DOT__write_word__51__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__51__be;
    __Vtask_tb_sram_array__DOT__write_word__51__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__52__a;
    __Vtask_tb_sram_array__DOT__write_word__52__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__52__d;
    __Vtask_tb_sram_array__DOT__write_word__52__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__52__be;
    __Vtask_tb_sram_array__DOT__write_word__52__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__53__a;
    __Vtask_tb_sram_array__DOT__expect_read__53__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__53__d;
    __Vtask_tb_sram_array__DOT__expect_read__53__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__54__a;
    __Vtask_tb_sram_array__DOT__read_addr__54__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__55__cond;
    __Vtask_tb_sram_array__DOT__check__55__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__56__a;
    __Vtask_tb_sram_array__DOT__expect_read__56__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__56__d;
    __Vtask_tb_sram_array__DOT__expect_read__56__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__57__a;
    __Vtask_tb_sram_array__DOT__read_addr__57__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__58__cond;
    __Vtask_tb_sram_array__DOT__check__58__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__60__a;
    __Vtask_tb_sram_array__DOT__write_word__60__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__60__d;
    __Vtask_tb_sram_array__DOT__write_word__60__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__60__be;
    __Vtask_tb_sram_array__DOT__write_word__60__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__61__a;
    __Vtask_tb_sram_array__DOT__write_word__61__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__61__d;
    __Vtask_tb_sram_array__DOT__write_word__61__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__61__be;
    __Vtask_tb_sram_array__DOT__write_word__61__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__62__a;
    __Vtask_tb_sram_array__DOT__write_word__62__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__62__d;
    __Vtask_tb_sram_array__DOT__write_word__62__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__62__be;
    __Vtask_tb_sram_array__DOT__write_word__62__be = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__63__cond;
    __Vtask_tb_sram_array__DOT__check__63__cond = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__64__cond;
    __Vtask_tb_sram_array__DOT__check__64__cond = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__65__cond;
    __Vtask_tb_sram_array__DOT__check__65__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__67__a;
    __Vtask_tb_sram_array__DOT__write_word__67__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__67__d;
    __Vtask_tb_sram_array__DOT__write_word__67__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__67__be;
    __Vtask_tb_sram_array__DOT__write_word__67__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__68__a;
    __Vtask_tb_sram_array__DOT__write_word__68__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__68__d;
    __Vtask_tb_sram_array__DOT__write_word__68__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__68__be;
    __Vtask_tb_sram_array__DOT__write_word__68__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__69__a;
    __Vtask_tb_sram_array__DOT__expect_read__69__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__69__d;
    __Vtask_tb_sram_array__DOT__expect_read__69__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__70__a;
    __Vtask_tb_sram_array__DOT__read_addr__70__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__71__cond;
    __Vtask_tb_sram_array__DOT__check__71__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__73__a;
    __Vtask_tb_sram_array__DOT__write_word__73__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__73__d;
    __Vtask_tb_sram_array__DOT__write_word__73__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__73__be;
    __Vtask_tb_sram_array__DOT__write_word__73__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__write_word__74__a;
    __Vtask_tb_sram_array__DOT__write_word__74__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__write_word__74__d;
    __Vtask_tb_sram_array__DOT__write_word__74__d = 0;
    CData/*3:0*/ __Vtask_tb_sram_array__DOT__write_word__74__be;
    __Vtask_tb_sram_array__DOT__write_word__74__be = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__75__a;
    __Vtask_tb_sram_array__DOT__expect_read__75__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__75__d;
    __Vtask_tb_sram_array__DOT__expect_read__75__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__76__a;
    __Vtask_tb_sram_array__DOT__read_addr__76__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__77__cond;
    __Vtask_tb_sram_array__DOT__check__77__cond = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__expect_read__78__a;
    __Vtask_tb_sram_array__DOT__expect_read__78__a = 0;
    IData/*31:0*/ __Vtask_tb_sram_array__DOT__expect_read__78__d;
    __Vtask_tb_sram_array__DOT__expect_read__78__d = 0;
    CData/*7:0*/ __Vtask_tb_sram_array__DOT__read_addr__79__a;
    __Vtask_tb_sram_array__DOT__read_addr__79__a = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__80__cond;
    __Vtask_tb_sram_array__DOT__check__80__cond = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__82__cond;
    __Vtask_tb_sram_array__DOT__check__82__cond = 0;
    CData/*0:0*/ __Vtask_tb_sram_array__DOT__check__83__cond;
    __Vtask_tb_sram_array__DOT__check__83__cond = 0;
    // Body
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         358);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         359);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__test_id = 1U;
    VL_WRITEF_NX("\n=== TC_SRAM_01: Full-Word Write and Read-Back ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__1__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__1__d = 0xdeadbeefU;
    __Vtask_tb_sram_array__DOT__write_word__1__a = 5U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__1__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__1__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__1__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__2__msg = "Full-word write should read back correctly"s;
    __Vtask_tb_sram_array__DOT__expect_read__2__d = 0xdeadbeefU;
    __Vtask_tb_sram_array__DOT__expect_read__2__a = 5U;
    __Vtask_tb_sram_array__DOT__read_addr__3__a = __Vtask_tb_sram_array__DOT__expect_read__2__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__3__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__4__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__2__msg;
    __Vtask_tb_sram_array__DOT__check__4__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                  [vlSelfRef.tb_sram_array__DOT__addr] 
                                                  == __Vtask_tb_sram_array__DOT__expect_read__2__d);
    if (__Vtask_tb_sram_array__DOT__check__4__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 2U;
    VL_WRITEF_NX("\n=== TC_SRAM_02: Registered Read 1-Cycle Latency ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__7__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__7__d = 0xcafebabeU;
    __Vtask_tb_sram_array__DOT__write_word__7__a = 0xfeU;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__7__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__7__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__7__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__read_addr__8__a = 0xfeU;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__8__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__9__msg = "Prime rdata to known value"s;
    __Vtask_tb_sram_array__DOT__check__9__cond = (0xcafebabeU 
                                                  == vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                  [vlSelfRef.tb_sram_array__DOT__addr]);
    if (__Vtask_tb_sram_array__DOT__check__9__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__9__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__9__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    __Vtask_tb_sram_array__DOT__write_word__10__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__10__d = 0xaaaaaaaaU;
    __Vtask_tb_sram_array__DOT__write_word__10__a = 0x10U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__10__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__10__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__10__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.tb_sram_array__DOT__old_rdata = vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
        [vlSelfRef.tb_sram_array__DOT__addr];
    vlSelfRef.tb_sram_array__DOT__addr = 0x10U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__11__msg = "rdata must not change combinationally when addr changes"s;
    __Vtask_tb_sram_array__DOT__check__11__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == vlSelfRef.tb_sram_array__DOT__old_rdata);
    if (__Vtask_tb_sram_array__DOT__check__11__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__11__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__11__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         146);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         147);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__12__msg = "rdata should update one cycle after read address is presented"s;
    __Vtask_tb_sram_array__DOT__check__12__cond = (0xaaaaaaaaU 
                                                   == vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr]);
    if (__Vtask_tb_sram_array__DOT__check__12__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 3U;
    VL_WRITEF_NX("\n=== TC_SRAM_03: we=0 Prevents Write ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__14__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__14__d = 0x11111111U;
    __Vtask_tb_sram_array__DOT__write_word__14__a = 0x20U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__14__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__14__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__14__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.tb_sram_array__DOT__addr = 0x20U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0xdeadcafeU;
    vlSelfRef.tb_sram_array__DOT__bwe = 0x0fU;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         167);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         168);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__15__msg = "Memory should remain unchanged when we=0"s;
    __Vtask_tb_sram_array__DOT__expect_read__15__d = 0x11111111U;
    __Vtask_tb_sram_array__DOT__expect_read__15__a = 0x20U;
    __Vtask_tb_sram_array__DOT__read_addr__16__a = __Vtask_tb_sram_array__DOT__expect_read__15__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__16__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__17__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__15__msg;
    __Vtask_tb_sram_array__DOT__check__17__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__15__d);
    if (__Vtask_tb_sram_array__DOT__check__17__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__17__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__17__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 4U;
    VL_WRITEF_NX("\n=== TC_SRAM_04: Partial Write Byte Lane 0 Only ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__19__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__19__d = 0xaabbccddU;
    __Vtask_tb_sram_array__DOT__write_word__19__a = 0x30U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__19__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__19__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__19__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__write_word__20__be = 1U;
    __Vtask_tb_sram_array__DOT__write_word__20__d = 0x12345678U;
    __Vtask_tb_sram_array__DOT__write_word__20__a = 0x30U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__20__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__20__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__20__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__21__msg = "Only byte lane 0 should update"s;
    __Vtask_tb_sram_array__DOT__expect_read__21__d = 0xaabbcc78U;
    __Vtask_tb_sram_array__DOT__expect_read__21__a = 0x30U;
    __Vtask_tb_sram_array__DOT__read_addr__22__a = __Vtask_tb_sram_array__DOT__expect_read__21__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__22__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__23__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__21__msg;
    __Vtask_tb_sram_array__DOT__check__23__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__21__d);
    if (__Vtask_tb_sram_array__DOT__check__23__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 5U;
    VL_WRITEF_NX("\n=== TC_SRAM_05: Each Byte Lane Independently ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__25__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__25__d = 0U;
    __Vtask_tb_sram_array__DOT__write_word__25__a = 0x40U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__25__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__25__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__25__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__write_word__26__be = 2U;
    __Vtask_tb_sram_array__DOT__write_word__26__d = 0x0000ff00U;
    __Vtask_tb_sram_array__DOT__write_word__26__a = 0x40U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__26__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__26__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__26__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__27__msg = "Byte lane 1 should update independently"s;
    __Vtask_tb_sram_array__DOT__expect_read__27__d = 0x0000ff00U;
    __Vtask_tb_sram_array__DOT__expect_read__27__a = 0x40U;
    __Vtask_tb_sram_array__DOT__read_addr__28__a = __Vtask_tb_sram_array__DOT__expect_read__27__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__28__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__29__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__27__msg;
    __Vtask_tb_sram_array__DOT__check__29__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__27__d);
    if (__Vtask_tb_sram_array__DOT__check__29__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__29__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__29__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    __Vtask_tb_sram_array__DOT__write_word__30__be = 4U;
    __Vtask_tb_sram_array__DOT__write_word__30__d = 0x00ab0000U;
    __Vtask_tb_sram_array__DOT__write_word__30__a = 0x40U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__30__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__30__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__30__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__31__msg = "Byte lane 2 should update independently"s;
    __Vtask_tb_sram_array__DOT__expect_read__31__d = 0x00abff00U;
    __Vtask_tb_sram_array__DOT__expect_read__31__a = 0x40U;
    __Vtask_tb_sram_array__DOT__read_addr__32__a = __Vtask_tb_sram_array__DOT__expect_read__31__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__32__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__33__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__31__msg;
    __Vtask_tb_sram_array__DOT__check__33__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__31__d);
    if (__Vtask_tb_sram_array__DOT__check__33__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__33__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__33__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    __Vtask_tb_sram_array__DOT__write_word__34__be = 8U;
    __Vtask_tb_sram_array__DOT__write_word__34__d = 0x55000000U;
    __Vtask_tb_sram_array__DOT__write_word__34__a = 0x40U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__34__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__34__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__34__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__35__msg = "Byte lane 3 should update independently"s;
    __Vtask_tb_sram_array__DOT__expect_read__35__d = 0x55abff00U;
    __Vtask_tb_sram_array__DOT__expect_read__35__a = 0x40U;
    __Vtask_tb_sram_array__DOT__read_addr__36__a = __Vtask_tb_sram_array__DOT__expect_read__35__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__36__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__37__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__35__msg;
    __Vtask_tb_sram_array__DOT__check__37__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__35__d);
    if (__Vtask_tb_sram_array__DOT__check__37__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__37__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__37__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 6U;
    VL_WRITEF_NX("\n=== TC_SRAM_06: bwe=0 With we=1 Causes No Write ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__39__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__39__d = 0x12345678U;
    __Vtask_tb_sram_array__DOT__write_word__39__a = 0x50U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__39__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__39__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__39__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__write_word__40__be = 0U;
    __Vtask_tb_sram_array__DOT__write_word__40__d = 0xdeaddeadU;
    __Vtask_tb_sram_array__DOT__write_word__40__a = 0x50U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__40__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__40__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__40__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__41__msg = "bwe=0 should suppress all byte writes"s;
    __Vtask_tb_sram_array__DOT__expect_read__41__d = 0x12345678U;
    __Vtask_tb_sram_array__DOT__expect_read__41__a = 0x50U;
    __Vtask_tb_sram_array__DOT__read_addr__42__a = __Vtask_tb_sram_array__DOT__expect_read__41__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__42__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__43__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__41__msg;
    __Vtask_tb_sram_array__DOT__check__43__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__41__d);
    if (__Vtask_tb_sram_array__DOT__check__43__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__43__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__43__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 7U;
    VL_WRITEF_NX("\n=== TC_SRAM_07: Same-Address Read+Write Gives Old Data First ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__45__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__45__d = 0xaaaaaaaaU;
    __Vtask_tb_sram_array__DOT__write_word__45__a = 0U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__45__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__45__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__45__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.tb_sram_array__DOT__addr = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0xbbbbbbbbU;
    vlSelfRef.tb_sram_array__DOT__bwe = 0x0fU;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         237);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         238);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__46__msg = "New_Value should be seen due to combinational read"s;
    __Vtask_tb_sram_array__DOT__check__46__cond = (0xbbbbbbbbU 
                                                   == vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr]);
    if (__Vtask_tb_sram_array__DOT__check__46__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__46__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__46__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__read_addr__47__a = 0U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__47__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__48__msg = "New data should be visible on following read"s;
    __Vtask_tb_sram_array__DOT__check__48__cond = (0xbbbbbbbbU 
                                                   == vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr]);
    if (__Vtask_tb_sram_array__DOT__check__48__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__48__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__48__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 8U;
    VL_WRITEF_NX("\n=== TC_SRAM_08: Different Addresses Are Independent ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__50__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__50__d = 0x11111111U;
    __Vtask_tb_sram_array__DOT__write_word__50__a = 1U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__50__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__50__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__50__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__write_word__51__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__51__d = 0x22222222U;
    __Vtask_tb_sram_array__DOT__write_word__51__a = 2U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__51__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__51__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__51__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__write_word__52__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__52__d = 0xffffffffU;
    __Vtask_tb_sram_array__DOT__write_word__52__a = 1U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__52__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__52__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__52__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__53__msg = "Write to addr 0x01 must not affect addr 0x02"s;
    __Vtask_tb_sram_array__DOT__expect_read__53__d = 0x22222222U;
    __Vtask_tb_sram_array__DOT__expect_read__53__a = 2U;
    __Vtask_tb_sram_array__DOT__read_addr__54__a = __Vtask_tb_sram_array__DOT__expect_read__53__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__54__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__55__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__53__msg;
    __Vtask_tb_sram_array__DOT__check__55__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__53__d);
    if (__Vtask_tb_sram_array__DOT__check__55__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__55__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__55__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__56__msg = "Updated addr 0x01 should hold new value"s;
    __Vtask_tb_sram_array__DOT__expect_read__56__d = 0xffffffffU;
    __Vtask_tb_sram_array__DOT__expect_read__56__a = 1U;
    __Vtask_tb_sram_array__DOT__read_addr__57__a = __Vtask_tb_sram_array__DOT__expect_read__56__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__57__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__58__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__56__msg;
    __Vtask_tb_sram_array__DOT__check__58__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__56__d);
    if (__Vtask_tb_sram_array__DOT__check__58__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__58__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__58__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 9U;
    VL_WRITEF_NX("\n=== TC_SRAM_09: Pipelined Read Address-to-rdata Lag ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__60__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__60__d = 0x0000aaaaU;
    __Vtask_tb_sram_array__DOT__write_word__60__a = 0x60U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__60__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__60__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__60__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__write_word__61__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__61__d = 0x0000bbbbU;
    __Vtask_tb_sram_array__DOT__write_word__61__a = 0x61U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__61__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__61__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__61__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__write_word__62__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__62__d = 0x0000ccccU;
    __Vtask_tb_sram_array__DOT__write_word__62__a = 0x62U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__62__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__62__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__62__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.tb_sram_array__DOT__addr = 0x60U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         282);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         283);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__63__msg = "Read of addr 0x60 should appear after one cycle"s;
    __Vtask_tb_sram_array__DOT__check__63__cond = (0x0000aaaaU 
                                                   == vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr]);
    if (__Vtask_tb_sram_array__DOT__check__63__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__addr = 0x61U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         289);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         290);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__64__msg = "Read of addr 0x61 should appear after one cycle"s;
    __Vtask_tb_sram_array__DOT__check__64__cond = (0x0000bbbbU 
                                                   == vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr]);
    if (__Vtask_tb_sram_array__DOT__check__64__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__addr = 0x62U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         296);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         297);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__65__msg = "Read of addr 0x62 should appear after one cycle"s;
    __Vtask_tb_sram_array__DOT__check__65__cond = (0x0000ccccU 
                                                   == vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr]);
    if (__Vtask_tb_sram_array__DOT__check__65__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__65__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__65__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 0x0000000aU;
    VL_WRITEF_NX("\n=== TC_SRAM_10: Back-to-Back Writes Same Address ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__67__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__67__d = 0xaaaaaaaaU;
    __Vtask_tb_sram_array__DOT__write_word__67__a = 7U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__67__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__67__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__67__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__write_word__68__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__68__d = 0xbbbbbbbbU;
    __Vtask_tb_sram_array__DOT__write_word__68__a = 7U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__68__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__68__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__68__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__69__msg = "Later write should overwrite earlier write"s;
    __Vtask_tb_sram_array__DOT__expect_read__69__d = 0xbbbbbbbbU;
    __Vtask_tb_sram_array__DOT__expect_read__69__a = 7U;
    __Vtask_tb_sram_array__DOT__read_addr__70__a = __Vtask_tb_sram_array__DOT__expect_read__69__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__70__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__71__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__69__msg;
    __Vtask_tb_sram_array__DOT__check__71__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__69__d);
    if (__Vtask_tb_sram_array__DOT__check__71__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__71__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__71__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 0x0000000bU;
    VL_WRITEF_NX("\n=== TC_SRAM_11: Boundary Addresses ===\n",0);
    __Vtask_tb_sram_array__DOT__write_word__73__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__73__d = 0xdead0000U;
    __Vtask_tb_sram_array__DOT__write_word__73__a = 0U;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__73__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__73__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__73__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    __Vtask_tb_sram_array__DOT__write_word__74__be = 0x0fU;
    __Vtask_tb_sram_array__DOT__write_word__74__d = 0xdead00ffU;
    __Vtask_tb_sram_array__DOT__write_word__74__a = 0xffU;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__write_word__74__a;
    vlSelfRef.tb_sram_array__DOT__wdata = __Vtask_tb_sram_array__DOT__write_word__74__d;
    vlSelfRef.tb_sram_array__DOT__bwe = __Vtask_tb_sram_array__DOT__write_word__74__be;
    vlSelfRef.tb_sram_array__DOT__we = 1U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    vlSelfRef.tb_sram_array__DOT__wdata = 0U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__75__msg = "Address 0 should read back correctly"s;
    __Vtask_tb_sram_array__DOT__expect_read__75__d = 0xdead0000U;
    __Vtask_tb_sram_array__DOT__expect_read__75__a = 0U;
    __Vtask_tb_sram_array__DOT__read_addr__76__a = __Vtask_tb_sram_array__DOT__expect_read__75__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__76__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__77__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__75__msg;
    __Vtask_tb_sram_array__DOT__check__77__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__75__d);
    if (__Vtask_tb_sram_array__DOT__check__77__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__77__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__77__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__78__msg = "Address DEPTH-1 should read back correctly"s;
    __Vtask_tb_sram_array__DOT__expect_read__78__d = 0xdead00ffU;
    __Vtask_tb_sram_array__DOT__expect_read__78__a = 0xffU;
    __Vtask_tb_sram_array__DOT__read_addr__79__a = __Vtask_tb_sram_array__DOT__expect_read__78__a;
    vlSelfRef.tb_sram_array__DOT__addr = __Vtask_tb_sram_array__DOT__read_addr__79__a;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         93);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__80__msg 
        = vlSelfRef.__Vtask_tb_sram_array__DOT__expect_read__78__msg;
    __Vtask_tb_sram_array__DOT__check__80__cond = (vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                                   [vlSelfRef.tb_sram_array__DOT__addr] 
                                                   == __Vtask_tb_sram_array__DOT__expect_read__78__d);
    if (__Vtask_tb_sram_array__DOT__check__80__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__80__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__80__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.tb_sram_array__DOT__test_id = 0x0000000cU;
    VL_WRITEF_NX("\n=== TC_SRAM_12: No Reset, Unwritten Read is Don't-Care ===\n",0);
    vlSelfRef.tb_sram_array__DOT__addr = 0x7aU;
    vlSelfRef.tb_sram_array__DOT__we = 0U;
    vlSelfRef.tb_sram_array__DOT__bwe = 0U;
    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(vlSelf, 
                                                         "@(posedge tb_sram_array.clk)");
    co_await vlSelfRef.__VtrigSched_h2b413ccf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sram_array.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                                         344);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                         345);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_sram_array__DOT__check__82__msg
                  ,"Observed unwritten rdata = 0x%08h (accepted as don't-care)",1
                  , '#',32,vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                  [vlSelfRef.tb_sram_array__DOT__addr]);
    __Vtask_tb_sram_array__DOT__check__82__cond = 1U;
    if (__Vtask_tb_sram_array__DOT__check__82__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__82__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__82__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_sram_array__DOT__check__83__msg = "Unwritten read resolved to a concrete value; also accepted as don't-care"s;
    __Vtask_tb_sram_array__DOT__check__83__cond = 1U;
    if (__Vtask_tb_sram_array__DOT__check__83__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__83__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_sram_array__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_sram_array__DOT__check__83__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_sram_array__DOT__error_count = 
            ((IData)(1U) + vlSelfRef.tb_sram_array__DOT__error_count);
    }
    VL_WRITEF_NX("\n=== TESTBENCH SUMMARY ===\n",0);
    if ((0U == vlSelfRef.tb_sram_array__DOT__error_count)) {
        VL_WRITEF_NX("ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("%0d TEST(S) FAILED\n",1, '~',32,vlSelfRef.tb_sram_array__DOT__error_count);
    }
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 378, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_sram_array___024root___eval_initial__TOP__Vtiming__2(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 
                                             32);
        vlSelfRef.tb_sram_array__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_sram_array__DOT__clk)));
    }
    co_return;
}

bool Vtb_sram_array___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___trigger_anySet__act\n"); );
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

void Vtb_sram_array___024root___timing_ready(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___timing_ready\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready("@(posedge tb_sram_array.clk)");
    }
}

void Vtb_sram_array___024root___timing_resume(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___timing_resume\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h2b413ccf__0.moveToResumeQueue(
                                                          "@(posedge tb_sram_array.clk)");
    vlSelfRef.__VtrigSched_h2b413ccf__0.resume("@(posedge tb_sram_array.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sram_array___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_sram_array___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_sram_array___024root___eval_phase__act(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_phase__act\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb_sram_array__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sram_array__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sram_array__DOT__clk__0 
            = vlSelfRef.tb_sram_array__DOT__clk;
    }
    Vtb_sram_array___024root___timing_ready(vlSelf);
    Vtb_sram_array___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sram_array___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_sram_array___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_sram_array___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_sram_array___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_sram_array___024root___eval_phase__inact(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_phase__inact\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_sram_array___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_sram_array___024root___eval_phase__nba(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_phase__nba\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_sram_array___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v0 = 0;
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v0 = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v0 = 0;
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v1;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v1 = 0;
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v1;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v1 = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v1;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v1 = 0;
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v2;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v2 = 0;
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v2;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v2 = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v2;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v2 = 0;
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v3;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v3 = 0;
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v3;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v3 = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v3;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v3 = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v0 = 0U;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v1 = 0U;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v2 = 0U;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v3 = 0U;
                    if (vlSelfRef.tb_sram_array__DOT__we) {
                        if ((1U & (IData)(vlSelfRef.tb_sram_array__DOT__bwe))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v0 
                                = (0x000000ffU & vlSelfRef.tb_sram_array__DOT__wdata);
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v0 
                                = vlSelfRef.tb_sram_array__DOT__addr;
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v0 = 1U;
                        }
                        if ((2U & (IData)(vlSelfRef.tb_sram_array__DOT__bwe))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v1 
                                = (0x000000ffU & (vlSelfRef.tb_sram_array__DOT__wdata 
                                                  >> 8U));
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v1 
                                = vlSelfRef.tb_sram_array__DOT__addr;
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v1 = 1U;
                        }
                        if ((4U & (IData)(vlSelfRef.tb_sram_array__DOT__bwe))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v2 
                                = (0x000000ffU & (vlSelfRef.tb_sram_array__DOT__wdata 
                                                  >> 0x10U));
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v2 
                                = vlSelfRef.tb_sram_array__DOT__addr;
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v2 = 1U;
                        }
                        if ((8U & (IData)(vlSelfRef.tb_sram_array__DOT__bwe))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v3 
                                = (vlSelfRef.tb_sram_array__DOT__wdata 
                                   >> 0x18U);
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v3 
                                = vlSelfRef.tb_sram_array__DOT__addr;
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v3 = 1U;
                        }
                    }
                    if (__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v0) {
                        vlSelfRef.tb_sram_array__DOT__dut__DOT__mem[__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v0] 
                            = ((0xffffff00U & vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                [__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v0]) 
                               | __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v0);
                    }
                    if (__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v1) {
                        vlSelfRef.tb_sram_array__DOT__dut__DOT__mem[__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v1] 
                            = ((0xffff00ffU & vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                [__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v1]) 
                               | ((IData)(__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v1) 
                                  << 8U));
                    }
                    if (__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v2) {
                        vlSelfRef.tb_sram_array__DOT__dut__DOT__mem[__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v2] 
                            = ((0xff00ffffU & vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                [__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v2]) 
                               | ((IData)(__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v2) 
                                  << 0x00000010U));
                    }
                    if (__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_sram_array__DOT__dut__DOT__mem__v3) {
                        vlSelfRef.tb_sram_array__DOT__dut__DOT__mem[__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v3] 
                            = ((0x00ffffffU & vlSelfRef.tb_sram_array__DOT__dut__DOT__mem
                                [__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_sram_array__DOT__dut__DOT__mem__v3]) 
                               | ((IData)(__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_sram_array__DOT__dut__DOT__mem__v3) 
                                  << 0x00000018U));
                    }
                }
            }
        }
        Vtb_sram_array___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_sram_array___024root___eval(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sram_array___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_sram_array___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_sram_array.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_sram_array___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_sram_array___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_sram_array___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0(Vtb_sram_array___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root____VbeforeTrig_h2b413ccf__0\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_sram_array__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sram_array__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sram_array__DOT__clk__0 
        = vlSelfRef.tb_sram_array__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2b413ccf__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_sram_array___024root___eval_debug_assertions(Vtb_sram_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sram_array___024root___eval_debug_assertions\n"); );
    Vtb_sram_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
