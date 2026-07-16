// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_perf_counter.h for the primary calling header

#include "Vtb_perf_counter__pch.h"

VlCoroutine Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__0(Vtb_perf_counter___024root* vlSelf);
VlCoroutine Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__1(Vtb_perf_counter___024root* vlSelf);
VlCoroutine Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__2(Vtb_perf_counter___024root* vlSelf);
VlCoroutine Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__3(Vtb_perf_counter___024root* vlSelf);

void Vtb_perf_counter___024root___eval_initial(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_initial\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("waves/perf_counter.vcd"s);
        vlSymsp->_traceDumpOpen();
        vlSelfRef.tb_perf_counter__DOT__clk = 0U;
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VlCoroutine Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__0(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000037e11d600ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                         17);
    VL_WRITEF_NX("WATCHDOG EXPIRED\n",0);
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 19, "");
    co_return;
}

void Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(Vtb_perf_counter___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__1(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_perf_counter__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_perf_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    tb_perf_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, tb_perf_counter__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             96);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_perf_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_perf_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_perf_counter___024root____VbeforeTrig_h043317c9__0(Vtb_perf_counter___024root* vlSelf, const char* __VeventDescription);
void Vtb_perf_counter___024root____VbeforeTrig_h978910e5__0(Vtb_perf_counter___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__2(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_perf_counter__DOT__unnamedblk1__DOT__i;
    tb_perf_counter__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_perf_counter__DOT__unnamedblk2__DOT__i;
    tb_perf_counter__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ tb_perf_counter__DOT__unnamedblk3__DOT__i;
    tb_perf_counter__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ tb_perf_counter__DOT__unnamedblk4__DOT__i;
    tb_perf_counter__DOT__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ tb_perf_counter__DOT__unnamedblk5__DOT__i;
    tb_perf_counter__DOT__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ tb_perf_counter__DOT__unnamedblk6__DOT__i;
    tb_perf_counter__DOT__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ tb_perf_counter__DOT__unnamedblk1_8__DOT____Vrepeat7;
    tb_perf_counter__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    IData/*31:0*/ tb_perf_counter__DOT__unnamedblk7__DOT__i;
    tb_perf_counter__DOT__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ tb_perf_counter__DOT__unnamedblk1_9__DOT____Vrepeat8;
    tb_perf_counter__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__0__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__0__data;
    __Vtask_tb_perf_counter__DOT__read_csr__0__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__1__cond;
    __Vtask_tb_perf_counter__DOT__check__1__cond = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__2__cond;
    __Vtask_tb_perf_counter__DOT__check__2__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__4__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__4__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__port;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__port = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__6__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__6__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__6__data;
    __Vtask_tb_perf_counter__DOT__read_csr__6__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__7__cond;
    __Vtask_tb_perf_counter__DOT__check__7__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__9__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__9__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__9__data;
    __Vtask_tb_perf_counter__DOT__read_csr__9__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__10__cond;
    __Vtask_tb_perf_counter__DOT__check__10__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__12__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__12__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__12__data;
    __Vtask_tb_perf_counter__DOT__read_csr__12__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__13__cond;
    __Vtask_tb_perf_counter__DOT__check__13__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__15__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__15__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__15__data;
    __Vtask_tb_perf_counter__DOT__read_csr__15__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__16__cond;
    __Vtask_tb_perf_counter__DOT__check__16__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__18__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__18__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__18__data;
    __Vtask_tb_perf_counter__DOT__read_csr__18__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__19__cond;
    __Vtask_tb_perf_counter__DOT__check__19__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__21__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__21__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__port;
    __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__port = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__tb_perf_counter__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__tb_perf_counter__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__23__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__23__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__23__data;
    __Vtask_tb_perf_counter__DOT__read_csr__23__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__24__cond;
    __Vtask_tb_perf_counter__DOT__check__24__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__26__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__26__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__26__data;
    __Vtask_tb_perf_counter__DOT__read_csr__26__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__27__cond;
    __Vtask_tb_perf_counter__DOT__check__27__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__29__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__29__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__29__data;
    __Vtask_tb_perf_counter__DOT__read_csr__29__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__30__cond;
    __Vtask_tb_perf_counter__DOT__check__30__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__32__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__32__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__33__bank;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__33__bank = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__33__port;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__33__port = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__33__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__33__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__33__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__33__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__34__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__34__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__34__data;
    __Vtask_tb_perf_counter__DOT__read_csr__34__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__35__cond;
    __Vtask_tb_perf_counter__DOT__check__35__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__37__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__37__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__37__data;
    __Vtask_tb_perf_counter__DOT__read_csr__37__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__38__cond;
    __Vtask_tb_perf_counter__DOT__check__38__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__40__bank;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__40__bank = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__40__port;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__40__port = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__40__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__40__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__40__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__40__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__41__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__41__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__41__data;
    __Vtask_tb_perf_counter__DOT__read_csr__41__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__42__cond;
    __Vtask_tb_perf_counter__DOT__check__42__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__44__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__44__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__44__data;
    __Vtask_tb_perf_counter__DOT__read_csr__44__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__45__cond;
    __Vtask_tb_perf_counter__DOT__check__45__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__47__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__47__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__47__data;
    __Vtask_tb_perf_counter__DOT__read_csr__47__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__48__cond;
    __Vtask_tb_perf_counter__DOT__check__48__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__50__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__50__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__port;
    __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__port = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__tb_perf_counter__DOT__unnamedblk1_6__DOT____Vrepeat5;
    __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__tb_perf_counter__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__52__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__52__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__52__data;
    __Vtask_tb_perf_counter__DOT__read_csr__52__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__53__cond;
    __Vtask_tb_perf_counter__DOT__check__53__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__55__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__55__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__55__data;
    __Vtask_tb_perf_counter__DOT__read_csr__55__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__56__cond;
    __Vtask_tb_perf_counter__DOT__check__56__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__58__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__58__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_idle__59__bank;
    __Vtask_tb_perf_counter__DOT__pulse_idle__59__bank = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_idle__59__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_idle__59__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_idle__59__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6;
    __Vtask_tb_perf_counter__DOT__pulse_idle__59__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__60__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__60__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__60__data;
    __Vtask_tb_perf_counter__DOT__read_csr__60__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__61__cond;
    __Vtask_tb_perf_counter__DOT__check__61__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__63__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__63__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__63__data;
    __Vtask_tb_perf_counter__DOT__read_csr__63__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__64__cond;
    __Vtask_tb_perf_counter__DOT__check__64__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__66__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__66__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__67__cond;
    __Vtask_tb_perf_counter__DOT__check__67__cond = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__68__cond;
    __Vtask_tb_perf_counter__DOT__check__68__cond = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__69__cond;
    __Vtask_tb_perf_counter__DOT__check__69__cond = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__70__cond;
    __Vtask_tb_perf_counter__DOT__check__70__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__71__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__71__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__port;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__port = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_idle__73__bank;
    __Vtask_tb_perf_counter__DOT__pulse_idle__73__bank = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_idle__73__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_idle__73__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_idle__73__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6;
    __Vtask_tb_perf_counter__DOT__pulse_idle__73__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__74__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__74__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__74__data;
    __Vtask_tb_perf_counter__DOT__read_csr__74__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__75__cond;
    __Vtask_tb_perf_counter__DOT__check__75__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__77__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__77__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__77__data;
    __Vtask_tb_perf_counter__DOT__read_csr__77__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__78__cond;
    __Vtask_tb_perf_counter__DOT__check__78__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__80__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__80__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__81__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__81__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__81__data;
    __Vtask_tb_perf_counter__DOT__read_csr__81__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__82__cond;
    __Vtask_tb_perf_counter__DOT__check__82__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__port;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__port = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__85__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__85__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__85__data;
    __Vtask_tb_perf_counter__DOT__read_csr__85__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__86__cond;
    __Vtask_tb_perf_counter__DOT__check__86__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__port;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__port = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__89__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__89__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__89__data;
    __Vtask_tb_perf_counter__DOT__read_csr__89__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__90__cond;
    __Vtask_tb_perf_counter__DOT__check__90__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__92__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__92__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__93__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__93__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__93__data;
    __Vtask_tb_perf_counter__DOT__read_csr__93__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__94__cond;
    __Vtask_tb_perf_counter__DOT__check__94__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__96__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__96__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__97__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__97__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__97__data;
    __Vtask_tb_perf_counter__DOT__read_csr__97__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__98__cond;
    __Vtask_tb_perf_counter__DOT__check__98__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__do_reset__100__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_perf_counter__DOT__do_reset__100__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__101__bank;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__101__bank = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__101__port;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__101__port = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__101__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__101__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__101__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__101__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__102__cond;
    __Vtask_tb_perf_counter__DOT__check__102__cond = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__103__cond;
    __Vtask_tb_perf_counter__DOT__check__103__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__104__bank;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__104__bank = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__104__port;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__104__port = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__104__cycles;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__104__cycles = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__pulse_conflict__104__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__104__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__105__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__105__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__105__data;
    __Vtask_tb_perf_counter__DOT__read_csr__105__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__106__cond;
    __Vtask_tb_perf_counter__DOT__check__106__cond = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__108__addr;
    __Vtask_tb_perf_counter__DOT__read_csr__108__addr = 0;
    IData/*31:0*/ __Vtask_tb_perf_counter__DOT__read_csr__108__data;
    __Vtask_tb_perf_counter__DOT__read_csr__108__data = 0;
    CData/*0:0*/ __Vtask_tb_perf_counter__DOT__check__109__cond;
    __Vtask_tb_perf_counter__DOT__check__109__cond = 0;
    // Body
    VL_WRITEF_NX("TB START\n",0);
    Vtb_perf_counter___024root____VbeforeTrig_h043317c9__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.rst_n)");
    co_await vlSelfRef.__VtrigSched_h043317c9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.rst_n)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         193);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         194);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__test_id = 1U;
    VL_WRITEF_NX("\n=== Test %0d: Reset ===\n",1, '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    tb_perf_counter__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, tb_perf_counter__DOT__unnamedblk1__DOT__i)) {
        __Vtask_tb_perf_counter__DOT__read_csr__0__addr 
            = tb_perf_counter__DOT__unnamedblk1__DOT__i;
        __Vtask_tb_perf_counter__DOT__read_csr__0__data = 0;
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             136);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_addr = 
            (0x0000001fU & __Vtask_tb_perf_counter__DOT__read_csr__0__addr);
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             139);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__read_csr__0__data 
            = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
        vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__0__data;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__1__msg
                      ,"counter[%0d] should be 0 after reset",1
                      , '~',32,tb_perf_counter__DOT__unnamedblk1__DOT__i);
        __Vtask_tb_perf_counter__DOT__check__1__cond 
            = (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
        if (__Vtask_tb_perf_counter__DOT__check__1__cond) {
            VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__1__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__1__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_perf_counter__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__2__msg
                      ,"csr_ack should be 1 for read of addr %0d",1
                      , '~',32,tb_perf_counter__DOT__unnamedblk1__DOT__i);
        __Vtask_tb_perf_counter__DOT__check__2__cond 
            = vlSelfRef.tb_perf_counter__DOT__csr_ack;
        if (__Vtask_tb_perf_counter__DOT__check__2__cond) {
            VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__2__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__2__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_perf_counter__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
        }
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             145);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
        vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             207);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        tb_perf_counter__DOT__unnamedblk1__DOT__i = 
            ((IData)(1U) + tb_perf_counter__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_perf_counter__DOT__test_id = 2U;
    VL_WRITEF_NX("\n=== Test %0d: req_count ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__4__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__4__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__4__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__4__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__4__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__cycles = 3U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__port = 2U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = ((IData)(vlSelfRef.tb_perf_counter__DOT__req_accept) 
                                                  | (0x0fU 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__port))));
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             154);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_perf_counter__DOT__pulse_req_accept__5__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__req_accept = ((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & __Vtask_tb_perf_counter__DOT__pulse_req_accept__5__port))) 
                                                  & (IData)(vlSelfRef.tb_perf_counter__DOT__req_accept));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         218);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__6__addr = 0U;
    __Vtask_tb_perf_counter__DOT__read_csr__6__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__6__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__6__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__6__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__7__msg = "counter[0] should be 0"s;
    __Vtask_tb_perf_counter__DOT__check__7__cond = 
        (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__7__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__7__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__7__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         224);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__9__addr = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__9__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__9__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__9__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__9__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__10__msg = "counter[1] should be 0"s;
    __Vtask_tb_perf_counter__DOT__check__10__cond = 
        (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__10__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__10__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__10__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__12__addr = 2U;
    __Vtask_tb_perf_counter__DOT__read_csr__12__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__12__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__12__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__12__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__13__msg = "counter[2] should be 3"s;
    __Vtask_tb_perf_counter__DOT__check__13__cond = 
        (3U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__13__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__15__addr = 3U;
    __Vtask_tb_perf_counter__DOT__read_csr__15__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__15__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__15__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__15__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__16__msg = "counter[3] should be 0"s;
    __Vtask_tb_perf_counter__DOT__check__16__cond = 
        (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__16__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__16__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__16__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         236);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    tb_perf_counter__DOT__unnamedblk2__DOT__i = 4U;
    while (VL_GTS_III(32, 0x00000020U, tb_perf_counter__DOT__unnamedblk2__DOT__i)) {
        __Vtask_tb_perf_counter__DOT__read_csr__18__addr 
            = tb_perf_counter__DOT__unnamedblk2__DOT__i;
        __Vtask_tb_perf_counter__DOT__read_csr__18__data = 0;
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             136);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_addr = 
            (0x0000001fU & __Vtask_tb_perf_counter__DOT__read_csr__18__addr);
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             139);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__read_csr__18__data 
            = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
        vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__18__data;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__19__msg
                      ,"counter[%0d] should be 0",1
                      , '~',32,tb_perf_counter__DOT__unnamedblk2__DOT__i);
        __Vtask_tb_perf_counter__DOT__check__19__cond 
            = (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
        if (__Vtask_tb_perf_counter__DOT__check__19__cond) {
            VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__19__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__19__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_perf_counter__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
        }
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             145);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
        vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             243);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        tb_perf_counter__DOT__unnamedblk2__DOT__i = 
            ((IData)(1U) + tb_perf_counter__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.tb_perf_counter__DOT__test_id = 3U;
    VL_WRITEF_NX("\n=== Test %0d: rsp_count ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__21__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__21__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__21__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__21__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__21__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__cycles = 5U;
    __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__port = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__tb_perf_counter__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = ((IData)(vlSelfRef.tb_perf_counter__DOT__rsp_issue) 
                                                 | (0x0fU 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__port))));
    __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__tb_perf_counter__DOT__unnamedblk1_4__DOT____Vrepeat3 
        = __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__tb_perf_counter__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             161);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__tb_perf_counter__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__tb_perf_counter__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = ((~ 
                                                  ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & __Vtask_tb_perf_counter__DOT__pulse_rsp_issue__22__port))) 
                                                 & (IData)(vlSelfRef.tb_perf_counter__DOT__rsp_issue));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         254);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__23__addr = 4U;
    __Vtask_tb_perf_counter__DOT__read_csr__23__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__23__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__23__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__23__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__24__msg = "counter[4] (OFF_RSP+0) should be 0"s;
    __Vtask_tb_perf_counter__DOT__check__24__cond = 
        (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__24__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__24__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__24__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         259);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__26__addr = 5U;
    __Vtask_tb_perf_counter__DOT__read_csr__26__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__26__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__26__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__26__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__27__msg = "counter[5] (OFF_RSP+1) should be 5"s;
    __Vtask_tb_perf_counter__DOT__check__27__cond = 
        (5U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__27__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__27__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__27__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         264);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__29__addr = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__29__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__29__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__29__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__29__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__30__msg = "counter[1] (req_count[1]) should be untouched"s;
    __Vtask_tb_perf_counter__DOT__check__30__cond = 
        (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__30__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__30__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__30__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         269);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__test_id = 4U;
    VL_WRITEF_NX("\n=== Test %0d: conflict_count ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__32__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__32__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__32__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__32__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__32__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__33__cycles = 4U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__33__port = 3U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__33__bank = 2U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__33__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         166);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__conflict = ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                                                | (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & ((__Vtask_tb_perf_counter__DOT__pulse_conflict__33__bank 
                                                           << 2U) 
                                                          + 
                                                          (3U 
                                                           & __Vtask_tb_perf_counter__DOT__pulse_conflict__33__port))))));
    __Vtask_tb_perf_counter__DOT__pulse_conflict__33__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
        = __Vtask_tb_perf_counter__DOT__pulse_conflict__33__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_conflict__33__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             168);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_conflict__33__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_tb_perf_counter__DOT__pulse_conflict__33__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__conflict = ((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x0000000fU 
                                                   & ((__Vtask_tb_perf_counter__DOT__pulse_conflict__33__bank 
                                                       << 2U) 
                                                      + 
                                                      (3U 
                                                       & __Vtask_tb_perf_counter__DOT__pulse_conflict__33__port))))) 
                                                & (IData)(vlSelfRef.tb_perf_counter__DOT__conflict));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         280);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__34__addr = 0x00000013U;
    __Vtask_tb_perf_counter__DOT__read_csr__34__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__34__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__34__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__34__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__35__msg = "counter[19] (conflict[2][3]) should be 4"s;
    __Vtask_tb_perf_counter__DOT__check__35__cond = 
        (4U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__35__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__35__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__35__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    tb_perf_counter__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, tb_perf_counter__DOT__unnamedblk3__DOT__i)) {
        if ((0x00000013U != tb_perf_counter__DOT__unnamedblk3__DOT__i)) {
            __Vtask_tb_perf_counter__DOT__read_csr__37__addr 
                = tb_perf_counter__DOT__unnamedblk3__DOT__i;
            __Vtask_tb_perf_counter__DOT__read_csr__37__data = 0;
            Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                                   "@(posedge tb_perf_counter.clk)");
            co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_perf_counter.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                                 136);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
            vlSelfRef.tb_perf_counter__DOT__csr_addr 
                = (0x0000001fU & __Vtask_tb_perf_counter__DOT__read_csr__37__addr);
            Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                                   "@(posedge tb_perf_counter.clk)");
            co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_perf_counter.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                                 139);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_perf_counter__DOT__read_csr__37__data 
                = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
            vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__37__data;
            VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__38__msg
                          ,"counter[%0d] should be 0 after stimulus A",1
                          , '~',32,tb_perf_counter__DOT__unnamedblk3__DOT__i);
            __Vtask_tb_perf_counter__DOT__check__38__cond 
                = (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
            if (__Vtask_tb_perf_counter__DOT__check__38__cond) {
                VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                             , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                             , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__38__msg)
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                             , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                             , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__38__msg)
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_perf_counter__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
            }
            Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                                   "@(posedge tb_perf_counter.clk)");
            co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_perf_counter.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                                 145);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
            vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
            Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                                   "@(posedge tb_perf_counter.clk)");
            co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_perf_counter.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                                 292);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
        tb_perf_counter__DOT__unnamedblk3__DOT__i = 
            ((IData)(1U) + tb_perf_counter__DOT__unnamedblk3__DOT__i);
    }
    __Vtask_tb_perf_counter__DOT__pulse_conflict__40__cycles = 2U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__40__port = 0U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__40__bank = 0U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__40__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         166);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__conflict = ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                                                | (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & ((__Vtask_tb_perf_counter__DOT__pulse_conflict__40__bank 
                                                           << 2U) 
                                                          + 
                                                          (3U 
                                                           & __Vtask_tb_perf_counter__DOT__pulse_conflict__40__port))))));
    __Vtask_tb_perf_counter__DOT__pulse_conflict__40__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
        = __Vtask_tb_perf_counter__DOT__pulse_conflict__40__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_conflict__40__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             168);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_conflict__40__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_tb_perf_counter__DOT__pulse_conflict__40__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__conflict = ((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x0000000fU 
                                                   & ((__Vtask_tb_perf_counter__DOT__pulse_conflict__40__bank 
                                                       << 2U) 
                                                      + 
                                                      (3U 
                                                       & __Vtask_tb_perf_counter__DOT__pulse_conflict__40__port))))) 
                                                & (IData)(vlSelfRef.tb_perf_counter__DOT__conflict));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         298);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__41__addr = 8U;
    __Vtask_tb_perf_counter__DOT__read_csr__41__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__41__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__41__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__41__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__42__msg = "counter[8] (conflict[0][0]) should be 2"s;
    __Vtask_tb_perf_counter__DOT__check__42__cond = 
        (2U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__42__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__42__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__42__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         303);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__44__addr = 0x00000013U;
    __Vtask_tb_perf_counter__DOT__read_csr__44__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__44__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__44__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__44__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__45__msg = "counter[19] should still be 4"s;
    __Vtask_tb_perf_counter__DOT__check__45__cond = 
        (4U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__45__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__45__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__45__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         308);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    tb_perf_counter__DOT__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, tb_perf_counter__DOT__unnamedblk4__DOT__i)) {
        if (((8U != tb_perf_counter__DOT__unnamedblk4__DOT__i) 
             & (0x00000013U != tb_perf_counter__DOT__unnamedblk4__DOT__i))) {
            __Vtask_tb_perf_counter__DOT__read_csr__47__addr 
                = tb_perf_counter__DOT__unnamedblk4__DOT__i;
            __Vtask_tb_perf_counter__DOT__read_csr__47__data = 0;
            Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                                   "@(posedge tb_perf_counter.clk)");
            co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_perf_counter.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                                 136);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
            vlSelfRef.tb_perf_counter__DOT__csr_addr 
                = (0x0000001fU & __Vtask_tb_perf_counter__DOT__read_csr__47__addr);
            Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                                   "@(posedge tb_perf_counter.clk)");
            co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_perf_counter.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                                 139);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_perf_counter__DOT__read_csr__47__data 
                = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
            vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__47__data;
            VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__48__msg
                          ,"counter[%0d] should be 0 after stimulus B",1
                          , '~',32,tb_perf_counter__DOT__unnamedblk4__DOT__i);
            __Vtask_tb_perf_counter__DOT__check__48__cond 
                = (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
            if (__Vtask_tb_perf_counter__DOT__check__48__cond) {
                VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                             , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                             , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__48__msg)
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                             , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                             , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__48__msg)
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_perf_counter__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
            }
            Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                                   "@(posedge tb_perf_counter.clk)");
            co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_perf_counter.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                                 145);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
            vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
            Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                                   "@(posedge tb_perf_counter.clk)");
            co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_perf_counter.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                                 315);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
        tb_perf_counter__DOT__unnamedblk4__DOT__i = 
            ((IData)(1U) + tb_perf_counter__DOT__unnamedblk4__DOT__i);
    }
    vlSelfRef.tb_perf_counter__DOT__test_id = 5U;
    VL_WRITEF_NX("\n=== Test %0d: queue_full_count ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__50__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__50__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__50__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__50__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__50__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__cycles = 7U;
    __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__port = 0U;
    __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__tb_perf_counter__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         173);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full 
        = ((IData)(vlSelfRef.tb_perf_counter__DOT__req_queue_full) 
           | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__port))));
    __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__tb_perf_counter__DOT__unnamedblk1_6__DOT____Vrepeat5 
        = __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__tb_perf_counter__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             175);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__tb_perf_counter__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (__Vtask_tb_perf_counter__DOT__pulse_queue_full__51__tb_perf_counter__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__req_queue_full 
        = ((~ ((IData)(1U) << (3U & __Vtask_tb_perf_counter__DOT__pulse_queue_full__51__port))) 
           & (IData)(vlSelfRef.tb_perf_counter__DOT__req_queue_full));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__52__addr = 0x00000018U;
    __Vtask_tb_perf_counter__DOT__read_csr__52__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__52__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__52__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__52__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__53__msg = "counter[24] (OFF_QF+0) should be 7"s;
    __Vtask_tb_perf_counter__DOT__check__53__cond = 
        (7U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__53__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__53__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__53__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__55__addr = 0U;
    __Vtask_tb_perf_counter__DOT__read_csr__55__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__55__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__55__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__55__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__56__msg = "counter[0] (req_count[0]) should be 0"s;
    __Vtask_tb_perf_counter__DOT__check__56__cond = 
        (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__56__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__56__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__56__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         337);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__test_id = 6U;
    VL_WRITEF_NX("\n=== Test %0d: idle_count ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__58__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__58__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__58__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__58__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__58__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_idle__59__cycles = 6U;
    __Vtask_tb_perf_counter__DOT__pulse_idle__59__bank = 3U;
    __Vtask_tb_perf_counter__DOT__pulse_idle__59__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         180);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = ((IData)(vlSelfRef.tb_perf_counter__DOT__bank_idle) 
                                                 | (0x0fU 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & __Vtask_tb_perf_counter__DOT__pulse_idle__59__bank))));
    __Vtask_tb_perf_counter__DOT__pulse_idle__59__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6 
        = __Vtask_tb_perf_counter__DOT__pulse_idle__59__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_idle__59__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             182);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_idle__59__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (__Vtask_tb_perf_counter__DOT__pulse_idle__59__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__bank_idle = ((~ 
                                                  ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & __Vtask_tb_perf_counter__DOT__pulse_idle__59__bank))) 
                                                 & (IData)(vlSelfRef.tb_perf_counter__DOT__bank_idle));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         347);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__60__addr = 0x0000001fU;
    __Vtask_tb_perf_counter__DOT__read_csr__60__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__60__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__60__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__60__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__61__msg = "counter[31] (OFF_IDLE+3) should be 6"s;
    __Vtask_tb_perf_counter__DOT__check__61__cond = 
        (6U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__61__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__61__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__61__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         352);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    tb_perf_counter__DOT__unnamedblk5__DOT__i = 0x0000001cU;
    while (VL_GTS_III(32, 0x0000001fU, tb_perf_counter__DOT__unnamedblk5__DOT__i)) {
        __Vtask_tb_perf_counter__DOT__read_csr__63__addr 
            = tb_perf_counter__DOT__unnamedblk5__DOT__i;
        __Vtask_tb_perf_counter__DOT__read_csr__63__data = 0;
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             136);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_addr = 
            (0x0000001fU & __Vtask_tb_perf_counter__DOT__read_csr__63__addr);
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             139);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__read_csr__63__data 
            = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
        vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__63__data;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__64__msg
                      ,"counter[%0d] should be 0",1
                      , '~',32,tb_perf_counter__DOT__unnamedblk5__DOT__i);
        __Vtask_tb_perf_counter__DOT__check__64__cond 
            = (0U == vlSelfRef.tb_perf_counter__DOT__rdata);
        if (__Vtask_tb_perf_counter__DOT__check__64__cond) {
            VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__64__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__64__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_perf_counter__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
        }
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             145);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
        vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             358);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        tb_perf_counter__DOT__unnamedblk5__DOT__i = 
            ((IData)(1U) + tb_perf_counter__DOT__unnamedblk5__DOT__i);
    }
    vlSelfRef.tb_perf_counter__DOT__test_id = 7U;
    VL_WRITEF_NX("\n=== Test %0d: CSR Read Timing ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__66__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__66__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__66__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__66__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__66__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("[INFO] Backdoor preloading counter[5] with 0xCAFE_BABE...\n",0);
    Vtb_perf_counter___024root____VbeforeTrig_h978910e5__0(vlSelf, 
                                                           "@(negedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h978910e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         370);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[5U] = 0xcafebabeU;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         372);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("[INFO] Preload complete.\n",0);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         376);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 5U;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__67__msg = "csr_ack should be 0 on cycle T"s;
    __Vtask_tb_perf_counter__DOT__check__67__cond = 
        (1U & (~ (IData)(vlSelfRef.tb_perf_counter__DOT__csr_ack)));
    if (__Vtask_tb_perf_counter__DOT__check__67__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__67__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__67__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         381);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__68__msg = "csr_ack should be 1 on cycle T+1"s;
    __Vtask_tb_perf_counter__DOT__check__68__cond = vlSelfRef.tb_perf_counter__DOT__csr_ack;
    if (__Vtask_tb_perf_counter__DOT__check__68__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__68__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__68__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__69__msg = "csr_rdata should be 0xCAFE_BABE on cycle T+1"s;
    __Vtask_tb_perf_counter__DOT__check__69__cond = 
        (0xcafebabeU == vlSelfRef.tb_perf_counter__DOT__csr_rdata);
    if (__Vtask_tb_perf_counter__DOT__check__69__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         389);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__70__msg = "csr_ack should be 0 on cycle T+2 after req dropped"s;
    __Vtask_tb_perf_counter__DOT__check__70__cond = 
        (1U & (~ (IData)(vlSelfRef.tb_perf_counter__DOT__csr_ack)));
    if (__Vtask_tb_perf_counter__DOT__check__70__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__70__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__70__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    vlSelfRef.tb_perf_counter__DOT__test_id = 8U;
    VL_WRITEF_NX("\n=== Test %0d: CSR Boundary ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__71__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__71__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__71__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__71__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__71__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__cycles = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__port = 0U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = ((IData)(vlSelfRef.tb_perf_counter__DOT__req_accept) 
                                                  | (0x0fU 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__port))));
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             154);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_perf_counter__DOT__pulse_req_accept__72__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__req_accept = ((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & __Vtask_tb_perf_counter__DOT__pulse_req_accept__72__port))) 
                                                  & (IData)(vlSelfRef.tb_perf_counter__DOT__req_accept));
    __Vtask_tb_perf_counter__DOT__pulse_idle__73__cycles = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_idle__73__bank = 3U;
    __Vtask_tb_perf_counter__DOT__pulse_idle__73__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         180);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = ((IData)(vlSelfRef.tb_perf_counter__DOT__bank_idle) 
                                                 | (0x0fU 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & __Vtask_tb_perf_counter__DOT__pulse_idle__73__bank))));
    __Vtask_tb_perf_counter__DOT__pulse_idle__73__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6 
        = __Vtask_tb_perf_counter__DOT__pulse_idle__73__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_idle__73__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             182);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_idle__73__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (__Vtask_tb_perf_counter__DOT__pulse_idle__73__tb_perf_counter__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__bank_idle = ((~ 
                                                  ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & __Vtask_tb_perf_counter__DOT__pulse_idle__73__bank))) 
                                                 & (IData)(vlSelfRef.tb_perf_counter__DOT__bank_idle));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         401);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__74__addr = 0U;
    __Vtask_tb_perf_counter__DOT__read_csr__74__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__74__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__74__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__74__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__75__msg = "counter[0] (first addr) should be 1"s;
    __Vtask_tb_perf_counter__DOT__check__75__cond = 
        (1U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__75__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__75__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__75__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         406);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__77__addr = 0x0000001fU;
    __Vtask_tb_perf_counter__DOT__read_csr__77__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__77__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__77__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__77__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__78__msg = "counter[31] (last addr) should be 1"s;
    __Vtask_tb_perf_counter__DOT__check__78__cond = 
        (1U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__78__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__78__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__78__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         411);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__test_id = 9U;
    VL_WRITEF_NX("\n=== Test %0d: Saturation ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__80__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__80__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__80__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__80__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__80__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("[INFO] Backdoor preloading counter[0] to 0xFFFF_FFFE...\n",0);
    Vtb_perf_counter___024root____VbeforeTrig_h978910e5__0(vlSelf, 
                                                           "@(negedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h978910e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         422);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[0U] = 0xfffffffeU;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         424);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("[INFO] Preload complete.\n",0);
    __Vtask_tb_perf_counter__DOT__read_csr__81__addr = 0U;
    __Vtask_tb_perf_counter__DOT__read_csr__81__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__81__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__81__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__81__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__82__msg = "counter[0] should be 0xFFFF_FFFE"s;
    __Vtask_tb_perf_counter__DOT__check__82__cond = 
        (0xfffffffeU == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__82__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__82__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__82__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         430);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__cycles = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__port = 0U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = ((IData)(vlSelfRef.tb_perf_counter__DOT__req_accept) 
                                                  | (0x0fU 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__port))));
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             154);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_perf_counter__DOT__pulse_req_accept__84__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__req_accept = ((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & __Vtask_tb_perf_counter__DOT__pulse_req_accept__84__port))) 
                                                  & (IData)(vlSelfRef.tb_perf_counter__DOT__req_accept));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         434);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__85__addr = 0U;
    __Vtask_tb_perf_counter__DOT__read_csr__85__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__85__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__85__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__85__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__86__msg = "counter[0] should be 0xFFFF_FFFF after first extra pulse"s;
    __Vtask_tb_perf_counter__DOT__check__86__cond = 
        (0xffffffffU == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__86__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__86__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__86__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         438);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__cycles = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__port = 0U;
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = ((IData)(vlSelfRef.tb_perf_counter__DOT__req_accept) 
                                                  | (0x0fU 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__port))));
    __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             154);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_perf_counter__DOT__pulse_req_accept__88__tb_perf_counter__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__req_accept = ((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & __Vtask_tb_perf_counter__DOT__pulse_req_accept__88__port))) 
                                                  & (IData)(vlSelfRef.tb_perf_counter__DOT__req_accept));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         442);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__89__addr = 0U;
    __Vtask_tb_perf_counter__DOT__read_csr__89__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__89__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__89__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__89__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__90__msg = "counter[0] should stay 0xFFFF_FFFF (no wrap)"s;
    __Vtask_tb_perf_counter__DOT__check__90__cond = 
        (0xffffffffU == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__90__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__90__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__90__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         446);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__test_id = 0x0000000aU;
    VL_WRITEF_NX("\n=== Test %0d: All Events Simultaneous ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__92__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__92__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__92__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__92__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__92__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         455);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0x0fU;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0x0fU;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0xffffU;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0x0fU;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0x0fU;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         461);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         467);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    tb_perf_counter__DOT__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, tb_perf_counter__DOT__unnamedblk6__DOT__i)) {
        __Vtask_tb_perf_counter__DOT__read_csr__93__addr 
            = tb_perf_counter__DOT__unnamedblk6__DOT__i;
        __Vtask_tb_perf_counter__DOT__read_csr__93__data = 0;
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             136);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_addr = 
            (0x0000001fU & __Vtask_tb_perf_counter__DOT__read_csr__93__addr);
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             139);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__read_csr__93__data 
            = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
        vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__93__data;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__94__msg
                      ,"counter[%0d] should be 1",1
                      , '~',32,tb_perf_counter__DOT__unnamedblk6__DOT__i);
        __Vtask_tb_perf_counter__DOT__check__94__cond 
            = (1U == vlSelfRef.tb_perf_counter__DOT__rdata);
        if (__Vtask_tb_perf_counter__DOT__check__94__cond) {
            VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__94__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__94__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_perf_counter__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
        }
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             145);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
        vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             473);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        tb_perf_counter__DOT__unnamedblk6__DOT__i = 
            ((IData)(1U) + tb_perf_counter__DOT__unnamedblk6__DOT__i);
    }
    vlSelfRef.tb_perf_counter__DOT__test_id = 0x0000000bU;
    VL_WRITEF_NX("\n=== Test %0d: No Events ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__96__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__96__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__96__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__96__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__96__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         484);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0x0fU;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0x0fU;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0xffffU;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0x0fU;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0x0fU;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         490);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    tb_perf_counter__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, tb_perf_counter__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             498);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        tb_perf_counter__DOT__unnamedblk1_8__DOT____Vrepeat7 
            = (tb_perf_counter__DOT__unnamedblk1_8__DOT____Vrepeat7 
               - (IData)(1U));
    }
    tb_perf_counter__DOT__unnamedblk7__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, tb_perf_counter__DOT__unnamedblk7__DOT__i)) {
        __Vtask_tb_perf_counter__DOT__read_csr__97__addr 
            = tb_perf_counter__DOT__unnamedblk7__DOT__i;
        __Vtask_tb_perf_counter__DOT__read_csr__97__data = 0;
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             136);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_addr = 
            (0x0000001fU & __Vtask_tb_perf_counter__DOT__read_csr__97__addr);
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             139);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__read_csr__97__data 
            = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
        vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__97__data;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__98__msg
                      ,"counter[%0d] should still be 1 after 10 idle cycles",1
                      , '~',32,tb_perf_counter__DOT__unnamedblk7__DOT__i);
        __Vtask_tb_perf_counter__DOT__check__98__cond 
            = (1U == vlSelfRef.tb_perf_counter__DOT__rdata);
        if (__Vtask_tb_perf_counter__DOT__check__98__cond) {
            VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__98__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__98__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_perf_counter__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
        }
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             145);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
        vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             504);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        tb_perf_counter__DOT__unnamedblk7__DOT__i = 
            ((IData)(1U) + tb_perf_counter__DOT__unnamedblk7__DOT__i);
    }
    vlSelfRef.tb_perf_counter__DOT__test_id = 0x0000000cU;
    VL_WRITEF_NX("\n=== Test %0d: CSR Non-Intrusive ===\n",1
                 , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id);
    __Vtask_tb_perf_counter__DOT__do_reset__100__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__rst_n = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_accept = 0U;
    vlSelfRef.tb_perf_counter__DOT__rsp_issue = 0U;
    vlSelfRef.tb_perf_counter__DOT__conflict = 0U;
    vlSelfRef.tb_perf_counter__DOT__req_queue_full = 0U;
    vlSelfRef.tb_perf_counter__DOT__bank_idle = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    __Vtask_tb_perf_counter__DOT__do_reset__100__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__do_reset__100__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             129);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__do_reset__100__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_perf_counter__DOT__do_reset__100__tb_perf_counter__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__rst_n = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__101__cycles = 0x00000064U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__101__port = 0U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__101__bank = 0U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__101__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         166);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__conflict = ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                                                | (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & ((__Vtask_tb_perf_counter__DOT__pulse_conflict__101__bank 
                                                           << 2U) 
                                                          + 
                                                          (3U 
                                                           & __Vtask_tb_perf_counter__DOT__pulse_conflict__101__port))))));
    __Vtask_tb_perf_counter__DOT__pulse_conflict__101__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
        = __Vtask_tb_perf_counter__DOT__pulse_conflict__101__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_conflict__101__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             168);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_conflict__101__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_tb_perf_counter__DOT__pulse_conflict__101__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__conflict = ((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x0000000fU 
                                                   & ((__Vtask_tb_perf_counter__DOT__pulse_conflict__101__bank 
                                                       << 2U) 
                                                      + 
                                                      (3U 
                                                       & __Vtask_tb_perf_counter__DOT__pulse_conflict__101__port))))) 
                                                & (IData)(vlSelfRef.tb_perf_counter__DOT__conflict));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         516);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         519);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 8U;
    tb_perf_counter__DOT__unnamedblk1_9__DOT____Vrepeat8 = 5U;
    while (VL_LTS_III(32, 0U, tb_perf_counter__DOT__unnamedblk1_9__DOT____Vrepeat8)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             524);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vtask_tb_perf_counter__DOT__check__102__msg = "csr_rdata should be 100 during consecutive reads"s;
        __Vtask_tb_perf_counter__DOT__check__102__cond 
            = (0x00000064U == vlSelfRef.tb_perf_counter__DOT__csr_rdata);
        if (__Vtask_tb_perf_counter__DOT__check__102__cond) {
            VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__102__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__102__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_perf_counter__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
        }
        vlSelfRef.__Vtask_tb_perf_counter__DOT__check__103__msg = "csr_ack should be 1 during consecutive reads"s;
        __Vtask_tb_perf_counter__DOT__check__103__cond 
            = vlSelfRef.tb_perf_counter__DOT__csr_ack;
        if (__Vtask_tb_perf_counter__DOT__check__103__cond) {
            VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__103__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__103__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_perf_counter__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
        }
        tb_perf_counter__DOT__unnamedblk1_9__DOT____Vrepeat8 
            = (tb_perf_counter__DOT__unnamedblk1_9__DOT____Vrepeat8 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         531);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__104__cycles = 1U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__104__port = 0U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__104__bank = 0U;
    __Vtask_tb_perf_counter__DOT__pulse_conflict__104__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         166);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__conflict = ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                                                | (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & ((__Vtask_tb_perf_counter__DOT__pulse_conflict__104__bank 
                                                           << 2U) 
                                                          + 
                                                          (3U 
                                                           & __Vtask_tb_perf_counter__DOT__pulse_conflict__104__port))))));
    __Vtask_tb_perf_counter__DOT__pulse_conflict__104__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
        = __Vtask_tb_perf_counter__DOT__pulse_conflict__104__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_perf_counter__DOT__pulse_conflict__104__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                               "@(posedge tb_perf_counter.clk)");
        co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_perf_counter.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                             168);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_perf_counter__DOT__pulse_conflict__104__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_tb_perf_counter__DOT__pulse_conflict__104__tb_perf_counter__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    vlSelfRef.tb_perf_counter__DOT__conflict = ((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x0000000fU 
                                                   & ((__Vtask_tb_perf_counter__DOT__pulse_conflict__104__bank 
                                                       << 2U) 
                                                      + 
                                                      (3U 
                                                       & __Vtask_tb_perf_counter__DOT__pulse_conflict__104__port))))) 
                                                & (IData)(vlSelfRef.tb_perf_counter__DOT__conflict));
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         535);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__105__addr = 8U;
    __Vtask_tb_perf_counter__DOT__read_csr__105__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__105__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__105__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__105__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__106__msg = "counter[8] should be 101 after one more event (reads did not clear)"s;
    __Vtask_tb_perf_counter__DOT__check__106__cond 
        = (0x00000065U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__106__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__106__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__106__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         541);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__108__addr = 8U;
    __Vtask_tb_perf_counter__DOT__read_csr__108__data = 0;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = (0x0000001fU 
                                                & __Vtask_tb_perf_counter__DOT__read_csr__108__addr);
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         139);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_perf_counter__DOT__read_csr__108__data 
        = vlSelfRef.tb_perf_counter__DOT__csr_rdata;
    vlSelfRef.tb_perf_counter__DOT__rdata = __Vtask_tb_perf_counter__DOT__read_csr__108__data;
    vlSelfRef.__Vtask_tb_perf_counter__DOT__check__109__msg = "counter[8] should still be 101 on follow-up read"s;
    __Vtask_tb_perf_counter__DOT__check__109__cond 
        = (0x00000065U == vlSelfRef.tb_perf_counter__DOT__rdata);
    if (__Vtask_tb_perf_counter__DOT__check__109__cond) {
        VL_WRITEF_NX("[OK]    Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__109__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d: %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_perf_counter__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_perf_counter__DOT__check__109__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_perf_counter__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_perf_counter__DOT__csr_req = 0U;
    vlSelfRef.tb_perf_counter__DOT__csr_addr = 0U;
    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(vlSelf, 
                                                           "@(posedge tb_perf_counter.clk)");
    co_await vlSelfRef.__VtrigSched_h97891024__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_perf_counter.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                                         547);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("\n=== TESTBENCH SUMMARY ===\n",0);
    if ((0U == vlSelfRef.tb_perf_counter__DOT__error_count)) {
        VL_WRITEF_NX("ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("%0d TEST(S) FAILED\n",1, '~',32,vlSelfRef.tb_perf_counter__DOT__error_count);
    }
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 558, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_return;
}

VlCoroutine Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__3(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 
                                             81);
        vlSelfRef.tb_perf_counter__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_perf_counter__DOT__clk)));
    }
    co_return;
}

bool Vtb_perf_counter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___trigger_anySet__act\n"); );
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

void Vtb_perf_counter___024root___nba_sequent__TOP__0(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___nba_sequent__TOP__0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val;
    __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val = 0;
    CData/*0:0*/ __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__en;
    __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__en = 0;
    IData/*31:0*/ __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val;
    __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val = 0;
    CData/*0:0*/ __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__en;
    __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__en = 0;
    IData/*31:0*/ __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val;
    __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val = 0;
    CData/*0:0*/ __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en;
    __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en = 0;
    IData/*31:0*/ __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val;
    __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val = 0;
    CData/*0:0*/ __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__en;
    __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__en = 0;
    IData/*31:0*/ __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val;
    __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val = 0;
    CData/*0:0*/ __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__en;
    __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__en = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v0;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v0;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v1;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v1;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v2;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v2;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v3;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v3;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v4;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v4;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v5;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v5;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v6;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v6;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v7;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v7;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v8;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v8;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v9;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v9;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v10;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v10;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v11;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v11;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v12;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v12;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v13;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v13;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v14;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v14;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v15;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v15;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v16;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v16;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v17;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v17;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v17 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v18;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v18;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v18 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v19;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v19;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v19 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v20;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v20;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v20 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v21;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v21 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v21;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v21 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v22;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v22;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v22 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v23;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v23;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v23 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v24;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v24 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v24;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v24 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v25;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v25;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v25 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v26;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v26;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v26 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v27;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v27 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v27;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v27 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v28;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v28;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v28 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v29;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v29 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v29;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v29 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v30;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v30;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v30 = 0;
    IData/*31:0*/ __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v31;
    __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v31;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v32;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v32 = 0;
    // Body
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v0 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v1 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v2 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v3 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v4 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v5 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v6 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v7 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v8 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v9 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v10 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v11 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v12 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v13 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v14 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v15 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v16 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v17 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v18 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v19 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v20 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v21 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v22 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v23 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v24 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v25 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v26 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v27 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v28 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v29 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v30 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v31 = 0U;
    __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v32 = 0U;
    if (vlSelfRef.tb_perf_counter__DOT__rst_n) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__i = 4U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__b = 4U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__en 
            = (1U & (IData)(vlSelfRef.tb_perf_counter__DOT__req_accept));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[0U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_0__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v0 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_0__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v0 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__req_accept) 
                     >> 1U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[1U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_0__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v1 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_0__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v1 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__req_accept) 
                     >> 2U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[2U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_0__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v2 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_0__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v2 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__req_accept) 
                     >> 3U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[3U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_0__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__111__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v3 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_0__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v3 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__en 
            = (1U & (IData)(vlSelfRef.tb_perf_counter__DOT__rsp_issue));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[4U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_1__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v4 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_1__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v4 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__rsp_issue) 
                     >> 1U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[5U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_1__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v5 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_1__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v5 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__rsp_issue) 
                     >> 2U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[6U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_1__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v6 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_1__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v6 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__rsp_issue) 
                     >> 3U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[7U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_1__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__112__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v7 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_1__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v7 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & (IData)(vlSelfRef.tb_perf_counter__DOT__conflict));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[8U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v8 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v8 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 1U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[9U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v9 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v9 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 2U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[10U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v10 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v10 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 3U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[11U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v11 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v11 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 4U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[12U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v12 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v12 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 5U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[13U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v13 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v13 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 6U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[14U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v14 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v14 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 7U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[15U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v15 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v15 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 8U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[16U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v16 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v16 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 9U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[17U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v17 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v17 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 0x0aU));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[18U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v18 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v18 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 0x0bU));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[19U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v19 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v19 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 0x0cU));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[20U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v20 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v20 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 0x0dU));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[21U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v21 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v21 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 0x0eU));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[22U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v22 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v22 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__conflict) 
                     >> 0x0fU));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[23U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__113__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v23 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v23 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__en 
            = (1U & (IData)(vlSelfRef.tb_perf_counter__DOT__req_queue_full));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[24U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_3__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v24 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_3__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v24 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__req_queue_full) 
                     >> 1U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[25U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_3__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v25 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_3__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v25 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__req_queue_full) 
                     >> 2U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[26U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_3__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v26 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_3__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v26 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__req_queue_full) 
                     >> 3U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[27U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_3__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__114__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v27 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_3__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v27 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__en 
            = (1U & (IData)(vlSelfRef.tb_perf_counter__DOT__bank_idle));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[28U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_4__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v28 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_4__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v28 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__bank_idle) 
                     >> 1U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[29U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_4__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v29 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_4__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v29 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__bank_idle) 
                     >> 2U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[30U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_4__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v30 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_4__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v30 = 1U;
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__en 
            = (1U & ((IData)(vlSelfRef.tb_perf_counter__DOT__bank_idle) 
                     >> 3U));
        __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[31U];
        vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_4__sat_inc 
            = ((IData)(__Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__en)
                ? ((0xffffffffU == __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val)
                    ? __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val
                    : ((IData)(1U) + __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val))
                : __Vfunc_tb_perf_counter__DOT__dut__DOT__sat_inc__115__val);
        __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v31 
            = vlSelfRef.tb_perf_counter__DOT__dut__DOT____VlemCall_4__sat_inc;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v31 = 1U;
        if (vlSelfRef.tb_perf_counter__DOT__csr_req) {
            vlSelfRef.tb_perf_counter__DOT__csr_rdata 
                = vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter
                [vlSelfRef.tb_perf_counter__DOT__csr_addr];
        }
    } else {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__i = 0x00000020U;
        __VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v32 = 1U;
        vlSelfRef.tb_perf_counter__DOT__csr_rdata = 0U;
    }
    vlSelfRef.tb_perf_counter__DOT__csr_ack = ((IData)(vlSelfRef.tb_perf_counter__DOT__rst_n) 
                                               && (IData)(vlSelfRef.tb_perf_counter__DOT__csr_req));
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v0) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[0U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v0;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v1) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[1U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v1;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v2) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[2U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v2;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v3) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[3U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v3;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v4) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[4U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v4;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v5) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[5U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v5;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v6) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[6U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v6;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v7) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[7U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v7;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v8) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[8U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v8;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v9) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[9U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v9;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v10) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[10U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v10;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v11) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[11U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v11;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v12) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[12U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v12;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v13) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[13U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v13;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v14) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[14U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v14;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v15) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[15U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v15;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v16) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[16U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v16;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v17) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[17U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v17;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v18) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[18U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v18;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v19) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[19U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v19;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v20) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[20U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v20;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v21) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[21U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v21;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v22) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[22U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v22;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v23) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[23U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v23;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v24) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[24U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v24;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v25) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[25U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v25;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v26) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[26U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v26;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v27) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[27U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v27;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v28) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[28U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v28;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v29) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[29U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v29;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v30) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[30U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v30;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v31) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[31U] 
            = __VdlyVal__tb_perf_counter__DOT__dut__DOT__counter__v31;
    }
    if (__VdlySet__tb_perf_counter__DOT__dut__DOT__counter__v32) {
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[0U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[1U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[2U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[3U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[4U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[5U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[6U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[7U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[8U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[9U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[10U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[11U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[12U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[13U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[14U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[15U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[16U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[17U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[18U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[19U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[20U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[21U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[22U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[23U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[24U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[25U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[26U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[27U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[28U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[29U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[30U] = 0U;
        vlSelfRef.tb_perf_counter__DOT__dut__DOT__counter[31U] = 0U;
    }
}

void Vtb_perf_counter___024root___timing_ready(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___timing_ready\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h97891024__0.ready("@(posedge tb_perf_counter.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h043317c9__0.ready("@(posedge tb_perf_counter.rst_n)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h978910e5__0.ready("@(negedge tb_perf_counter.clk)");
    }
}

void Vtb_perf_counter___024root___timing_resume(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___timing_resume\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h97891024__0.moveToResumeQueue(
                                                          "@(posedge tb_perf_counter.clk)");
    vlSelfRef.__VtrigSched_h043317c9__0.moveToResumeQueue(
                                                          "@(posedge tb_perf_counter.rst_n)");
    vlSelfRef.__VtrigSched_h978910e5__0.moveToResumeQueue(
                                                          "@(negedge tb_perf_counter.clk)");
    vlSelfRef.__VtrigSched_h97891024__0.resume("@(posedge tb_perf_counter.clk)");
    vlSelfRef.__VtrigSched_h043317c9__0.resume("@(posedge tb_perf_counter.rst_n)");
    vlSelfRef.__VtrigSched_h978910e5__0.resume("@(negedge tb_perf_counter.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_perf_counter___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_perf_counter___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_perf_counter___024root___eval_phase__act(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_phase__act\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.tb_perf_counter__DOT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0)) 
                                                          << 4U) 
                                                         | (((((IData)(vlSelfRef.tb_perf_counter__DOT__rst_n) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__rst_n__0))) 
                                                              << 3U) 
                                                             | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.tb_perf_counter__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__rst_n__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.tb_perf_counter__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0 
            = vlSelfRef.tb_perf_counter__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__rst_n__0 
            = vlSelfRef.tb_perf_counter__DOT__rst_n;
    }
    Vtb_perf_counter___024root___timing_ready(vlSelf);
    Vtb_perf_counter___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_perf_counter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_perf_counter___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_perf_counter___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_perf_counter___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_perf_counter___024root___eval_phase__inact(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_phase__inact\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_perf_counter___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_perf_counter___024root___eval_phase__nba(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_phase__nba\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_perf_counter___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_perf_counter___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
        }
        Vtb_perf_counter___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_perf_counter___024root___eval(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_perf_counter___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_perf_counter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_perf_counter.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_perf_counter___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_perf_counter___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_perf_counter___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_perf_counter___024root____VbeforeTrig_h97891024__0(Vtb_perf_counter___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root____VbeforeTrig_h97891024__0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_perf_counter__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0)) 
                                   << 4U) | ((IData)(vlSelfRef.tb_perf_counter__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0 
        = vlSelfRef.tb_perf_counter__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
    }
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h978910e5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h978910e5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_perf_counter___024root____VbeforeTrig_h043317c9__0(Vtb_perf_counter___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root____VbeforeTrig_h043317c9__0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_perf_counter__DOT__rst_n) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__rst_n__0))) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__rst_n__0 
        = vlSelfRef.tb_perf_counter__DOT__rst_n;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h043317c9__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_perf_counter___024root____VbeforeTrig_h978910e5__0(Vtb_perf_counter___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root____VbeforeTrig_h978910e5__0\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_perf_counter__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0)) 
                                   << 4U) | ((IData)(vlSelfRef.tb_perf_counter__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0 
        = vlSelfRef.tb_perf_counter__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h97891024__0.ready(__VeventDescription);
    }
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h978910e5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h978910e5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_perf_counter___024root___eval_debug_assertions(Vtb_perf_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_perf_counter___024root___eval_debug_assertions\n"); );
    Vtb_perf_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
