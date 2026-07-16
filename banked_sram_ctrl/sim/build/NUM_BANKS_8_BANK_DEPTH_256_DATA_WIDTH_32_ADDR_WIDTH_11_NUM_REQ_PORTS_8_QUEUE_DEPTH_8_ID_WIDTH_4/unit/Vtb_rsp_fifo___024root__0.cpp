// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rsp_fifo.h for the primary calling header

#include "Vtb_rsp_fifo__pch.h"

VlCoroutine Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_rsp_fifo___024root* vlSelf);
VlCoroutine Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_rsp_fifo___024root* vlSelf);
VlCoroutine Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__2(Vtb_rsp_fifo___024root* vlSelf);

void Vtb_rsp_fifo___024root___eval_initial(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_initial\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.tb_rsp_fifo__DOT__clk = 0U;
        vlSymsp->_vm_contextp__->dumpfile("waves/rsp_fifo.vcd"s);
        vlSymsp->_traceDumpOpen();
        vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
        vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
        vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
        vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000002625a0ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         69);
    VL_WRITEF_NX("[ERROR] WATCHDOG EXPIRED @ time %0t\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 71, "");
    co_return;
}

void Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(Vtb_rsp_fifo___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__2__cond;
    __Vtask_tb_rsp_fifo__DOT__check__2__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__3__cond;
    __Vtask_tb_rsp_fifo__DOT__check__3__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__4__cond;
    __Vtask_tb_rsp_fifo__DOT__check__4__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__5__cond;
    __Vtask_tb_rsp_fifo__DOT__check__5__cond = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__8__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__8__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__9__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__9__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__10__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__10__data = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__11__cond;
    __Vtask_tb_rsp_fifo__DOT__check__11__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__12__cond;
    __Vtask_tb_rsp_fifo__DOT__check__12__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__13__cond;
    __Vtask_tb_rsp_fifo__DOT__check__13__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__14__cond;
    __Vtask_tb_rsp_fifo__DOT__check__14__cond = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__18__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__18__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__19__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__19__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__20__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__20__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__21__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__21__data = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__22__cond;
    __Vtask_tb_rsp_fifo__DOT__check__22__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__23__cond;
    __Vtask_tb_rsp_fifo__DOT__check__23__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__24__cond;
    __Vtask_tb_rsp_fifo__DOT__check__24__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__25__cond;
    __Vtask_tb_rsp_fifo__DOT__check__25__cond = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__29__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__29__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__30__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__30__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__31__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__31__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__32__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__32__data = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__33__cond;
    __Vtask_tb_rsp_fifo__DOT__check__33__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__34__cond;
    __Vtask_tb_rsp_fifo__DOT__check__34__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__35__cond;
    __Vtask_tb_rsp_fifo__DOT__check__35__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__36__cond;
    __Vtask_tb_rsp_fifo__DOT__check__36__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__37__cond;
    __Vtask_tb_rsp_fifo__DOT__check__37__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__38__cond;
    __Vtask_tb_rsp_fifo__DOT__check__38__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__39__cond;
    __Vtask_tb_rsp_fifo__DOT__check__39__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__42__cond;
    __Vtask_tb_rsp_fifo__DOT__check__42__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__43__cond;
    __Vtask_tb_rsp_fifo__DOT__check__43__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__44__cond;
    __Vtask_tb_rsp_fifo__DOT__check__44__cond = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__47__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__47__data = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__48__cond;
    __Vtask_tb_rsp_fifo__DOT__check__48__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__49__cond;
    __Vtask_tb_rsp_fifo__DOT__check__49__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__50__cond;
    __Vtask_tb_rsp_fifo__DOT__check__50__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__51__cond;
    __Vtask_tb_rsp_fifo__DOT__check__51__cond = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__54__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__54__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__55__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__55__data = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__56__cond;
    __Vtask_tb_rsp_fifo__DOT__check__56__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__57__cond;
    __Vtask_tb_rsp_fifo__DOT__check__57__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__58__cond;
    __Vtask_tb_rsp_fifo__DOT__check__58__cond = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__61__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__61__data = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__62__cond;
    __Vtask_tb_rsp_fifo__DOT__check__62__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__63__cond;
    __Vtask_tb_rsp_fifo__DOT__check__63__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__64__cond;
    __Vtask_tb_rsp_fifo__DOT__check__64__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__65__cond;
    __Vtask_tb_rsp_fifo__DOT__check__65__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__66__cond;
    __Vtask_tb_rsp_fifo__DOT__check__66__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__67__cond;
    __Vtask_tb_rsp_fifo__DOT__check__67__cond = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__71__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__71__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__72__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__72__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__73__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__73__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__74__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__74__data = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__75__cond;
    __Vtask_tb_rsp_fifo__DOT__check__75__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__76__cond;
    __Vtask_tb_rsp_fifo__DOT__check__76__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__77__cond;
    __Vtask_tb_rsp_fifo__DOT__check__77__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__78__cond;
    __Vtask_tb_rsp_fifo__DOT__check__78__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__79__cond;
    __Vtask_tb_rsp_fifo__DOT__check__79__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__80__cond;
    __Vtask_tb_rsp_fifo__DOT__check__80__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__83__cond;
    __Vtask_tb_rsp_fifo__DOT__check__83__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__84__cond;
    __Vtask_tb_rsp_fifo__DOT__check__84__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__85__cond;
    __Vtask_tb_rsp_fifo__DOT__check__85__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__86__cond;
    __Vtask_tb_rsp_fifo__DOT__check__86__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__87__cond;
    __Vtask_tb_rsp_fifo__DOT__check__87__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__88__cond;
    __Vtask_tb_rsp_fifo__DOT__check__88__cond = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__91__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__91__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__92__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__92__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__93__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__93__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__94__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__94__data = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__95__cond;
    __Vtask_tb_rsp_fifo__DOT__check__95__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__96__cond;
    __Vtask_tb_rsp_fifo__DOT__check__96__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__97__cond;
    __Vtask_tb_rsp_fifo__DOT__check__97__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__98__cond;
    __Vtask_tb_rsp_fifo__DOT__check__98__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__99__cond;
    __Vtask_tb_rsp_fifo__DOT__check__99__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__100__cond;
    __Vtask_tb_rsp_fifo__DOT__check__100__cond = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__103__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__103__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__104__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__104__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__105__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__105__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__106__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__106__data = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__107__cond;
    __Vtask_tb_rsp_fifo__DOT__check__107__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__108__cond;
    __Vtask_tb_rsp_fifo__DOT__check__108__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__109__cond;
    __Vtask_tb_rsp_fifo__DOT__check__109__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__110__cond;
    __Vtask_tb_rsp_fifo__DOT__check__110__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__111__cond;
    __Vtask_tb_rsp_fifo__DOT__check__111__cond = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__112__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__112__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__113__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__113__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__114__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__114__data = 0;
    QData/*63:0*/ __Vtask_tb_rsp_fifo__DOT__push_beat__115__data;
    __Vtask_tb_rsp_fifo__DOT__push_beat__115__data = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__116__cond;
    __Vtask_tb_rsp_fifo__DOT__check__116__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__117__cond;
    __Vtask_tb_rsp_fifo__DOT__check__117__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__118__cond;
    __Vtask_tb_rsp_fifo__DOT__check__118__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__119__cond;
    __Vtask_tb_rsp_fifo__DOT__check__119__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_fifo__DOT__check__120__cond;
    __Vtask_tb_rsp_fifo__DOT__check__120__cond = 0;
    // Body
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         540);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         541);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 1U;
    VL_WRITEF_NX("\n=== TC_RSP_01: Reset State Correctness ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__2__msg = "push_ready should be 1 after reset"s;
    __Vtask_tb_rsp_fifo__DOT__check__2__cond = (4U 
                                                > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__2__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__2__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__2__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__3__msg = "pop_valid should be 0 after reset"s;
    __Vtask_tb_rsp_fifo__DOT__check__3__cond = (0U 
                                                == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__3__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__3__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__3__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__4__msg = "full should be 0 after reset"s;
    __Vtask_tb_rsp_fifo__DOT__check__4__cond = (4U 
                                                != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__4__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__5__msg = "empty should be 1 after reset"s;
    __Vtask_tb_rsp_fifo__DOT__check__5__cond = (0U 
                                                == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__5__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__5__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__5__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 2U;
    VL_WRITEF_NX("\n=== TC_RSP_02: push_ready COMBINATIONAL Deassert ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_rsp_fifo__DOT__push_beat__8__data = 1ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__8__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__9__data = 2ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__9__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__10__data = 3ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__10__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__11__msg = "push_ready should be 1 before 4th push"s;
    __Vtask_tb_rsp_fifo__DOT__check__11__cond = (4U 
                                                 > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__11__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__11__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__11__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 4ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         181);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__12__msg = "push_ready should still be 1 before 4th push edge"s;
    __Vtask_tb_rsp_fifo__DOT__check__12__cond = (4U 
                                                 > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__12__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         184);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         185);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__13__msg = "push_ready should deassert immediately after 4th push edge"s;
    __Vtask_tb_rsp_fifo__DOT__check__13__cond = (4U 
                                                 <= (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__13__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__14__msg = "full should assert after 4th push"s;
    __Vtask_tb_rsp_fifo__DOT__check__14__cond = (4U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__14__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__14__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__14__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 3U;
    VL_WRITEF_NX("\n=== TC_RSP_03: push_ready COMBINATIONAL Recovery ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_rsp_fifo__DOT__push_beat__18__data = 0x0000000000000010ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__18__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__19__data = 0x0000000000000020ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__19__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__20__data = 0x0000000000000030ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__20__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__21__data = 0x0000000000000040ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__21__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__22__msg = "FIFO should be full before pop"s;
    __Vtask_tb_rsp_fifo__DOT__check__22__cond = (4U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__22__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__22__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__22__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__23__msg = "push_ready should be 0 while full"s;
    __Vtask_tb_rsp_fifo__DOT__check__23__cond = (4U 
                                                 <= (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__23__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         207);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         208);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__24__msg = "push_ready should recover immediately after pop from full"s;
    __Vtask_tb_rsp_fifo__DOT__check__24__cond = (4U 
                                                 > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__24__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__24__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__24__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__25__msg = "full should deassert after pop from full"s;
    __Vtask_tb_rsp_fifo__DOT__check__25__cond = (4U 
                                                 != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__25__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__25__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__25__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 4U;
    VL_WRITEF_NX("\n=== TC_RSP_04: Push Blocked When Full ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_rsp_fifo__DOT__push_beat__29__data = 0x0000000000000010ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__29__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__30__data = 0x0000000000000020ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__30__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__31__data = 0x0000000000000030ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__31__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__32__data = 0x0000000000000040ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__32__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__33__msg = "FIFO should be full before blocked push"s;
    __Vtask_tb_rsp_fifo__DOT__check__33__cond = (4U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__33__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__33__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__33__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__34__msg = "push_ready should be 0 when full"s;
    __Vtask_tb_rsp_fifo__DOT__check__34__cond = (4U 
                                                 <= (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__34__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__34__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__34__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0x000000000000deadULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         230);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__35__msg = "blocked push should see push_ready low"s;
    __Vtask_tb_rsp_fifo__DOT__check__35__cond = (4U 
                                                 <= (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__35__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__35__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__35__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         233);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[0U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         239);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         240);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[1U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         242);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         243);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[2U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         245);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[3U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         248);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         249);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__36__msg = "First drained entry should remain 0x10"s;
    __Vtask_tb_rsp_fifo__DOT__check__36__cond = (0x0000000000000010ULL 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__observed[0U]);
    if (__Vtask_tb_rsp_fifo__DOT__check__36__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__36__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__36__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__37__msg = "Second drained entry should remain 0x20"s;
    __Vtask_tb_rsp_fifo__DOT__check__37__cond = (0x0000000000000020ULL 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__observed[1U]);
    if (__Vtask_tb_rsp_fifo__DOT__check__37__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__37__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__37__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__38__msg = "Third drained entry should remain 0x30"s;
    __Vtask_tb_rsp_fifo__DOT__check__38__cond = (0x0000000000000030ULL 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__observed[2U]);
    if (__Vtask_tb_rsp_fifo__DOT__check__38__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__39__msg = "Fourth drained entry should remain 0x40"s;
    __Vtask_tb_rsp_fifo__DOT__check__39__cond = (0x0000000000000040ULL 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__observed[3U]);
    if (__Vtask_tb_rsp_fifo__DOT__check__39__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__39__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__39__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 5U;
    VL_WRITEF_NX("\n=== TC_RSP_05: Single Push -> pop_valid Next Cycle ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__A = 0x00000000000000abULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = vlSelfRef.tb_rsp_fifo__DOT__A;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         272);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__42__msg = "pop_valid should assert after one push"s;
    __Vtask_tb_rsp_fifo__DOT__check__42__cond = (0U 
                                                 != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__42__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__42__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__42__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__43__msg = "pop_data should match pushed value"s;
    __Vtask_tb_rsp_fifo__DOT__check__43__cond = (vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__A);
    if (__Vtask_tb_rsp_fifo__DOT__check__43__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__43__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__43__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__44__msg = "push_ready should remain high with one entry"s;
    __Vtask_tb_rsp_fifo__DOT__check__44__cond = (4U 
                                                 > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__44__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__44__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__44__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 6U;
    VL_WRITEF_NX("\n=== TC_RSP_06: pop_valid Deassert After Last Pop ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_rsp_fifo__DOT__push_beat__47__data = 0x0000000000000055ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__47__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__48__msg = "pop_valid should be 1 with one entry"s;
    __Vtask_tb_rsp_fifo__DOT__check__48__cond = (0U 
                                                 != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__48__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__48__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__48__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         295);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__49__msg = "pop_valid should still be 1 before pop edge"s;
    __Vtask_tb_rsp_fifo__DOT__check__49__cond = (0U 
                                                 != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__49__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__49__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__49__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         297);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         298);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__50__msg = "pop_valid should deassert after last pop"s;
    __Vtask_tb_rsp_fifo__DOT__check__50__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__50__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__50__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__50__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__51__msg = "empty should assert after last pop"s;
    __Vtask_tb_rsp_fifo__DOT__check__51__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__51__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__51__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__51__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 7U;
    VL_WRITEF_NX("\n=== TC_RSP_07: pop_data Stable Until After Posedge ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__A = 0x0000000000000011ULL;
    vlSelfRef.tb_rsp_fifo__DOT__B = 0x0000000000000022ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__54__data = vlSelfRef.tb_rsp_fifo__DOT__A;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__54__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__55__data = vlSelfRef.tb_rsp_fifo__DOT__B;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__55__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__56__msg = "pop_data should show A before pop"s;
    __Vtask_tb_rsp_fifo__DOT__check__56__cond = (vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__A);
    if (__Vtask_tb_rsp_fifo__DOT__check__56__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__56__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__56__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         323);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__57__msg = "pop_data should remain A before the pop edge"s;
    __Vtask_tb_rsp_fifo__DOT__check__57__cond = (vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__A);
    if (__Vtask_tb_rsp_fifo__DOT__check__57__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__57__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__57__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         325);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         326);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__58__msg = "pop_data should switch to B immediately after pop edge"s;
    __Vtask_tb_rsp_fifo__DOT__check__58__cond = (vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__B);
    if (__Vtask_tb_rsp_fifo__DOT__check__58__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__58__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__58__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 8U;
    VL_WRITEF_NX("\n=== TC_RSP_08: Simultaneous Push+Pop ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__A = 0x00000000000000aaULL;
    vlSelfRef.tb_rsp_fifo__DOT__B = 0x00000000000000bbULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__61__data = vlSelfRef.tb_rsp_fifo__DOT__A;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__61__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__62__msg = "pop_valid should be 1 before simultaneous push+pop"s;
    __Vtask_tb_rsp_fifo__DOT__check__62__cond = (0U 
                                                 != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__62__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__62__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__62__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__63__msg = "pop_data should be A before simultaneous push+pop"s;
    __Vtask_tb_rsp_fifo__DOT__check__63__cond = (vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__A);
    if (__Vtask_tb_rsp_fifo__DOT__check__63__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__64__msg = "push_ready should be 1 before simultaneous push+pop"s;
    __Vtask_tb_rsp_fifo__DOT__check__64__cond = (4U 
                                                 > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__64__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__push_data = vlSelfRef.tb_rsp_fifo__DOT__B;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         352);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         353);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__65__msg = "pop_valid should remain 1 after simultaneous push+pop"s;
    __Vtask_tb_rsp_fifo__DOT__check__65__cond = (0U 
                                                 != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__65__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__65__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__65__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__66__msg = "pop_data should advance to B after simultaneous push+pop"s;
    __Vtask_tb_rsp_fifo__DOT__check__66__cond = (vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__B);
    if (__Vtask_tb_rsp_fifo__DOT__check__66__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__66__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__66__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__67__msg = "push_ready should remain high"s;
    __Vtask_tb_rsp_fifo__DOT__check__67__cond = (4U 
                                                 > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__67__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__67__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__67__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 9U;
    VL_WRITEF_NX("\n=== TC_RSP_09: Simultaneous Attempt When Full ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_rsp_fifo__DOT__push_beat__71__data = 0x0000000000000010ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__71__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__72__data = 0x0000000000000020ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__72__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__73__data = 0x0000000000000030ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__73__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__74__data = 0x0000000000000040ULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__74__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__75__msg = "FIFO should be full before simultaneous attempt"s;
    __Vtask_tb_rsp_fifo__DOT__check__75__cond = (4U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__75__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__75__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__75__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__76__msg = "push_ready should be low when full"s;
    __Vtask_tb_rsp_fifo__DOT__check__76__cond = (4U 
                                                 <= (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__76__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__76__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__76__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0x00000000000000ccULL;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         380);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__77__msg = "push remains blocked before the edge while full"s;
    __Vtask_tb_rsp_fifo__DOT__check__77__cond = (4U 
                                                 <= (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__77__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__77__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__77__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         383);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         384);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__78__msg = "push_ready should become 1 after the pop frees a slot"s;
    __Vtask_tb_rsp_fifo__DOT__check__78__cond = (4U 
                                                 > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__78__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__78__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__78__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__79__msg = "next visible head should be 0x20, proving 0xCC was not pushed"s;
    __Vtask_tb_rsp_fifo__DOT__check__79__cond = (0x0000000000000020ULL 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr]);
    if (__Vtask_tb_rsp_fifo__DOT__check__79__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__79__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__79__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__80__msg = "full should deassert after only the pop fires"s;
    __Vtask_tb_rsp_fifo__DOT__check__80__cond = (4U 
                                                 != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__80__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__80__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__80__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 0x0000000aU;
    VL_WRITEF_NX("\n=== TC_RSP_10: Pop When Empty ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__83__msg = "empty should be 1 after reset"s;
    __Vtask_tb_rsp_fifo__DOT__check__83__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__83__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__83__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__83__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__84__msg = "pop_valid should be 0 when empty"s;
    __Vtask_tb_rsp_fifo__DOT__check__84__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__84__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__84__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__84__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         408);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         409);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__85__msg = "empty should remain 1 after pop on empty"s;
    __Vtask_tb_rsp_fifo__DOT__check__85__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__85__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__85__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__85__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__86__msg = "pop_valid should remain 0 after pop on empty"s;
    __Vtask_tb_rsp_fifo__DOT__check__86__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__86__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__86__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__86__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         413);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         414);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__87__msg = "empty should still remain 1 on second empty-pop cycle"s;
    __Vtask_tb_rsp_fifo__DOT__check__87__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__87__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__87__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__87__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__88__msg = "pop_valid should still remain 0 on second empty-pop cycle"s;
    __Vtask_tb_rsp_fifo__DOT__check__88__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__88__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__88__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__88__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 0x0000000bU;
    VL_WRITEF_NX("\n=== TC_RSP_11: FIFO In-Order Data Integrity ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__D0 = 0x0000000000000010ULL;
    vlSelfRef.tb_rsp_fifo__DOT__D1 = 0x0000000000000020ULL;
    vlSelfRef.tb_rsp_fifo__DOT__D2 = 0x0000000000000030ULL;
    vlSelfRef.tb_rsp_fifo__DOT__D3 = 0x0000000000000040ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__91__data = vlSelfRef.tb_rsp_fifo__DOT__D0;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__91__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__92__data = vlSelfRef.tb_rsp_fifo__DOT__D1;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__92__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__93__data = vlSelfRef.tb_rsp_fifo__DOT__D2;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__93__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__94__data = vlSelfRef.tb_rsp_fifo__DOT__D3;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__94__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__observed[0U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         442);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         443);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[1U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         445);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         446);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[2U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         448);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         449);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[3U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         451);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         452);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__95__msg = "1st popped entry should be D0"s;
    __Vtask_tb_rsp_fifo__DOT__check__95__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[0U] 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__D0);
    if (__Vtask_tb_rsp_fifo__DOT__check__95__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__95__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__95__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__96__msg = "2nd popped entry should be D1"s;
    __Vtask_tb_rsp_fifo__DOT__check__96__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[1U] 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__D1);
    if (__Vtask_tb_rsp_fifo__DOT__check__96__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__96__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__96__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__97__msg = "3rd popped entry should be D2"s;
    __Vtask_tb_rsp_fifo__DOT__check__97__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[2U] 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__D2);
    if (__Vtask_tb_rsp_fifo__DOT__check__97__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__97__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__97__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__98__msg = "4th popped entry should be D3"s;
    __Vtask_tb_rsp_fifo__DOT__check__98__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[3U] 
                                                 == vlSelfRef.tb_rsp_fifo__DOT__D3);
    if (__Vtask_tb_rsp_fifo__DOT__check__98__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__98__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__98__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__99__msg = "FIFO should be empty after draining all entries"s;
    __Vtask_tb_rsp_fifo__DOT__check__99__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__99__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__99__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__99__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__100__msg = "pop_valid should be 0 when empty"s;
    __Vtask_tb_rsp_fifo__DOT__check__100__cond = (0U 
                                                  == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__100__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__100__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__100__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.tb_rsp_fifo__DOT__test_id = 0x0000000cU;
    VL_WRITEF_NX("\n=== TC_RSP_12: Pointer Wrap-Around Integrity ===\n",0);
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 0U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__rst_n = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__D0 = 0x0000000000000010ULL;
    vlSelfRef.tb_rsp_fifo__DOT__D1 = 0x0000000000000020ULL;
    vlSelfRef.tb_rsp_fifo__DOT__D2 = 0x0000000000000030ULL;
    vlSelfRef.tb_rsp_fifo__DOT__D3 = 0x0000000000000040ULL;
    vlSelfRef.tb_rsp_fifo__DOT__D4 = 0x0000000000000050ULL;
    vlSelfRef.tb_rsp_fifo__DOT__D5 = 0x0000000000000060ULL;
    vlSelfRef.tb_rsp_fifo__DOT__D6 = 0x0000000000000070ULL;
    vlSelfRef.tb_rsp_fifo__DOT__D7 = 0x0000000000000080ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__103__data 
        = vlSelfRef.tb_rsp_fifo__DOT__D0;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__103__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__104__data 
        = vlSelfRef.tb_rsp_fifo__DOT__D1;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__104__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__105__data 
        = vlSelfRef.tb_rsp_fifo__DOT__D2;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__105__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__106__data 
        = vlSelfRef.tb_rsp_fifo__DOT__D3;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__106__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__observed[0U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         489);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         490);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[1U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         492);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         493);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[2U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         495);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         496);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[3U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         498);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         499);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__107__msg = "First drain item should be D0"s;
    __Vtask_tb_rsp_fifo__DOT__check__107__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[0U] 
                                                  == vlSelfRef.tb_rsp_fifo__DOT__D0);
    if (__Vtask_tb_rsp_fifo__DOT__check__107__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__107__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__107__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__108__msg = "First drain item should be D1"s;
    __Vtask_tb_rsp_fifo__DOT__check__108__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[1U] 
                                                  == vlSelfRef.tb_rsp_fifo__DOT__D1);
    if (__Vtask_tb_rsp_fifo__DOT__check__108__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__108__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__108__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__109__msg = "First drain item should be D2"s;
    __Vtask_tb_rsp_fifo__DOT__check__109__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[2U] 
                                                  == vlSelfRef.tb_rsp_fifo__DOT__D2);
    if (__Vtask_tb_rsp_fifo__DOT__check__109__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__109__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__109__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__110__msg = "First drain item should be D3"s;
    __Vtask_tb_rsp_fifo__DOT__check__110__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[3U] 
                                                  == vlSelfRef.tb_rsp_fifo__DOT__D3);
    if (__Vtask_tb_rsp_fifo__DOT__check__110__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__110__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__110__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__111__msg = "FIFO should be empty after first drain"s;
    __Vtask_tb_rsp_fifo__DOT__check__111__cond = (0U 
                                                  == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__111__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__111__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__111__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    __Vtask_tb_rsp_fifo__DOT__push_beat__112__data 
        = vlSelfRef.tb_rsp_fifo__DOT__D4;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__112__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__113__data 
        = vlSelfRef.tb_rsp_fifo__DOT__D5;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__113__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__114__data 
        = vlSelfRef.tb_rsp_fifo__DOT__D6;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__114__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_rsp_fifo__DOT__push_beat__115__data 
        = vlSelfRef.tb_rsp_fifo__DOT__D7;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = __Vtask_tb_rsp_fifo__DOT__push_beat__115__data;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_rsp_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_rsp_fifo__DOT__observed[4U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 1U;
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         515);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         516);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[5U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         518);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         519);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[6U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         521);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         522);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__observed[7U] = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr];
    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(vlSelf, 
                                                       "@(posedge tb_rsp_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_h0c5ec6d4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                                         524);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                         525);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_rsp_fifo__DOT__pop_ready = 0U;
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__116__msg = "Second drain item should be D4"s;
    __Vtask_tb_rsp_fifo__DOT__check__116__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[4U] 
                                                  == vlSelfRef.tb_rsp_fifo__DOT__D4);
    if (__Vtask_tb_rsp_fifo__DOT__check__116__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__116__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__116__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__117__msg = "Second drain item should be D5"s;
    __Vtask_tb_rsp_fifo__DOT__check__117__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[5U] 
                                                  == vlSelfRef.tb_rsp_fifo__DOT__D5);
    if (__Vtask_tb_rsp_fifo__DOT__check__117__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__117__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__117__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__118__msg = "Second drain item should be D6"s;
    __Vtask_tb_rsp_fifo__DOT__check__118__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[6U] 
                                                  == vlSelfRef.tb_rsp_fifo__DOT__D6);
    if (__Vtask_tb_rsp_fifo__DOT__check__118__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__118__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__118__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__119__msg = "Second drain item should be D7"s;
    __Vtask_tb_rsp_fifo__DOT__check__119__cond = (vlSelfRef.tb_rsp_fifo__DOT__observed[7U] 
                                                  == vlSelfRef.tb_rsp_fifo__DOT__D7);
    if (__Vtask_tb_rsp_fifo__DOT__check__119__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__119__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__119__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__120__msg = "FIFO should be empty after second drain"s;
    __Vtask_tb_rsp_fifo__DOT__check__120__cond = (0U 
                                                  == (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_rsp_fifo__DOT__check__120__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__120__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_fifo__DOT__check__120__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    VL_WRITEF_NX("\n=== TESTBENCH SUMMARY ===\n",0);
    if ((0U == vlSelfRef.tb_rsp_fifo__DOT__error_count)) {
        VL_WRITEF_NX("ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("%0d TEST(S) FAILED\n",1, '~',32,vlSelfRef.tb_rsp_fifo__DOT__error_count);
    }
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 560, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__2(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 
                                             58);
        vlSelfRef.tb_rsp_fifo__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_rsp_fifo__DOT__clk)));
    }
    co_return;
}

bool Vtb_rsp_fifo___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___trigger_anySet__act\n"); );
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

void Vtb_rsp_fifo___024root___timing_ready(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___timing_ready\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready("@(posedge tb_rsp_fifo.clk)");
    }
}

void Vtb_rsp_fifo___024root___timing_resume(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___timing_resume\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h0c5ec6d4__0.moveToResumeQueue(
                                                          "@(posedge tb_rsp_fifo.clk)");
    vlSelfRef.__VtrigSched_h0c5ec6d4__0.resume("@(posedge tb_rsp_fifo.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_rsp_fifo___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_rsp_fifo___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_rsp_fifo___024root___eval_phase__act(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_phase__act\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_rsp_fifo__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_rsp_fifo__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__clk__0 
            = vlSelfRef.tb_rsp_fifo__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__rst_n__0 
            = vlSelfRef.tb_rsp_fifo__DOT__rst_n;
    }
    Vtb_rsp_fifo___024root___timing_ready(vlSelf);
    Vtb_rsp_fifo___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_rsp_fifo___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_rsp_fifo___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_rsp_fifo___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_rsp_fifo___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_rsp_fifo___024root___eval_phase__inact(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_phase__inact\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_rsp_fifo___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_rsp_fifo___024root___eval_phase__nba(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_phase__nba\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_rsp_fifo___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*2:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_rsp_fifo__DOT__dut__DOT__occupancy;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_rsp_fifo__DOT__dut__DOT__occupancy = 0;
                    QData/*63:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0 = 0;
                    CData/*1:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0 = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0 = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_rsp_fifo__DOT__dut__DOT__occupancy 
                        = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0 = 0U;
                    if (vlSelfRef.tb_rsp_fifo__DOT__rst_n) {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_rsp_fifo__DOT__dut__DOT__occupancy 
                            = (7U & ((2U == ((((IData)(vlSelfRef.tb_rsp_fifo__DOT__push_valid) 
                                               & (4U 
                                                  > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy))) 
                                              << 1U) 
                                             | ((0U 
                                                 != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy)) 
                                                & (IData)(vlSelfRef.tb_rsp_fifo__DOT__pop_ready))))
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy))
                                      : ((1U == ((((IData)(vlSelfRef.tb_rsp_fifo__DOT__push_valid) 
                                                   & (4U 
                                                      > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy))) 
                                                  << 1U) 
                                                 | ((0U 
                                                     != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy)) 
                                                    & (IData)(vlSelfRef.tb_rsp_fifo__DOT__pop_ready))))
                                          ? ((IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy) 
                                             - (IData)(1U))
                                          : (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy))));
                        if (((IData)(vlSelfRef.tb_rsp_fifo__DOT__pop_ready) 
                             & (0U != (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy)))) {
                            vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr)));
                        }
                        if (((IData)(vlSelfRef.tb_rsp_fifo__DOT__push_valid) 
                             & (4U > (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy)))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0 
                                = vlSelfRef.tb_rsp_fifo__DOT__push_data;
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0 
                                = vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__wr_ptr;
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0 = 1U;
                            vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__wr_ptr 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__wr_ptr)));
                        }
                    } else {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_rsp_fifo__DOT__dut__DOT__occupancy = 0U;
                        vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__rd_ptr = 0U;
                        vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__wr_ptr = 0U;
                    }
                    vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__occupancy 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_rsp_fifo__DOT__dut__DOT__occupancy;
                    if (__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0) {
                        vlSelfRef.tb_rsp_fifo__DOT__dut__DOT__fifo_mem[__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0] 
                            = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_rsp_fifo__DOT__dut__DOT__fifo_mem__v0;
                    }
                }
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
        Vtb_rsp_fifo___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_rsp_fifo___024root___eval(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_rsp_fifo___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_rsp_fifo___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_fifo.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_rsp_fifo___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_rsp_fifo___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_rsp_fifo___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0(Vtb_rsp_fifo___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root____VbeforeTrig_h0c5ec6d4__0\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_rsp_fifo__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__clk__0 
        = vlSelfRef.tb_rsp_fifo__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0c5ec6d4__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_rsp_fifo___024root___eval_debug_assertions(Vtb_rsp_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_fifo___024root___eval_debug_assertions\n"); );
    Vtb_rsp_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
