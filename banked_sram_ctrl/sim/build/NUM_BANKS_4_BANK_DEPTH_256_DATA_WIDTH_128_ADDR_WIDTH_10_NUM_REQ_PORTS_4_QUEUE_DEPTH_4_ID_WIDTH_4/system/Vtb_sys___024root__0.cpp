// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sys.h for the primary calling header

#include "Vtb_sys__pch.h"

extern const VlWide<16>/*511:0*/ Vtb_sys__ConstPool__CONST_h93e1b771_0;
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
        while (VL_GTES_III(32, 0x000003ffU, __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[(0x000003ffU 
                                                                     & __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i)] = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[(0x000003ffU 
                                                                    & __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i)][0U] = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[(0x000003ffU 
                                                                    & __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i)][1U] = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[(0x000003ffU 
                                                                    & __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i)][2U] = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[(0x000003ffU 
                                                                    & __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i)][3U] = 0U;
            __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vinline_0__eval_initial__TOP_tb_sys__DOT__u_env__DOT__u_sb__DOT__unnamedblk1__DOT__i);
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready = 0x0fU;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr = 0ULL;
        VL_ASSIGN_W(512, vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, Vtb_sys__ConstPool__CONST_h93e1b771_0);
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe = 0ULL;
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
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a;
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a = 0;
    SData/*9:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__timeout = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_err = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe = 0;
    SData/*9:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__addr = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__timeout = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_err = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_2__make_addr;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_2__make_addr = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_1__make_addr;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_1__make_addr = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_0__make_addr;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_0__make_addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p = 0;
    VlUnpacked<SData/*9:0*/, 4> __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[__Vi0] = 0;
    }
    SData/*9:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__row = 0;
    SData/*9:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__timeout = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_err = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__timeout = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_err = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__addr = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__timeout = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__addr = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__timeout = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_err = 0;
    SData/*9:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__timeout = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_err = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__addr = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__timeout = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__exp_id;
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
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__hold_ready__46__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__hold_ready__46__port = 0;
    SData/*9:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__49__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__49__port = 0;
    SData/*9:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__timeout = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_err = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__addr = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__timeout = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__60__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__60__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d);
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__port;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__port = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__bank;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__bank = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__row;
    __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__row = 0;
    SData/*9:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__timeout = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_err = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__addr = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__timeout = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_err = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73____VlefCall_0__make_addr;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73____VlefCall_0__make_addr = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i = 0;
    VlUnpacked<SData/*9:0*/, 100> __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs;
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__n;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__n = 0;
    SData/*9:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__Vfuncout;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__bank;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__bank = 0;
    IData/*31:0*/ __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__row;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__row = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__timeout = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_err = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data);
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__port;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__port = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__addr = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__txn_id = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__ri;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__ri = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__re;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__re = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data);
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__addr = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__we;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__we = 0;
    SData/*15:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__strobe = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__id = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__timeout = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82____Vincrement1;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__timeout;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__timeout = 0;
    SData/*9:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr = 0;
    VlWide<4>/*127:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data);
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id = 0;
    CData/*3:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__exp_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__exp_id = 0;
    CData/*0:0*/ __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_err;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_err = 0;
    VlWide<16>/*511:0*/ __Vtemp_10;
    VlWide<16>/*511:0*/ __Vtemp_18;
    VlWide<16>/*511:0*/ __Vtemp_25;
    VlWide<16>/*511:0*/ __Vtemp_33;
    VlWide<16>/*511:0*/ __Vtemp_41;
    VlWide<16>/*511:0*/ __Vtemp_48;
    VlWide<16>/*511:0*/ __Vtemp_57;
    VlWide<16>/*511:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_66;
    VlWide<4>/*127:0*/ __Vtemp_67;
    VlWide<16>/*511:0*/ __Vtemp_74;
    VlWide<16>/*511:0*/ __Vtemp_82;
    VlWide<16>/*511:0*/ __Vtemp_89;
    VlWide<16>/*511:0*/ __Vtemp_97;
    VlWide<4>/*127:0*/ __Vtemp_99;
    VlWide<4>/*127:0*/ __Vtemp_100;
    VlWide<16>/*511:0*/ __Vtemp_110;
    VlWide<16>/*511:0*/ __Vtemp_118;
    std::string __Vtemp_119;
    IData/*31:0*/ __VExpandSel_WordIdx_5;
    IData/*31:0*/ __VExpandSel_WordIdx_10;
    IData/*31:0*/ __VExpandSel_WordIdx_15;
    IData/*31:0*/ __VExpandSel_WordIdx_20;
    IData/*31:0*/ __VExpandSel_WordIdx_25;
    IData/*31:0*/ __VExpandSel_WordIdx_30;
    IData/*31:0*/ __VExpandSel_WordIdx_35;
    IData/*31:0*/ __VExpandSel_WordIdx_40;
    IData/*31:0*/ __VExpandSel_WordIdx_45;
    IData/*31:0*/ __VExpandSel_WordIdx_50;
    IData/*31:0*/ __VExpandSel_WordIdx_55;
    IData/*31:0*/ __VExpandSel_WordIdx_60;
    IData/*31:0*/ __VExpandSel_WordIdx_65;
    IData/*31:0*/ __VExpandSel_WordIdx_70;
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
    while (VL_GTES_III(32, 0x000003ffU, __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a)) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[(0x000003ffU 
                                                                & __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a)][0U] = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[(0x000003ffU 
                                                                & __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a)][1U] = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[(0x000003ffU 
                                                                & __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a)][2U] = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[(0x000003ffU 
                                                                & __Vtask_tb_sys__DOT__u_env__DOT__reset_dut__0__unnamedblk1__DOT__a)][3U] = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[(0x000003ffU 
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
    while (VL_GTS_III(32, 4U, __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b)) {
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__row = 1U;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__bank 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__Vfuncout = 0;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__Vfuncout 
            = ((0x000003fcU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__row 
                               << 2U)) | (3U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__bank));
        __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a 
            = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__3__Vfuncout;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__txn_id 
            = (0x0000000fU & __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b);
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__strobe = 0xffffU;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[0U] 
            = (0xa0000000U | __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b);
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[1U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[2U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[3U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__port = 0U;
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd);
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__we = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[3U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__addr)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port)))));
        }
        VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                                  << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__we) 
                           << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                                 << 4U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__strobe)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                     << 4U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port 
                                      << 2U)))));
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
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port))))) {
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
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__5__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6____Vincrement1 = 0U;
        {
            VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__timeout = 0U;
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port))))) {
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
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[0U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[1U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[2U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[3U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err = 0U;
                    goto __Vlabel1;
                }
            }
            __Vtemp_10[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_10[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_10[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                  >> 5U));
            __Vtemp_10[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                  >> 5U));
            __Vtemp_10[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_10[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_10[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                  >> 5U));
            __Vtemp_10[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                  >> 5U));
            __Vtemp_10[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_10[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_10[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_10[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __Vtemp_10[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 5U));
            __Vtemp_10[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                   >> 5U));
            __Vtemp_10[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_10[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __VExpandSel_WordIdx_5 = (0x0000000cU & 
                                      (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port 
                                       << 2U));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[0U] 
                = __Vtemp_10[__VExpandSel_WordIdx_5];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[1U] 
                = __Vtemp_10[((IData)(1U) + __VExpandSel_WordIdx_5)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[2U] 
                = __Vtemp_10[((IData)(2U) + __VExpandSel_WordIdx_5)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[3U] 
                = __Vtemp_10[((IData)(3U) + __VExpandSel_WordIdx_5)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                       << 3U)) | (0x0000000fU 
                                                  & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                     >> 1U))) 
                                    << 8U) | ((0x000000f0U 
                                               & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  << 3U)) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                    >> 1U)))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port 
                                       << 2U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_err 
                = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                   << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                           << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                            << 1U)) 
                                     | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__port)));
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
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__6__got_data[3U];
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
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__rd[3U];
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((0U != (((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data[0U] 
                                          | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data[1U]) 
                                         | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data[2U]) 
                                        | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data[3U]))))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                         , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_data.data());
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                         , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__exp_id
                         , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id));
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                         , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__7__got_id);
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__data[3U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__4__addr;
        if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U]);
        }
        if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U]);
        }
        if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U]);
        }
        if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][0U]);
        }
        if ((0x00000010U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U]);
        }
        if ((0x00000020U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U]);
        }
        if ((0x00000040U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U]);
        }
        if ((0x00000080U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][1U]);
        }
        if ((0x00000100U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U]);
        }
        if ((0x00000200U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U]);
        }
        if ((0x00000400U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U]);
        }
        if ((0x00000800U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][2U]);
        }
        if ((0x00001000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U]);
        }
        if ((0x00002000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U]);
        }
        if ((0x00004000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U]);
        }
        if ((0x00008000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr][3U]);
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__8__addr] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk2__DOT__b);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b)) {
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__row = 1U;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__bank 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__Vfuncout = 0;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__Vfuncout 
            = ((0x000003fcU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__row 
                               << 2U)) | (3U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__bank));
        __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a 
            = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__9__Vfuncout;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__txn_id 
            = (0x0000000fU & ((IData)(4U) + __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__unnamedblk3__DOT__b));
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_smoke__2__a;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__port = 0U;
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd);
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__strobe = 0xffffU;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__we = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data[0U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data[1U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data[2U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data[3U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__addr)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port)))));
        }
        VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                                  << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__we) 
                           << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                                 << 4U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__strobe)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                     << 4U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port 
                                      << 2U)))));
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
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port))))) {
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
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__11__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12____Vincrement1 = 0U;
        {
            VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__timeout = 0U;
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port))))) {
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
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[0U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[1U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[2U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[3U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err = 0U;
                    goto __Vlabel3;
                }
            }
            __Vtemp_18[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_18[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_18[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                  >> 5U));
            __Vtemp_18[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                  >> 5U));
            __Vtemp_18[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_18[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_18[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                  >> 5U));
            __Vtemp_18[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                  >> 5U));
            __Vtemp_18[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_18[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_18[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_18[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __Vtemp_18[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 5U));
            __Vtemp_18[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                   >> 5U));
            __Vtemp_18[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_18[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __VExpandSel_WordIdx_10 = (0x0000000cU 
                                       & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port 
                                          << 2U));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[0U] 
                = __Vtemp_18[__VExpandSel_WordIdx_10];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[1U] 
                = __Vtemp_18[((IData)(1U) + __VExpandSel_WordIdx_10)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[2U] 
                = __Vtemp_18[((IData)(2U) + __VExpandSel_WordIdx_10)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[3U] 
                = __Vtemp_18[((IData)(3U) + __VExpandSel_WordIdx_10)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                       << 3U)) | (0x0000000fU 
                                                  & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                     >> 1U))) 
                                    << 8U) | ((0x000000f0U 
                                               & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  << 3U)) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                    >> 1U)))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port 
                                       << 2U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_err 
                = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                   << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                           << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                            << 1U)) 
                                     | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__port)));
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
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__12__got_data[3U];
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
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__rd[3U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__10__addr;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                 [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr] 
                                 & (0U != ((((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data[0U] 
                                              ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                              [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr][0U]) 
                                             | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data[1U] 
                                                ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr][1U])) 
                                            | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data[2U] 
                                               ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr][2U])) 
                                           | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data[3U] 
                                              ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                              [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr][3U]))))))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr
                         , '#',128,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                         [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr].data()
                         , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data.data());
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                         , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__exp_id
                         , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id)
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__addr
                         , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_data.data()
                         , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__13__got_id));
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
        = ((0x000003fcU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__row 
                           << 2U)) | (3U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__bank));
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_0__make_addr 
        = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__15__Vfuncout;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_0__make_addr;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__row = 0x0000000bU;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__bank = 0U;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__Vfuncout = 0;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__Vfuncout 
        = ((0x000003fcU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__row 
                           << 2U)) | (3U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__bank));
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_1__make_addr 
        = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__16__Vfuncout;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_1__make_addr;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__txn_id = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__strobe = 0xffffU;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[0U] = 0xaaaa0000U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[1U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[2U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[3U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__port = 0U;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd);
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__we = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[3U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__addr)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port)))));
    }
    VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                                              << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__data);
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__we) 
                     << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                                             << 4U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__strobe)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                                 << 4U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(0x000fU) << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                                                  << 2U)))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__id) 
                           << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port 
                                              << 2U)))));
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
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port))))) {
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
        = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__18__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19____Vincrement1 = 0U;
    {
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data);
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__timeout = 0U;
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port))))) {
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
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[0U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[1U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[2U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[3U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err = 0U;
                goto __Vlabel5;
            }
        }
        __Vtemp_25[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_25[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_25[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_25[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_25[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_25[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_25[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_25[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_25[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_25[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_25[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_25[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __Vtemp_25[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                               >> 5U));
        __Vtemp_25[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                               >> 5U));
        __Vtemp_25[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_25[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __VExpandSel_WordIdx_15 = (0x0000000cU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port 
                                                  << 2U));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[0U] 
            = __Vtemp_25[__VExpandSel_WordIdx_15];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[1U] 
            = __Vtemp_25[((IData)(1U) + __VExpandSel_WordIdx_15)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[2U] 
            = __Vtemp_25[((IData)(2U) + __VExpandSel_WordIdx_15)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[3U] 
            = __Vtemp_25[((IData)(3U) + __VExpandSel_WordIdx_15)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_id 
            = (0x0000000fU & (((((0x000000f0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                 << 3U)) 
                                 | (0x0000000fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 1U))) 
                                << 8U) | ((0x000000f0U 
                                           & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              << 3U)) 
                                          | (0x0000000fU 
                                             & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                >> 1U)))) 
                              >> (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port 
                                                 << 2U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_err 
            = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                               << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                       << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                        << 1U)) | (1U 
                                                   & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                     >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__port)));
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
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__19__got_data[3U];
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
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__rd[3U];
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((0U != (((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data[0U] 
                                      | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data[1U]) 
                                     | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data[2U]) 
                                    | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data[3U]))))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                     , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_data.data());
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                     , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__exp_id
                     , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id));
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                     , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__20__got_id);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__data[3U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__17__addr;
    if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U]);
    }
    if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U]);
    }
    if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U]);
    }
    if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][0U]);
    }
    if ((0x00000010U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U]);
    }
    if ((0x00000020U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U]);
    }
    if ((0x00000040U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U]);
    }
    if ((0x00000080U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][1U]);
    }
    if ((0x00000100U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U]);
    }
    if ((0x00000200U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U]);
    }
    if ((0x00000400U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U]);
    }
    if ((0x00000800U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][2U]);
    }
    if ((0x00001000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U]);
    }
    if ((0x00002000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U]);
    }
    if ((0x00004000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U]);
    }
    if ((0x00008000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr][3U]);
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__21__addr] = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__txn_id = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__strobe = 0xffffU;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[0U] = 0xbbbb1111U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[1U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[2U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[3U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__port = 1U;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd);
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__we = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[3U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__addr)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port)))));
    }
    VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                                              << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__data);
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__we) 
                     << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                                             << 4U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__strobe)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                                 << 4U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(0x000fU) << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                                                  << 2U)))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__id) 
                           << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port 
                                              << 2U)))));
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
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port))))) {
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
        = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__23__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24____Vincrement1 = 0U;
    {
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data);
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__timeout = 0U;
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port))))) {
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
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[0U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[1U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[2U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[3U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err = 0U;
                goto __Vlabel7;
            }
        }
        __Vtemp_33[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_33[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_33[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_33[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_33[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_33[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_33[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_33[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_33[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_33[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_33[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_33[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __Vtemp_33[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                               >> 5U));
        __Vtemp_33[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                               >> 5U));
        __Vtemp_33[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_33[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __VExpandSel_WordIdx_20 = (0x0000000cU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port 
                                                  << 2U));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[0U] 
            = __Vtemp_33[__VExpandSel_WordIdx_20];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[1U] 
            = __Vtemp_33[((IData)(1U) + __VExpandSel_WordIdx_20)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[2U] 
            = __Vtemp_33[((IData)(2U) + __VExpandSel_WordIdx_20)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[3U] 
            = __Vtemp_33[((IData)(3U) + __VExpandSel_WordIdx_20)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_id 
            = (0x0000000fU & (((((0x000000f0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                 << 3U)) 
                                 | (0x0000000fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 1U))) 
                                << 8U) | ((0x000000f0U 
                                           & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              << 3U)) 
                                          | (0x0000000fU 
                                             & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                >> 1U)))) 
                              >> (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port 
                                                 << 2U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_err 
            = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                               << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                       << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                        << 1U)) | (1U 
                                                   & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                     >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__port)));
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
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__24__got_data[3U];
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
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__rd[3U];
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((0U != (((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data[0U] 
                                      | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data[1U]) 
                                     | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data[2U]) 
                                    | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data[3U]))))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                     , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_data.data());
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                     , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__exp_id
                     , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id));
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                     , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__25__got_id);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__data[3U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__22__addr;
    if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U]);
    }
    if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U]);
    }
    if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U]);
    }
    if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][0U]);
    }
    if ((0x00000010U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U]);
    }
    if ((0x00000020U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U]);
    }
    if ((0x00000040U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U]);
    }
    if ((0x00000080U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][1U]);
    }
    if ((0x00000100U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U]);
    }
    if ((0x00000200U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U]);
    }
    if ((0x00000400U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U]);
    }
    if ((0x00000800U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][2U]);
    }
    if ((0x00001000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U]);
    }
    if ((0x00002000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U]);
    }
    if ((0x00004000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U]);
    }
    if ((0x00008000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr][3U]);
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__26__addr] = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__txn_id = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__port = 0U;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd);
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__strobe = 0xffffU;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__we = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data[0U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data[1U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data[2U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data[3U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__addr)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port)))));
    }
    VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                                              << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__data);
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__we) 
                     << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                                             << 4U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__strobe)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                                 << 4U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(0x000fU) << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                                                  << 2U)))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__id) 
                           << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port 
                                              << 2U)))));
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
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port))))) {
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
        = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__28__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29____Vincrement1 = 0U;
    {
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data);
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__timeout = 0U;
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port))))) {
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
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[0U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[1U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[2U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[3U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err = 0U;
                goto __Vlabel9;
            }
        }
        __Vtemp_41[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_41[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_41[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_41[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_41[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_41[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_41[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_41[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_41[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_41[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_41[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_41[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __Vtemp_41[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                               >> 5U));
        __Vtemp_41[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                               >> 5U));
        __Vtemp_41[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_41[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __VExpandSel_WordIdx_25 = (0x0000000cU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port 
                                                  << 2U));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[0U] 
            = __Vtemp_41[__VExpandSel_WordIdx_25];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[1U] 
            = __Vtemp_41[((IData)(1U) + __VExpandSel_WordIdx_25)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[2U] 
            = __Vtemp_41[((IData)(2U) + __VExpandSel_WordIdx_25)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[3U] 
            = __Vtemp_41[((IData)(3U) + __VExpandSel_WordIdx_25)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_id 
            = (0x0000000fU & (((((0x000000f0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                 << 3U)) 
                                 | (0x0000000fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 1U))) 
                                << 8U) | ((0x000000f0U 
                                           & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              << 3U)) 
                                          | (0x0000000fU 
                                             & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                >> 1U)))) 
                              >> (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port 
                                                 << 2U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_err 
            = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                               << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                       << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                        << 1U)) | (1U 
                                                   & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                     >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__port)));
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
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__29__got_data[3U];
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
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__rd[3U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__27__addr;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                             [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr] 
                             & (0U != ((((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data[0U] 
                                          ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                          [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr][0U]) 
                                         | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data[1U] 
                                            ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                            [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr][1U])) 
                                        | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data[2U] 
                                           ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                           [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr][2U])) 
                                       | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data[3U] 
                                          ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                          [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr][3U]))))))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr
                     , '#',128,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                     [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr].data()
                     , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data.data());
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                     , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__exp_id
                     , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id)
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__addr
                     , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_data.data()
                     , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__30__got_id));
    }
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__txn_id = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__port = 1U;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd);
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__strobe = 0xffffU;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__we = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data[0U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data[1U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data[2U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data[3U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__addr)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port)))));
    }
    VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                                              << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__data);
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__we) 
                     << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                                             << 4U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__strobe)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                                 << 4U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(0x000fU) << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                                                  << 2U)))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__id) 
                           << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port 
                                              << 2U)))));
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
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port))))) {
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
        = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__32__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33____Vincrement1 = 0U;
    {
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data);
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__timeout = 0U;
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port))))) {
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
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[0U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[1U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[2U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[3U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err = 0U;
                goto __Vlabel11;
            }
        }
        __Vtemp_48[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_48[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_48[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_48[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_48[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_48[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_48[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_48[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_48[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_48[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_48[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_48[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __Vtemp_48[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                               >> 5U));
        __Vtemp_48[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                               >> 5U));
        __Vtemp_48[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_48[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __VExpandSel_WordIdx_30 = (0x0000000cU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port 
                                                  << 2U));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[0U] 
            = __Vtemp_48[__VExpandSel_WordIdx_30];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[1U] 
            = __Vtemp_48[((IData)(1U) + __VExpandSel_WordIdx_30)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[2U] 
            = __Vtemp_48[((IData)(2U) + __VExpandSel_WordIdx_30)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[3U] 
            = __Vtemp_48[((IData)(3U) + __VExpandSel_WordIdx_30)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_id 
            = (0x0000000fU & (((((0x000000f0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                 << 3U)) 
                                 | (0x0000000fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 1U))) 
                                << 8U) | ((0x000000f0U 
                                           & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              << 3U)) 
                                          | (0x0000000fU 
                                             & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                >> 1U)))) 
                              >> (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port 
                                                 << 2U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_err 
            = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                               << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                       << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                        << 1U)) | (1U 
                                                   & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                     >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__port)));
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
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__33__got_data[3U];
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
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__rd[3U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__31__addr;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                             [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr] 
                             & (0U != ((((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data[0U] 
                                          ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                          [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr][0U]) 
                                         | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data[1U] 
                                            ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                            [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr][1U])) 
                                        | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data[2U] 
                                           ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                           [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr][2U])) 
                                       | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data[3U] 
                                          ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                          [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr][3U]))))))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr
                     , '#',128,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                     [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr].data()
                     , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data.data());
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                     , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__exp_id
                     , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id)
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__addr
                     , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_data.data()
                     , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__34__got_id));
    }
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p)) {
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__row 
            = ((IData)(0x00000014U) + __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p);
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__bank = 0U;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__Vfuncout = 0;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__Vfuncout 
            = ((0x000003fcU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__row 
                               << 2U)) | (3U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__bank));
        __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_2__make_addr 
            = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__35__Vfuncout;
        __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a[(3U 
                                                              & __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p)] 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14____VlefCall_2__make_addr;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__txn_id = 2U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__strobe = 0xffffU;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[0U] 
            = (0xc0000000U | __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p);
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[1U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[2U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[3U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a
            [(3U & __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p)];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p;
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd);
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__we = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[3U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__addr)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port)))));
        }
        VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                                  << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__we) 
                           << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                                 << 4U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__strobe)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                     << 4U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port 
                                      << 2U)))));
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
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port))))) {
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
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__37__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38____Vincrement1 = 0U;
        {
            VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__timeout = 0U;
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port))))) {
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
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[0U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[1U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[2U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[3U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err = 0U;
                    goto __Vlabel13;
                }
            }
            __Vtemp_57[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_57[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_57[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                  >> 5U));
            __Vtemp_57[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                  >> 5U));
            __Vtemp_57[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_57[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_57[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                  >> 5U));
            __Vtemp_57[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                  >> 5U));
            __Vtemp_57[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_57[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_57[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_57[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __Vtemp_57[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 5U));
            __Vtemp_57[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                   >> 5U));
            __Vtemp_57[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_57[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __VExpandSel_WordIdx_35 = (0x0000000cU 
                                       & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port 
                                          << 2U));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[0U] 
                = __Vtemp_57[__VExpandSel_WordIdx_35];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[1U] 
                = __Vtemp_57[((IData)(1U) + __VExpandSel_WordIdx_35)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[2U] 
                = __Vtemp_57[((IData)(2U) + __VExpandSel_WordIdx_35)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[3U] 
                = __Vtemp_57[((IData)(3U) + __VExpandSel_WordIdx_35)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                       << 3U)) | (0x0000000fU 
                                                  & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                     >> 1U))) 
                                    << 8U) | ((0x000000f0U 
                                               & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  << 3U)) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                    >> 1U)))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port 
                                       << 2U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_err 
                = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                   << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                           << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                            << 1U)) 
                                     | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__port)));
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
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__38__got_data[3U];
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
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__rd[3U];
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((0U != (((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data[0U] 
                                          | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data[1U]) 
                                         | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data[2U]) 
                                        | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data[3U]))))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                         , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_data.data());
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                         , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__exp_id
                         , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id));
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                         , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__39__got_id);
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__data[3U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__36__addr;
        if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U]);
        }
        if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U]);
        }
        if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U]);
        }
        if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][0U]);
        }
        if ((0x00000010U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U]);
        }
        if ((0x00000020U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U]);
        }
        if ((0x00000040U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U]);
        }
        if ((0x00000080U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][1U]);
        }
        if ((0x00000100U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U]);
        }
        if ((0x00000200U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U]);
        }
        if ((0x00000400U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U]);
        }
        if ((0x00000800U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][2U]);
        }
        if ((0x00001000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U]);
        }
        if ((0x00002000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U]);
        }
        if ((0x00004000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U]);
        }
        if ((0x00008000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr][3U]);
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__40__addr] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk4__DOT__p);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p)) {
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__txn_id = 3U;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__a
            [(3U & __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p)];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_conflict__14__unnamedblk5__DOT__p;
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd);
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__strobe = 0xffffU;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__we = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data[0U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data[1U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data[2U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data[3U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__addr)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port)))));
        }
        VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                                  << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__we) 
                           << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                                 << 4U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__strobe)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                     << 4U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port 
                                      << 2U)))));
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
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port))))) {
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
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__42__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43____Vincrement1 = 0U;
        {
            VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__timeout = 0U;
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port))))) {
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
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[0U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[1U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[2U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[3U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err = 0U;
                    goto __Vlabel15;
                }
            }
            __Vtemp_65[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_65[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_65[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                  >> 5U));
            __Vtemp_65[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                  >> 5U));
            __Vtemp_65[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_65[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_65[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                  >> 5U));
            __Vtemp_65[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                  >> 5U));
            __Vtemp_65[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  >> 5U));
            __Vtemp_65[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                               << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                  >> 5U));
            __Vtemp_65[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_65[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __Vtemp_65[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 5U));
            __Vtemp_65[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                   >> 5U));
            __Vtemp_65[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_65[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __VExpandSel_WordIdx_40 = (0x0000000cU 
                                       & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port 
                                          << 2U));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[0U] 
                = __Vtemp_65[__VExpandSel_WordIdx_40];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[1U] 
                = __Vtemp_65[((IData)(1U) + __VExpandSel_WordIdx_40)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[2U] 
                = __Vtemp_65[((IData)(2U) + __VExpandSel_WordIdx_40)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[3U] 
                = __Vtemp_65[((IData)(3U) + __VExpandSel_WordIdx_40)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                       << 3U)) | (0x0000000fU 
                                                  & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                     >> 1U))) 
                                    << 8U) | ((0x000000f0U 
                                               & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  << 3U)) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                    >> 1U)))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port 
                                       << 2U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_err 
                = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                   << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                           << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                            << 1U)) 
                                     | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__port)));
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
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__43__got_data[3U];
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
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__rd[3U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__41__addr;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                 [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr] 
                                 & (0U != ((((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data[0U] 
                                              ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                              [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr][0U]) 
                                             | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data[1U] 
                                                ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr][1U])) 
                                            | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data[2U] 
                                               ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr][2U])) 
                                           | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data[3U] 
                                              ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                              [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr][3U]))))))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr
                         , '#',128,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                         [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr].data()
                         , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data.data());
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                         , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__exp_id
                         , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id)
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__addr
                         , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_data.data()
                         , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__44__got_id));
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
        = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__hold_ready__46__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready));
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i)) {
        if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready))) {
            __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__row 
                = ((IData)(0x0000001eU) + VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i, (IData)(0x0000000aU)));
            __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__bank = 0U;
            __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__Vfuncout = 0;
            __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__Vfuncout 
                = ((0x000003fcU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__row 
                                   << 2U)) | (3U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__bank));
            __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a 
                = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__47__Vfuncout;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__id 
                = (0x0000000fU & VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i, (IData)(0x00000010U)));
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__strobe = 0xffffU;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__we = 1U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a;
            __Vtemp_66[0U] = 0xdead0000U;
            __Vtemp_66[1U] = 0U;
            __Vtemp_66[2U] = 0U;
            __Vtemp_66[3U] = 0U;
            __Vtemp_67[0U] = __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__unnamedblk6__DOT__i;
            __Vtemp_67[1U] = 0U;
            __Vtemp_67[2U] = 0U;
            __Vtemp_67[3U] = 0U;
            VL_ADD_W(4, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__data, __Vtemp_66, __Vtemp_67);
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48____Vincrement1 = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__timeout = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
                = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                   | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port))));
            if (VL_LIKELY(((0x27U >= (0x0000003fU & 
                                      ((IData)(0x0000000aU) 
                                       * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port)))))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                    = (((~ (0x00000000000003ffULL << 
                            (0x0000003fU & ((IData)(0x0000000aU) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port)))) 
                        & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                       | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__addr)) 
                                                   << 
                                                   (0x0000003fU 
                                                    & ((IData)(0x0000000aU) 
                                                       * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port)))));
            }
            VL_ASSIGNSEL_WW(512, 128, (0x000001ffU 
                                       & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                          << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__data);
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
                = (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
                   | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__we) 
                               << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                                  & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                                     << 4U)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                   | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__strobe)) 
                      << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                         << 4U))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                             & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                                << 2U)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
                   | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__id) 
                                     << (0x0000000fU 
                                         & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port 
                                            << 2U)))));
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
                                 >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port))))) {
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
                = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__48__port))) 
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
           | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__49__port))));
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__row = 0x00000032U;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__bank = 1U;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__Vfuncout = 0;
    __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__Vfuncout 
        = ((0x000003fcU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__row 
                           << 2U)) | (3U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__bank));
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a 
        = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__50__Vfuncout;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__txn_id = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__strobe = 0xffffU;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[0U] = 0xccccccccU;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[1U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[2U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[3U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__port = 1U;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd);
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__we = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[3U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__addr)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port)))));
    }
    VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                                              << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__data);
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__we) 
                     << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                                             << 4U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__strobe)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                                 << 4U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(0x000fU) << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                                                  << 2U)))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__id) 
                           << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port 
                                              << 2U)))));
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
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port))))) {
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
        = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__52__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53____Vincrement1 = 0U;
    {
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data);
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__timeout = 0U;
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port))))) {
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
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[0U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[1U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[2U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[3U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err = 0U;
                goto __Vlabel18;
            }
        }
        __Vtemp_74[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_74[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_74[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_74[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_74[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_74[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_74[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_74[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_74[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_74[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_74[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_74[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __Vtemp_74[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                               >> 5U));
        __Vtemp_74[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                               >> 5U));
        __Vtemp_74[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_74[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __VExpandSel_WordIdx_45 = (0x0000000cU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port 
                                                  << 2U));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[0U] 
            = __Vtemp_74[__VExpandSel_WordIdx_45];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[1U] 
            = __Vtemp_74[((IData)(1U) + __VExpandSel_WordIdx_45)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[2U] 
            = __Vtemp_74[((IData)(2U) + __VExpandSel_WordIdx_45)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[3U] 
            = __Vtemp_74[((IData)(3U) + __VExpandSel_WordIdx_45)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_id 
            = (0x0000000fU & (((((0x000000f0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                 << 3U)) 
                                 | (0x0000000fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 1U))) 
                                << 8U) | ((0x000000f0U 
                                           & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              << 3U)) 
                                          | (0x0000000fU 
                                             & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                >> 1U)))) 
                              >> (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port 
                                                 << 2U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_err 
            = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                               << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                       << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                        << 1U)) | (1U 
                                                   & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                     >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__port)));
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
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__53__got_data[3U];
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
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__rd[3U];
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((0U != (((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data[0U] 
                                      | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data[1U]) 
                                     | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data[2U]) 
                                    | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data[3U]))))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                     , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_data.data());
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                     , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__exp_id
                     , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id));
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                     , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__54__got_id);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__strobe;
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__data[3U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_write__51__addr;
    if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U]);
    }
    if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U]);
    }
    if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U]);
    }
    if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[0U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][0U]);
    }
    if ((0x00000010U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U]);
    }
    if ((0x00000020U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U]);
    }
    if ((0x00000040U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U]);
    }
    if ((0x00000080U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[1U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][1U]);
    }
    if ((0x00000100U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U]);
    }
    if ((0x00000200U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U]);
    }
    if ((0x00000400U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U]);
    }
    if ((0x00000800U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[2U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][2U]);
    }
    if ((0x00001000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U] 
            = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U]) 
               | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U] 
            = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U]);
    }
    if ((0x00002000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U] 
            = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U]) 
               | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U] 
            = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U]);
    }
    if ((0x00004000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U] 
            = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U]) 
               | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U] 
            = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U]);
    }
    if ((0x00008000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__strobe))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U] 
            = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U]) 
               | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__data[3U]));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr])))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U] 
            = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr][3U]);
    }
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__55__addr] = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__txn_id = 1U;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__a;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__port = 1U;
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd);
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__ri = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__re = 0;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__id 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__txn_id;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__strobe = 0xffffU;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__we = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__addr;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data[0U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data[1U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data[2U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data[3U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57____Vincrement1 = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__timeout = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port)))))) {
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__addr)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port)))));
    }
    VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                                              << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__data);
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we = 
        (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
         | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__we) 
                     << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
        = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                                             << 4U)))) 
            & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
           | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__strobe)) 
              << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                                 << 4U))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id = 
        (((~ ((IData)(0x000fU) << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                                                  << 2U)))) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
         | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__id) 
                           << (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port 
                                              << 2U)))));
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
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port))))) {
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
        = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__57__port))) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__port;
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58____Vincrement1 = 0U;
    {
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data);
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__timeout = 0U;
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port))))) {
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
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[0U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[1U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[2U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[3U] = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id = 0U;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err = 0U;
                goto __Vlabel20;
            }
        }
        __Vtemp_82[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_82[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_82[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_82[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_82[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_82[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_82[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_82[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_82[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_82[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_82[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_82[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __Vtemp_82[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                               >> 5U));
        __Vtemp_82[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                               >> 5U));
        __Vtemp_82[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_82[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __VExpandSel_WordIdx_50 = (0x0000000cU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port 
                                                  << 2U));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[0U] 
            = __Vtemp_82[__VExpandSel_WordIdx_50];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[1U] 
            = __Vtemp_82[((IData)(1U) + __VExpandSel_WordIdx_50)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[2U] 
            = __Vtemp_82[((IData)(2U) + __VExpandSel_WordIdx_50)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[3U] 
            = __Vtemp_82[((IData)(3U) + __VExpandSel_WordIdx_50)];
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_id 
            = (0x0000000fU & (((((0x000000f0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                 << 3U)) 
                                 | (0x0000000fU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 1U))) 
                                << 8U) | ((0x000000f0U 
                                           & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              << 3U)) 
                                          | (0x0000000fU 
                                             & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                >> 1U)))) 
                              >> (0x0000000fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port 
                                                 << 2U))));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_err 
            = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                               << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                       << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                        << 1U)) | (1U 
                                                   & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                     >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__port)));
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
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__58__got_data[3U];
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
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data[0U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd[0U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data[1U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd[1U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data[2U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd[2U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data[3U] 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__rd[3U];
    __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr 
        = __Vtask_tb_sys__DOT__u_env__DOT__do_read__56__addr;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
        = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
    if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_err))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                             [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr] 
                             & (0U != ((((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data[0U] 
                                          ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                          [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr][0U]) 
                                         | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data[1U] 
                                            ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                            [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr][1U])) 
                                        | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data[2U] 
                                           ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                           [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr][2U])) 
                                       | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data[3U] 
                                          ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                          [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr][3U]))))))) {
        VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr
                     , '#',128,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                     [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr].data()
                     , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data.data());
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id) 
                != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__exp_id))) {
        VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                     , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__exp_id
                     , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id)
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr);
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
    } else {
        VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                     , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__addr
                     , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_data.data()
                     , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__59__got_id));
    }
    VL_WRITEF_NX("[BP OK]  Port 1 unaffected\n",0);
    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__60__port = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
           | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__release_ready__60__port))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[120U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[124U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[128U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[132U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[136U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[140U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[144U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[148U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[152U] = 0U;
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[156U] = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_backpressure__45__tb_sys__DOT__u_env__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x00000018U;
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
    VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d);
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
            = VL_URANDOM_RANGE_I(0U, 3U);
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__bank 
            = VL_URANDOM_RANGE_I(0U, 3U);
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__row 
            = VL_URANDOM_RANGE_I(0x00000050U, 0x00000078U);
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__row 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__row;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__bank 
            = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__bank;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__Vfuncout = 0;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__Vfuncout 
            = ((0x000003fcU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__row 
                               << 2U)) | (3U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__bank));
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a 
            = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__63__Vfuncout;
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d[0U] 
            = VL_RANDOM_I();
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d[1U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d[2U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d[3U] = 0U;
        if ((1U & ((2U != VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i, (IData)(3U))) 
                   | (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                [__Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a]))))) {
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__txn_id 
                = (0x0000000fU & VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i, (IData)(0x00000010U)));
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__strobe = 0xffffU;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[0U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d[0U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[1U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d[1U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[2U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d[2U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[3U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__d[3U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__port;
            VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd);
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__ri = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__re = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__id 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__txn_id;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__strobe 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__strobe;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__we = 1U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__addr;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data[0U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[0U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data[1U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[1U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data[2U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[2U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data[3U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[3U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__port;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65____Vincrement1 = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__timeout = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
                = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                   | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port))));
            if (VL_LIKELY(((0x27U >= (0x0000003fU & 
                                      ((IData)(0x0000000aU) 
                                       * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port)))))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                    = (((~ (0x00000000000003ffULL << 
                            (0x0000003fU & ((IData)(0x0000000aU) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port)))) 
                        & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                       | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__addr)) 
                                                   << 
                                                   (0x0000003fU 
                                                    & ((IData)(0x0000000aU) 
                                                       * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port)))));
            }
            VL_ASSIGNSEL_WW(512, 128, (0x000001ffU 
                                       & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                          << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__data);
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
                = (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
                   | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__we) 
                               << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                                  & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                                     << 4U)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                   | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__strobe)) 
                      << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                         << 4U))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                             & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                                << 2U)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
                   | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__id) 
                                     << (0x0000000fU 
                                         & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port 
                                            << 2U)))));
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
                                 >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port))))) {
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
                = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__65__port))) 
                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__port;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66____Vincrement1 = 0U;
            {
                VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data);
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id = 0;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err = 0;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__timeout = 0U;
                while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                                 >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port))))) {
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
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[0U] = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[1U] = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[2U] = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[3U] = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err = 0U;
                        goto __Vlabel22;
                    }
                }
                __Vtemp_89[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                     >> 5U));
                __Vtemp_89[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                     >> 5U));
                __Vtemp_89[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                     >> 5U));
                __Vtemp_89[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                     >> 5U));
                __Vtemp_89[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                     >> 5U));
                __Vtemp_89[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                     >> 5U));
                __Vtemp_89[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                     >> 5U));
                __Vtemp_89[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                     >> 5U));
                __Vtemp_89[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                     >> 5U));
                __Vtemp_89[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                     >> 5U));
                __Vtemp_89[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                      >> 5U));
                __Vtemp_89[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                      >> 5U));
                __Vtemp_89[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                      >> 5U));
                __Vtemp_89[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                      >> 5U));
                __Vtemp_89[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                      >> 5U));
                __Vtemp_89[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                      >> 5U));
                __VExpandSel_WordIdx_55 = (0x0000000cU 
                                           & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port 
                                              << 2U));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[0U] 
                    = __Vtemp_89[__VExpandSel_WordIdx_55];
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[1U] 
                    = __Vtemp_89[((IData)(1U) + __VExpandSel_WordIdx_55)];
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[2U] 
                    = __Vtemp_89[((IData)(2U) + __VExpandSel_WordIdx_55)];
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[3U] 
                    = __Vtemp_89[((IData)(3U) + __VExpandSel_WordIdx_55)];
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_id 
                    = (0x0000000fU & (((((0x000000f0U 
                                          & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                             << 3U)) 
                                         | (0x0000000fU 
                                            & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                               >> 1U))) 
                                        << 8U) | ((0x000000f0U 
                                                   & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                      << 3U)) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                        >> 1U)))) 
                                      >> (0x0000000fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port 
                                             << 2U))));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_err 
                    = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                       << 1U)) | (1U 
                                                  & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                               << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                << 1U)) 
                                         | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__port)));
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
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd[0U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[0U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd[1U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[1U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd[2U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[2U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd[3U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__66__got_data[3U];
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
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data[0U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd[0U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data[1U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd[1U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data[2U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd[2U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data[3U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__rd[3U];
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
            if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_err))) {
                VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else if (VL_UNLIKELY(((0U != (((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data[0U] 
                                              | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data[1U]) 
                                             | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data[2U]) 
                                            | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data[3U]))))) {
                VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                             , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_data.data());
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id) 
                        != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__exp_id))) {
                VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                             , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__exp_id
                             , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id));
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else {
                VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                             , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__67__got_id);
            }
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__strobe;
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[0U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[0U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[1U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[1U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[2U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[2U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[3U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__data[3U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_write__64__addr;
            if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U] 
                    = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U]) 
                       | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[0U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U] 
                    = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U]);
            }
            if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U] 
                    = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U]) 
                       | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[0U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U] 
                    = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U]);
            }
            if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U] 
                    = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U]) 
                       | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[0U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U] 
                    = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U]);
            }
            if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U] 
                    = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U]) 
                       | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[0U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U] 
                    = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][0U]);
            }
            if ((0x00000010U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U] 
                    = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U]) 
                       | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[1U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U] 
                    = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U]);
            }
            if ((0x00000020U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U] 
                    = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U]) 
                       | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[1U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U] 
                    = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U]);
            }
            if ((0x00000040U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U] 
                    = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U]) 
                       | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[1U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U] 
                    = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U]);
            }
            if ((0x00000080U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U] 
                    = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U]) 
                       | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[1U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U] 
                    = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][1U]);
            }
            if ((0x00000100U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U] 
                    = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U]) 
                       | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[2U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U] 
                    = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U]);
            }
            if ((0x00000200U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U] 
                    = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U]) 
                       | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[2U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U] 
                    = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U]);
            }
            if ((0x00000400U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U] 
                    = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U]) 
                       | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[2U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U] 
                    = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U]);
            }
            if ((0x00000800U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U] 
                    = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U]) 
                       | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[2U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U] 
                    = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][2U]);
            }
            if ((0x00001000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U] 
                    = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U]) 
                       | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[3U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U] 
                    = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U]);
            }
            if ((0x00002000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U] 
                    = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U]) 
                       | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[3U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U] 
                    = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U]);
            }
            if ((0x00004000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U] 
                    = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U]) 
                       | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[3U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U] 
                    = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U]);
            }
            if ((0x00008000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__strobe))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U] 
                    = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U]) 
                       | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__data[3U]));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                        [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr])))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U] 
                    = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                       [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr][3U]);
            }
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__68__addr] = 1U;
        } else {
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__txn_id 
                = (0x0000000fU & VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__unnamedblk8__DOT__i, (IData)(0x00000010U)));
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__a;
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_random__62__port;
            VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd);
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__ri = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__re = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__id 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__txn_id;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__strobe = 0xffffU;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__we = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__addr;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data[0U] = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data[1U] = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data[2U] = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data[3U] = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__port;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70____Vincrement1 = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__timeout = 0U;
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
                = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                   | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port))));
            if (VL_LIKELY(((0x27U >= (0x0000003fU & 
                                      ((IData)(0x0000000aU) 
                                       * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port)))))) {
                vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                    = (((~ (0x00000000000003ffULL << 
                            (0x0000003fU & ((IData)(0x0000000aU) 
                                            * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port)))) 
                        & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                       | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__addr)) 
                                                   << 
                                                   (0x0000003fU 
                                                    & ((IData)(0x0000000aU) 
                                                       * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port)))));
            }
            VL_ASSIGNSEL_WW(512, 128, (0x000001ffU 
                                       & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                          << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__data);
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
                = (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
                   | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__we) 
                               << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                                  & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                                     << 4U)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                   | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__strobe)) 
                      << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                         << 4U))));
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                             & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                                << 2U)))) 
                    & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
                   | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__id) 
                                     << (0x0000000fU 
                                         & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port 
                                            << 2U)))));
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
                                 >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port))))) {
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
                = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__70__port))) 
                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__port;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71____Vincrement1 = 0U;
            {
                VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data);
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id = 0;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err = 0;
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__timeout = 0U;
                while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                                 >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port))))) {
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
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[0U] = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[1U] = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[2U] = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[3U] = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id = 0U;
                        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err = 0U;
                        goto __Vlabel24;
                    }
                }
                __Vtemp_97[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                     >> 5U));
                __Vtemp_97[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                     >> 5U));
                __Vtemp_97[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                     >> 5U));
                __Vtemp_97[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                     >> 5U));
                __Vtemp_97[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                     >> 5U));
                __Vtemp_97[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                     >> 5U));
                __Vtemp_97[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                     >> 5U));
                __Vtemp_97[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                     >> 5U));
                __Vtemp_97[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                     >> 5U));
                __Vtemp_97[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                   << 0x0000001bU) 
                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                     >> 5U));
                __Vtemp_97[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                      >> 5U));
                __Vtemp_97[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                      >> 5U));
                __Vtemp_97[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                      >> 5U));
                __Vtemp_97[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                      >> 5U));
                __Vtemp_97[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                      >> 5U));
                __Vtemp_97[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                    << 0x0000001bU) 
                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                      >> 5U));
                __VExpandSel_WordIdx_60 = (0x0000000cU 
                                           & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port 
                                              << 2U));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[0U] 
                    = __Vtemp_97[__VExpandSel_WordIdx_60];
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[1U] 
                    = __Vtemp_97[((IData)(1U) + __VExpandSel_WordIdx_60)];
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[2U] 
                    = __Vtemp_97[((IData)(2U) + __VExpandSel_WordIdx_60)];
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[3U] 
                    = __Vtemp_97[((IData)(3U) + __VExpandSel_WordIdx_60)];
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_id 
                    = (0x0000000fU & (((((0x000000f0U 
                                          & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                             << 3U)) 
                                         | (0x0000000fU 
                                            & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                               >> 1U))) 
                                        << 8U) | ((0x000000f0U 
                                                   & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                      << 3U)) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                        >> 1U)))) 
                                      >> (0x0000000fU 
                                          & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port 
                                             << 2U))));
                __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_err 
                    = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                       << 1U)) | (1U 
                                                  & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                               << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                << 1U)) 
                                         | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__port)));
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
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd[0U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[0U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd[1U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[1U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd[2U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[2U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd[3U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__71__got_data[3U];
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
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data[0U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd[0U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data[1U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd[1U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data[2U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd[2U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data[3U] 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__rd[3U];
            __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__do_read__69__addr;
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
            if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_err))) {
                VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                             , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr);
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                     [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr] 
                                     & (0U != ((((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data[0U] 
                                                  ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                                  [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr][0U]) 
                                                 | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data[1U] 
                                                    ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr][1U])) 
                                                | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data[2U] 
                                                   ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr][2U])) 
                                               | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data[3U] 
                                                  ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                                  [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr][3U]))))))) {
                VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                             , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr
                             , '#',128,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                             [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr].data()
                             , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data.data());
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id) 
                        != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__exp_id))) {
                VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                             , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__exp_id
                             , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id)
                             , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr);
                vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
            } else {
                VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                             , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__addr
                             , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_data.data()
                             , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__72__got_id));
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
        VL_ZERO_RESET_W(128, vlSelfRef.__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas[__Vi0]);
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
            = VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i, (IData)(4U));
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__Vfuncout = 0;
        __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__Vfuncout 
            = ((0x000003fcU & (__Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__row 
                               << 2U)) | (3U & __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__bank));
        __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73____VlefCall_0__make_addr 
            = __Vfunc_tb_sys__DOT__u_env__DOT__make_addr__74__Vfuncout;
        if (VL_LIKELY(((0x63U >= (0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i))))) {
            __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs[(0x0000007fU 
                                                                    & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)] 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73____VlefCall_0__make_addr;
            __Vtemp_99[0U] = __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i;
            __Vtemp_99[1U] = 0U;
            __Vtemp_99[2U] = 0U;
            __Vtemp_99[3U] = 0U;
            VL_SHIFTL_WWI(128,128,32, __Vtemp_100, __Vtemp_99, 8U);
            vlSelfRef.__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas[(0x0000007fU 
                                                                              & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)][0U] 
                = (0xf0000000U | (__Vtemp_100[0U] | __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i));
            vlSelfRef.__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas[(0x0000007fU 
                                                                              & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)][1U] 
                = __Vtemp_100[1U];
            vlSelfRef.__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas[(0x0000007fU 
                                                                              & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)][2U] 
                = __Vtemp_100[2U];
            vlSelfRef.__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas[(0x0000007fU 
                                                                              & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)][3U] 
                = __Vtemp_100[3U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[0U] 
                = vlSelfRef.__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas
                [(0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)][0U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[1U] 
                = vlSelfRef.__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas
                [(0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)][1U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[2U] 
                = vlSelfRef.__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas
                [(0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)][2U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[3U] 
                = vlSelfRef.__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas
                [(0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)][3U];
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr 
                = __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs
                [(0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i)];
        } else {
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[0U] = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[1U] = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[2U] = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[3U] = 0U;
            __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr = 0U;
        }
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__txn_id 
            = (0x0000000fU & VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i, (IData)(0x00000010U)));
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__strobe = 0xffffU;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__port 
            = VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i, (IData)(4U));
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd);
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__we = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[3U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__addr)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port)))));
        }
        VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                                  << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__we) 
                           << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                                 << 4U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__strobe)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                     << 4U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port 
                                      << 2U)))));
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
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port))))) {
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
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__76__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77____Vincrement1 = 0U;
        {
            VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__timeout = 0U;
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port))))) {
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
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[0U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[1U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[2U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[3U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err = 0U;
                    goto __Vlabel26;
                }
            }
            __Vtemp_110[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 5U));
            __Vtemp_110[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                   >> 5U));
            __Vtemp_110[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_110[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __Vtemp_110[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 5U));
            __Vtemp_110[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                   >> 5U));
            __Vtemp_110[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_110[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __Vtemp_110[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 5U));
            __Vtemp_110[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                   >> 5U));
            __Vtemp_110[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                 >> 5U));
            __Vtemp_110[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                 >> 5U));
            __Vtemp_110[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                 >> 5U));
            __Vtemp_110[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                 >> 5U));
            __Vtemp_110[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                 >> 5U));
            __Vtemp_110[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                 >> 5U));
            __VExpandSel_WordIdx_65 = (0x0000000cU 
                                       & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port 
                                          << 2U));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[0U] 
                = __Vtemp_110[__VExpandSel_WordIdx_65];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[1U] 
                = __Vtemp_110[((IData)(1U) + __VExpandSel_WordIdx_65)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[2U] 
                = __Vtemp_110[((IData)(2U) + __VExpandSel_WordIdx_65)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[3U] 
                = __Vtemp_110[((IData)(3U) + __VExpandSel_WordIdx_65)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                       << 3U)) | (0x0000000fU 
                                                  & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                     >> 1U))) 
                                    << 8U) | ((0x000000f0U 
                                               & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  << 3U)) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                    >> 1U)))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port 
                                       << 2U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_err 
                = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                   << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                           << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                            << 1U)) 
                                     | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__port)));
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
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__77__got_data[3U];
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
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__rd[3U];
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK err=1\n",0);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((0U != (((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data[0U] 
                                          | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data[1U]) 
                                         | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data[2U]) 
                                        | __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data[3U]))))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK data=%0h (expected 0)\n",1
                         , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_data.data());
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] Write ACK ID exp=%0h got=%0h\n",2
                         , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__exp_id
                         , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id));
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Write ACK id=%0h\n",1
                         , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_write_ack__78__got_id);
        }
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__strobe;
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__data[3U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_write__75__addr;
        if ((1U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U]);
        }
        if ((2U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U]);
        }
        if ((4U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U]);
        }
        if ((8U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[0U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][0U]);
        }
        if ((0x00000010U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U]);
        }
        if ((0x00000020U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U]);
        }
        if ((0x00000040U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U]);
        }
        if ((0x00000080U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[1U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][1U]);
        }
        if ((0x00000100U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U]);
        }
        if ((0x00000200U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U]);
        }
        if ((0x00000400U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U]);
        }
        if ((0x00000800U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[2U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][2U]);
        }
        if ((0x00001000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U] 
                = ((0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U]) 
                   | (0x000000ffU & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U] 
                = (0xffffff00U & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U]);
        }
        if ((0x00002000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U] 
                = ((0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U]) 
                   | (0x0000ff00U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U] 
                = (0xffff00ffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U]);
        }
        if ((0x00004000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U] 
                = ((0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U]) 
                   | (0x00ff0000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U] 
                = (0xff00ffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U]);
        }
        if ((0x00008000U & (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__strobe))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U] 
                = ((0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U]) 
                   | (0xff000000U & __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__data[3U]));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                    [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr])))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U] 
                = (0x00ffffffU & vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                   [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr][3U]);
        }
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__predict_write__79__addr] = 1U;
        __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i 
            = ((IData)(1U) + __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk9__DOT__i);
    }
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i = 0U;
    __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__n)) {
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__txn_id 
            = (0x0000000fU & VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i, (IData)(0x00000010U)));
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__addr 
            = ((0x63U >= (0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i))
                ? __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__addrs
               [(0x0000007fU & __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i)]
                : 0U);
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__port 
            = VL_MODDIVS_III(32, __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__unnamedblk10__DOT__i, (IData)(4U));
        VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd);
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__ri = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__re = 0;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__id 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__txn_id;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__strobe = 0xffffU;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__we = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__addr;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data[0U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data[1U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data[2U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data[3U] = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81____Vincrement1 = 0U;
        __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__timeout = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port)))))) {
            vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port)))) 
                    & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__addr)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port)))));
        }
        VL_ASSIGNSEL_WW(512, 128, (0x000001ffU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                                  << 7U)), vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data, __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__data);
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__we) 
                           << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
            = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                              & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                                 << 4U)))) 
                & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
               | ((QData)((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__strobe)) 
                  << (0x0000003fU & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                     << 4U))));
        vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port 
                                      << 2U)))));
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
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port))))) {
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
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_drv__DOT__send__81__port))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid));
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__port;
        __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82____Vincrement1 = 0U;
        {
            VL_ZERO_W(128, __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data);
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err = 0;
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__timeout = 0U;
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port))))) {
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
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[0U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[1U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[2U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[3U] = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id = 0U;
                    __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err = 0U;
                    goto __Vlabel28;
                }
            }
            __Vtemp_118[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 5U));
            __Vtemp_118[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                   >> 5U));
            __Vtemp_118[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_118[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __Vtemp_118[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 5U));
            __Vtemp_118[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                   >> 5U));
            __Vtemp_118[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                                   >> 5U));
            __Vtemp_118[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                                   >> 5U));
            __Vtemp_118[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   >> 5U));
            __Vtemp_118[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                                   >> 5U));
            __Vtemp_118[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                 >> 5U));
            __Vtemp_118[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                 >> 5U));
            __Vtemp_118[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                 >> 5U));
            __Vtemp_118[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                 >> 5U));
            __Vtemp_118[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                 >> 5U));
            __Vtemp_118[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                                 << 0x0000001bU) | 
                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                 >> 5U));
            __VExpandSel_WordIdx_70 = (0x0000000cU 
                                       & (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port 
                                          << 2U));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[0U] 
                = __Vtemp_118[__VExpandSel_WordIdx_70];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[1U] 
                = __Vtemp_118[((IData)(1U) + __VExpandSel_WordIdx_70)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[2U] 
                = __Vtemp_118[((IData)(2U) + __VExpandSel_WordIdx_70)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[3U] 
                = __Vtemp_118[((IData)(3U) + __VExpandSel_WordIdx_70)];
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                       << 3U)) | (0x0000000fU 
                                                  & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                     >> 1U))) 
                                    << 8U) | ((0x000000f0U 
                                               & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                  << 3U)) 
                                              | (0x0000000fU 
                                                 & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                    >> 1U)))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port 
                                       << 2U))));
            __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_err 
                = (1U & (((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                   << 1U)) | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                           << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                            << 1U)) 
                                     | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U]))) 
                         >> (3U & __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__port)));
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
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__u_mon__DOT__wait_rsp__82__got_data[3U];
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
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data[0U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd[0U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data[1U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd[1U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data[2U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd[2U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data[3U] 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__rd[3U];
        __Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr 
            = __Vtask_tb_sys__DOT__u_env__DOT__do_read__80__addr;
        vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count 
            = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count);
        if (VL_UNLIKELY((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_err))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h: expected err=1\n",1
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (VL_UNLIKELY(((vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init
                                 [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr] 
                                 & (0U != ((((__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data[0U] 
                                              ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                              [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr][0U]) 
                                             | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data[1U] 
                                                ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                                [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr][1U])) 
                                            | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data[2U] 
                                               ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                               [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr][2U])) 
                                           | (__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data[3U] 
                                              ^ vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                                              [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr][3U]))))))) {
            VL_WRITEF_NX("[SB FAIL] Read addr=%0h exp=%0h got=%0h\n",3
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr
                         , '#',128,vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem
                         [__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr].data()
                         , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data.data());
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else if (((IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id) 
                    != (IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__exp_id))) {
            VL_WRITEF_NX("[SB FAIL] ID exp=%0h got=%0h addr=%0h\n",3
                         , '#',4,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__exp_id
                         , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id)
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr);
            vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count);
        } else {
            VL_WRITEF_NX("[SB OK] Read addr=%0h data=%0h id=%0h\n",3
                         , '#',10,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__addr
                         , '#',128,__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_data.data()
                         , '#',4,(IData)(__Vtask_tb_sys__DOT__u_env__DOT__u_sb__DOT__check_read__83__got_id));
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
    __Vtemp_119 = ((0U == vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors)
                    ? "ALL PASSED"s : VL_SFORMATF_N_NX("%0d ERRORS",1
                                                       , '~',32,vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors) );
    VL_WRITEF_NX("  RESULT: %s\n========================================\n\n",1
                 , 'S',&(__Vtemp_119));
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 113, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}
