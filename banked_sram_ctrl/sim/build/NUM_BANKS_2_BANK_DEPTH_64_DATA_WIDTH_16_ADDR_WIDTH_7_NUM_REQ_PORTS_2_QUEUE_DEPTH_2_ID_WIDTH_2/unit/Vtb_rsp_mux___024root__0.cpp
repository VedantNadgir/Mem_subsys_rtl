// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rsp_mux.h for the primary calling header

#include "Vtb_rsp_mux__pch.h"

VlCoroutine Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__0(Vtb_rsp_mux___024root* vlSelf);
VlCoroutine Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__1(Vtb_rsp_mux___024root* vlSelf);
VlCoroutine Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__2(Vtb_rsp_mux___024root* vlSelf);

void Vtb_rsp_mux___024root___eval_initial(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_initial\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("waves/rsp_mux.vcd"s);
        vlSymsp->_traceDumpOpen();
        vlSelfRef.tb_rsp_mux__DOT__clk = 0U;
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__0(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000030d40ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         13);
    VL_WRITEF_NX("WATCHDOG EXPIRED\n",0);
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 15, "");
    co_return;
}

void Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(Vtb_rsp_mux___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__1(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__2__cond;
    __Vtask_tb_rsp_mux__DOT__check__2__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__3__cond;
    __Vtask_tb_rsp_mux__DOT__check__3__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__4__cond;
    __Vtask_tb_rsp_mux__DOT__check__4__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__5__cond;
    __Vtask_tb_rsp_mux__DOT__check__5__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__6__cond;
    __Vtask_tb_rsp_mux__DOT__check__6__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__7__cond;
    __Vtask_tb_rsp_mux__DOT__check__7__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__10__cond;
    __Vtask_tb_rsp_mux__DOT__check__10__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__11__cond;
    __Vtask_tb_rsp_mux__DOT__check__11__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__12__cond;
    __Vtask_tb_rsp_mux__DOT__check__12__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__13__cond;
    __Vtask_tb_rsp_mux__DOT__check__13__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__14__cond;
    __Vtask_tb_rsp_mux__DOT__check__14__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__15__cond;
    __Vtask_tb_rsp_mux__DOT__check__15__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__16__cond;
    __Vtask_tb_rsp_mux__DOT__check__16__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__17__cond;
    __Vtask_tb_rsp_mux__DOT__check__17__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__20__cond;
    __Vtask_tb_rsp_mux__DOT__check__20__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__21__cond;
    __Vtask_tb_rsp_mux__DOT__check__21__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__22__cond;
    __Vtask_tb_rsp_mux__DOT__check__22__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__23__cond;
    __Vtask_tb_rsp_mux__DOT__check__23__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__24__cond;
    __Vtask_tb_rsp_mux__DOT__check__24__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__25__cond;
    __Vtask_tb_rsp_mux__DOT__check__25__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__28__cond;
    __Vtask_tb_rsp_mux__DOT__check__28__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__29__cond;
    __Vtask_tb_rsp_mux__DOT__check__29__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__30__cond;
    __Vtask_tb_rsp_mux__DOT__check__30__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__31__cond;
    __Vtask_tb_rsp_mux__DOT__check__31__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__34__cond;
    __Vtask_tb_rsp_mux__DOT__check__34__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__35__cond;
    __Vtask_tb_rsp_mux__DOT__check__35__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__36__cond;
    __Vtask_tb_rsp_mux__DOT__check__36__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__37__cond;
    __Vtask_tb_rsp_mux__DOT__check__37__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__38__cond;
    __Vtask_tb_rsp_mux__DOT__check__38__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__39__cond;
    __Vtask_tb_rsp_mux__DOT__check__39__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__40__cond;
    __Vtask_tb_rsp_mux__DOT__check__40__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__43__cond;
    __Vtask_tb_rsp_mux__DOT__check__43__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__44__cond;
    __Vtask_tb_rsp_mux__DOT__check__44__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__45__cond;
    __Vtask_tb_rsp_mux__DOT__check__45__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__46__cond;
    __Vtask_tb_rsp_mux__DOT__check__46__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__47__cond;
    __Vtask_tb_rsp_mux__DOT__check__47__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__48__cond;
    __Vtask_tb_rsp_mux__DOT__check__48__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__51__cond;
    __Vtask_tb_rsp_mux__DOT__check__51__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__52__cond;
    __Vtask_tb_rsp_mux__DOT__check__52__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__53__cond;
    __Vtask_tb_rsp_mux__DOT__check__53__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__54__cond;
    __Vtask_tb_rsp_mux__DOT__check__54__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__55__cond;
    __Vtask_tb_rsp_mux__DOT__check__55__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__56__cond;
    __Vtask_tb_rsp_mux__DOT__check__56__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__57__cond;
    __Vtask_tb_rsp_mux__DOT__check__57__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__58__cond;
    __Vtask_tb_rsp_mux__DOT__check__58__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__59__cond;
    __Vtask_tb_rsp_mux__DOT__check__59__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__62__cond;
    __Vtask_tb_rsp_mux__DOT__check__62__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__63__cond;
    __Vtask_tb_rsp_mux__DOT__check__63__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__64__cond;
    __Vtask_tb_rsp_mux__DOT__check__64__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__67__cond;
    __Vtask_tb_rsp_mux__DOT__check__67__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__68__cond;
    __Vtask_tb_rsp_mux__DOT__check__68__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__69__cond;
    __Vtask_tb_rsp_mux__DOT__check__69__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__70__cond;
    __Vtask_tb_rsp_mux__DOT__check__70__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__73__cond;
    __Vtask_tb_rsp_mux__DOT__check__73__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__74__cond;
    __Vtask_tb_rsp_mux__DOT__check__74__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__75__cond;
    __Vtask_tb_rsp_mux__DOT__check__75__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__76__cond;
    __Vtask_tb_rsp_mux__DOT__check__76__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__77__cond;
    __Vtask_tb_rsp_mux__DOT__check__77__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__78__cond;
    __Vtask_tb_rsp_mux__DOT__check__78__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__79__cond;
    __Vtask_tb_rsp_mux__DOT__check__79__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__80__cond;
    __Vtask_tb_rsp_mux__DOT__check__80__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__81__cond;
    __Vtask_tb_rsp_mux__DOT__check__81__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__82__cond;
    __Vtask_tb_rsp_mux__DOT__check__82__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__83__cond;
    __Vtask_tb_rsp_mux__DOT__check__83__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__86__cond;
    __Vtask_tb_rsp_mux__DOT__check__86__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__87__cond;
    __Vtask_tb_rsp_mux__DOT__check__87__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__88__cond;
    __Vtask_tb_rsp_mux__DOT__check__88__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__89__cond;
    __Vtask_tb_rsp_mux__DOT__check__89__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__90__cond;
    __Vtask_tb_rsp_mux__DOT__check__90__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__91__cond;
    __Vtask_tb_rsp_mux__DOT__check__91__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__92__cond;
    __Vtask_tb_rsp_mux__DOT__check__92__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__93__cond;
    __Vtask_tb_rsp_mux__DOT__check__93__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__94__cond;
    __Vtask_tb_rsp_mux__DOT__check__94__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__95__cond;
    __Vtask_tb_rsp_mux__DOT__check__95__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__96__cond;
    __Vtask_tb_rsp_mux__DOT__check__96__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__99__cond;
    __Vtask_tb_rsp_mux__DOT__check__99__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__100__cond;
    __Vtask_tb_rsp_mux__DOT__check__100__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__101__cond;
    __Vtask_tb_rsp_mux__DOT__check__101__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__102__cond;
    __Vtask_tb_rsp_mux__DOT__check__102__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__103__cond;
    __Vtask_tb_rsp_mux__DOT__check__103__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__104__cond;
    __Vtask_tb_rsp_mux__DOT__check__104__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__105__cond;
    __Vtask_tb_rsp_mux__DOT__check__105__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__106__cond;
    __Vtask_tb_rsp_mux__DOT__check__106__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__107__cond;
    __Vtask_tb_rsp_mux__DOT__check__107__cond = 0;
    CData/*0:0*/ __Vtask_tb_rsp_mux__DOT__check__108__cond;
    __Vtask_tb_rsp_mux__DOT__check__108__cond = 0;
    // Body
    VL_WRITEF_NX("TB START\n",0);
    vlSelfRef.tb_rsp_mux__DOT__test_id = 1U;
    VL_WRITEF_NX("\n=== Test 1: All Banks Idle ===\n",0);
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__2__msg = "rsp_valid all zero"s;
    __Vtask_tb_rsp_mux__DOT__check__2__cond = (0U == (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid));
    if (__Vtask_tb_rsp_mux__DOT__check__2__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__2__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__2__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__3__msg = "rsp_data all zero"s;
    __Vtask_tb_rsp_mux__DOT__check__3__cond = (0U == 
                                               (((vlSelfRef.tb_rsp_mux__DOT__rsp_data[0U] 
                                                  | vlSelfRef.tb_rsp_mux__DOT__rsp_data[1U]) 
                                                 | vlSelfRef.tb_rsp_mux__DOT__rsp_data[2U]) 
                                                | vlSelfRef.tb_rsp_mux__DOT__rsp_data[3U]));
    if (__Vtask_tb_rsp_mux__DOT__check__3__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__3__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__3__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__4__msg = "rsp_id all zero"s;
    __Vtask_tb_rsp_mux__DOT__check__4__cond = (0U == (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id));
    if (__Vtask_tb_rsp_mux__DOT__check__4__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__5__msg = "rsp_err all zero"s;
    __Vtask_tb_rsp_mux__DOT__check__5__cond = (0U == (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_err));
    if (__Vtask_tb_rsp_mux__DOT__check__5__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__5__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__5__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__6__msg = "bank_pp1_ready all 1 (bubbles free)"s;
    __Vtask_tb_rsp_mux__DOT__check__6__cond = (0x0fU 
                                               == (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready));
    if (__Vtask_tb_rsp_mux__DOT__check__6__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__6__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__6__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__7__msg = "bank_granted all zero"s;
    __Vtask_tb_rsp_mux__DOT__check__7__cond = (0U == (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
    if (__Vtask_tb_rsp_mux__DOT__check__7__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__7__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__7__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 2U;
    VL_WRITEF_NX("\n=== Test %0d: Single Bank Single Port ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = (4U | (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid));
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0xdeadbeefU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x00013000U 
                                         | (0x00fc0fffU 
                                            & vlSelfRef.tb_rsp_mux__DOT__pp1_id));
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = (0x0bU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we));
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = (0x0bU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err));
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__10__msg = "rsp_valid[1] asserted"s;
    __Vtask_tb_rsp_mux__DOT__check__10__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                   >> 1U));
    if (__Vtask_tb_rsp_mux__DOT__check__10__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__10__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__10__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__11__msg = "rsp_data[1] = DEAD_BEEF"s;
    __Vtask_tb_rsp_mux__DOT__check__11__cond = (0xdeadbeefU 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[1U]);
    if (__Vtask_tb_rsp_mux__DOT__check__11__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__11__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__11__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__12__msg = "rsp_id[1] = txn_id 3"s;
    __Vtask_tb_rsp_mux__DOT__check__12__cond = (3U 
                                                == 
                                                (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id) 
                                                    >> 4U)));
    if (__Vtask_tb_rsp_mux__DOT__check__12__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__13__msg = "rsp_err[1] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__13__cond = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_err) 
                                                    >> 1U)));
    if (__Vtask_tb_rsp_mux__DOT__check__13__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__14__msg = "bank_pp1_ready[2] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__14__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                   >> 2U));
    if (__Vtask_tb_rsp_mux__DOT__check__14__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__14__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__14__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__15__msg = "bank_granted[2] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__15__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                   >> 2U));
    if (__Vtask_tb_rsp_mux__DOT__check__15__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__15__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__15__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__16__msg = "other rsp_valid zero"s;
    __Vtask_tb_rsp_mux__DOT__check__16__cond = (IData)(
                                                       (0U 
                                                        == 
                                                        (0x0dU 
                                                         & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid))));
    if (__Vtask_tb_rsp_mux__DOT__check__16__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__16__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__16__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__17__msg = "idle banks pp1_ready=1"s;
    __Vtask_tb_rsp_mux__DOT__check__17__cond = (IData)(
                                                       (0x0bU 
                                                        == 
                                                        (0x0bU 
                                                         & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready))));
    if (__Vtask_tb_rsp_mux__DOT__check__17__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__17__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__17__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 3U;
    VL_WRITEF_NX("\n=== Test %0d: Write Response ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = (1U | (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid));
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = (1U | (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we));
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0xffffffffU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (5U | (0x00ffffc0U 
                                               & vlSelfRef.tb_rsp_mux__DOT__pp1_id));
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = (0x0eU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err));
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         155);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__20__msg = "rsp_valid[0] asserted for write"s;
    __Vtask_tb_rsp_mux__DOT__check__20__cond = (1U 
                                                & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid));
    if (__Vtask_tb_rsp_mux__DOT__check__20__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__20__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__20__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__21__msg = "rsp_data[0] forced zero for write"s;
    __Vtask_tb_rsp_mux__DOT__check__21__cond = (0U 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[0U]);
    if (__Vtask_tb_rsp_mux__DOT__check__21__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__21__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__21__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__22__msg = "rsp_id[0] = txn_id 5"s;
    __Vtask_tb_rsp_mux__DOT__check__22__cond = (5U 
                                                == 
                                                (0x0000000fU 
                                                 & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id)));
    if (__Vtask_tb_rsp_mux__DOT__check__22__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__22__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__22__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__23__msg = "rsp_err[0] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__23__cond = (1U 
                                                & (~ (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_err)));
    if (__Vtask_tb_rsp_mux__DOT__check__23__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__24__msg = "bank_pp1_ready[0] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__24__cond = (1U 
                                                & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready));
    if (__Vtask_tb_rsp_mux__DOT__check__24__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__24__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__24__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__25__msg = "bank_granted[0] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__25__cond = (1U 
                                                & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
    if (__Vtask_tb_rsp_mux__DOT__check__25__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__25__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__25__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 4U;
    VL_WRITEF_NX("\n=== Test %0d: ID Stripping ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = (2U | (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid));
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x00000e80U 
                                         | (0x00fff03fU 
                                            & vlSelfRef.tb_rsp_mux__DOT__pp1_id));
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = (0x0dU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we));
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = (0x0dU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err));
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         176);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         177);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__28__msg = "rsp_valid[3] asserted"s;
    __Vtask_tb_rsp_mux__DOT__check__28__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                   >> 3U));
    if (__Vtask_tb_rsp_mux__DOT__check__28__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__28__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__28__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__29__msg = "rsp_id[3] = txn_id 0xA (prefix stripped)"s;
    __Vtask_tb_rsp_mux__DOT__check__29__cond = (0x0aU 
                                                == 
                                                (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id) 
                                                    >> 0x0cU)));
    if (__Vtask_tb_rsp_mux__DOT__check__29__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__29__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__29__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__30__msg = "bank_granted[1] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__30__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                   >> 1U));
    if (__Vtask_tb_rsp_mux__DOT__check__30__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__30__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__30__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__31__msg = "bank_pp1_ready[1] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__31__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                   >> 1U));
    if (__Vtask_tb_rsp_mux__DOT__check__31__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__31__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__31__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 5U;
    VL_WRITEF_NX("\n=== Test %0d: Error Forwarded ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = (8U | (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid));
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = (8U | (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err));
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x00800000U 
                                         | (0x0003ffffU 
                                            & vlSelfRef.tb_rsp_mux__DOT__pp1_id));
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = (7U & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we));
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         197);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         198);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__34__msg = "rsp_err[2] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__34__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_err) 
                                                   >> 2U));
    if (__Vtask_tb_rsp_mux__DOT__check__34__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__34__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__34__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__35__msg = "rsp_valid[2] asserted"s;
    __Vtask_tb_rsp_mux__DOT__check__35__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                   >> 2U));
    if (__Vtask_tb_rsp_mux__DOT__check__35__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__35__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__35__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__36__msg = "rsp_data[2] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__36__cond = (0U 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[2U]);
    if (__Vtask_tb_rsp_mux__DOT__check__36__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__36__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__36__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__37__msg = "rsp_id[2] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__37__cond = (0U 
                                                == 
                                                (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id) 
                                                    >> 8U)));
    if (__Vtask_tb_rsp_mux__DOT__check__37__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__37__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__37__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__38__msg = "bank_pp1_ready[3] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__38__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                   >> 3U));
    if (__Vtask_tb_rsp_mux__DOT__check__38__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__39__msg = "bank_granted[3] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__39__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                   >> 3U));
    if (__Vtask_tb_rsp_mux__DOT__check__39__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__39__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__39__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__40__msg = "other rsp_err zero"s;
    __Vtask_tb_rsp_mux__DOT__check__40__cond = (IData)(
                                                       (0U 
                                                        == 
                                                        (0x0bU 
                                                         & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_err))));
    if (__Vtask_tb_rsp_mux__DOT__check__40__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__40__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__40__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 6U;
    VL_WRITEF_NX("\n=== Test %0d: Collision Lowest Bank Wins ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0x0aU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x00fff03fU 
                                         & vlSelfRef.tb_rsp_mux__DOT__pp1_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x0003ffffU 
                                         & vlSelfRef.tb_rsp_mux__DOT__pp1_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0x11111111U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0x33333333U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = (0x0dU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we));
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = (7U & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we));
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = (0x0dU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err));
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = (7U & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err));
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = (1U 
                                                 | (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready));
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         225);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         226);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__43__msg = "bank_granted[1] = 1 (lowest wins)"s;
    __Vtask_tb_rsp_mux__DOT__check__43__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                   >> 1U));
    if (__Vtask_tb_rsp_mux__DOT__check__43__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__43__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__43__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__44__msg = "bank_granted[3] = 0 (stalled)"s;
    __Vtask_tb_rsp_mux__DOT__check__44__cond = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                    >> 3U)));
    if (__Vtask_tb_rsp_mux__DOT__check__44__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__44__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__44__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__45__msg = "rsp_valid only port 0"s;
    __Vtask_tb_rsp_mux__DOT__check__45__cond = (1U 
                                                == (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid));
    if (__Vtask_tb_rsp_mux__DOT__check__45__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__45__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__45__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__46__msg = "rsp_data[0] from bank 1"s;
    __Vtask_tb_rsp_mux__DOT__check__46__cond = (0x11111111U 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[0U]);
    if (__Vtask_tb_rsp_mux__DOT__check__46__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__46__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__46__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__47__msg = "bank_pp1_ready[1] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__47__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                   >> 1U));
    if (__Vtask_tb_rsp_mux__DOT__check__47__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__47__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__47__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__48__msg = "bank_pp1_ready[3] = 0 (stalled)"s;
    __Vtask_tb_rsp_mux__DOT__check__48__cond = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                    >> 3U)));
    if (__Vtask_tb_rsp_mux__DOT__check__48__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__48__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__48__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 7U;
    VL_WRITEF_NX("\n=== Test %0d: No Collision Both Granted ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 5U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x00000010U 
                                         | (0x00ffffc0U 
                                            & vlSelfRef.tb_rsp_mux__DOT__pp1_id));
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x00030000U 
                                         | (0x00fc0fffU 
                                            & vlSelfRef.tb_rsp_mux__DOT__pp1_id));
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0xaaaaaaaaU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0xbbbbbbbbU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = (0x0eU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we));
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = (0x0bU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we));
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = (0x0eU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err));
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = (0x0bU & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err));
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         253);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__51__msg = "bank_granted[0] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__51__cond = (1U 
                                                & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
    if (__Vtask_tb_rsp_mux__DOT__check__51__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__51__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__51__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__52__msg = "bank_granted[2] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__52__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                   >> 2U));
    if (__Vtask_tb_rsp_mux__DOT__check__52__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__52__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__52__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__53__msg = "rsp_valid[1] = 1 (bank 0 \342\206\222 port 1)"s;
    __Vtask_tb_rsp_mux__DOT__check__53__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                   >> 1U));
    if (__Vtask_tb_rsp_mux__DOT__check__53__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__53__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__53__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__54__msg = "rsp_valid[3] = 1 (bank 2 \342\206\222 port 3)"s;
    __Vtask_tb_rsp_mux__DOT__check__54__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                   >> 3U));
    if (__Vtask_tb_rsp_mux__DOT__check__54__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__54__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__54__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__55__msg = "rsp_data[1] correct"s;
    __Vtask_tb_rsp_mux__DOT__check__55__cond = (0xaaaaaaaaU 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[1U]);
    if (__Vtask_tb_rsp_mux__DOT__check__55__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__55__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__55__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__56__msg = "rsp_data[3] correct"s;
    __Vtask_tb_rsp_mux__DOT__check__56__cond = (0xbbbbbbbbU 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[3U]);
    if (__Vtask_tb_rsp_mux__DOT__check__56__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__56__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__56__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__57__msg = "bank_pp1_ready[0] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__57__cond = (1U 
                                                & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready));
    if (__Vtask_tb_rsp_mux__DOT__check__57__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__57__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__57__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__58__msg = "bank_pp1_ready[2] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__58__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                   >> 2U));
    if (__Vtask_tb_rsp_mux__DOT__check__58__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__58__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__58__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__59__msg = "other rsp_valid zero"s;
    __Vtask_tb_rsp_mux__DOT__check__59__cond = (IData)(
                                                       (0U 
                                                        == 
                                                        (5U 
                                                         & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid))));
    if (__Vtask_tb_rsp_mux__DOT__check__59__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__59__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__59__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 8U;
    VL_WRITEF_NX("\n=== Test %0d: FIFO Full Blocks Bank ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = (1U | (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid));
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x00000020U 
                                         | (0x00ffffc0U 
                                            & vlSelfRef.tb_rsp_mux__DOT__pp1_id));
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = (0x0bU 
                                                 & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready));
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__62__msg = "bank_granted[0] = 0 (FIFO full)"s;
    __Vtask_tb_rsp_mux__DOT__check__62__cond = (1U 
                                                & (~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted)));
    if (__Vtask_tb_rsp_mux__DOT__check__62__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__62__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__62__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__63__msg = "rsp_valid[2] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__63__cond = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                    >> 2U)));
    if (__Vtask_tb_rsp_mux__DOT__check__63__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__64__msg = "bank_pp1_ready[0] = 0 (stalled)"s;
    __Vtask_tb_rsp_mux__DOT__check__64__cond = (1U 
                                                & (~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready)));
    if (__Vtask_tb_rsp_mux__DOT__check__64__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 9U;
    VL_WRITEF_NX("\n=== Test %0d: Bubble Banks Always Ready ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 1U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x00ffffc0U 
                                         & vlSelfRef.tb_rsp_mux__DOT__pp1_id);
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         293);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         294);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__67__msg = "bank_pp1_ready[0] = 1 (granted)"s;
    __Vtask_tb_rsp_mux__DOT__check__67__cond = (1U 
                                                & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready));
    if (__Vtask_tb_rsp_mux__DOT__check__67__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__67__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__67__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__68__msg = "bank_pp1_ready[1] = 1 (bubble)"s;
    __Vtask_tb_rsp_mux__DOT__check__68__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                   >> 1U));
    if (__Vtask_tb_rsp_mux__DOT__check__68__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__68__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__68__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__69__msg = "bank_pp1_ready[2] = 1 (bubble)"s;
    __Vtask_tb_rsp_mux__DOT__check__69__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                   >> 2U));
    if (__Vtask_tb_rsp_mux__DOT__check__69__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__70__msg = "bank_pp1_ready[3] = 1 (bubble)"s;
    __Vtask_tb_rsp_mux__DOT__check__70__cond = (1U 
                                                & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                   >> 3U));
    if (__Vtask_tb_rsp_mux__DOT__check__70__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__70__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__70__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 0x0000000aU;
    VL_WRITEF_NX("\n=== Test %0d: Peak Throughput ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0x00d23481U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0x11111111U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0x22222222U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0x33333333U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0x44444444U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         321);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__73__msg = "bank_granted all 1"s;
    __Vtask_tb_rsp_mux__DOT__check__73__cond = (0x0fU 
                                                == (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
    if (__Vtask_tb_rsp_mux__DOT__check__73__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__73__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__73__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__74__msg = "all rsp_valid asserted"s;
    __Vtask_tb_rsp_mux__DOT__check__74__cond = (0x0fU 
                                                == (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid));
    if (__Vtask_tb_rsp_mux__DOT__check__74__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__74__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__74__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__75__msg = "all bank_pp1_ready 1"s;
    __Vtask_tb_rsp_mux__DOT__check__75__cond = (0x0fU 
                                                == (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready));
    if (__Vtask_tb_rsp_mux__DOT__check__75__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__75__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__75__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__76__msg = "rsp_data[0] correct"s;
    __Vtask_tb_rsp_mux__DOT__check__76__cond = (0x11111111U 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[0U]);
    if (__Vtask_tb_rsp_mux__DOT__check__76__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__76__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__76__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__77__msg = "rsp_data[1] correct"s;
    __Vtask_tb_rsp_mux__DOT__check__77__cond = (0x22222222U 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[1U]);
    if (__Vtask_tb_rsp_mux__DOT__check__77__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__77__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__77__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__78__msg = "rsp_data[2] correct"s;
    __Vtask_tb_rsp_mux__DOT__check__78__cond = (0x33333333U 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[2U]);
    if (__Vtask_tb_rsp_mux__DOT__check__78__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__78__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__78__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__79__msg = "rsp_data[3] correct"s;
    __Vtask_tb_rsp_mux__DOT__check__79__cond = (0x44444444U 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[3U]);
    if (__Vtask_tb_rsp_mux__DOT__check__79__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__79__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__79__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__80__msg = "rsp_id[0] = txn 1"s;
    __Vtask_tb_rsp_mux__DOT__check__80__cond = (1U 
                                                == 
                                                (0x0000000fU 
                                                 & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id)));
    if (__Vtask_tb_rsp_mux__DOT__check__80__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__80__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__80__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__81__msg = "rsp_id[1] = txn 2"s;
    __Vtask_tb_rsp_mux__DOT__check__81__cond = (2U 
                                                == 
                                                (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id) 
                                                    >> 4U)));
    if (__Vtask_tb_rsp_mux__DOT__check__81__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__81__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__81__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__82__msg = "rsp_id[2] = txn 3"s;
    __Vtask_tb_rsp_mux__DOT__check__82__cond = (3U 
                                                == 
                                                (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id) 
                                                    >> 8U)));
    if (__Vtask_tb_rsp_mux__DOT__check__82__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__82__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__82__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__83__msg = "rsp_id[3] = txn 4"s;
    __Vtask_tb_rsp_mux__DOT__check__83__cond = (4U 
                                                == 
                                                (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id) 
                                                    >> 0x0cU)));
    if (__Vtask_tb_rsp_mux__DOT__check__83__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__83__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__83__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 0x0000000bU;
    VL_WRITEF_NX("\n=== Test %0d: All Banks Same Port ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0x00103081U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0x11111111U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0x22222222U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0x33333333U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0x44444444U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = (1U 
                                                 | (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready));
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         354);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__86__msg = "bank_granted[0] = 1 (only winner)"s;
    __Vtask_tb_rsp_mux__DOT__check__86__cond = (1U 
                                                & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
    if (__Vtask_tb_rsp_mux__DOT__check__86__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__86__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__86__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__87__msg = "bank_granted[1] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__87__cond = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                    >> 1U)));
    if (__Vtask_tb_rsp_mux__DOT__check__87__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__87__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__87__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__88__msg = "bank_granted[2] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__88__cond = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                    >> 2U)));
    if (__Vtask_tb_rsp_mux__DOT__check__88__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__88__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__88__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__89__msg = "bank_granted[3] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__89__cond = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                    >> 3U)));
    if (__Vtask_tb_rsp_mux__DOT__check__89__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__89__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__89__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__90__msg = "rsp_valid[0] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__90__cond = (1U 
                                                & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid));
    if (__Vtask_tb_rsp_mux__DOT__check__90__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__90__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__90__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__91__msg = "rsp_data[0] from bank 0"s;
    __Vtask_tb_rsp_mux__DOT__check__91__cond = (0x11111111U 
                                                == vlSelfRef.tb_rsp_mux__DOT__rsp_data[0U]);
    if (__Vtask_tb_rsp_mux__DOT__check__91__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__91__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__91__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__92__msg = "rsp_id[0] = txn 1 from bank 0"s;
    __Vtask_tb_rsp_mux__DOT__check__92__cond = (1U 
                                                == 
                                                (0x0000000fU 
                                                 & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id)));
    if (__Vtask_tb_rsp_mux__DOT__check__92__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__92__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__92__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__93__msg = "bank_pp1_ready[0] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__93__cond = (1U 
                                                & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready));
    if (__Vtask_tb_rsp_mux__DOT__check__93__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__93__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__93__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__94__msg = "bank_pp1_ready[1] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__94__cond = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                    >> 1U)));
    if (__Vtask_tb_rsp_mux__DOT__check__94__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__94__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__94__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__95__msg = "bank_pp1_ready[2] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__95__cond = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                    >> 2U)));
    if (__Vtask_tb_rsp_mux__DOT__check__95__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__95__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__95__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__96__msg = "bank_pp1_ready[3] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__96__cond = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                    >> 3U)));
    if (__Vtask_tb_rsp_mux__DOT__check__96__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__96__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__96__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.tb_rsp_mux__DOT__test_id = 0x0000000cU;
    VL_WRITEF_NX("\n=== Test %0d: Partial Ready Isolation ===\n",1
                 , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id);
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0fU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = (1U | (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid));
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (1U | (0x00ffffc0U 
                                               & vlSelfRef.tb_rsp_mux__DOT__pp1_id));
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = (2U | (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid));
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x00000480U 
                                         | (0x00fff03fU 
                                            & vlSelfRef.tb_rsp_mux__DOT__pp1_id));
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = (4U | (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid));
    vlSelfRef.tb_rsp_mux__DOT__pp1_id = (0x00023000U 
                                         | (0x00fc0fffU 
                                            & vlSelfRef.tb_rsp_mux__DOT__pp1_id));
    vlSelfRef.tb_rsp_mux__DOT__pp1_valid = (7U & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid));
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U] = 0xaaaaaaaaU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U] = 0xbbbbbbbbU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U] = 0xccccccccU;
    vlSelfRef.tb_rsp_mux__DOT__pp1_we = 0U;
    vlSelfRef.tb_rsp_mux__DOT__pp1_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready = 0x0dU;
    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(vlSelf, 
                                                      "@(posedge tb_rsp_mux.clk)");
    co_await vlSelfRef.__VtrigSched_h4a770002__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rsp_mux.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                                         389);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                         390);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__99__msg = "bank_granted[0] = 1 (port 0 ready)"s;
    __Vtask_tb_rsp_mux__DOT__check__99__cond = (1U 
                                                & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
    if (__Vtask_tb_rsp_mux__DOT__check__99__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__99__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__99__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__100__msg = "bank_granted[1] = 0 (port 1 full)"s;
    __Vtask_tb_rsp_mux__DOT__check__100__cond = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                     >> 1U)));
    if (__Vtask_tb_rsp_mux__DOT__check__100__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__100__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__100__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__101__msg = "bank_granted[2] = 1 (port 2 ready)"s;
    __Vtask_tb_rsp_mux__DOT__check__101__cond = (1U 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                                    >> 2U));
    if (__Vtask_tb_rsp_mux__DOT__check__101__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__101__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__101__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__102__msg = "rsp_valid[0] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__102__cond = (1U 
                                                 & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid));
    if (__Vtask_tb_rsp_mux__DOT__check__102__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__102__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__102__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__103__msg = "rsp_valid[1] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__103__cond = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                     >> 1U)));
    if (__Vtask_tb_rsp_mux__DOT__check__103__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__103__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__103__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__104__msg = "rsp_valid[2] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__104__cond = (1U 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                    >> 2U));
    if (__Vtask_tb_rsp_mux__DOT__check__104__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__104__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__104__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__105__msg = "bank_pp1_ready[0] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__105__cond = (1U 
                                                 & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready));
    if (__Vtask_tb_rsp_mux__DOT__check__105__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__105__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__105__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__106__msg = "bank_pp1_ready[1] = 0"s;
    __Vtask_tb_rsp_mux__DOT__check__106__cond = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                     >> 1U)));
    if (__Vtask_tb_rsp_mux__DOT__check__106__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__106__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__106__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__107__msg = "bank_pp1_ready[2] = 1"s;
    __Vtask_tb_rsp_mux__DOT__check__107__cond = (1U 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                    >> 2U));
    if (__Vtask_tb_rsp_mux__DOT__check__107__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__107__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__107__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__108__msg = "bank_pp1_ready[3] = 1 (bubble)"s;
    __Vtask_tb_rsp_mux__DOT__check__108__cond = (1U 
                                                 & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready) 
                                                    >> 3U));
    if (__Vtask_tb_rsp_mux__DOT__check__108__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__108__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_rsp_mux__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_rsp_mux__DOT__check__108__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_rsp_mux__DOT__error_count = ((IData)(1U) 
                                                  + vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    VL_WRITEF_NX("\n=== TESTBENCH SUMMARY ===\n",0);
    if ((0U == vlSelfRef.tb_rsp_mux__DOT__error_count)) {
        VL_WRITEF_NX("ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("%0d TEST(S) FAILED\n",1, '~',32,vlSelfRef.tb_rsp_mux__DOT__error_count);
    }
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 431, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__2(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 
                                             67);
        vlSelfRef.tb_rsp_mux__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_rsp_mux__DOT__clk)));
    }
    co_return;
}

bool Vtb_rsp_mux___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___trigger_anySet__act\n"); );
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

void Vtb_rsp_mux___024root___act_comb__TOP__0(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___act_comb__TOP__0\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports 
        = ((((0x0000000cU & (vlSelfRef.tb_rsp_mux__DOT__pp1_id 
                             >> 0x00000014U)) | (3U 
                                                 & (vlSelfRef.tb_rsp_mux__DOT__pp1_id 
                                                    >> 0x00000010U))) 
            << 4U) | ((0x0000000cU & (vlSelfRef.tb_rsp_mux__DOT__pp1_id 
                                      >> 8U)) | (3U 
                                                 & (vlSelfRef.tb_rsp_mux__DOT__pp1_id 
                                                    >> 4U))));
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted = 0U;
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
          & (0U == (3U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0U == (0x0cU & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0U == (0x30U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0U == (0xc0U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
          & (1U == (3U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (4U == (0x0cU & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x10U == (0x30U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x40U == (0xc0U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
          & (2U == (3U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (8U == (0x0cU & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x20U == (0x30U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x80U == (0xc0U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
          & (3U == (3U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0x0cU == (0x0cU & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x30U == (0x30U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found)) 
           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0xc0U == (0xc0U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted));
        vlSelfRef.tb_rsp_mux__DOT__dut__DOT__found = 1U;
    }
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready 
        = ((((2U & (((~ ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
                         >> 3U)) << 1U) | (0x3ffffffeU 
                                           & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                              >> 2U)))) 
             | (1U & ((~ ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
                          >> 2U)) | ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted) 
                                     >> 2U)))) << 2U) 
           | ((2U & (((~ ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid) 
                          >> 1U)) << 1U) | (0xfffffffeU 
                                            & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted)))) 
              | (1U & ((~ (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_valid)) 
                       | (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted)))));
    vlSelfRef.tb_rsp_mux__DOT__rsp_valid = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_data[0U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_data[1U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_data[2U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_data[3U] = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_err = 0U;
    vlSelfRef.tb_rsp_mux__DOT__rsp_id = 0U;
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p = (3U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports));
    if ((1U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted))) {
        vlSelfRef.tb_rsp_mux__DOT__rsp_valid = ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                | (0x0fU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_rsp_mux__DOT__rsp_data, 
                        ((1U & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[0U]));
        vlSelfRef.tb_rsp_mux__DOT__rsp_err = (((~ ((IData)(1U) 
                                                   << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))) 
                                               & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_err)) 
                                              | (0x0fU 
                                                 & ((1U 
                                                     & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err)) 
                                                    << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))));
        vlSelfRef.tb_rsp_mux__DOT__rsp_id = (((~ ((IData)(0x000fU) 
                                                  << 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                      << 2U)))) 
                                              & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id)) 
                                             | (0x0000ffffU 
                                                & ((0x0000000fU 
                                                    & vlSelfRef.tb_rsp_mux__DOT__pp1_id) 
                                                   << 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                       << 2U)))));
    }
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p = (3U & 
                                              ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports) 
                                               >> 2U));
    if ((2U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted))) {
        vlSelfRef.tb_rsp_mux__DOT__rsp_valid = ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                | (0x0fU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_rsp_mux__DOT__rsp_data, 
                        ((2U & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[1U]));
        vlSelfRef.tb_rsp_mux__DOT__rsp_err = (((~ ((IData)(1U) 
                                                   << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))) 
                                               & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_err)) 
                                              | (0x0fU 
                                                 & ((1U 
                                                     & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err) 
                                                        >> 1U)) 
                                                    << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))));
        vlSelfRef.tb_rsp_mux__DOT__rsp_id = (((~ ((IData)(0x000fU) 
                                                  << 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                      << 2U)))) 
                                              & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id)) 
                                             | (0x0000ffffU 
                                                & ((0x0000000fU 
                                                    & (vlSelfRef.tb_rsp_mux__DOT__pp1_id 
                                                       >> 6U)) 
                                                   << 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                       << 2U)))));
    }
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p = (3U & 
                                              ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports) 
                                               >> 4U));
    if ((4U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted))) {
        vlSelfRef.tb_rsp_mux__DOT__rsp_valid = ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                | (0x0fU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_rsp_mux__DOT__rsp_data, 
                        ((4U & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[2U]));
        vlSelfRef.tb_rsp_mux__DOT__rsp_err = (((~ ((IData)(1U) 
                                                   << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))) 
                                               & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_err)) 
                                              | (0x0fU 
                                                 & ((1U 
                                                     & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err) 
                                                        >> 2U)) 
                                                    << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))));
        vlSelfRef.tb_rsp_mux__DOT__rsp_id = (((~ ((IData)(0x000fU) 
                                                  << 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                      << 2U)))) 
                                              & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id)) 
                                             | (0x0000ffffU 
                                                & ((0x0000000fU 
                                                    & (vlSelfRef.tb_rsp_mux__DOT__pp1_id 
                                                       >> 0x0cU)) 
                                                   << 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                       << 2U)))));
    }
    vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p = (3U & 
                                              ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__dest_ports) 
                                               >> 6U));
    if ((8U & (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__bank_granted))) {
        vlSelfRef.tb_rsp_mux__DOT__rsp_valid = ((IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_valid) 
                                                | (0x0fU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_rsp_mux__DOT__rsp_data, 
                        ((8U & (IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_rsp_mux__DOT__pp1_rdata[3U]));
        vlSelfRef.tb_rsp_mux__DOT__rsp_err = (((~ ((IData)(1U) 
                                                   << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))) 
                                               & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_err)) 
                                              | (0x0fU 
                                                 & ((1U 
                                                     & ((IData)(vlSelfRef.tb_rsp_mux__DOT__pp1_err) 
                                                        >> 3U)) 
                                                    << (IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p))));
        vlSelfRef.tb_rsp_mux__DOT__rsp_id = (((~ ((IData)(0x000fU) 
                                                  << 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                      << 2U)))) 
                                              & (IData)(vlSelfRef.tb_rsp_mux__DOT__rsp_id)) 
                                             | (0x0000ffffU 
                                                & ((0x0000000fU 
                                                    & (vlSelfRef.tb_rsp_mux__DOT__pp1_id 
                                                       >> 0x12U)) 
                                                   << 
                                                   (0x0000000fU 
                                                    & ((IData)(vlSelfRef.tb_rsp_mux__DOT__dut__DOT__p) 
                                                       << 2U)))));
    }
}

void Vtb_rsp_mux___024root___timing_ready(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___timing_ready\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4a770002__0.ready("@(posedge tb_rsp_mux.clk)");
    }
}

void Vtb_rsp_mux___024root___timing_resume(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___timing_resume\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h4a770002__0.moveToResumeQueue(
                                                          "@(posedge tb_rsp_mux.clk)");
    vlSelfRef.__VtrigSched_h4a770002__0.resume("@(posedge tb_rsp_mux.clk)");
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_rsp_mux___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_rsp_mux___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_rsp_mux___024root___eval_phase__act(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_phase__act\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.tb_rsp_mux__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_mux__DOT__clk__0))) 
                                                          << 1U) 
                                                         | vlSelfRef.__VdlySched.awaitingCurrentTime())));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_mux__DOT__clk__0 
            = vlSelfRef.tb_rsp_mux__DOT__clk;
    }
    Vtb_rsp_mux___024root___timing_ready(vlSelf);
    Vtb_rsp_mux___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_rsp_mux___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_rsp_mux___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_rsp_mux___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_rsp_mux___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_rsp_mux___024root___act_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_rsp_mux___024root___eval_phase__inact(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_phase__inact\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_rsp_mux___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_rsp_mux___024root___eval_phase__nba(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_phase__nba\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_rsp_mux___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_rsp_mux___024root___act_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
        }
        Vtb_rsp_mux___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_rsp_mux___024root___eval(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_rsp_mux___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_rsp_mux___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_rsp_mux.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_rsp_mux___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_rsp_mux___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_rsp_mux___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0(Vtb_rsp_mux___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root____VbeforeTrig_h4a770002__0\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_rsp_mux__DOT__clk) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_mux__DOT__clk__0))) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rsp_mux__DOT__clk__0 
        = vlSelfRef.tb_rsp_mux__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4a770002__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_rsp_mux___024root___eval_debug_assertions(Vtb_rsp_mux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rsp_mux___024root___eval_debug_assertions\n"); );
    Vtb_rsp_mux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
