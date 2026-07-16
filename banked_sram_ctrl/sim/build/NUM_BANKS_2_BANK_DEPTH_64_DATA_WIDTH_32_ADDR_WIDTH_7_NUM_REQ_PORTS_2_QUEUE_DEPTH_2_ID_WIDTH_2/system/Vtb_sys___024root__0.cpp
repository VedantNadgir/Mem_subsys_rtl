// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sys.h for the primary calling header

#include "Vtb_sys__pch.h"

VlCoroutine Vtb_sys___024root___eval_initial__TOP__Vtiming__0(Vtb_sys___024root* vlSelf);
VlCoroutine Vtb_sys___024root___eval_initial__TOP__Vtiming__1(Vtb_sys___024root* vlSelf);
VlCoroutine Vtb_sys___024root___eval_initial__TOP__Vtiming__2(Vtb_sys___024root* vlSelf);

void Vtb_sys___024root___eval_initial(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_initial\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        IData/*31:0*/ __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i;
        __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i = 0;
        vlSelfRef.tb_sys__DOT__clk = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count = 0U;
        __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTES_III(32, 0x0000007fU, __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[(0x0000007fU 
                                                                     & __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i)] = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[(0x0000007fU 
                                                                    & __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i)] = 0U;
            __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i);
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready = 3U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data = 0ULL;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_req = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_addr = 0U;
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_sys___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_sys___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_sys___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_sys___024root___eval_initial__TOP__Vtiming__0(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000001dcd6500ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 
                                         98);
    VL_WRITEF_NX("[WATCHDOG] Expired\n",0);
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 100, "");
    co_return;
}

void Vtb_sys___024root____VbeforeTrig_hc982ec79__0(Vtb_sys___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_sys___024root___eval_initial__TOP__Vtiming__1(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_sys__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_sys__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a;
    __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b;
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b;
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a;
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a = 0;
    CData/*6:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_err = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe = 0;
    CData/*6:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__addr = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__timeout = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_err = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_2__make_addr;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_2__make_addr = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_1__make_addr;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_1__make_addr = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_0__make_addr;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_0__make_addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p = 0;
    VlUnpacked<CData/*6:0*/, 4> __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[__Vi0] = 0;
    }
    CData/*6:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__row = 0;
    CData/*6:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_err = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_err = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__addr = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__timeout = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__addr = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__timeout = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_err = 0;
    CData/*6:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_err = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__addr = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__timeout = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk6__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk6__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__hold_ready__46__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__hold_ready__46__port = 0;
    CData/*6:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__49__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__49__port = 0;
    CData/*6:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_err = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__addr = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__timeout = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__60__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__60__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__port;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__bank;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__bank = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__row;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__row = 0;
    CData/*6:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_err = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__addr = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__timeout = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_err = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73____VlefCall_0__make_addr;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73____VlefCall_0__make_addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i = 0;
    VlUnpacked<CData/*6:0*/, 100> __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs;
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 100> __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas;
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__n;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__n = 0;
    CData/*6:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_err = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__port = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__addr = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__we = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__strobe = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__timeout = 0;
    CData/*6:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id = 0;
    CData/*1:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_err = 0;
    std::string __Vtemp_1;
    // Body
    vlSelfRef.tb_sys__DOT__rst_n = 0U;
    tb_sys__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    while (VL_LTS_III(32, 0U, tb_sys__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 
                                                             104);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_sys__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_sys__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 
                                         105);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sys__DOT__rst_n = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/env.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "../verif/system/env.sv", 
                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a = 0U;
    while (VL_GTES_III(32, 0x0000007fU, __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a)) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[(0x0000007fU 
                                                                & __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a)] = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[(0x0000007fU 
                                                                 & __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a)] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a);
    }
    VL_WRITEF_NX("[ENV] Reset released at %0t\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/env.sv", 
                                                             127);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__tb_sys__DOT__u_env__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "../verif/system/env.sv", 
                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a = 0;
    vlSelfRef.tb_sys__DOT__u_env__DOT__test_id = ((IData)(1U) 
                                                  + vlSelfRef.tb_sys__DOT__u_env__DOT__test_id);
    VL_WRITEF_NX("\n=== SMOKE: Basic R/W all banks ===\n",0);
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b)) {
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__row = 1U;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__bank 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__Vfuncout = 0;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__Vfuncout 
            = ((0x0000007eU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__row 
                               << 1U)) | (1U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__bank));
        __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a 
            = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__Vfuncout;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__txn_id 
            = (3U & __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b);
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__strobe = 0x0fU;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data 
            = (0xa0000000U | __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b);
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__port = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__we = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port))));
        if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                             & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
                   | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__addr) 
                                 << (0x0000000fU & 
                                     ((IData)(7U) * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port)))));
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                                 << 5U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                     << 5U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__we) 
                        << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                             << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
               | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__strobe) 
                             << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                       << 2U)))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                          << 1U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__id) 
                           << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                     << 1U)))));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/driver.sv", 
                                                             53);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port))))) {
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5____Vincrement1)))) {
                    VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port);
                    goto __Vlabel0;
                }
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/driver.sv", 
                                                                     59);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel0: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/driver.sv", 
                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6____Vincrement1 = 0U;
        {
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__timeout = 0U;
            while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port))))) {
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/monitor.sv", 
                                                                     24);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "../verif/system/monitor.sv", 
                                                     25);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6____Vincrement1)))) {
                    VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err = 0U;
                    goto __Vlabel1;
                }
            }
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data 
                = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                              >> 3U))) 
                             << 0x00000020U) | (QData)((IData)(
                                                               (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                >> 3U)))) 
                           >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port 
                                              << 5U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id 
                = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 1U)) 
                                          << 2U)) | 
                          (3U & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                         >> 1U)))) 
                         >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port 
                                   << 1U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err 
                = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                 << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port)));
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 37);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 38);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel1: ;
        }
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__ri 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__re 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_err 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__re;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__exp_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__ri;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((0U != __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data)))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                         , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                         , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__exp_id
                         , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id));
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                         , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id);
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__addr;
        if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr]);
        }
        if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr]);
        }
        if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr]);
        }
        if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr]);
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b)) {
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__row = 1U;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__bank 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__Vfuncout = 0;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__Vfuncout 
            = ((0x0000007eU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__row 
                               << 1U)) | (1U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__bank));
        __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a 
            = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__Vfuncout;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__txn_id 
            = (3U & __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b);
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__port = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__strobe = 0x0fU;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__we = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port))));
        if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                             & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
                   | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__addr) 
                                 << (0x0000000fU & 
                                     ((IData)(7U) * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port)))));
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                                 << 5U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                     << 5U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__we) 
                        << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                             << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
               | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__strobe) 
                             << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                       << 2U)))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                          << 1U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__id) 
                           << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                     << 1U)))));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/driver.sv", 
                                                             53);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port))))) {
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11____Vincrement1)))) {
                    VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port);
                    goto __Vlabel2;
                }
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/driver.sv", 
                                                                     59);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel2: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/driver.sv", 
                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12____Vincrement1 = 0U;
        {
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__timeout = 0U;
            while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port))))) {
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/monitor.sv", 
                                                                     24);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "../verif/system/monitor.sv", 
                                                     25);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12____Vincrement1)))) {
                    VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err = 0U;
                    goto __Vlabel3;
                }
            }
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data 
                = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                              >> 3U))) 
                             << 0x00000020U) | (QData)((IData)(
                                                               (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                >> 3U)))) 
                           >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port 
                                              << 5U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id 
                = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 1U)) 
                                          << 2U)) | 
                          (3U & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                         >> 1U)))) 
                         >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port 
                                   << 1U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err 
                = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                 << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port)));
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 37);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 38);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel3: ;
        }
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__ri 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__re 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_err 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__re;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__exp_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__ri;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__addr;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                 [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr] 
                                 & (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data 
                                    != vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr]))))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr
                         , '#',32,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                         [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr]
                         , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                         , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__exp_id
                         , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id)
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr
                         , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data
                         , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id));
        }
        __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b);
    }
    VL_WRITEF_NX("=== SMOKE: done ===\n",0);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[__Vi0] = 0;
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__test_id = ((IData)(1U) 
                                                  + vlSelfRef.tb_sys__DOT__u_env__DOT__test_id);
    VL_WRITEF_NX("\n=== CONFLICT: Bank arbitration ===\n",0);
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__row = 0x0000000aU;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__bank = 0U;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__Vfuncout = 0;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__Vfuncout 
        = ((0x0000007eU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__row 
                           << 1U)) | (1U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__bank));
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_0__make_addr 
        = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__Vfuncout;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_0__make_addr;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__row = 0x0000000bU;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__bank = 0U;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__Vfuncout = 0;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__Vfuncout 
        = ((0x0000007eU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__row 
                           << 1U)) | (1U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__bank));
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_1__make_addr 
        = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__Vfuncout;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_1__make_addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__txn_id = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__strobe = 0x0fU;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data = 0xaaaa0000U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__port = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__we = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port))));
    if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                         & ((IData)(7U) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
               | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__addr) 
                             << (0x0000000fU & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port)))));
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
        = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                                             << 5U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                                 << 5U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__we) 
                  << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                                         << 2U)))) 
            & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
           | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__strobe) 
                         << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                                   << 2U)))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                                    << 1U)))) & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__id) 
                     << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                               << 1U)))));
    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                  "@(posedge tb_sys.clk)");
    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sys.clk)", 
                                                         "../verif/system/driver.sv", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port))))) {
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18____Vincrement1)))) {
                VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port);
                goto __Vlabel4;
            }
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/driver.sv", 
                                                                 59);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel4: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "../verif/system/driver.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19____Vincrement1 = 0U;
    {
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__timeout = 0U;
        while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                           << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port))))) {
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 24);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 25);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19____Vincrement1)))) {
                VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err = 0U;
                goto __Vlabel5;
            }
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data 
            = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 3U))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 3U)))) 
                       >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port 
                                          << 5U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id 
            = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                               >> 1U)) 
                                      << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U)))) 
                     >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port 
                               << 1U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err 
            = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                             << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                     >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port)));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/monitor.sv", 
                                                             37);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/monitor.sv", 
                                             38);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel5: ;
    }
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__ri 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__re 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_err 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__re;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__exp_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((0U != __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data)))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                     , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                     , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__exp_id
                     , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id));
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                     , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__addr;
    if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr]);
    }
    if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr]);
    }
    if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr]);
    }
    if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr]);
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr] = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__txn_id = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__strobe = 0x0fU;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data = 0xbbbb1111U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__port = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__we = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port))));
    if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                         & ((IData)(7U) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
               | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__addr) 
                             << (0x0000000fU & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port)))));
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
        = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                                             << 5U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                                 << 5U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__we) 
                  << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                                         << 2U)))) 
            & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
           | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__strobe) 
                         << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                                   << 2U)))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                                    << 1U)))) & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__id) 
                     << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                               << 1U)))));
    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                  "@(posedge tb_sys.clk)");
    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sys.clk)", 
                                                         "../verif/system/driver.sv", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port))))) {
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23____Vincrement1)))) {
                VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port);
                goto __Vlabel6;
            }
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/driver.sv", 
                                                                 59);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel6: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "../verif/system/driver.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24____Vincrement1 = 0U;
    {
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__timeout = 0U;
        while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                           << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port))))) {
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 24);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 25);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24____Vincrement1)))) {
                VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err = 0U;
                goto __Vlabel7;
            }
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data 
            = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 3U))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 3U)))) 
                       >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port 
                                          << 5U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id 
            = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                               >> 1U)) 
                                      << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U)))) 
                     >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port 
                               << 1U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err 
            = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                             << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                     >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port)));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/monitor.sv", 
                                                             37);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/monitor.sv", 
                                             38);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel7: ;
    }
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__ri 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__re 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_err 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__re;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__exp_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((0U != __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data)))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                     , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                     , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__exp_id
                     , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id));
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                     , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__addr;
    if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr]);
    }
    if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr]);
    }
    if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr]);
    }
    if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr]);
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr] = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__txn_id = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__port = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__strobe = 0x0fU;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__we = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port))));
    if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                         & ((IData)(7U) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
               | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__addr) 
                             << (0x0000000fU & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port)))));
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
        = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                                             << 5U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                                 << 5U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__we) 
                  << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                                         << 2U)))) 
            & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
           | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__strobe) 
                         << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                                   << 2U)))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                                    << 1U)))) & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__id) 
                     << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                               << 1U)))));
    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                  "@(posedge tb_sys.clk)");
    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sys.clk)", 
                                                         "../verif/system/driver.sv", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port))))) {
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28____Vincrement1)))) {
                VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port);
                goto __Vlabel8;
            }
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/driver.sv", 
                                                                 59);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel8: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "../verif/system/driver.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29____Vincrement1 = 0U;
    {
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__timeout = 0U;
        while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                           << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port))))) {
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 24);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 25);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29____Vincrement1)))) {
                VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err = 0U;
                goto __Vlabel9;
            }
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data 
            = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 3U))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 3U)))) 
                       >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port 
                                          << 5U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id 
            = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                               >> 1U)) 
                                      << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U)))) 
                     >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port 
                               << 1U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err 
            = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                             << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                     >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port)));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/monitor.sv", 
                                                             37);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/monitor.sv", 
                                             38);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel9: ;
    }
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__ri 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__re 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_err 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__re;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__exp_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__addr;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                             [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr] 
                             & (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data 
                                != vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr]))))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr
                     , '#',32,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                     [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr]
                     , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                     , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__exp_id
                     , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id)
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr
                     , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data
                     , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id));
    }
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__txn_id = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__port = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__strobe = 0x0fU;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__we = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port))));
    if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                         & ((IData)(7U) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
               | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__addr) 
                             << (0x0000000fU & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port)))));
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
        = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                                             << 5U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                                 << 5U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__we) 
                  << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                                         << 2U)))) 
            & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
           | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__strobe) 
                         << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                                   << 2U)))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                                    << 1U)))) & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__id) 
                     << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                               << 1U)))));
    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                  "@(posedge tb_sys.clk)");
    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sys.clk)", 
                                                         "../verif/system/driver.sv", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port))))) {
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32____Vincrement1)))) {
                VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port);
                goto __Vlabel10;
            }
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/driver.sv", 
                                                                 59);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel10: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "../verif/system/driver.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33____Vincrement1 = 0U;
    {
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__timeout = 0U;
        while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                           << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port))))) {
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 24);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 25);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33____Vincrement1)))) {
                VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err = 0U;
                goto __Vlabel11;
            }
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data 
            = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 3U))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 3U)))) 
                       >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port 
                                          << 5U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id 
            = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                               >> 1U)) 
                                      << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U)))) 
                     >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port 
                               << 1U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err 
            = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                             << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                     >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port)));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/monitor.sv", 
                                                             37);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/monitor.sv", 
                                             38);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel11: ;
    }
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__ri 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__re 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_err 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__re;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__exp_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__addr;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                             [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr] 
                             & (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data 
                                != vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr]))))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr
                     , '#',32,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                     [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr]
                     , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                     , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__exp_id
                     , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id)
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr
                     , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data
                     , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id));
    }
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p)) {
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__row 
            = ((IData)(0x00000014U) + __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p);
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__bank = 0U;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__Vfuncout = 0;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__Vfuncout 
            = ((0x0000007eU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__row 
                               << 1U)) | (1U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__bank));
        __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_2__make_addr 
            = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__Vfuncout;
        __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[(3U 
                                                              & __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p)] 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_2__make_addr;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__txn_id = 2U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__strobe = 0x0fU;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data 
            = (0xc0000000U | __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p);
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a
            [(3U & __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p)];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__we = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port))));
        if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                             & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
                   | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__addr) 
                                 << (0x0000000fU & 
                                     ((IData)(7U) * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port)))));
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                                 << 5U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                     << 5U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__we) 
                        << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                             << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
               | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__strobe) 
                             << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                       << 2U)))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                          << 1U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__id) 
                           << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                     << 1U)))));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/driver.sv", 
                                                             53);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port))))) {
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37____Vincrement1)))) {
                    VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port);
                    goto __Vlabel12;
                }
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/driver.sv", 
                                                                     59);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel12: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/driver.sv", 
                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38____Vincrement1 = 0U;
        {
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__timeout = 0U;
            while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port))))) {
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/monitor.sv", 
                                                                     24);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "../verif/system/monitor.sv", 
                                                     25);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38____Vincrement1)))) {
                    VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err = 0U;
                    goto __Vlabel13;
                }
            }
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data 
                = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                              >> 3U))) 
                             << 0x00000020U) | (QData)((IData)(
                                                               (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                >> 3U)))) 
                           >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port 
                                              << 5U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id 
                = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 1U)) 
                                          << 2U)) | 
                          (3U & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                         >> 1U)))) 
                         >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port 
                                   << 1U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err 
                = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                 << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port)));
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 37);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 38);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel13: ;
        }
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__ri 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__re 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_err 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__re;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__exp_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__ri;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((0U != __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data)))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                         , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                         , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__exp_id
                         , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id));
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                         , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id);
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__addr;
        if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr]);
        }
        if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr]);
        }
        if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr]);
        }
        if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr]);
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p = 0U;
    while (VL_GTS_III(32, 2U, __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p)) {
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__txn_id = 3U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a
            [(3U & __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p)];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__strobe = 0x0fU;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__we = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port))));
        if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                             & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
                   | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__addr) 
                                 << (0x0000000fU & 
                                     ((IData)(7U) * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port)))));
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                                 << 5U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                     << 5U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__we) 
                        << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                             << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
               | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__strobe) 
                             << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                       << 2U)))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                          << 1U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__id) 
                           << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                     << 1U)))));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/driver.sv", 
                                                             53);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port))))) {
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42____Vincrement1)))) {
                    VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port);
                    goto __Vlabel14;
                }
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/driver.sv", 
                                                                     59);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel14: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/driver.sv", 
                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43____Vincrement1 = 0U;
        {
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__timeout = 0U;
            while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port))))) {
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/monitor.sv", 
                                                                     24);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "../verif/system/monitor.sv", 
                                                     25);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43____Vincrement1)))) {
                    VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err = 0U;
                    goto __Vlabel15;
                }
            }
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data 
                = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                              >> 3U))) 
                             << 0x00000020U) | (QData)((IData)(
                                                               (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                >> 3U)))) 
                           >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port 
                                              << 5U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id 
                = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 1U)) 
                                          << 2U)) | 
                          (3U & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                         >> 1U)))) 
                         >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port 
                                   << 1U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err 
                = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                 << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port)));
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 37);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 38);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel15: ;
        }
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__ri 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__re 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_err 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__re;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__exp_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__ri;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__addr;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                 [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr] 
                                 & (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data 
                                    != vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr]))))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr
                         , '#',32,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                         [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr]
                         , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                         , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__exp_id
                         , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id)
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr
                         , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data
                         , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id));
        }
        __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p);
    }
    VL_WRITEF_NX("=== CONFLICT: done ===\n",0);
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk6__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a = 0;
    vlSelfRef.tb_sys__DOT__u_env__DOT__test_id = ((IData)(1U) 
                                                  + vlSelfRef.tb_sys__DOT__u_env__DOT__test_id);
    VL_WRITEF_NX("\n=== BACKPRESSURE: FIFO stall chain ===\n",0);
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__hold_ready__46__port = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready 
        = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__hold_ready__46__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready));
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i)) {
        if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready))) {
            __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__row 
                = ((IData)(0x0000001eU) + VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i, (IData)(0x0000000aU)));
            __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__bank = 0U;
            __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__Vfuncout = 0;
            __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__Vfuncout 
                = ((0x0000007eU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__row 
                                   << 1U)) | (1U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__bank));
            __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a 
                = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__Vfuncout;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__id 
                = (3U & VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i, (IData)(4U)));
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__strobe = 0x0fU;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__we = 1U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__data 
                = ((IData)(0xdead0000U) + __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i);
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48____Vincrement1 = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__timeout = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
                = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                   | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port))));
            if (VL_LIKELY(((0x0dU >= (0x0000000fU & 
                                      ((IData)(7U) 
                                       * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port)))))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                    = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                                 & ((IData)(7U) 
                                                    * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port)))) 
                        & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
                       | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__addr) 
                                     << (0x0000000fU 
                                         & ((IData)(7U) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port)))));
            }
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                                  & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                                     << 5U)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                   | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__data)) 
                      << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                         << 5U))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
                = (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
                   | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__we) 
                            << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                                 << 2U)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
                   | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__strobe) 
                                 << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                           << 2U)))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                = (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                              << 1U)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
                   | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__id) 
                               << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                         << 1U)))));
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/driver.sv", 
                                                                 53);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            {
                while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                                 >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port))))) {
                    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48____Vincrement1 
                        = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__timeout);
                    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__timeout 
                        = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48____Vincrement1;
                    if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48____Vincrement1)))) {
                        VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                                     , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port);
                        goto __Vlabel16;
                    }
                    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                                  "@(posedge tb_sys.clk)");
                    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_sys.clk)", 
                                                                         "../verif/system/driver.sv", 
                                                                         59);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
                __Vlabel16: ;
            }
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/driver.sv", 
                                                 61);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
                = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port))) 
                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        } else {
            __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk6__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
            while (VL_LTS_III(32, 0U, __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk6__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tests/backpressure.sv", 
                                                                     11);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk6__DOT__unnamedblk1_3__DOT____Vrepeat2 
                    = (__Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk6__DOT__unnamedblk1_3__DOT____Vrepeat2 
                       - (IData)(1U));
            }
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tests/backpressure.sv", 
                                             12);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_4__DOT____Vrepeat3 = 8U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tests/backpressure.sv", 
                                                             14);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tests/backpressure.sv", 
                                         15);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready))) {
        VL_WRITEF_NX("[BP FAIL] req_ready[0] should be 0\n",0);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[BP OK]  req_ready[0]=0 (stall chain working)\n",0);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__49__port = 1U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
           | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__49__port))));
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__row = 0x00000032U;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__bank = 1U;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__Vfuncout = 0;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__Vfuncout 
        = ((0x0000007eU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__row 
                           << 1U)) | (1U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__bank));
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a 
        = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__Vfuncout;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__txn_id = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__strobe = 0x0fU;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data = 0xccccccccU;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__port = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__we = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port))));
    if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                         & ((IData)(7U) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
               | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__addr) 
                             << (0x0000000fU & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port)))));
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
        = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                                             << 5U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                                 << 5U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__we) 
                  << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                                         << 2U)))) 
            & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
           | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__strobe) 
                         << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                                   << 2U)))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                                    << 1U)))) & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__id) 
                     << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                               << 1U)))));
    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                  "@(posedge tb_sys.clk)");
    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sys.clk)", 
                                                         "../verif/system/driver.sv", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port))))) {
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52____Vincrement1)))) {
                VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port);
                goto __Vlabel17;
            }
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/driver.sv", 
                                                                 59);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel17: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "../verif/system/driver.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53____Vincrement1 = 0U;
    {
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__timeout = 0U;
        while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                           << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port))))) {
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 24);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 25);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53____Vincrement1)))) {
                VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err = 0U;
                goto __Vlabel18;
            }
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data 
            = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 3U))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 3U)))) 
                       >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port 
                                          << 5U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id 
            = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                               >> 1U)) 
                                      << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U)))) 
                     >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port 
                               << 1U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err 
            = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                             << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                     >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port)));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/monitor.sv", 
                                                             37);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/monitor.sv", 
                                             38);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel18: ;
    }
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__ri 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__re 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_err 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__re;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__exp_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((0U != __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data)))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                     , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                     , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__exp_id
                     , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id));
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                     , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__addr;
    if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr]);
    }
    if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr]);
    }
    if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr]);
    }
    if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr]);
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr] = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__txn_id = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__port = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__strobe = 0x0fU;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__we = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port))));
    if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                         & ((IData)(7U) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
               | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__addr) 
                             << (0x0000000fU & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port)))));
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
        = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                                             << 5U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                                 << 5U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__we) 
                  << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                                         << 2U)))) 
            & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
           | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__strobe) 
                         << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                                   << 2U)))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                                    << 1U)))) & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__id) 
                     << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                               << 1U)))));
    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                  "@(posedge tb_sys.clk)");
    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_sys.clk)", 
                                                         "../verif/system/driver.sv", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port))))) {
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57____Vincrement1)))) {
                VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port);
                goto __Vlabel19;
            }
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/driver.sv", 
                                                                 59);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel19: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "../verif/system/driver.sv", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58____Vincrement1 = 0U;
    {
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__timeout = 0U;
        while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                           << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port))))) {
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 24);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 25);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__timeout);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__timeout 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58____Vincrement1)))) {
                VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err = 0U;
                goto __Vlabel20;
            }
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data 
            = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 3U))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 3U)))) 
                       >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port 
                                          << 5U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id 
            = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                               >> 1U)) 
                                      << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U)))) 
                     >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port 
                               << 1U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err 
            = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                             << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                     >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port)));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/monitor.sv", 
                                                             37);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/monitor.sv", 
                                             38);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel20: ;
    }
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__ri 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__re 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_err 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__re;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__exp_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__addr;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                             [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr] 
                             & (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data 
                                != vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr]))))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr
                     , '#',32,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                     [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr]
                     , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                     , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__exp_id
                     , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id)
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                     , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr
                     , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data
                     , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id));
    }
    VL_WRITEF_NX("[BP OK]  Port 1 unaffected\n",0);
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__60__port = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
           | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__60__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[60U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[62U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[64U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[66U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[68U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[70U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[72U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[74U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[76U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[78U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x0000000cU;
    while (VL_LTS_III(32, 0U, __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tests/backpressure.sv", 
                                                             32);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tests/backpressure.sv", 
                                         33);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=== BACKPRESSURE: done ===\n",0);
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__port = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__bank = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__row = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__test_id = ((IData)(1U) 
                                                  + vlSelfRef.tb_sys__DOT__u_env__DOT__test_id);
    VL_WRITEF_NX("\n=== RANDOM: 40 transactions ===\n",0);
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000028U, __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i)) {
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__port 
            = VL_URANDOM_RANGE_I(0U, 1U);
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__bank 
            = VL_URANDOM_RANGE_I(0U, 1U);
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__row 
            = VL_URANDOM_RANGE_I(0x00000050U, 0x00000078U);
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__row 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__row;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__bank 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__bank;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__Vfuncout = 0;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__Vfuncout 
            = ((0x0000007eU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__row 
                               << 1U)) | (1U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__bank));
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a 
            = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__Vfuncout;
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d 
            = VL_RANDOM_I();
        if ((1U & ((2U != VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i, (IData)(3U))) 
                   | (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a]))))) {
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__txn_id 
                = (3U & VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i, (IData)(4U)));
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__strobe = 0x0fU;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__port;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__ri = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__re = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__id 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__txn_id;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__strobe 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__strobe;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__we = 1U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__addr;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__port;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65____Vincrement1 = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__timeout = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
                = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                   | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port))));
            if (VL_LIKELY(((0x0dU >= (0x0000000fU & 
                                      ((IData)(7U) 
                                       * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port)))))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                    = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                                 & ((IData)(7U) 
                                                    * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port)))) 
                        & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
                       | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__addr) 
                                     << (0x0000000fU 
                                         & ((IData)(7U) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port)))));
            }
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                                  & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                                     << 5U)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                   | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data)) 
                      << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                         << 5U))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
                = (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
                   | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__we) 
                            << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                                 << 2U)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
                   | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__strobe) 
                                 << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                           << 2U)))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                = (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                              << 1U)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
                   | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__id) 
                               << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                         << 1U)))));
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/driver.sv", 
                                                                 53);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            {
                while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                                 >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port))))) {
                    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65____Vincrement1 
                        = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__timeout);
                    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__timeout 
                        = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65____Vincrement1;
                    if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65____Vincrement1)))) {
                        VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                                     , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port);
                        goto __Vlabel21;
                    }
                    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                                  "@(posedge tb_sys.clk)");
                    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_sys.clk)", 
                                                                         "../verif/system/driver.sv", 
                                                                         59);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
                __Vlabel21: ;
            }
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/driver.sv", 
                                                 61);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
                = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port))) 
                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__port;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66____Vincrement1 = 0U;
            {
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data = 0;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id = 0;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err = 0;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__timeout = 0U;
                while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                                 >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port))))) {
                    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                                  "@(posedge tb_sys.clk)");
                    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_sys.clk)", 
                                                                         "../verif/system/monitor.sv", 
                                                                         24);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                         nullptr, 
                                                         "../verif/system/monitor.sv", 
                                                         25);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66____Vincrement1 
                        = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__timeout);
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__timeout 
                        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66____Vincrement1;
                    if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66____Vincrement1)))) {
                        VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                     , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err = 0U;
                        goto __Vlabel22;
                    }
                }
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data 
                    = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                  >> 3U))) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                    >> 3U)))) 
                               >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port 
                                                  << 5U))));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id 
                    = (3U & (((0x0000000cU & ((IData)(
                                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 2U)) 
                              | (3U & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                               >> 1U)))) 
                             >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port 
                                       << 1U))));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err 
                    = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                     << 1U)) | (1U 
                                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port)));
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/monitor.sv", 
                                                                     37);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "../verif/system/monitor.sv", 
                                                     38);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vlabel22: ;
            }
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__ri 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__re 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_err 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__re;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__exp_id 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__txn_id;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__ri;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd;
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
            if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_err))) {
                VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else if (VL_UNLIKELY(((0U != __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data)))) {
                VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                             , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data);
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id) 
                        != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__exp_id))) {
                VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                             , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__exp_id
                             , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id));
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else {
                VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                             , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id);
            }
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__strobe;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__addr;
            if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr] 
                    = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr]) 
                       | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr] 
                    = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr]);
            }
            if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr] 
                    = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr]) 
                       | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr] 
                    = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr]);
            }
            if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr] 
                    = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr]) 
                       | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr] 
                    = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr]);
            }
            if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr] 
                    = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr]) 
                       | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr] 
                    = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr]);
            }
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr] = 1U;
        } else {
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__txn_id 
                = (3U & VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i, (IData)(4U)));
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a;
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__port;
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__ri = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__re = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__id 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__txn_id;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__strobe = 0x0fU;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__we = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__addr;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__port;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70____Vincrement1 = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__timeout = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
                = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                   | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port))));
            if (VL_LIKELY(((0x0dU >= (0x0000000fU & 
                                      ((IData)(7U) 
                                       * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port)))))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                    = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                                 & ((IData)(7U) 
                                                    * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port)))) 
                        & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
                       | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__addr) 
                                     << (0x0000000fU 
                                         & ((IData)(7U) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port)))));
            }
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                                  & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                                     << 5U)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
                   | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data)) 
                      << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                         << 5U))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
                = (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
                   | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__we) 
                            << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                                 << 2U)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
                   | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__strobe) 
                                 << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                           << 2U)))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                = (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                              << 1U)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
                   | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__id) 
                               << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                         << 1U)))));
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/driver.sv", 
                                                                 53);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            {
                while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                                 >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port))))) {
                    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70____Vincrement1 
                        = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__timeout);
                    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__timeout 
                        = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70____Vincrement1;
                    if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70____Vincrement1)))) {
                        VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                                     , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port);
                        goto __Vlabel23;
                    }
                    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                                  "@(posedge tb_sys.clk)");
                    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_sys.clk)", 
                                                                         "../verif/system/driver.sv", 
                                                                         59);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
                __Vlabel23: ;
            }
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/driver.sv", 
                                                 61);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
                = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port))) 
                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__port;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71____Vincrement1 = 0U;
            {
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data = 0;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id = 0;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err = 0;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__timeout = 0U;
                while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                                 >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port))))) {
                    Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                                  "@(posedge tb_sys.clk)");
                    co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_sys.clk)", 
                                                                         "../verif/system/monitor.sv", 
                                                                         24);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                         nullptr, 
                                                         "../verif/system/monitor.sv", 
                                                         25);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71____Vincrement1 
                        = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__timeout);
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__timeout 
                        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71____Vincrement1;
                    if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71____Vincrement1)))) {
                        VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                     , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err = 0U;
                        goto __Vlabel24;
                    }
                }
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data 
                    = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                  >> 3U))) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                    >> 3U)))) 
                               >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port 
                                                  << 5U))));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id 
                    = (3U & (((0x0000000cU & ((IData)(
                                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 2U)) 
                              | (3U & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                               >> 1U)))) 
                             >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port 
                                       << 1U))));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err 
                    = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                     << 1U)) | (1U 
                                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port)));
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/monitor.sv", 
                                                                     37);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "../verif/system/monitor.sv", 
                                                     38);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vlabel24: ;
            }
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data;
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__ri 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id;
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__re 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_err 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__re;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__exp_id 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__txn_id;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__ri;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__addr;
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
            if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_err))) {
                VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                             , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr);
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                     [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr] 
                                     & (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data 
                                        != vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr]))))) {
                VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                             , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr
                             , '#',32,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                             [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr]
                             , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data);
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id) 
                        != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__exp_id))) {
                VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                             , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__exp_id
                             , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id)
                             , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr);
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else {
                VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                             , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr
                             , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data
                             , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id));
            }
        }
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i);
    }
    VL_WRITEF_NX("=== RANDOM: done ===\n",0);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas[__Vi0] = 0;
    }
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__n = 0x00000064U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__test_id = ((IData)(1U) 
                                                  + vlSelfRef.tb_sys__DOT__u_env__DOT__test_id);
    VL_WRITEF_NX("\n=== STRESS: %0d W + %0d R ===\n",2
                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__n
                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__n);
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__n)) {
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__row 
            = ((IData)(0x00000082U) + __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i);
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__bank 
            = VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i, (IData)(2U));
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__Vfuncout = 0;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__Vfuncout 
            = ((0x0000007eU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__row 
                               << 1U)) | (1U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__bank));
        __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73____VlefCall_0__make_addr 
            = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__Vfuncout;
        if (VL_LIKELY(((0x63U >= (0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i))))) {
            __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs[(0x0000007fU 
                                                                    & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)] 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73____VlefCall_0__make_addr;
            __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas[(0x0000007fU 
                                                                    & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)] 
                = (0xf0000000U | ((__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i 
                                   << 8U) | __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i));
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas
                [(0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs
                [(0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)];
        } else {
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr = 0U;
        }
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__txn_id 
            = (3U & VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i, (IData)(4U)));
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__strobe = 0x0fU;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__port 
            = VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i, (IData)(2U));
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__we = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port))));
        if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                             & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
                   | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__addr) 
                                 << (0x0000000fU & 
                                     ((IData)(7U) * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port)))));
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                                 << 5U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                     << 5U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__we) 
                        << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                             << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
               | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__strobe) 
                             << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                       << 2U)))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                          << 1U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__id) 
                           << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                     << 1U)))));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/driver.sv", 
                                                             53);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port))))) {
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76____Vincrement1)))) {
                    VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port);
                    goto __Vlabel25;
                }
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/driver.sv", 
                                                                     59);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel25: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/driver.sv", 
                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77____Vincrement1 = 0U;
        {
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__timeout = 0U;
            while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port))))) {
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/monitor.sv", 
                                                                     24);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "../verif/system/monitor.sv", 
                                                     25);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77____Vincrement1)))) {
                    VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err = 0U;
                    goto __Vlabel26;
                }
            }
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data 
                = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                              >> 3U))) 
                             << 0x00000020U) | (QData)((IData)(
                                                               (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                >> 3U)))) 
                           >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port 
                                              << 5U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id 
                = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 1U)) 
                                          << 2U)) | 
                          (3U & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                         >> 1U)))) 
                         >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port 
                                   << 1U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err 
                = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                 << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port)));
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 37);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 38);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel26: ;
        }
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__ri 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__re 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_err 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__re;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__exp_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__ri;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((0U != __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data)))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                         , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                         , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__exp_id
                         , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id));
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                         , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id);
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr;
        if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr]);
        }
        if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr]);
        }
        if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr]);
        }
        if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr]);
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__n)) {
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__txn_id 
            = (3U & VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i, (IData)(4U)));
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__addr 
            = ((0x63U >= (0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i))
                ? __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs
               [(0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i)]
                : 0U);
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__port 
            = VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i, (IData)(2U));
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__strobe = 0x0fU;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__we = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (3U & ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port))));
        if (VL_LIKELY(((0x0dU >= (0x0000000fU & ((IData)(7U) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ ((IData)(0x007fU) << (0x0000000fU 
                                             & ((IData)(7U) 
                                                * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)) 
                   | (0x3fffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__addr) 
                                 << (0x0000000fU & 
                                     ((IData)(7U) * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port)))));
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                                 << 5U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                     << 5U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (3U & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__we) 
                        << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ ((IData)(0x0fU) << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                             << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe)) 
               | (0x00ffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__strobe) 
                             << (7U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                       << 2U)))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(3U) << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                          << 1U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__id) 
                           << (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                     << 1U)))));
        Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                      "@(posedge tb_sys.clk)");
        co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_sys.clk)", 
                                                             "../verif/system/driver.sv", 
                                                             53);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port))))) {
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000014U, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81____Vincrement1)))) {
                    VL_WRITEF_NX("[DRV ERROR] timeout port=%0d\n",1
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port);
                    goto __Vlabel27;
                }
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/driver.sv", 
                                                                     59);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel27: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "../verif/system/driver.sv", 
                                             61);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((~ ((IData)(1U) << (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82____Vincrement1 = 0U;
        {
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__timeout = 0U;
            while ((1U & (~ ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                             >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port))))) {
                Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                              "@(posedge tb_sys.clk)");
                co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_sys.clk)", 
                                                                     "../verif/system/monitor.sv", 
                                                                     24);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "../verif/system/monitor.sv", 
                                                     25);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__timeout);
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__timeout 
                    = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x0000012cU, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82____Vincrement1)))) {
                    VL_WRITEF_NX("[MON ERR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err = 0U;
                    goto __Vlabel28;
                }
            }
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data 
                = (IData)(((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                              >> 3U))) 
                             << 0x00000020U) | (QData)((IData)(
                                                               (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                >> 3U)))) 
                           >> (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port 
                                              << 5U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id 
                = (3U & (((0x0000000cU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 1U)) 
                                          << 2U)) | 
                          (3U & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                         >> 1U)))) 
                         >> (3U & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port 
                                   << 1U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err 
                = (1U & (((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                 << 1U)) | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                         >> (1U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port)));
            Vtb_sys___024root____VbeforeTrig_hc982ec79__0(vlSelf, 
                                                          "@(posedge tb_sys.clk)");
            co_await vlSelfRef.__VtrigSched_hc982ec79__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_sys.clk)", 
                                                                 "../verif/system/monitor.sv", 
                                                                 37);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "../verif/system/monitor.sv", 
                                                 38);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel28: ;
        }
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__ri 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__re 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_err 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__re;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__exp_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__ri;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__addr;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                 [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr] 
                                 & (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data 
                                    != vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr]))))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr
                         , '#',32,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                         [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr]
                         , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                         , '#',2,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__exp_id
                         , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id)
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                         , '#',7,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr
                         , '#',32,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data
                         , '#',2,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id));
        }
        __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i);
    }
    VL_WRITEF_NX("=== STRESS: done ===\n",0);
    VL_WRITEF_NX("[SCOREBOARD] Total checks: %0d  Errors: %0d\n",2
                 , '~',32,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count
                 , '~',32,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors 
        = vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count;
    VL_WRITEF_NX("\n========================================\n",0);
    __Vtemp_1 = ((0U == vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors)
                  ? "ALL PASSED"s : VL_SFORMATF_N_NX("%0d ERRORS",1
                                                     , '~',32,vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors) );
    VL_WRITEF_NX("  RESULT: %s\n========================================\n\n",1
                 , 'S',&(__Vtemp_1));
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 113, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_sys___024root___eval_initial__TOP__Vtiming__2(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 
                                             25);
        vlSelfRef.tb_sys__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_sys__DOT__clk)));
    }
    co_return;
}

bool Vtb_sys___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___trigger_anySet__act\n"); );
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

void Vtb_sys___024root___nba_sequent__TOP__0(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___nba_sequent__TOP__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val;
    __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val = 0;
    CData/*0:0*/ __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__en;
    __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__en = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val;
    __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val = 0;
    CData/*0:0*/ __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__en;
    __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__en = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val;
    __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val = 0;
    CData/*0:0*/ __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__en;
    __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__en = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val;
    __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val = 0;
    CData/*0:0*/ __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__en;
    __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__en = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val;
    __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val = 0;
    CData/*0:0*/ __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__en;
    __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__en = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_12;
    __VdfgRegularize_hebeb780c_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_13;
    __VdfgRegularize_hebeb780c_0_13 = 0;
    QData/*34:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    QData/*34:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0;
    QData/*45:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    QData/*45:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v0;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v0;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v1;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v1;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v2;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v2;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v3;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v3;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v4;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v4;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v5;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v5;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v6;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v6;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v7;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v7;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v8;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v8;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v9;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v9;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v10;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v10;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v11;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v11;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v12;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v12 = 0;
    // Body
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v0 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v1 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v2 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v3 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v4 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v5 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v6 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v7 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v8 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v9 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v10 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v11 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v12 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 0U;
    if (vlSelfRef.tb_sys__DOT__rst_n) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__i = 2U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__b = 2U;
        if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
              >> 1U) & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
             & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr)));
        }
        if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
              >> 1U) & (2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
                                     >> 0x00000020U))) 
                    << 3U) | (QData)((IData)(((6U & 
                                               ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                >> 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                    >> 1U))))));
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr)));
        }
        if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
             & (2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data)) 
                    << 3U) | (QData)((IData)(((6U & 
                                               ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))));
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr)));
        }
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy 
            = (3U & ((2U == ((0xfffffffeU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                             & ((2U 
                                                 > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                << 1U))) 
                             | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                   >> 1U)))) ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))
                      : ((1U == ((0xfffffffeU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                                 & ((2U 
                                                     > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                    << 1U))) 
                                 | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                    & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                       >> 1U)))) ? 
                         ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy) 
                          - (IData)(1U)) : (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy 
            = (3U & ((2U == ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                               & (2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                              << 1U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                        & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready))))
                      ? ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))
                      : ((1U == ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                   & (2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))) 
                                  << 1U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                            & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready))))
                          ? ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy) 
                             - (IData)(1U)) : (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__en 
            = (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[0U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_0__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v0 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_0__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v0 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__en 
            = (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept) 
                     >> 1U));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[1U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_0__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__85__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v1 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_0__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v1 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__en 
            = (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[2U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_1__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v2 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_1__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v2 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__en 
            = (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue) 
                     >> 1U));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[3U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_1__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__86__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v3 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_1__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v3 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__en 
            = (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[4U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v4 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v4 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__en 
            = (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict) 
                     >> 1U));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[5U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v5 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v5 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__en 
            = (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict) 
                     >> 2U));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[6U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v6 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v6 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__en 
            = (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict) 
                     >> 3U));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[7U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_2__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__87__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v7 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v7 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__en 
            = (1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready)));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[8U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_3__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v8 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_3__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v8 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__en 
            = (1U & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready) 
                        >> 1U)));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[9U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_3__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__88__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v9 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_3__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v9 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__en 
            = (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[10U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_4__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v10 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_4__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v10 = 1U;
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__en 
            = (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle) 
                     >> 1U));
        __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[11U];
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_4__sat_inc 
            = ((IData)(__Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__en)
                ? ((0xffffffffU == __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val)
                    ? __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val
                    : ((IData)(1U) + __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val))
                : __Vfunc_tb_sys__DOT__u_dut__DOT__u_perf__DOT__sat_inc__89__val);
        __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v11 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_4__sat_inc;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v11 = 1U;
        if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
              >> 1U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)((0x0000007fU & 
                                     ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                      >> 7U)))) << 0x00000027U) 
                   | (((QData)((IData)((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data 
                                        >> 0x00000020U))) 
                       << 7U) | (QData)((IData)(((0x00000078U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                     >> 1U)) 
                                                 | ((6U 
                                                     & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                          >> 1U))))))));
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr)));
        }
        if (((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
             & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = (((QData)((IData)((0x0000007fU & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)))) 
                    << 0x00000027U) | (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data)) 
                                        << 7U) | (QData)((IData)(
                                                                 ((0x00000078U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                      << 3U)) 
                                                                  | ((6U 
                                                                      & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))));
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0 = 1U;
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr)));
        }
        if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
             & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop) 
             & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr)));
        }
        if (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_req) {
            vlSelfRef.tb_sys__DOT__csr_rdata = ((0x0bU 
                                                 >= (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_addr))
                                                 ? vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter
                                                [vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_addr]
                                                 : 0U);
        }
        if (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready) {
            if (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err) {
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err = 1U;
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata = 0U;
            } else {
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err = 0U;
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata 
                    = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr];
            }
            vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id;
            vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid;
        }
        if (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe 
                = (0x0000000fU & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                          >> 3U)));
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we 
                = (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt));
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err = 0U;
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id 
                = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port) 
                    << 2U) | (3U & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                            >> 1U))));
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid 
                = (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant));
        }
        if (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready) {
            if (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err) {
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err = 1U;
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata = 0U;
            } else {
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err = 0U;
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we 
                    = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we;
                vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata 
                    = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr];
            }
            vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id;
            vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid;
        }
        if (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe 
                = (0x0000000fU & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                          >> 3U)));
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we 
                = (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt));
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err = 0U;
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id 
                = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__) 
                    << 2U) | (3U & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                            >> 1U))));
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid 
                = (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant));
        }
        if ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
              & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready)) 
             & VL_LTS_III(32, 1U, VL_COUNTONES_I((3U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                     >> 2U)))))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr 
                = (1U & VL_MODDIVS_III(32, ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port)), (IData)(2U)));
        }
        if ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
              & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready)) 
             & VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr 
                = (1U & VL_MODDIVS_III(32, ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)), (IData)(2U)));
        }
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy 
            = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
    } else {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__i = 0x0000000cU;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy = 0U;
        __VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v12 = 1U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr = 0U;
        vlSelfRef.tb_sys__DOT__csr_rdata = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid = 0U;
    }
    vlSelfRef.tb_sys__DOT__csr_ack = ((IData)(vlSelfRef.tb_sys__DOT__rst_n) 
                                      && (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_req));
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem__v0;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[0U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v0;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[1U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v1;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[2U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v2;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[3U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v3;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v4) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[4U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v4;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v5) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[5U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v5;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v6) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[6U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v6;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v7) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[7U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v7;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v8) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[8U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v8;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v9) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[9U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v9;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v10) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[10U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v10;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v11) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[11U] 
            = __VdlyVal__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v11;
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter__v12) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[0U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[1U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[2U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[3U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[4U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[5U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[6U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[7U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[8U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[9U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[10U] = 0U;
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[11U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready 
        = (((2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
            << 1U) | (2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__rst_n))) 
           || (2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready 
        = ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__rst_n))) 
           || (2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    __VdfgRegularize_hebeb780c_0_10 = (1U & (IData)(
                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                                     >> 0x00000027U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[0U] 
        = (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[1U] 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
            << 0x0000000eU) | (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                       >> 0x00000020U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[2U] 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
            >> 0x00000012U) | ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                        >> 0x00000020U)) 
                               << 0x0000000eU));
    __VdfgRegularize_hebeb780c_0_12 = (1U & (IData)(
                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                                     >> 0x00000027U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err) 
            << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we) 
            << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata 
        = (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id) 
            << 3U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports 
        = ((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id) 
                  >> 1U)) | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id) 
                                   >> 2U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid) 
            << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((1U & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
                & (~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports) 
                            >> 1U))) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports)) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports) 
                         >> 1U)) & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
                                    >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready) 
            << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready));
    __VdfgRegularize_hebeb780c_0_11 = (1U & (~ ((0U 
                                                 == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                | (IData)(__VdfgRegularize_hebeb780c_0_10))));
    __VdfgRegularize_hebeb780c_0_13 = (1U & (~ ((0U 
                                                 == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                | (IData)(__VdfgRegularize_hebeb780c_0_12))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data = 0ULL;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports));
    if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (3U & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                 << 5U)))) 
                & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
               | ((QData)((IData)(((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))
                                    ? 0U : (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata)))) 
                  << (0x0000003fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                     << 5U))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (3U & ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err)) 
                        << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
            = (((~ ((IData)(3U) << (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                          << 1U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id)) 
               | (0x0fU & ((3U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id)) 
                           << (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                     << 1U)))));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports) 
                 >> 1U));
    if ((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (3U & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                 << 5U)))) 
                & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
               | ((QData)((IData)(((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))
                                    ? 0U : (IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata 
                                                    >> 0x20U))))) 
                  << (0x0000003fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                     << 5U))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (3U & ((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err) 
                               >> 1U)) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
            = (((~ ((IData)(3U) << (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                          << 1U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id)) 
               | (0x0fU & ((3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id) 
                                  >> 3U)) << (3U & 
                                              ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                               << 1U)))));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid)) 
                 | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted) 
                    >> 1U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid)) 
                 | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid 
        = (((IData)(__VdfgRegularize_hebeb780c_0_11) 
            << 1U) | (IData)(__VdfgRegularize_hebeb780c_0_13));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant 
        = (3U & ((((0x0000000cU & (((~ (((0x0000000fU 
                                          & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                         >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                        - (IData)(1U))) 
                                    & ((0x0000000fU 
                                        & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                       >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))) 
                                   << 2U)) | (3U & 
                                              ((~ (
                                                   ((0x0000000fU 
                                                     & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                         << 2U) 
                                                        | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                               & ((0x0000000fU 
                                                   & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))))) 
                  << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                 >> 2U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
        = ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
             & (IData)(__VdfgRegularize_hebeb780c_0_10)) 
            << 3U) | ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)) 
                        & (IData)(__VdfgRegularize_hebeb780c_0_12)) 
                       << 2U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__ = 0U;
    if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__ = 0U;
    }
    if ((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__ = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle 
        = (3U & (~ (((0U != (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                   >> 2U))) << 1U) 
                    | ((IData)(__VdfgRegularize_hebeb780c_0_11) 
                       | (IData)(__VdfgRegularize_hebeb780c_0_13)))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant 
        = (3U & ((((0x0000000cU & (((~ (((0x0000000fU 
                                          & ((0x0000000cU 
                                              & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                   >> 2U)))) 
                                         >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                        - (IData)(1U))) 
                                    & ((0x0000000fU 
                                        & ((0x0000000cU 
                                            & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                           | (3U & 
                                              ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                               >> 2U)))) 
                                       >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))) 
                                   << 2U)) | (3U & 
                                              ((~ (
                                                   ((0x0000000fU 
                                                     & ((0x0000000cU 
                                                         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                        | (3U 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 2U)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                               & ((0x0000000fU 
                                                   & ((0x0000000cU 
                                                       & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                      | (3U 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 2U)))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))))) 
                  << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                 >> 2U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict 
        = ((0x0000000cU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                           & (((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                               & (- (IData)((VL_LTS_III(32, 1U, 
                                                        VL_COUNTONES_I(
                                                                       (3U 
                                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                           >> 2U)))) 
                                             & (0U 
                                                != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)))))) 
                              << 2U))) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                          & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                             & (- (IData)(
                                                          (VL_LTS_III(32, 1U, 
                                                                      VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                           & (0U 
                                                              != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port = 0U;
    if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port = 0U;
    }
    if ((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port = 1U;
    }
}

void Vtb_sys___024root___nba_sequent__TOP__1(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___nba_sequent__TOP__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3;
    __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 = 0;
    // Body
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 = 0U;
    __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 = 0U;
    if (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) {
        if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data);
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 8U));
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 0x10U));
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 
                = (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data 
                   >> 0x18U);
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3 = 1U;
        }
    }
    if (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we) {
        if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data);
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 8U));
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data 
                                  >> 0x10U));
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe))) {
            __VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 
                = (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data 
                   >> 0x18U);
            __VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 
                = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr;
            __VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3 = 1U;
        }
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0));
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0));
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3) 
                  << 0x00000018U));
    }
}

void Vtb_sys___024root___nba_sequent__TOP__2(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___nba_sequent__TOP__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    // Body
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((0xfffffff8U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U))) 
                                          | (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we)))))));
    if (vlSelfRef.tb_sys__DOT__rst_n) {
        if (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data 
                = (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                           >> 7U));
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr 
                = (0x0000003fU & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                          >> 0x00000028U)));
        }
        if (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data 
                = (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                           >> 7U));
            vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr 
                = (0x0000003fU & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                          >> 0x00000028U)));
        }
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((0xfffffff8U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U))) 
                                          | (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we)))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
        = (0x00003fffffffffffULL & ((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                                                      [
                                                      (((IData)(0x0000002dU) 
                                                        + 
                                                        (0x0000007fU 
                                                         & ((IData)(0x0000002eU) 
                                                            * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port)))) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & ((IData)(0x0000002eU) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port))))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & ((IData)(0x0000002eU) 
                                                    * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port)))))) 
                                     | (((0U == (0x0000001fU 
                                                 & ((IData)(0x0000002eU) 
                                                    * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port))))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + 
                                                            (0x0000007fU 
                                                             & ((IData)(0x0000002eU) 
                                                                * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port)))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & ((IData)(0x0000002eU) 
                                                    * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port)))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                                                           [
                                                           (3U 
                                                            & (((IData)(0x0000002eU) 
                                                                * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port)) 
                                                               >> 5U))])) 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000002eU) 
                                                  * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port)))))) 
                                    & (- (QData)((IData)(
                                                         (0x5bU 
                                                          >= 
                                                          (0x0000007fU 
                                                           & ((IData)(0x0000002eU) 
                                                              * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port)))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
        = (0x00003fffffffffffULL & ((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                                                      [
                                                      (((IData)(0x0000002dU) 
                                                        + 
                                                        (0x0000007fU 
                                                         & ((IData)(0x0000002eU) 
                                                            * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)))) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & ((IData)(0x0000002eU) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__))))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & ((IData)(0x0000002eU) 
                                                    * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)))))) 
                                     | (((0U == (0x0000001fU 
                                                 & ((IData)(0x0000002eU) 
                                                    * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__))))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + 
                                                            (0x0000007fU 
                                                             & ((IData)(0x0000002eU) 
                                                                * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & ((IData)(0x0000002eU) 
                                                    * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                                                           [
                                                           (3U 
                                                            & (((IData)(0x0000002eU) 
                                                                * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)) 
                                                               >> 5U))])) 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000002eU) 
                                                  * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)))))) 
                                    & (- (QData)((IData)(
                                                         (0x5bU 
                                                          >= 
                                                          (0x0000007fU 
                                                           & ((IData)(0x0000002eU) 
                                                              * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    __VdfgRegularize_hebeb780c_0_6 = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                      & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)));
    __VdfgRegularize_hebeb780c_0_9 = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready) 
                                      & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port)) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_9));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_9));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
           | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
           | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8));
}

void Vtb_sys___024root___timing_ready(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___timing_ready\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc982ec79__0.ready("@(posedge tb_sys.clk)");
    }
}

void Vtb_sys___024root___timing_resume(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___timing_resume\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc982ec79__0.moveToResumeQueue(
                                                          "@(posedge tb_sys.clk)");
    vlSelfRef.__VtrigSched_hc982ec79__0.resume("@(posedge tb_sys.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sys___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_sys___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_sys___024root___eval_phase__act(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_phase__act\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_sys__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_sys__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__clk__0 
            = vlSelfRef.tb_sys__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__rst_n__0 
            = vlSelfRef.tb_sys__DOT__rst_n;
    }
    Vtb_sys___024root___timing_ready(vlSelf);
    Vtb_sys___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sys___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_sys___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_sys___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_sys___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept 
                        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready));
                    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue 
                        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                           & (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
                    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy;
                    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                          >> 1U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready))) {
                        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
                    }
                    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                                     - (IData)(1U)));
                    }
                    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy;
                    if (((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))) {
                        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
                    }
                    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop) 
                         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                                     - (IData)(1U)));
                    }
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_sys___024root___eval_phase__inact(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_phase__inact\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_sys___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_sys___024root___eval_phase__nba(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_phase__nba\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_sys___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys___024root___nba_sequent__TOP__1(vlSelf);
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_comb__TOP__0
                    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue 
                        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                           & (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                               << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
                    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept 
                        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready));
                }
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys___024root___nba_sequent__TOP__2(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_comb__TOP__1
                    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy;
                    if (((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))) {
                        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
                    }
                    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop) 
                         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                                     - (IData)(1U)));
                    }
                    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy;
                    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                          >> 1U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready))) {
                        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
                    }
                    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)))) {
                        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
                            = (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                                     - (IData)(1U)));
                    }
                }
            }
        }
        Vtb_sys___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_sys___024root___eval(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sys___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_sys___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_sys___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_sys___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_sys___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_sys___024root____VbeforeTrig_hc982ec79__0(Vtb_sys___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root____VbeforeTrig_hc982ec79__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_sys__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__clk__0 
        = vlSelfRef.tb_sys__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_sys___024root___eval_debug_assertions(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_debug_assertions\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
