// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_banked_sram_ctrl.h for the primary calling header

#include "Vtb_banked_sram_ctrl__pch.h"

VlCoroutine Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__2(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             96);
        vlSelfRef.tb_banked_sram_ctrl__DOT__clk = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__clk)));
    }
    co_return;
}

bool Vtb_banked_sram_ctrl___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 16> Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0;

void Vtb_banked_sram_ctrl___024root___nba_sequent__TOP__0(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___nba_sequent__TOP__0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val;
    __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val = 0;
    CData/*0:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__en;
    __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__en = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val;
    __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val = 0;
    CData/*0:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__en;
    __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__en = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val;
    __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val = 0;
    CData/*0:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en;
    __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val;
    __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val = 0;
    CData/*0:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__en;
    __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__en = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val;
    __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val = 0;
    CData/*0:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__en;
    __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__en = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_32;
    __VdfgRegularize_hebeb780c_0_32 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_33;
    __VdfgRegularize_hebeb780c_0_33 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_34;
    __VdfgRegularize_hebeb780c_0_34 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_35;
    __VdfgRegularize_hebeb780c_0_35 = 0;
    QData/*36:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    QData/*36:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    QData/*36:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    QData/*36:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    QData/*50:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    QData/*50:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    QData/*50:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    QData/*50:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v1;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v1;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v2;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v2;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v3;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v3;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v4;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v4;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v5;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v5;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v6;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v6;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v7;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v7;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v8;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v8;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v9;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v9;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v10;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v10;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v11;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v11;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v12;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v12;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v13;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v13;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v14;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v14;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v15;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v15;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v16;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v16;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v17;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v17;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v17 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v18;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v18;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v18 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v19;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v19;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v19 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v20;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v20;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v20 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v21;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v21 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v21;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v21 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v22;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v22;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v22 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v23;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v23;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v23 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v24;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v24 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v24;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v24 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v25;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v25;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v25 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v26;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v26;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v26 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v27;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v27 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v27;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v27 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v28;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v28;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v28 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v29;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v29 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v29;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v29 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v30;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v30;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v30 = 0;
    IData/*31:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v31;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v31;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v32;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v32 = 0;
    // Body
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v1 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v2 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v3 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v4 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v5 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v6 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v7 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v8 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v9 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v10 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v11 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v12 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v13 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v14 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v15 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v16 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v17 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v18 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v19 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v20 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v21 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v22 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v23 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v24 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v25 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v26 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v27 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v28 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v29 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v30 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v31 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v32 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0U;
    if (vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__i = 4U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__b = 4U;
        if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
              >> 3U) & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr)));
        }
        if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
              >> 2U) & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr)));
        }
        if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
              >> 1U) & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
             & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr)));
        }
        if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
              >> 3U) & (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[3U])) 
                    << 5U) | (QData)((IData)(((0x0000001eU 
                                               & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                  >> 0x0000000bU)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err) 
                                                    >> 3U))))));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr)));
        }
        if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
              >> 2U) & (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[2U])) 
                    << 5U) | (QData)((IData)(((0x0000001eU 
                                               & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                  >> 7U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err) 
                                                    >> 2U))))));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr)));
        }
        if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
              >> 1U) & (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[1U])) 
                    << 5U) | (QData)((IData)(((0x0000001eU 
                                               & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                  >> 3U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err) 
                                                    >> 1U))))));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr)));
        }
        if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
             & (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[0U])) 
                    << 5U) | (QData)((IData)(((0x0000001eU 
                                               & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id) 
                                                  << 1U)) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err))))));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr)));
        }
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy 
            = (7U & ((2U == ((0x3ffffffeU & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                                              >> 2U) 
                                             & ((4U 
                                                 > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                << 1U))) 
                             | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                                   >> 3U)))) ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))
                      : ((1U == ((0x3ffffffeU & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                                                  >> 2U) 
                                                 & ((4U 
                                                     > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                    << 1U))) 
                                 | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                    & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                                       >> 3U)))) ? 
                         ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy) 
                          - (IData)(1U)) : (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy 
            = (7U & ((2U == ((0x7ffffffeU & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                                              >> 1U) 
                                             & ((4U 
                                                 > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                << 1U))) 
                             | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                                   >> 2U)))) ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))
                      : ((1U == ((0x7ffffffeU & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                                                  >> 1U) 
                                                 & ((4U 
                                                     > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                    << 1U))) 
                                 | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                    & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                                       >> 2U)))) ? 
                         ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy) 
                          - (IData)(1U)) : (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy 
            = (7U & ((2U == ((0xfffffffeU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                                             & ((4U 
                                                 > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                << 1U))) 
                             | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                                   >> 1U)))) ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))
                      : ((1U == ((0xfffffffeU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                                                 & ((4U 
                                                     > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                    << 1U))) 
                                 | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                    & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                                       >> 1U)))) ? 
                         ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy) 
                          - (IData)(1U)) : (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy 
            = (7U & ((2U == ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                               & (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                              << 1U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                        & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))
                      : ((1U == ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
                                   & (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                                  << 1U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                            & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready))))
                          ? ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy) 
                             - (IData)(1U)) : (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__en 
            = (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__req_accept));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[0U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_0__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v0 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_0__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v0 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__req_accept) 
                     >> 1U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[1U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_0__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v1 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_0__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v1 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__req_accept) 
                     >> 2U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[2U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_0__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v2 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_0__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v2 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__req_accept) 
                     >> 3U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[3U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_0__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__196__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v3 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_0__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v3 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__en 
            = (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__rsp_issue));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[4U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_1__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v4 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_1__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v4 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__rsp_issue) 
                     >> 1U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[5U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_1__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v5 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_1__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v5 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__rsp_issue) 
                     >> 2U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[6U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_1__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v6 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_1__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v6 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__rsp_issue) 
                     >> 3U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[7U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_1__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__197__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v7 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_1__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v7 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[8U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v8 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v8 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 1U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[9U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v9 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v9 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 2U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[10U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v10 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v10 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 3U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[11U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v11 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v11 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 4U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[12U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v12 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v12 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 5U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[13U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v13 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v13 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 6U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[14U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v14 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v14 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 7U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[15U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v15 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v15 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 8U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[16U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v16 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v16 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 9U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[17U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v17 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v17 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 0x0aU));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[18U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v18 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v18 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 0x0bU));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[19U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v19 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v19 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 0x0cU));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[20U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v20 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v20 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 0x0dU));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[21U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v21 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v21 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 0x0eU));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[22U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v22 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v22 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict) 
                     >> 0x0fU));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[23U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__198__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v23 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v23 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__en 
            = (1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready)));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[24U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_3__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v24 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_3__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v24 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__en 
            = (1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                        >> 1U)));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[25U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_3__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v25 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_3__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v25 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__en 
            = (1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                        >> 2U)));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[26U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_3__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v26 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_3__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v26 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__en 
            = (1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                        >> 3U)));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[27U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_3__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__199__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v27 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_3__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v27 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__en 
            = (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__bank_idle));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[28U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_4__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v28 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_4__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v28 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__bank_idle) 
                     >> 1U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[29U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_4__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v29 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_4__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v29 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__bank_idle) 
                     >> 2U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[30U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_4__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v30 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_4__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v30 = 1U;
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__en 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__bank_idle) 
                     >> 3U));
        __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[31U];
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_4__sat_inc 
            = ((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__en)
                ? ((0xffffffffU == __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val)
                    ? __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val
                    : ((IData)(1U) + __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val))
                : __Vfunc_tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__sat_inc__200__val);
        __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v31 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT____VlemCall_4__sat_inc;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v31 = 1U;
        if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
              >> 3U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)((0x000003ffU & (IData)(
                                                           (vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                                                            >> 0x0000001eU))))) 
                    << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[3U])) 
                                        << 9U) | (QData)((IData)(
                                                                 ((0x000001e0U 
                                                                   & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                      >> 7U)) 
                                                                  | ((0x0000001eU 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                         >> 0x0000000bU)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we) 
                                                                           >> 3U))))))));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr)));
        }
        if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
              >> 2U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)((0x000003ffU & (IData)(
                                                           (vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                                                            >> 0x00000014U))))) 
                    << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[2U])) 
                                        << 9U) | (QData)((IData)(
                                                                 ((0x000001e0U 
                                                                   & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                      >> 3U)) 
                                                                  | ((0x0000001eU 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                         >> 7U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we) 
                                                                           >> 2U))))))));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr)));
        }
        if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
              >> 1U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)((0x000003ffU & (IData)(
                                                           (vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                                                            >> 0x0000000aU))))) 
                    << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[1U])) 
                                        << 9U) | (QData)((IData)(
                                                                 ((0x000001e0U 
                                                                   & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                      << 1U)) 
                                                                  | ((0x0000001eU 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                         >> 3U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we) 
                                                                           >> 1U))))))));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr)));
        }
        if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
             & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)((0x000003ffU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr)))) 
                    << 0x00000029U) | (((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[0U])) 
                                        << 9U) | (QData)((IData)(
                                                                 ((0x000001e0U 
                                                                   & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe) 
                                                                      << 5U)) 
                                                                  | ((0x0000001eU 
                                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we))))))));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr)));
        }
        if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
             & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
             & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
             & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop) 
             & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr)));
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__csr_rdata 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter
                [vlSelfRef.tb_banked_sram_ctrl__DOT__csr_addr_in];
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready) {
            if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err = 1U;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata = 0U;
            } else {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err = 0U;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr];
            }
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_id;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid;
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe 
                = (0x0000000fU & (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                          >> 5U)));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we 
                = (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err = 0U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_id 
                = (((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                    << 4U) | (0x0000000fU & (IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                     >> 1U))));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid 
                = Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant];
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready) {
            if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err = 1U;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata = 0U;
            } else {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err = 0U;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr];
            }
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_id;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid;
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe 
                = (0x0000000fU & (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                          >> 5U)));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we 
                = (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err = 0U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_id 
                = (((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                    << 4U) | (0x0000000fU & (IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                     >> 1U))));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid 
                = Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant];
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready) {
            if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err = 1U;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata = 0U;
            } else {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err = 0U;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr];
            }
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid;
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe 
                = (0x0000000fU & (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                          >> 5U)));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we 
                = (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err = 0U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id 
                = (((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                    << 4U) | (0x0000000fU & (IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                     >> 1U))));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid 
                = Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant];
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready) {
            if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err = 1U;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata = 0U;
            } else {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err = 0U;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata 
                    = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr];
            }
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid;
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe 
                = (0x0000000fU & (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                          >> 5U)));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we 
                = (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err = 0U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id 
                = (((IData)(Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                    << 4U) | (0x0000000fU & (IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                     >> 1U))));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid 
                = Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant];
        }
        if (((Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant] 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready)) 
             & VL_LTS_III(32, 1U, VL_COUNTONES_I((0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                     >> 0x0000000cU)))))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr 
                = (3U & VL_MODDIVS_III(32, ((IData)(1U) 
                                            + Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]), (IData)(4U)));
        }
        if (((Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant] 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready)) 
             & VL_LTS_III(32, 1U, VL_COUNTONES_I((0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                     >> 8U)))))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr 
                = (3U & VL_MODDIVS_III(32, ((IData)(1U) 
                                            + Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]), (IData)(4U)));
        }
        if (((Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant] 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready)) 
             & VL_LTS_III(32, 1U, VL_COUNTONES_I((0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                     >> 4U)))))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr 
                = (3U & VL_MODDIVS_III(32, ((IData)(1U) 
                                            + Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]), (IData)(4U)));
        }
        if (((Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant] 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready)) 
             & VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr 
                = (3U & VL_MODDIVS_III(32, ((IData)(1U) 
                                            + Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]), (IData)(4U)));
        }
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
    } else {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__i = 0x00000020U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy = 0U;
        __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v32 = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_rdata = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid = 0U;
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__csr_ack = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n) 
                                                   && (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req));
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[0U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v0;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v1) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[1U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v1;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v2) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[2U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v2;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v3) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[3U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v3;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v4) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[4U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v4;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v5) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[5U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v5;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v6) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[6U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v6;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v7) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[7U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v7;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v8) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[8U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v8;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v9) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[9U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v9;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v10) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[10U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v10;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v11) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[11U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v11;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v12) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[12U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v12;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v13) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[13U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v13;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v14) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[14U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v14;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v15) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[15U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v15;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v16) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[16U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v16;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v17) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[17U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v17;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v18) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[18U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v18;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v19) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[19U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v19;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v20) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[20U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v20;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v21) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[21U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v21;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v22) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[22U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v22;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v23) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[23U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v23;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v24) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[24U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v24;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v25) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[25U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v25;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v26) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[26U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v26;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v27) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[27U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v27;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v28) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[28U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v28;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v29) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[29U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v29;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v30) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[30U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v30;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v31) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[31U] 
            = __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v31;
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter__v32) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[0U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[1U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[2U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[3U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[4U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[5U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[6U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[7U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[8U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[9U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[10U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[11U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[12U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[13U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[14U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[15U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[16U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[17U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[18U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[19U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[20U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[21U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[22U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[23U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[24U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[25U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[26U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[27U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[28U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[29U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[30U] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[31U] = 0U;
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready 
        = ((((4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
             << 3U) | ((4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                       << 2U)) | (((4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 1U) | (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n))) 
           || (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n))) 
           || (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n))) 
           || (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n))) 
           || (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    __VdfgRegularize_hebeb780c_0_4 = (3U & (IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                                    >> 0x00000029U)));
    __VdfgRegularize_hebeb780c_0_5 = (3U & (IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                                    >> 0x00000029U)));
    __VdfgRegularize_hebeb780c_0_6 = (3U & (IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                                    >> 0x00000029U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[0U] 
        = (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]);
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[1U] 
        = (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
            << 0x00000013U) | (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                       >> 0x00000020U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[2U] 
        = (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
            >> 0x0000000dU) | ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                        >> 0x00000020U)) 
                               << 0x00000013U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[3U] 
        = (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
            << 6U) | ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                               >> 0x00000020U)) >> 0x0000000dU));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[4U] 
        = ((0xfe000000U & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[4U]) 
           | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
               >> 0x0000001aU) | ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                           >> 0x00000020U)) 
                                  << 6U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[4U] 
        = ((0x01ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[4U]) 
           | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
              << 0x00000019U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[5U] 
        = (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
            >> 7U) | ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                               >> 0x00000020U)) << 0x00000019U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[6U] 
        = (0x00000fffU & ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                   >> 0x00000020U)) 
                          >> 7U));
    __VdfgRegularize_hebeb780c_0_7 = (3U & (IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                                    >> 0x00000029U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err 
        = ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err) 
             << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err) 
                       << 2U)) | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we 
        = ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we) 
             << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we) 
                       << 2U)) | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[0U] 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[1U] 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata))) 
                   >> 0x00000020U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id 
        = ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id) 
             << 0x00000012U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id) 
                                << 0x0000000cU)) | 
           (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id) 
             << 6U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports 
        = ((((0x0000000cU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id) 
                             >> 2U)) | (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id) 
                                              >> 4U))) 
            << 4U) | ((0x0000000cU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id) 
                                      >> 2U)) | (3U 
                                                 & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id) 
                                                    >> 4U))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid 
        = ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid) 
             << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid) 
                       << 2U)) | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (0U == (3U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0U == (0x0cU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0U == (0x30U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0U == (0xc0U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (1U == (3U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (4U == (0x0cU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x10U == (0x30U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x40U == (0xc0U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (2U == (3U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (8U == (0x0cU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x20U == (0x30U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x80U == (0xc0U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (3U == (3U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0x0cU == (0x0cU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x30U == (0x30U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0xc0U == (0xc0U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready 
        = ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready) 
             << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready) 
                       << 2U)) | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready)));
    __VdfgRegularize_hebeb780c_0_32 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_4)) 
                                       & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_33 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_5)) 
                                       & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_34 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_6)) 
                                       & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_35 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_7)) 
                                       & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[0U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[1U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[2U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[3U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p 
        = (3U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports));
    if ((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data, 
                        ((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[0U]));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err)) 
               | (0x0fU & ((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err)) 
                           << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id)) 
               | (0x0000ffffU & ((0x0000000fU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id) 
                                 << (0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                      << 2U)))));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p 
        = (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports) 
                 >> 2U));
    if ((2U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data, 
                        ((2U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[1U]));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err)) 
               | (0x0fU & ((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                  >> 1U)) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id)) 
               | (0x0000ffffU & ((0x0000000fU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id 
                                                 >> 6U)) 
                                 << (0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                      << 2U)))));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p 
        = (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports) 
                 >> 4U));
    if ((4U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data, 
                        ((4U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[2U]));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err)) 
               | (0x0fU & ((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                  >> 2U)) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id)) 
               | (0x0000ffffU & ((0x0000000fU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id 
                                                 >> 0x0cU)) 
                                 << (0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                      << 2U)))));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p 
        = (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports) 
                 >> 6U));
    if ((8U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data, 
                        ((8U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[3U]));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err)) 
               | (0x0fU & ((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                  >> 3U)) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id)) 
               | (0x0000ffffU & ((0x0000000fU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id 
                                                 >> 0x12U)) 
                                 << (0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                      << 2U)))));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid)) 
                 | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted) 
                    >> 3U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid)) 
                 | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted) 
                    >> 2U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid)) 
                 | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted) 
                    >> 1U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid)) 
                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid 
        = ((((IData)(__VdfgRegularize_hebeb780c_0_32) 
             << 3U) | ((IData)(__VdfgRegularize_hebeb780c_0_33) 
                       << 2U)) | (((IData)(__VdfgRegularize_hebeb780c_0_34) 
                                   << 1U) | (IData)(__VdfgRegularize_hebeb780c_0_35)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant 
        = (0x0000000fU & ((((0x000000f0U & (((~ (((0x000000ffU 
                                                   & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))) 
                                            << 4U)) 
                            | (0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                        << 4U) 
                                                       | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                          >> 4U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid 
        = ((((((((3U == (IData)(__VdfgRegularize_hebeb780c_0_4)) 
                 & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                << 3U) | (((3U == (IData)(__VdfgRegularize_hebeb780c_0_5)) 
                           & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                          << 2U)) | ((((3U == (IData)(__VdfgRegularize_hebeb780c_0_6)) 
                                       & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                      << 1U) | ((3U 
                                                 == (IData)(__VdfgRegularize_hebeb780c_0_7)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))) 
             << 0x0000000cU) | ((((((2U == (IData)(__VdfgRegularize_hebeb780c_0_4)) 
                                    & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                   << 3U) | (((2U == (IData)(__VdfgRegularize_hebeb780c_0_5)) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                             << 2U)) 
                                 | ((((2U == (IData)(__VdfgRegularize_hebeb780c_0_6)) 
                                      & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                     << 1U) | ((2U 
                                                == (IData)(__VdfgRegularize_hebeb780c_0_7)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                << 8U)) | (((((1U == (IData)(__VdfgRegularize_hebeb780c_0_4)) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                             << 7U) 
                                            | (((1U 
                                                 == (IData)(__VdfgRegularize_hebeb780c_0_5)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                               << 6U)) 
                                           | ((((1U 
                                                 == (IData)(__VdfgRegularize_hebeb780c_0_6)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                               << 5U) 
                                              | ((((1U 
                                                    == (IData)(__VdfgRegularize_hebeb780c_0_7)) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x000000ffU 
                                                & ((IData)(0x00000033U) 
                                                   * Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                   [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__bank_idle 
        = (0x0000000fU & (~ ((((0U != (0x0000000fU 
                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                          >> 0x0000000cU))) 
                               << 3U) | ((0U != (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                    >> 8U))) 
                                         << 2U)) | 
                             (((0U != (0x0000000fU 
                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                          >> 4U))) 
                               << 1U) | ((IData)(__VdfgRegularize_hebeb780c_0_35) 
                                         | ((IData)(__VdfgRegularize_hebeb780c_0_34) 
                                            | ((IData)(__VdfgRegularize_hebeb780c_0_32) 
                                               | (IData)(__VdfgRegularize_hebeb780c_0_33))))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant 
        = (0x0000000fU & ((((0x000000f0U & (((~ (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 8U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 0x0000000cU)))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & ((0x000000f0U 
                                                     & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                        >> 8U)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 0x0000000cU)))) 
                                                >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))) 
                                            << 4U)) 
                            | (0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 8U)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                             >> 0x0000000cU)))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                         >> 8U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 0x0000000cU)))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                          >> 4U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant 
        = (0x0000000fU & ((((0x000000f0U & (((~ (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 4U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 8U)))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & ((0x000000f0U 
                                                     & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                        >> 4U)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 8U)))) 
                                                >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))) 
                                            << 4U)) 
                            | (0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 4U)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                             >> 8U)))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                         >> 4U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 8U)))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                          >> 4U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant 
        = (0x0000000fU & ((((0x000000f0U & (((~ (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 4U)))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & ((0x000000f0U 
                                                     & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 4U)))) 
                                                >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))) 
                                            << 4U)) 
                            | (0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                             >> 4U)))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 4U)))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                          >> 4U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_11 = (0x000000ffU 
                                                 & ((IData)(0x00000033U) 
                                                    * Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = (0x000000ffU 
                                                 & ((IData)(0x00000033U) 
                                                    * Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = (0x000000ffU 
                                                & ((IData)(0x00000033U) 
                                                   * Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                   [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict 
        = ((((0x000000f0U & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                              >> 8U) & (((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant)) 
                                         & (- (IData)(
                                                      (VL_LTS_III(32, 1U, 
                                                                  VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                                >> 0x0000000cU)))) 
                                                       & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant])))) 
                                        << 4U))) | 
             (0x0000000fU & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                              >> 8U) & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant)) 
                                        & (- (IData)(
                                                     (VL_LTS_III(32, 1U, 
                                                                 VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                                >> 8U)))) 
                                                      & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]))))))) 
            << 8U) | ((0x000000f0U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                      & (((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                          & (- (IData)(
                                                       (VL_LTS_III(32, 1U, 
                                                                   VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                                >> 4U)))) 
                                                        & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant])))) 
                                         << 4U))) | 
                      ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                       & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                          & (- (IData)((VL_LTS_III(32, 1U, 
                                                   VL_COUNTONES_I((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                        & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant])))))));
}

void Vtb_banked_sram_ctrl___024root___nba_sequent__TOP__1(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___nba_sequent__TOP__1\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 = 0;
    // Body
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 = 0U;
    __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 = 0U;
    if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) {
        if ((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data);
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 8U));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 0x10U));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3 
                = (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data 
                   >> 0x18U);
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3 = 1U;
        }
    }
    if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) {
        if ((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data);
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 8U));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 0x10U));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3 
                = (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data 
                   >> 0x18U);
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3 = 1U;
        }
    }
    if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) {
        if ((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data);
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 8U));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 0x10U));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 
                = (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data 
                   >> 0x18U);
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 = 1U;
        }
    }
    if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we) {
        if ((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data);
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 8U));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 0x10U));
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 
                = (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data 
                   >> 0x18U);
            __VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 = 1U;
        }
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3) 
                  << 0x00000018U));
    }
}

void Vtb_banked_sram_ctrl___024root___nba_sequent__TOP__2(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___nba_sequent__TOP__2\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    // Body
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((0xfffffff8U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                              & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U))) 
                                          | (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we)))))));
    if (vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n) {
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data 
                = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                           >> 9U));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr 
                = (0x000000ffU & (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                          >> 0x0000002bU)));
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data 
                = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                           >> 9U));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr 
                = (0x000000ffU & (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                          >> 0x0000002bU)));
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data 
                = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                           >> 9U));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr 
                = (0x000000ffU & (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                          >> 0x0000002bU)));
        }
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data 
                = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                           >> 9U));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr 
                = (0x000000ffU & (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                          >> 0x0000002bU)));
        }
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((0xfffffff8U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                              & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U))) 
                                          | (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((0xfffffff8U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                              & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U))) 
                                          | (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((0xfffffff8U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                              & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U))) 
                                          | (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
        = (0x0007ffffffffffffULL & ((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                      [
                                                      (((IData)(0x00000032U) 
                                                        + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11))))) 
                                     | (((0U == (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                           [
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11) 
                                                            >> 5U)])) 
                                           >> (0x0000001fU 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11))))) 
                                    & (- (QData)((IData)(
                                                         (0xcbU 
                                                          >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
        = (0x0007ffffffffffffULL & ((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                      [
                                                      (((IData)(0x00000032U) 
                                                        + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10))))) 
                                     | (((0U == (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                           [
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                                                            >> 5U)])) 
                                           >> (0x0000001fU 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10))))) 
                                    & (- (QData)((IData)(
                                                         (0xcbU 
                                                          >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
        = (0x0007ffffffffffffULL & ((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                      [
                                                      (((IData)(0x00000032U) 
                                                        + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))))) 
                                     | (((0U == (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                           [
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                                                            >> 5U)])) 
                                           >> (0x0000001fU 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))))) 
                                    & (- (QData)((IData)(
                                                         (0xcbU 
                                                          >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
        = (0x0007ffffffffffffULL & ((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                      [
                                                      (((IData)(0x00000032U) 
                                                        + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8))))) 
                                     | (((0U == (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                           [
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                                                            >> 5U)])) 
                                           >> (0x0000001fU 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8))))) 
                                    & (- (QData)((IData)(
                                                         (0xcbU 
                                                          >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    __VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) 
                                      & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]);
    __VdfgRegularize_hebeb780c_0_1 = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) 
                                      & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]);
    __VdfgRegularize_hebeb780c_0_2 = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                      & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]);
    __VdfgRegularize_hebeb780c_0_3 = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready) 
                                      & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = ((2U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_17 = ((3U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_18 = ((0U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = ((1U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_20 = ((2U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_21 = ((3U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = ((0U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_23 = ((1U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_24 = ((2U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_25 = ((3U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = ((0U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = ((1U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_28 = ((2U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_29 = ((3U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = ((0U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = ((1U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31))));
}

void Vtb_banked_sram_ctrl___024root___eval_nba(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_nba\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_banked_sram_ctrl___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_banked_sram_ctrl___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__rsp_issue 
                = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                   & ((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                        << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                  << 2U)) | (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                              << 1U) 
                                             | (0U 
                                                != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))));
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__req_accept 
                = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_banked_sram_ctrl___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy;
            if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                  >> 2U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready))) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
            }
            if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
                 & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                    = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                             - (IData)(1U)));
            }
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy;
            if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                  >> 3U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready))) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
            }
            if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
                 & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                    = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                             - (IData)(1U)));
            }
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy;
            if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                 & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
            }
            if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop) 
                 & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                    = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                             - (IData)(1U)));
            }
            vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy;
            if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                  >> 1U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready))) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
            }
            if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                 & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                    = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                             - (IData)(1U)));
            }
        }
    }
}

void Vtb_banked_sram_ctrl___024root___timing_ready(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___timing_ready\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3ef35864__0.ready("@(posedge tb_banked_sram_ctrl.clk)");
    }
}

void Vtb_banked_sram_ctrl___024root___timing_resume(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___timing_resume\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h3ef35864__0.moveToResumeQueue(
                                                          "@(posedge tb_banked_sram_ctrl.clk)");
    vlSelfRef.__VtrigSched_h3ef35864__0.resume("@(posedge tb_banked_sram_ctrl.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_banked_sram_ctrl___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_banked_sram_ctrl___024root___eval_phase__act(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_phase__act\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_banked_sram_ctrl__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_banked_sram_ctrl__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_banked_sram_ctrl__DOT__clk__0 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_banked_sram_ctrl__DOT__rst_n__0 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n;
    }
    Vtb_banked_sram_ctrl___024root___timing_ready(vlSelf);
    Vtb_banked_sram_ctrl___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_banked_sram_ctrl___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_banked_sram_ctrl___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_banked_sram_ctrl___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_banked_sram_ctrl___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__req_accept 
                        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                           & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy;
                    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                          >> 3U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready))) {
                        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
                    }
                    if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
                         & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                                     - (IData)(1U)));
                    }
                    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy;
                    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                          >> 2U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready))) {
                        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
                    }
                    if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
                         & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                                     - (IData)(1U)));
                    }
                    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy;
                    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                          >> 1U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready))) {
                        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
                    }
                    if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                         & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                                     - (IData)(1U)));
                    }
                    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy;
                    if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))) {
                        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
                    }
                    if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop) 
                         & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                                     - (IData)(1U)));
                    }
                    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__rsp_issue 
                        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                           & ((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_banked_sram_ctrl___024root___eval_phase__inact(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_phase__inact\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_banked_sram_ctrl___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_banked_sram_ctrl___024root___eval_phase__nba(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_phase__nba\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_banked_sram_ctrl___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_banked_sram_ctrl___024root___eval_nba(vlSelf);
        Vtb_banked_sram_ctrl___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_banked_sram_ctrl___024root___eval(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_banked_sram_ctrl___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_banked_sram_ctrl___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_banked_sram_ctrl___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_banked_sram_ctrl___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_banked_sram_ctrl___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(Vtb_banked_sram_ctrl___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_banked_sram_ctrl__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_banked_sram_ctrl__DOT__clk__0 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3ef35864__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_banked_sram_ctrl___024root___eval_debug_assertions(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_debug_assertions\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
