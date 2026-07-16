// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_req_fifo.h for the primary calling header

#include "Vtb_req_fifo__pch.h"

VlCoroutine Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_req_fifo___024root* vlSelf);
VlCoroutine Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_req_fifo___024root* vlSelf);
VlCoroutine Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__2(Vtb_req_fifo___024root* vlSelf);
VlCoroutine Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__3(Vtb_req_fifo___024root* vlSelf);

void Vtb_req_fifo___024root___eval_initial(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_initial\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.tb_req_fifo__DOT__clk = 0U;
        vlSymsp->_vm_contextp__->dumpfile("waves/req_fifo.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VlCoroutine Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000001e8480ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                         70);
    VL_WRITEF_NX("[ERROR] WATCHDOG EXPIRED @ time %0t\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 72, "");
    co_return;
}

void Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(Vtb_req_fifo___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_req_fifo__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_req_fifo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_req_fifo__DOT__rst_n = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    tb_req_fifo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    while (VL_LTS_III(32, 0U, tb_req_fifo__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                           "@(posedge tb_req_fifo.clk)");
        co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_req_fifo.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                             82);
        tb_req_fifo__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_req_fifo__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_req_fifo__DOT__rst_n = 1U;
    co_return;
}

void Vtb_req_fifo___024root____VbeforeTrig_h39ef7a8f__0(Vtb_req_fifo___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__2(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__1__cond;
    __Vtask_tb_req_fifo__DOT__check__1__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__2__cond;
    __Vtask_tb_req_fifo__DOT__check__2__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__3__cond;
    __Vtask_tb_req_fifo__DOT__check__3__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__4__cond;
    __Vtask_tb_req_fifo__DOT__check__4__cond = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__6__data;
    __Vtask_tb_req_fifo__DOT__push_1__6__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__8__cond;
    __Vtask_tb_req_fifo__DOT__check__8__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__9__cond;
    __Vtask_tb_req_fifo__DOT__check__9__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__10__cond;
    __Vtask_tb_req_fifo__DOT__check__10__cond = 0;
    IData/*31:0*/ __Vtask_tb_req_fifo__DOT__tc_rf_03_fill_to_full__11__tb_req_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_req_fifo__DOT__tc_rf_03_fill_to_full__11__tb_req_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__12__data;
    __Vtask_tb_req_fifo__DOT__push_1__12__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__13__cond;
    __Vtask_tb_req_fifo__DOT__check__13__cond = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__14__data;
    __Vtask_tb_req_fifo__DOT__push_1__14__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__15__cond;
    __Vtask_tb_req_fifo__DOT__check__15__cond = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__16__data;
    __Vtask_tb_req_fifo__DOT__push_1__16__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__17__cond;
    __Vtask_tb_req_fifo__DOT__check__17__cond = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__18__data;
    __Vtask_tb_req_fifo__DOT__push_1__18__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__19__cond;
    __Vtask_tb_req_fifo__DOT__check__19__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__21__cond;
    __Vtask_tb_req_fifo__DOT__check__21__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__22__cond;
    __Vtask_tb_req_fifo__DOT__check__22__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__24__cond;
    __Vtask_tb_req_fifo__DOT__check__24__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__26__cond;
    __Vtask_tb_req_fifo__DOT__check__26__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__27__cond;
    __Vtask_tb_req_fifo__DOT__check__27__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__29__cond;
    __Vtask_tb_req_fifo__DOT__check__29__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__31__cond;
    __Vtask_tb_req_fifo__DOT__check__31__cond = 0;
    IData/*31:0*/ __Vtask_tb_req_fifo__DOT__tc_rf_06_fallthrough_on_pop__32__tb_req_fifo__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_req_fifo__DOT__tc_rf_06_fallthrough_on_pop__32__tb_req_fifo__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__33__data;
    __Vtask_tb_req_fifo__DOT__push_1__33__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__35__data;
    __Vtask_tb_req_fifo__DOT__push_1__35__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__37__cond;
    __Vtask_tb_req_fifo__DOT__check__37__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__38__cond;
    __Vtask_tb_req_fifo__DOT__check__38__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__40__cond;
    __Vtask_tb_req_fifo__DOT__check__40__cond = 0;
    IData/*31:0*/ __Vtask_tb_req_fifo__DOT__tc_rf_07_head_valid_deasserts_after_last_pop__41__tb_req_fifo__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_req_fifo__DOT__tc_rf_07_head_valid_deasserts_after_last_pop__41__tb_req_fifo__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__42__data;
    __Vtask_tb_req_fifo__DOT__push_1__42__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__44__cond;
    __Vtask_tb_req_fifo__DOT__check__44__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__45__cond;
    __Vtask_tb_req_fifo__DOT__check__45__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__47__cond;
    __Vtask_tb_req_fifo__DOT__check__47__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__48__cond;
    __Vtask_tb_req_fifo__DOT__check__48__cond = 0;
    IData/*31:0*/ __Vtask_tb_req_fifo__DOT__tc_rf_08_simul_push_pop_occ1__49__tb_req_fifo__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_tb_req_fifo__DOT__tc_rf_08_simul_push_pop_occ1__49__tb_req_fifo__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__50__data;
    __Vtask_tb_req_fifo__DOT__push_1__50__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__52__cond;
    __Vtask_tb_req_fifo__DOT__check__52__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__53__cond;
    __Vtask_tb_req_fifo__DOT__check__53__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__54__cond;
    __Vtask_tb_req_fifo__DOT__check__54__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__56__cond;
    __Vtask_tb_req_fifo__DOT__check__56__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__57__cond;
    __Vtask_tb_req_fifo__DOT__check__57__cond = 0;
    IData/*31:0*/ __Vtask_tb_req_fifo__DOT__tc_rf_09_simul_push_pop_near_full__58__tb_req_fifo__DOT__unnamedblk1_6__DOT____Vrepeat5;
    __Vtask_tb_req_fifo__DOT__tc_rf_09_simul_push_pop_near_full__58__tb_req_fifo__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__59__data;
    __Vtask_tb_req_fifo__DOT__push_1__59__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__60__data;
    __Vtask_tb_req_fifo__DOT__push_1__60__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__61__data;
    __Vtask_tb_req_fifo__DOT__push_1__61__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__63__cond;
    __Vtask_tb_req_fifo__DOT__check__63__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__64__cond;
    __Vtask_tb_req_fifo__DOT__check__64__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__66__cond;
    __Vtask_tb_req_fifo__DOT__check__66__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__67__cond;
    __Vtask_tb_req_fifo__DOT__check__67__cond = 0;
    IData/*31:0*/ __Vtask_tb_req_fifo__DOT__tc_rf_10_pop_when_empty__68__tb_req_fifo__DOT__unnamedblk1_7__DOT____Vrepeat6;
    __Vtask_tb_req_fifo__DOT__tc_rf_10_pop_when_empty__68__tb_req_fifo__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__69__cond;
    __Vtask_tb_req_fifo__DOT__check__69__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__71__cond;
    __Vtask_tb_req_fifo__DOT__check__71__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__72__cond;
    __Vtask_tb_req_fifo__DOT__check__72__cond = 0;
    IData/*31:0*/ __Vtask_tb_req_fifo__DOT__tc_rf_11_pointer_wrap__73__tb_req_fifo__DOT__unnamedblk1_8__DOT____Vrepeat7;
    __Vtask_tb_req_fifo__DOT__tc_rf_11_pointer_wrap__73__tb_req_fifo__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__74__data;
    __Vtask_tb_req_fifo__DOT__push_1__74__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__75__data;
    __Vtask_tb_req_fifo__DOT__push_1__75__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__76__data;
    __Vtask_tb_req_fifo__DOT__push_1__76__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__77__data;
    __Vtask_tb_req_fifo__DOT__push_1__77__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__81__cond;
    __Vtask_tb_req_fifo__DOT__check__81__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__84__cond;
    __Vtask_tb_req_fifo__DOT__check__84__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__87__cond;
    __Vtask_tb_req_fifo__DOT__check__87__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__90__cond;
    __Vtask_tb_req_fifo__DOT__check__90__cond = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__91__data;
    __Vtask_tb_req_fifo__DOT__push_1__91__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__92__data;
    __Vtask_tb_req_fifo__DOT__push_1__92__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__93__data;
    __Vtask_tb_req_fifo__DOT__push_1__93__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__94__data;
    __Vtask_tb_req_fifo__DOT__push_1__94__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__98__cond;
    __Vtask_tb_req_fifo__DOT__check__98__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__101__cond;
    __Vtask_tb_req_fifo__DOT__check__101__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__104__cond;
    __Vtask_tb_req_fifo__DOT__check__104__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__107__cond;
    __Vtask_tb_req_fifo__DOT__check__107__cond = 0;
    IData/*31:0*/ __Vtask_tb_req_fifo__DOT__tc_rf_12_last_slot_edge__108__tb_req_fifo__DOT__unnamedblk1_9__DOT____Vrepeat8;
    __Vtask_tb_req_fifo__DOT__tc_rf_12_last_slot_edge__108__tb_req_fifo__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__109__data;
    __Vtask_tb_req_fifo__DOT__push_1__109__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__110__data;
    __Vtask_tb_req_fifo__DOT__push_1__110__data = 0;
    QData/*63:0*/ __Vtask_tb_req_fifo__DOT__push_1__111__data;
    __Vtask_tb_req_fifo__DOT__push_1__111__data = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__113__cond;
    __Vtask_tb_req_fifo__DOT__check__113__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__115__cond;
    __Vtask_tb_req_fifo__DOT__check__115__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__116__cond;
    __Vtask_tb_req_fifo__DOT__check__116__cond = 0;
    IData/*31:0*/ __Vtask_tb_req_fifo__DOT__tc_rf_13_no_comb_path__117__tb_req_fifo__DOT__unnamedblk1_10__DOT____Vrepeat9;
    __Vtask_tb_req_fifo__DOT__tc_rf_13_no_comb_path__117__tb_req_fifo__DOT__unnamedblk1_10__DOT____Vrepeat9 = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__118__cond;
    __Vtask_tb_req_fifo__DOT__check__118__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__119__cond;
    __Vtask_tb_req_fifo__DOT__check__119__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__120__cond;
    __Vtask_tb_req_fifo__DOT__check__120__cond = 0;
    CData/*0:0*/ __Vtask_tb_req_fifo__DOT__check__121__cond;
    __Vtask_tb_req_fifo__DOT__check__121__cond = 0;
    // Body
    Vtb_req_fifo___024root____VbeforeTrig_h39ef7a8f__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.rst_n)");
    co_await vlSelfRef.__VtrigSched_h39ef7a8f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.rst_n)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         476);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         477);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__test_id = 1U;
    VL_WRITEF_NX("\n=== TC_RF_01: Reset State Correctness ===\n",0);
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__1__msg = "push_ready should be 1 after reset"s;
    __Vtask_tb_req_fifo__DOT__check__1__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__1__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__1__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__1__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__2__msg = "head_valid should be 0 after reset"s;
    __Vtask_tb_req_fifo__DOT__check__2__cond = (0U 
                                                == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__2__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__2__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__2__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__3__msg = "full should be 0 after reset"s;
    __Vtask_tb_req_fifo__DOT__check__3__cond = (4U 
                                                != (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__3__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__3__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__3__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__4__msg = "empty should be 1 after reset"s;
    __Vtask_tb_req_fifo__DOT__check__4__cond = (0U 
                                                == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__4__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__test_id = 2U;
    VL_WRITEF_NX("\n=== TC_RF_02: Single Push ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__A = 0x00000000000000abULL;
    __Vtask_tb_req_fifo__DOT__push_1__6__data = vlSelfRef.tb_req_fifo__DOT__A;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__6__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__8__msg = "head_valid should be 1 one cycle after push"s;
    __Vtask_tb_req_fifo__DOT__check__8__cond = (0U 
                                                != (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__8__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__8__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__8__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__9__msg = "head_data should match pushed data"s;
    __Vtask_tb_req_fifo__DOT__check__9__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                == vlSelfRef.tb_req_fifo__DOT__A);
    if (__Vtask_tb_req_fifo__DOT__check__9__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__9__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__9__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__10__msg = "push_ready should remain 1 with occupancy below full"s;
    __Vtask_tb_req_fifo__DOT__check__10__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__10__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__10__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__10__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__tc_rf_03_fill_to_full__11__tb_req_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    vlSelfRef.tb_req_fifo__DOT__test_id = 3U;
    VL_WRITEF_NX("\n=== TC_RF_03: Fill to Full ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__rst_n = 0U;
    __Vtask_tb_req_fifo__DOT__tc_rf_03_fill_to_full__11__tb_req_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_req_fifo__DOT__tc_rf_03_fill_to_full__11__tb_req_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                           "@(posedge tb_req_fifo.clk)");
        co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_req_fifo.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                             157);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_req_fifo__DOT__tc_rf_03_fill_to_full__11__tb_req_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_req_fifo__DOT__tc_rf_03_fill_to_full__11__tb_req_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_req_fifo__DOT__rst_n = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         161);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__D0 = 0ULL;
    vlSelfRef.tb_req_fifo__DOT__D1 = 1ULL;
    vlSelfRef.tb_req_fifo__DOT__D2 = 2ULL;
    vlSelfRef.tb_req_fifo__DOT__D3 = 3ULL;
    __Vtask_tb_req_fifo__DOT__push_1__12__data = vlSelfRef.tb_req_fifo__DOT__D0;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__12__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__13__msg = "push_ready should be 1 during first push"s;
    __Vtask_tb_req_fifo__DOT__check__13__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__13__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__push_1__14__data = vlSelfRef.tb_req_fifo__DOT__D1;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__14__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__15__msg = "push_ready should be 1 during second push"s;
    __Vtask_tb_req_fifo__DOT__check__15__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__15__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__15__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__15__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__push_1__16__data = vlSelfRef.tb_req_fifo__DOT__D2;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__16__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__17__msg = "push_ready should be 1 during third push"s;
    __Vtask_tb_req_fifo__DOT__check__17__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__17__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__17__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__17__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__push_1__18__data = vlSelfRef.tb_req_fifo__DOT__D3;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__18__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__19__msg = "push_ready should be 0 on the last accepted push cycle"s;
    __Vtask_tb_req_fifo__DOT__check__19__cond = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_req_fifo__DOT__push_ready)));
    if (__Vtask_tb_req_fifo__DOT__check__19__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__19__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__19__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__21__msg = "full should be 1 one cycle after 4th push"s;
    __Vtask_tb_req_fifo__DOT__check__21__cond = (4U 
                                                 == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__21__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__21__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__21__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__22__msg = "push_ready should deassert one cycle after queue becomes full"s;
    __Vtask_tb_req_fifo__DOT__check__22__cond = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_req_fifo__DOT__push_ready)));
    if (__Vtask_tb_req_fifo__DOT__check__22__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__22__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__22__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__test_id = 4U;
    VL_WRITEF_NX("\n=== TC_RF_04: Push Blocked When Full ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__old_head = vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
        [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr];
    vlSelfRef.tb_req_fifo__DOT__push_data = 0x000000000000deadULL;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         192);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__24__msg = "head_data should not be overwritten by blocked push"s;
    __Vtask_tb_req_fifo__DOT__check__24__cond = (0x000000000000deadULL 
                                                 != vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    if (__Vtask_tb_req_fifo__DOT__check__24__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__24__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__24__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__test_id = 5U;
    VL_WRITEF_NX("\n=== TC_RF_05: Pop from Full ===\n",0);
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__26__msg = "FIFO should be full at start of TC_RF_05"s;
    __Vtask_tb_req_fifo__DOT__check__26__cond = (4U 
                                                 == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__26__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__26__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__26__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__27__msg = "push_ready should be 0 while full"s;
    __Vtask_tb_req_fifo__DOT__check__27__cond = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_req_fifo__DOT__push_ready)));
    if (__Vtask_tb_req_fifo__DOT__check__27__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__27__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__27__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__29__msg = "push_ready should remain 1 in the pop cycle from full"s;
    __Vtask_tb_req_fifo__DOT__check__29__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__29__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__29__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__29__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__31__msg = "push_ready should recover one cycle after pop"s;
    __Vtask_tb_req_fifo__DOT__check__31__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__31__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__31__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__31__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__tc_rf_06_fallthrough_on_pop__32__tb_req_fifo__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    vlSelfRef.tb_req_fifo__DOT__test_id = 6U;
    VL_WRITEF_NX("\n=== TC_RF_06: head_data Combinational Fall-Through ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__rst_n = 0U;
    __Vtask_tb_req_fifo__DOT__tc_rf_06_fallthrough_on_pop__32__tb_req_fifo__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_req_fifo__DOT__tc_rf_06_fallthrough_on_pop__32__tb_req_fifo__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                           "@(posedge tb_req_fifo.clk)");
        co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_req_fifo.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                             223);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_req_fifo__DOT__tc_rf_06_fallthrough_on_pop__32__tb_req_fifo__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_req_fifo__DOT__tc_rf_06_fallthrough_on_pop__32__tb_req_fifo__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.tb_req_fifo__DOT__rst_n = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         227);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__A = 0x0000000000000011ULL;
    vlSelfRef.tb_req_fifo__DOT__B = 0x0000000000000022ULL;
    __Vtask_tb_req_fifo__DOT__push_1__33__data = vlSelfRef.tb_req_fifo__DOT__A;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__33__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_req_fifo__DOT__push_1__35__data = vlSelfRef.tb_req_fifo__DOT__B;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__35__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__37__msg = "head_data should initially point to A"s;
    __Vtask_tb_req_fifo__DOT__check__37__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_req_fifo__DOT__A);
    if (__Vtask_tb_req_fifo__DOT__check__37__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__37__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__37__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                         239);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__38__msg = "head_data should switch combinationally to B when pop is asserted"s;
    __Vtask_tb_req_fifo__DOT__check__38__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_req_fifo__DOT__B);
    if (__Vtask_tb_req_fifo__DOT__check__38__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         241);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__40__msg = "head_data should remain B after pop clock edge"s;
    __Vtask_tb_req_fifo__DOT__check__40__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_req_fifo__DOT__B);
    if (__Vtask_tb_req_fifo__DOT__check__40__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__40__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__40__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__tc_rf_07_head_valid_deasserts_after_last_pop__41__tb_req_fifo__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    vlSelfRef.tb_req_fifo__DOT__test_id = 7U;
    VL_WRITEF_NX("\n=== TC_RF_07: head_valid Deasserts One Cycle After Last Pop ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__rst_n = 0U;
    __Vtask_tb_req_fifo__DOT__tc_rf_07_head_valid_deasserts_after_last_pop__41__tb_req_fifo__DOT__unnamedblk1_4__DOT____Vrepeat3 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_req_fifo__DOT__tc_rf_07_head_valid_deasserts_after_last_pop__41__tb_req_fifo__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                           "@(posedge tb_req_fifo.clk)");
        co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_req_fifo.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_req_fifo__DOT__tc_rf_07_head_valid_deasserts_after_last_pop__41__tb_req_fifo__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_req_fifo__DOT__tc_rf_07_head_valid_deasserts_after_last_pop__41__tb_req_fifo__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.tb_req_fifo__DOT__rst_n = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         257);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_req_fifo__DOT__push_1__42__data = 0x0000000000000055ULL;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__42__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__44__msg = "head_valid should be 1 with one entry present"s;
    __Vtask_tb_req_fifo__DOT__check__44__cond = (0U 
                                                 != (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__44__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__44__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__44__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__45__msg = "head_valid should still be 1 in same cycle as pop"s;
    __Vtask_tb_req_fifo__DOT__check__45__cond = (0U 
                                                 != (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__45__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__45__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__45__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         264);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__47__msg = "head_valid should deassert one cycle after last pop"s;
    __Vtask_tb_req_fifo__DOT__check__47__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__47__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__47__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__47__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__48__msg = "empty should be 1 after last pop"s;
    __Vtask_tb_req_fifo__DOT__check__48__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__48__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__48__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__48__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__tc_rf_08_simul_push_pop_occ1__49__tb_req_fifo__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0U;
    vlSelfRef.tb_req_fifo__DOT__test_id = 8U;
    VL_WRITEF_NX("\n=== TC_RF_08: Simultaneous Push+Pop at occupancy=1 ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__rst_n = 0U;
    __Vtask_tb_req_fifo__DOT__tc_rf_08_simul_push_pop_occ1__49__tb_req_fifo__DOT__unnamedblk1_5__DOT____Vrepeat4 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_req_fifo__DOT__tc_rf_08_simul_push_pop_occ1__49__tb_req_fifo__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                           "@(posedge tb_req_fifo.clk)");
        co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_req_fifo.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                             277);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_req_fifo__DOT__tc_rf_08_simul_push_pop_occ1__49__tb_req_fifo__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_tb_req_fifo__DOT__tc_rf_08_simul_push_pop_occ1__49__tb_req_fifo__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    vlSelfRef.tb_req_fifo__DOT__rst_n = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         281);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__A = 0x00000000000000aaULL;
    vlSelfRef.tb_req_fifo__DOT__B = 0x00000000000000bbULL;
    __Vtask_tb_req_fifo__DOT__push_1__50__data = vlSelfRef.tb_req_fifo__DOT__A;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__50__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__52__msg = "head_data should be A before simultaneous push+pop"s;
    __Vtask_tb_req_fifo__DOT__check__52__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_req_fifo__DOT__A);
    if (__Vtask_tb_req_fifo__DOT__check__52__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__52__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__52__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__push_data = vlSelfRef.tb_req_fifo__DOT__B;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                         292);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__53__msg = "head_data should switch combinationally to B in same cycle"s;
    __Vtask_tb_req_fifo__DOT__check__53__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_req_fifo__DOT__B);
    if (__Vtask_tb_req_fifo__DOT__check__53__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__53__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__53__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__54__msg = "push_ready should stay 1"s;
    __Vtask_tb_req_fifo__DOT__check__54__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__54__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__54__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__54__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         295);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__56__msg = "head_valid should remain 1 after simultaneous push+pop"s;
    __Vtask_tb_req_fifo__DOT__check__56__cond = (0U 
                                                 != (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__56__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__56__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__56__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__57__msg = "head_data should be B after the cycle"s;
    __Vtask_tb_req_fifo__DOT__check__57__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_req_fifo__DOT__B);
    if (__Vtask_tb_req_fifo__DOT__check__57__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__57__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__57__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__tc_rf_09_simul_push_pop_near_full__58__tb_req_fifo__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0U;
    vlSelfRef.tb_req_fifo__DOT__test_id = 9U;
    VL_WRITEF_NX("\n=== TC_RF_09: Simultaneous Push+Pop Near-Full ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__rst_n = 0U;
    __Vtask_tb_req_fifo__DOT__tc_rf_09_simul_push_pop_near_full__58__tb_req_fifo__DOT__unnamedblk1_6__DOT____Vrepeat5 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_req_fifo__DOT__tc_rf_09_simul_push_pop_near_full__58__tb_req_fifo__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                           "@(posedge tb_req_fifo.clk)");
        co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_req_fifo.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                             310);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_req_fifo__DOT__tc_rf_09_simul_push_pop_near_full__58__tb_req_fifo__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (__Vtask_tb_req_fifo__DOT__tc_rf_09_simul_push_pop_near_full__58__tb_req_fifo__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.tb_req_fifo__DOT__rst_n = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         314);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_req_fifo__DOT__push_1__59__data = 1ULL;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__59__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_req_fifo__DOT__push_1__60__data = 2ULL;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__60__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_req_fifo__DOT__push_1__61__data = 3ULL;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__61__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__63__msg = "push_ready should remain 1 at occupancy=3"s;
    __Vtask_tb_req_fifo__DOT__check__63__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__63__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__push_data = 0x00000000000000ccULL;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                         325);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__64__msg = "push_ready should not transiently deassert"s;
    __Vtask_tb_req_fifo__DOT__check__64__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__64__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__66__msg = "push_ready should remain 1 after simultaneous push+pop near-full"s;
    __Vtask_tb_req_fifo__DOT__check__66__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__66__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__66__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__66__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__67__msg = "full should remain 0"s;
    __Vtask_tb_req_fifo__DOT__check__67__cond = (4U 
                                                 != (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__67__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__67__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__67__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__tc_rf_10_pop_when_empty__68__tb_req_fifo__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0U;
    vlSelfRef.tb_req_fifo__DOT__test_id = 0x0000000aU;
    VL_WRITEF_NX("\n=== TC_RF_10: Pop When Empty ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__rst_n = 0U;
    __Vtask_tb_req_fifo__DOT__tc_rf_10_pop_when_empty__68__tb_req_fifo__DOT__unnamedblk1_7__DOT____Vrepeat6 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_req_fifo__DOT__tc_rf_10_pop_when_empty__68__tb_req_fifo__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                           "@(posedge tb_req_fifo.clk)");
        co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_req_fifo.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_req_fifo__DOT__tc_rf_10_pop_when_empty__68__tb_req_fifo__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (__Vtask_tb_req_fifo__DOT__tc_rf_10_pop_when_empty__68__tb_req_fifo__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    vlSelfRef.tb_req_fifo__DOT__rst_n = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         345);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__69__msg = "empty should be 1 after reset"s;
    __Vtask_tb_req_fifo__DOT__check__69__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__69__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         349);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__71__msg = "empty should remain 1 after pop on empty"s;
    __Vtask_tb_req_fifo__DOT__check__71__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__71__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__71__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__71__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__72__msg = "head_valid should remain 0 after pop on empty"s;
    __Vtask_tb_req_fifo__DOT__check__72__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__72__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__72__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__72__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__tc_rf_11_pointer_wrap__73__tb_req_fifo__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0U;
    vlSelfRef.tb_req_fifo__DOT__test_id = 0x0000000bU;
    VL_WRITEF_NX("\n=== TC_RF_11: Pointer Wrap-Around Integrity ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__rst_n = 0U;
    __Vtask_tb_req_fifo__DOT__tc_rf_11_pointer_wrap__73__tb_req_fifo__DOT__unnamedblk1_8__DOT____Vrepeat7 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_req_fifo__DOT__tc_rf_11_pointer_wrap__73__tb_req_fifo__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                           "@(posedge tb_req_fifo.clk)");
        co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_req_fifo.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                             363);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_req_fifo__DOT__tc_rf_11_pointer_wrap__73__tb_req_fifo__DOT__unnamedblk1_8__DOT____Vrepeat7 
            = (__Vtask_tb_req_fifo__DOT__tc_rf_11_pointer_wrap__73__tb_req_fifo__DOT__unnamedblk1_8__DOT____Vrepeat7 
               - (IData)(1U));
    }
    vlSelfRef.tb_req_fifo__DOT__rst_n = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         367);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__D0 = 0x0000000000000010ULL;
    vlSelfRef.tb_req_fifo__DOT__D1 = 0x0000000000000020ULL;
    vlSelfRef.tb_req_fifo__DOT__D2 = 0x0000000000000030ULL;
    vlSelfRef.tb_req_fifo__DOT__D3 = 0x0000000000000040ULL;
    vlSelfRef.tb_req_fifo__DOT__D4 = 0x0000000000000050ULL;
    vlSelfRef.tb_req_fifo__DOT__D5 = 0x0000000000000060ULL;
    vlSelfRef.tb_req_fifo__DOT__D6 = 0x0000000000000070ULL;
    vlSelfRef.tb_req_fifo__DOT__D7 = 0x0000000000000080ULL;
    __Vtask_tb_req_fifo__DOT__push_1__74__data = vlSelfRef.tb_req_fifo__DOT__D0;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__74__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_req_fifo__DOT__push_1__75__data = vlSelfRef.tb_req_fifo__DOT__D1;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__75__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_req_fifo__DOT__push_1__76__data = vlSelfRef.tb_req_fifo__DOT__D2;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__76__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_req_fifo__DOT__push_1__77__data = vlSelfRef.tb_req_fifo__DOT__D3;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__77__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__81__msg = "Pop order should preserve D1"s;
    __Vtask_tb_req_fifo__DOT__check__81__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_req_fifo__DOT__D1);
    if (__Vtask_tb_req_fifo__DOT__check__81__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__81__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__81__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__84__msg = "Pop order should preserve D2"s;
    __Vtask_tb_req_fifo__DOT__check__84__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_req_fifo__DOT__D2);
    if (__Vtask_tb_req_fifo__DOT__check__84__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__84__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__84__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__87__msg = "Pop order should preserve D3"s;
    __Vtask_tb_req_fifo__DOT__check__87__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_req_fifo__DOT__D3);
    if (__Vtask_tb_req_fifo__DOT__check__87__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__87__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__87__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__90__msg = "FIFO should be empty after first 4 pops"s;
    __Vtask_tb_req_fifo__DOT__check__90__cond = (0U 
                                                 == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__90__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__90__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__90__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__push_1__91__data = vlSelfRef.tb_req_fifo__DOT__D4;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__91__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_req_fifo__DOT__push_1__92__data = vlSelfRef.tb_req_fifo__DOT__D5;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__92__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_req_fifo__DOT__push_1__93__data = vlSelfRef.tb_req_fifo__DOT__D6;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__93__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_req_fifo__DOT__push_1__94__data = vlSelfRef.tb_req_fifo__DOT__D7;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__94__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__98__msg = "Wrap pop order should preserve D5"s;
    __Vtask_tb_req_fifo__DOT__check__98__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                 == vlSelfRef.tb_req_fifo__DOT__D5);
    if (__Vtask_tb_req_fifo__DOT__check__98__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__98__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__98__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__101__msg = "Wrap pop order should preserve D6"s;
    __Vtask_tb_req_fifo__DOT__check__101__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                  [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                  == vlSelfRef.tb_req_fifo__DOT__D6);
    if (__Vtask_tb_req_fifo__DOT__check__101__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__101__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__101__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__104__msg = "Wrap pop order should preserve D7"s;
    __Vtask_tb_req_fifo__DOT__check__104__cond = (vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                  [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr] 
                                                  == vlSelfRef.tb_req_fifo__DOT__D7);
    if (__Vtask_tb_req_fifo__DOT__check__104__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__104__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__104__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__pop = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("AFTER DEASSERT: pop=%0b rd_ptr=%0d head=%h\n",3
                 , '#',1,vlSelfRef.tb_req_fifo__DOT__pop
                 , '#',2,(IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)
                 , '#',64,vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                 [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__107__msg = "FIFO should be empty after second drain"s;
    __Vtask_tb_req_fifo__DOT__check__107__cond = (0U 
                                                  == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__107__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__107__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__107__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__tc_rf_12_last_slot_edge__108__tb_req_fifo__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0U;
    vlSelfRef.tb_req_fifo__DOT__test_id = 0x0000000cU;
    VL_WRITEF_NX("\n=== TC_RF_12: Last-Slot Critical Edge Case ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__rst_n = 0U;
    __Vtask_tb_req_fifo__DOT__tc_rf_12_last_slot_edge__108__tb_req_fifo__DOT__unnamedblk1_9__DOT____Vrepeat8 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_req_fifo__DOT__tc_rf_12_last_slot_edge__108__tb_req_fifo__DOT__unnamedblk1_9__DOT____Vrepeat8)) {
        Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                           "@(posedge tb_req_fifo.clk)");
        co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_req_fifo.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                             424);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_req_fifo__DOT__tc_rf_12_last_slot_edge__108__tb_req_fifo__DOT__unnamedblk1_9__DOT____Vrepeat8 
            = (__Vtask_tb_req_fifo__DOT__tc_rf_12_last_slot_edge__108__tb_req_fifo__DOT__unnamedblk1_9__DOT____Vrepeat8 
               - (IData)(1U));
    }
    vlSelfRef.tb_req_fifo__DOT__rst_n = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         428);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_req_fifo__DOT__push_1__109__data = 0ULL;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__109__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_req_fifo__DOT__push_1__110__data = 1ULL;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__110__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    __Vtask_tb_req_fifo__DOT__push_1__111__data = 2ULL;
    vlSelfRef.tb_req_fifo__DOT__push_data = __Vtask_tb_req_fifo__DOT__push_1__111__data;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0x00000000000000feULL;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__113__msg = "push_ready should still be 1 in the last-slot cycle"s;
    __Vtask_tb_req_fifo__DOT__check__113__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__113__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__113__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__113__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         438);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__115__msg = "full should assert one cycle after last-slot push"s;
    __Vtask_tb_req_fifo__DOT__check__115__cond = (4U 
                                                  == (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy));
    if (__Vtask_tb_req_fifo__DOT__check__115__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__115__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__115__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__116__msg = "first entry should not be lost"s;
    __Vtask_tb_req_fifo__DOT__check__116__cond = (0ULL 
                                                  == vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem
                                                  [vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr]);
    if (__Vtask_tb_req_fifo__DOT__check__116__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__116__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__116__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    __Vtask_tb_req_fifo__DOT__tc_rf_13_no_comb_path__117__tb_req_fifo__DOT__unnamedblk1_10__DOT____Vrepeat9 = 0U;
    vlSelfRef.tb_req_fifo__DOT__test_id = 0x0000000dU;
    VL_WRITEF_NX("\n=== TC_RF_13: No Combinational push_valid -> push_ready Dependency ===\n",0);
    vlSelfRef.tb_req_fifo__DOT__rst_n = 0U;
    __Vtask_tb_req_fifo__DOT__tc_rf_13_no_comb_path__117__tb_req_fifo__DOT__unnamedblk1_10__DOT____Vrepeat9 = 1U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_req_fifo__DOT__tc_rf_13_no_comb_path__117__tb_req_fifo__DOT__unnamedblk1_10__DOT____Vrepeat9)) {
        Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                           "@(posedge tb_req_fifo.clk)");
        co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_req_fifo.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                             452);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_req_fifo__DOT__tc_rf_13_no_comb_path__117__tb_req_fifo__DOT__unnamedblk1_10__DOT____Vrepeat9 
            = (__Vtask_tb_req_fifo__DOT__tc_rf_13_no_comb_path__117__tb_req_fifo__DOT__unnamedblk1_10__DOT____Vrepeat9 
               - (IData)(1U));
    }
    vlSelfRef.tb_req_fifo__DOT__rst_n = 1U;
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    vlSelfRef.tb_req_fifo__DOT__push_data = 0ULL;
    vlSelfRef.tb_req_fifo__DOT__pop = 0U;
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         457);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__118__msg = "push_ready should start at 1"s;
    __Vtask_tb_req_fifo__DOT__check__118__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__118__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__118__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__118__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__push_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                         461);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__119__msg = "push_ready should not change combinationally when push_valid toggles high"s;
    __Vtask_tb_req_fifo__DOT__check__119__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__119__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__119__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__119__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    vlSelfRef.tb_req_fifo__DOT__push_valid = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                         465);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__120__msg = "push_ready should not change combinationally when push_valid toggles low"s;
    __Vtask_tb_req_fifo__DOT__check__120__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__120__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__120__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__120__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(vlSelf, 
                                                       "@(posedge tb_req_fifo.clk)");
    co_await vlSelfRef.__VtrigSched_hc1438f4c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_req_fifo.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                                         468);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_req_fifo__DOT__check__121__msg = "push_ready should only change on clock edges"s;
    __Vtask_tb_req_fifo__DOT__check__121__cond = vlSelfRef.tb_req_fifo__DOT__push_ready;
    if (__Vtask_tb_req_fifo__DOT__check__121__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__121__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_req_fifo__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_req_fifo__DOT__check__121__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_req_fifo__DOT__error_count = ((IData)(1U) 
                                                   + vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    VL_WRITEF_NX("\n=== TESTBENCH SUMMARY ===\n",0);
    if ((0U == vlSelfRef.tb_req_fifo__DOT__error_count)) {
        VL_WRITEF_NX("ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("%0d TEST(S) FAILED\n",1, '~',32,vlSelfRef.tb_req_fifo__DOT__error_count);
    }
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 497, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__3(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 
                                             59);
        vlSelfRef.tb_req_fifo__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_req_fifo__DOT__clk)));
    }
    co_return;
}

bool Vtb_req_fifo___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___trigger_anySet__act\n"); );
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

void Vtb_req_fifo___024root___timing_ready(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___timing_ready\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready("@(posedge tb_req_fifo.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h39ef7a8f__0.ready("@(posedge tb_req_fifo.rst_n)");
    }
}

void Vtb_req_fifo___024root___timing_resume(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___timing_resume\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc1438f4c__0.moveToResumeQueue(
                                                          "@(posedge tb_req_fifo.clk)");
    vlSelfRef.__VtrigSched_h39ef7a8f__0.moveToResumeQueue(
                                                          "@(posedge tb_req_fifo.rst_n)");
    vlSelfRef.__VtrigSched_hc1438f4c__0.resume("@(posedge tb_req_fifo.clk)");
    vlSelfRef.__VtrigSched_h39ef7a8f__0.resume("@(posedge tb_req_fifo.rst_n)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_req_fifo___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_req_fifo___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_req_fifo___024root___eval_phase__act(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_phase__act\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.tb_req_fifo__DOT__rst_n) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__rst_n__0))) 
                                                           << 3U) 
                                                          | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 2U)) 
                                                         | ((((~ (IData)(vlSelfRef.tb_req_fifo__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_req_fifo__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__clk__0 
            = vlSelfRef.tb_req_fifo__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__rst_n__0 
            = vlSelfRef.tb_req_fifo__DOT__rst_n;
    }
    Vtb_req_fifo___024root___timing_ready(vlSelf);
    Vtb_req_fifo___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_req_fifo___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_req_fifo___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_req_fifo___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_req_fifo___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
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
    return (__VactExecute);
}

bool Vtb_req_fifo___024root___eval_phase__inact(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_phase__inact\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_req_fifo___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_req_fifo___024root___eval_phase__nba(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_phase__nba\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_req_fifo___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    QData/*63:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0 = 0;
                    CData/*1:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0 = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0 = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0 = 0U;
                    if (vlSelfRef.tb_req_fifo__DOT__rst_n) {
                        if (((IData)(vlSelfRef.tb_req_fifo__DOT__pop) 
                             & (0U != (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy)))) {
                            vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr)));
                        }
                        if (((IData)(vlSelfRef.tb_req_fifo__DOT__push_valid) 
                             & (IData)(vlSelfRef.tb_req_fifo__DOT__push_ready))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0 
                                = vlSelfRef.tb_req_fifo__DOT__push_data;
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0 
                                = vlSelfRef.tb_req_fifo__DOT__dut__DOT__wr_ptr;
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0 = 1U;
                            vlSelfRef.tb_req_fifo__DOT__dut__DOT__wr_ptr 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__wr_ptr)));
                        }
                        vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy 
                            = vlSelfRef.tb_req_fifo__DOT__dut__DOT__nxt_occupancy;
                    } else {
                        vlSelfRef.tb_req_fifo__DOT__dut__DOT__rd_ptr = 0U;
                        vlSelfRef.tb_req_fifo__DOT__dut__DOT__wr_ptr = 0U;
                        vlSelfRef.tb_req_fifo__DOT__dut__DOT__occupancy = 0U;
                    }
                    if (__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0) {
                        vlSelfRef.tb_req_fifo__DOT__dut__DOT__fifo_mem[__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0] 
                            = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__tb_req_fifo__DOT__dut__DOT__fifo_mem__v0;
                    }
                    vlSelfRef.tb_req_fifo__DOT__push_ready 
                        = ((1U & (~ (IData)(vlSelfRef.tb_req_fifo__DOT__rst_n))) 
                           || (4U > (IData)(vlSelfRef.tb_req_fifo__DOT__dut__DOT__nxt_occupancy)));
                }
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
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
        Vtb_req_fifo___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_req_fifo___024root___eval(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_req_fifo___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_req_fifo___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_req_fifo.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_req_fifo___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_req_fifo___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_req_fifo___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0(Vtb_req_fifo___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root____VbeforeTrig_hc1438f4c__0\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_req_fifo__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__clk__0 
        = vlSelfRef.tb_req_fifo__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1438f4c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_req_fifo___024root____VbeforeTrig_h39ef7a8f__0(Vtb_req_fifo___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root____VbeforeTrig_h39ef7a8f__0\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_req_fifo__DOT__rst_n) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__rst_n__0))) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_req_fifo__DOT__rst_n__0 
        = vlSelfRef.tb_req_fifo__DOT__rst_n;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h39ef7a8f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_req_fifo___024root___eval_debug_assertions(Vtb_req_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_req_fifo___024root___eval_debug_assertions\n"); );
    Vtb_req_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
