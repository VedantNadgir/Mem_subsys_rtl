// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_banked_sram_ctrl.h for the primary calling header

#include "Vtb_banked_sram_ctrl__pch.h"

VlCoroutine Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_banked_sram_ctrl___024root* vlSelf);
VlCoroutine Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_banked_sram_ctrl___024root* vlSelf);
VlCoroutine Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__2(Vtb_banked_sram_ctrl___024root* vlSelf);

void Vtb_banked_sram_ctrl___024root___eval_initial(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_initial\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.tb_banked_sram_ctrl__DOT__clk = 0U;
        vlSymsp->_vm_contextp__->dumpfile("waves/tb_banked_sram_ctrl.vcd"s);
        vlSymsp->_traceDumpOpen();
        VL_WRITEF_NX("\n=== Parameter Boundary Checks ===\n[INFO] NUM_BANKS=4  BANK_DEPTH=256  DATA_WIDTH=32\n[INFO] ADDR_WIDTH=10  NUM_REQ_PORTS=4  QUEUE_DEPTH=4  ID_WIDTH=4\n[INFO] BANK_SEL_BITS=2  BANK_ADDR_BITS=8  TOTAL_ID_BITS=6\n[INFO] N_CSR=32  CSR_ADDR_W=5\n[INFO] All parameter assertions passed\n",0);
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__0(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000000044aa20ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         102);
    VL_WRITEF_NX("[WATCHDOG] Expired @ %0t \342\200\224 forcing finish\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 104, "");
    co_return;
}

void Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(Vtb_banked_sram_ctrl___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_banked_sram_ctrl__DOT__unnamedblk1_7__DOT____Vrepeat6;
    tb_banked_sram_ctrl__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__unnamedblk1__DOT__a;
    __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__unnamedblk1__DOT__a = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_01__1__a;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_01__1__a = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__4____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__6__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__6__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__7__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__7__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__8__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__8__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__a = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__expected = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__10____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__12__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__12__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__13__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__13__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__14__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__14__cond = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_02__15__a;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_02__15__a = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__18____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__20__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__20__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__21__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__21__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__22__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__22__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__23__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__23__cond = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24____VlefCall_0__make_addr;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24____VlefCall_0__make_addr = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p = 0;
    VlUnpacked<SData/*9:0*/, 4> __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__a;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__a[__Vi0] = 0;
    }
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__27____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__27____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__29__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__29__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__30__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__30__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__31__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__31__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__a = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__expected = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__33____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__33____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__35__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__35__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__36__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__36__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__37__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__37__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__38__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__38__cond = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a0 = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a1;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a1 = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__b = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__43____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__45__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__45__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__46__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__46__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__47__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__47__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__49____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__51__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__51__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__52__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__52__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__53__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__53__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__a = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__expected = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__55____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__57__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__57__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__58__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__58__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__59__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__59__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__a = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__expected = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__61____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__63__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__63__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__64__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__64__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__65__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__65__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__66__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__66__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__unnamedblk5__DOT__i;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__a;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__a = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__b = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__69__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__69__cond = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__72____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__74__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__74__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__75__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__75__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__76__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__76__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__a = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__expected = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__78____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__80__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__80__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__81__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__81__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__82__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__82__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__83__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__83__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__84__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__84__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__86__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__86__cond = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__expected = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__90____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__92__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__92__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__93__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__93__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__94__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__94__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__96____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__98__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__98__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__99__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__99__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__100__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__100__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__a = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__expected = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__102____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__104__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__104__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__105__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__105__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__106__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__106__cond = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__109____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__111__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__111__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__112__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__112__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__113__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__113__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__115____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__117__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__117__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__118__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__118__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__119__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__119__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__a = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__expected = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__121____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__123__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__123__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__124__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__124__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__125__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__125__cond = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126____VlefCall_0__make_addr;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126____VlefCall_0__make_addr = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk9__DOT__b;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk9__DOT__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b = 0;
    VlUnpacked<SData/*9:0*/, 4> __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__addrs;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__addrs[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 4> __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__datas;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__datas[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__re;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__re = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__129____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__129____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__131__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__131__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__132__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__132__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__133__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__133__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__134____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__134____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__136__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__136__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__137__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__137__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__138__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__138__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__unnamedblk11__DOT__i;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__unnamedblk11__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_5__DOT____Vrepeat4;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_6__DOT____Vrepeat5;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__a;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__accepted;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__accepted = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__handshake;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__handshake = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__b = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__141__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__141__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__142__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__142__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__143__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__143__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__144__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__144__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__a;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__d;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__d = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__p;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__p = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__bank;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__bank = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__row;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__row = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__148____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__148____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__150__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__150__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__151__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__151__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__152__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__152__cond = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__a = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__expected = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__155____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__155____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__157__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__157__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__158__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__158__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__159__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__159__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__160__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__160__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__unnamedblk14__DOT__req_cnt0_b;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__unnamedblk14__DOT__req_cnt0_b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__req_cnt0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__req_cnt0 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__rsp_cnt0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__rsp_cnt0 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__idle_bk0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__idle_bk0 = 0;
    CData/*4:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__ca;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__ca = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__val;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__val = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162____Vincrement3;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162____Vincrement3 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__to;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__163__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__163__cond = 0;
    CData/*4:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__ca;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__ca = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__val;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__val = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164____Vincrement3;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164____Vincrement3 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__to;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__165__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__165__cond = 0;
    CData/*4:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__ca;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__ca = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__val;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__val = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166____Vincrement3;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166____Vincrement3 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__to;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__to = 0;
    CData/*4:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__ca;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__ca = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__val;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__val = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167____Vincrement3;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167____Vincrement3 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__to;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__168__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__168__cond = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__tc_int_12__169__a;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_12__169__a = 0;
    SData/*9:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__bank;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__bank = 0;
    IData/*31:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__row;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__row = 0;
    CData/*7:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__r;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__r = 0;
    CData/*1:0*/ __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__b;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__b = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__172____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__174__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__174__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__175__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__175__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__176__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__176__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__a = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__expected = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__178____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__180__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__180__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__181__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__181__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__182__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__182__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__d;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__d = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__s;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__184____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__186__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__186__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__187__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__187__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__188__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__188__cond = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__port;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__a = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__expected = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__rd;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__rd = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__ri;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__ri = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__re;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__re = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port = 0;
    SData/*9:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__a = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__d = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__w;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__w = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__s = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__txn_id = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__190____Vincrement1;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__to;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__to = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__port = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_data = 0;
    CData/*3:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_id = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_err;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_err = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191____Vincrement2;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__to;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__to = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__192__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__192__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__193__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__193__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__194__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__194__cond = 0;
    CData/*0:0*/ __Vtask_tb_banked_sram_ctrl__DOT__check__195__cond;
    __Vtask_tb_banked_sram_ctrl__DOT__check__195__cond = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_50;
    // Body
    __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr = 0ULL;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[0U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[1U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[2U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[3U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe = 0xffffU;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready = 0x0fU;
    vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__csr_addr_in = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             163);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             166);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__tb_banked_sram_ctrl__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         167);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__unnamedblk1__DOT__a = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__unnamedblk1__DOT__a = 0U;
    while (VL_GTES_III(32, 0x000003ffU, __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__unnamedblk1__DOT__a)) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[(0x000003ffU 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__unnamedblk1__DOT__a)] = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[(0x000003ffU 
                                                       & __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__unnamedblk1__DOT__a)] = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__unnamedblk1__DOT__a 
            = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__reset_dut__0__unnamedblk1__DOT__a);
    }
    VL_WRITEF_NX("[INFO] Reset complete @ %0t\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_01__1__a = 0;
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 1U;
    VL_WRITEF_NX("\n=== TC_INT_01: Basic Read Round-Trip ===\n",0);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__row = 1U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__bank = 0U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__Vfuncout = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__r = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__b = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__r 
        = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__row);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__b 
        = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__bank);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__Vfuncout 
        = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__r) 
            << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__b));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_01__1__a 
        = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__2__Vfuncout;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__txn_id = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__d = 0xdeadbeefU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_01__1__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__4__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__4__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__4__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__4__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__4____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__4____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__4____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel0;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel0: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__4__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_err = 0U;
                goto __Vlabel1;
            }
        }
        __Vtemp_2[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_2[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_2[2U] = (IData)((((QData)((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 5U))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                     >> 5U)))));
        __Vtemp_2[3U] = (IData)(((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))) 
                                 >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_data 
            = __Vtemp_2[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel1: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__5__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__6__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__6__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__6__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__6__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__6__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__7__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__7__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__7__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__7__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__7__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__8__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__8__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__8__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__8__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__8__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__3__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__3__a] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__expected = 0xdeadbeefU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__txn_id = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_01__1__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__w = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__d = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__10__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__10__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__10__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__10__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__10____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__10____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__10____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel2;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel2: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__10__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_err = 0U;
                goto __Vlabel3;
            }
        }
        __Vtemp_4[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_4[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_4[2U] = (IData)((((QData)((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 5U))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                     >> 5U)))));
        __Vtemp_4[3U] = (IData)(((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))) 
                                 >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_data 
            = __Vtemp_4[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel3: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__11__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__12__msg
                  ,"Read data p=%0d a=%0h exp=%0h got=%0h",4
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__a)
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__expected
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__rd);
    __Vtask_tb_banked_sram_ctrl__DOT__check__12__cond 
        = (__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__rd 
           == __Vtask_tb_banked_sram_ctrl__DOT__do_read__9__expected);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__12__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__13__msg
                  ,"Read err=0  p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__13__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__13__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__14__msg
                  ,"Read id match p=%0d txn=%0h got=%0h",3
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__port
                  , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__txn_id)
                  , '#',4,__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__ri);
    __Vtask_tb_banked_sram_ctrl__DOT__check__14__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__9__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__14__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__14__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__14__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_02__15__a = 0;
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 2U;
    VL_WRITEF_NX("\n=== TC_INT_02: Write ACK Response ===\n",0);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__row = 0U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__bank = 1U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__Vfuncout = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__r = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__b = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__r 
        = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__row);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__b 
        = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__bank);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__Vfuncout 
        = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__r) 
            << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__b));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_02__15__a 
        = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__16__Vfuncout;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__txn_id = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__d = 0xcafebabeU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_02__15__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__18__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__18__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__18__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__18__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__18____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__18____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__18____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel4;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel4: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__18__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_err = 0U;
                goto __Vlabel5;
            }
        }
        __Vtemp_6[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_6[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_6[2U] = (IData)((((QData)((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 5U))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                     >> 5U)))));
        __Vtemp_6[3U] = (IData)(((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))) 
                                 >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_data 
            = __Vtemp_6[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel5: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__19__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__20__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__20__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__20__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__20__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__20__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__21__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__21__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__21__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__21__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__21__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__22__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__22__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__22__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__22__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__22__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__17__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__17__a] = 1U;
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__23__msg = "Write ACK received and validated inside do_write"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__23__cond = 1U;
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__23__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__a[__Vi0] = 0;
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 3U;
    VL_WRITEF_NX("\n=== TC_INT_03: Multi-Port Different Banks ===\n",0);
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p)) {
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__row = 3U;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__bank 
            = VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p, (IData)(4U));
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__Vfuncout = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__r = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__b = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__r 
            = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__row);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__b 
            = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__bank);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__Vfuncout 
            = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__r) 
                << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__b));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24____VlefCall_0__make_addr 
            = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__25__Vfuncout;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__a[(3U 
                                                            & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p)] 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24____VlefCall_0__make_addr;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__txn_id 
            = (0x0000000fU & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p);
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__s = 0x0fU;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__d 
            = ((IData)(0x10000000U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p);
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__a
            [(3U & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p)];
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__rd = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__ri = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__re = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__txn_id 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__txn_id;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__s 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__s;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__w = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__d 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__d;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__a 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__port;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__27____Vincrement1 = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port)))))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port)))) 
                    & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__27__a)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port)))));
        }
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__d);
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__27__w) 
                           << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__27__s) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port 
                                      << 2U)))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__27__txn_id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port 
                                      << 2U)))));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             186);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port))))) {
                __Vtask_tb_banked_sram_ctrl__DOT__send_req__27____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__to);
                __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__to 
                    = __Vtask_tb_banked_sram_ctrl__DOT__send_req__27____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__27____Vincrement1)))) {
                    VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                    goto __Vlabel6;
                }
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     193);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel6: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             195);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__27__port))) 
               & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__port;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28____Vincrement2 = 0U;
        {
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_data = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_id = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_err = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__to = 0U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
                = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                   | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__port))));
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__port))))) {
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     205);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                     206);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28____Vincrement2 
                    = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__to);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__to 
                    = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28____Vincrement2;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28____Vincrement2)))) {
                    VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_data = 0U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_id = 0U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_err = 0U;
                    goto __Vlabel7;
                }
            }
            __Vtemp_8[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                     >> 5U));
            __Vtemp_8[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                     >> 5U));
            __Vtemp_8[2U] = (IData)((((QData)((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 5U))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 5U)))));
            __Vtemp_8[3U] = (IData)(((((QData)((IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 5U))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                         >> 5U)))) 
                                     >> 0x00000020U));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_data 
                = __Vtemp_8[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__port)];
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                >> 1U)) 
                                       << 4U)) | (0x0000000fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                             >> 1U)))) 
                                    << 8U) | ((0x000000f0U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)) 
                                                  << 4U)) 
                                              | (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U))))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__port 
                                       << 2U))));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_err 
                = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                   << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                           << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                            << 1U)) 
                                     | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__port)));
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 219);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 220);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel7: ;
        }
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__rd 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_data;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__ri 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_id;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__re 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__28__got_err;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__29__msg
                      ,"W-ACK data=0    p=%0d a=%0h",2
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__port
                      , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a));
        __Vtask_tb_banked_sram_ctrl__DOT__check__29__cond 
            = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__rd);
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__29__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__29__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__29__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__30__msg
                      ,"W-ACK err=0     p=%0d a=%0h",2
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__port
                      , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a));
        __Vtask_tb_banked_sram_ctrl__DOT__check__30__cond 
            = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__re)));
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__30__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__30__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__30__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__31__msg
                      ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__port);
        __Vtask_tb_banked_sram_ctrl__DOT__check__31__cond 
            = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__ri) 
               == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__txn_id));
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__31__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__31__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__31__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a] 
                = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a]) 
                   | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a] 
                = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a]);
        }
        if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a] 
                = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a]) 
                   | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a] 
                = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a]);
        }
        if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a] 
                = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a]) 
                   | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a] 
                = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a]);
        }
        if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a] 
                = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a]) 
                   | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__26__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a] 
                = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a]);
        }
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__26__a] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p 
            = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk3__DOT__p);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p)) {
        __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__expected 
            = ((IData)(0x10000000U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p);
        __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__txn_id 
            = (0x0000000fU & ((IData)(4U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p));
        __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__a 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__a
            [(3U & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p)];
        __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p;
        __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__rd = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__ri = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__re = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__txn_id 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__txn_id;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__s = 0x0fU;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__w = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__d = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__a 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__a;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__port;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__33____Vincrement1 = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port)))))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port)))) 
                    & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__33__a)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port)))));
        }
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__d);
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__33__w) 
                           << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__33__s) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port 
                                      << 2U)))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__33__txn_id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port 
                                      << 2U)))));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             186);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port))))) {
                __Vtask_tb_banked_sram_ctrl__DOT__send_req__33____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__to);
                __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__to 
                    = __Vtask_tb_banked_sram_ctrl__DOT__send_req__33____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__33____Vincrement1)))) {
                    VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                    goto __Vlabel8;
                }
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     193);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel8: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             195);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__33__port))) 
               & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__port;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34____Vincrement2 = 0U;
        {
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_data = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_id = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_err = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__to = 0U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
                = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                   | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__port))));
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__port))))) {
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     205);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                     206);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34____Vincrement2 
                    = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__to);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__to 
                    = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34____Vincrement2;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34____Vincrement2)))) {
                    VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_data = 0U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_id = 0U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_err = 0U;
                    goto __Vlabel9;
                }
            }
            __Vtemp_10[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                      >> 5U));
            __Vtemp_10[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                      >> 5U));
            __Vtemp_10[2U] = (IData)((((QData)((IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 5U))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                         >> 5U)))));
            __Vtemp_10[3U] = (IData)(((((QData)((IData)(
                                                        (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                         >> 5U))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 5U)))) 
                                      >> 0x00000020U));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_data 
                = __Vtemp_10[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__port)];
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                >> 1U)) 
                                       << 4U)) | (0x0000000fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                             >> 1U)))) 
                                    << 8U) | ((0x000000f0U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)) 
                                                  << 4U)) 
                                              | (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U))))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__port 
                                       << 2U))));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_err 
                = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                   << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                           << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                            << 1U)) 
                                     | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__port)));
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 219);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 220);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel9: ;
        }
        __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__rd 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_data;
        __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__ri 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_id;
        __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__re 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__34__got_err;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__35__msg
                      ,"Read data p=%0d a=%0h exp=%0h got=%0h",4
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__port
                      , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__a)
                      , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__expected
                      , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__rd);
        __Vtask_tb_banked_sram_ctrl__DOT__check__35__cond 
            = (__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__rd 
               == __Vtask_tb_banked_sram_ctrl__DOT__do_read__32__expected);
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__35__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__35__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__35__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__36__msg
                      ,"Read err=0  p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__port
                      , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__a));
        __Vtask_tb_banked_sram_ctrl__DOT__check__36__cond 
            = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__re)));
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__36__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__36__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__36__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__37__msg
                      ,"Read id match p=%0d txn=%0h got=%0h",3
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__port
                      , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__txn_id)
                      , '#',4,__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__ri);
        __Vtask_tb_banked_sram_ctrl__DOT__check__37__cond 
            = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__ri) 
               == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__32__txn_id));
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__37__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__37__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__37__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p 
            = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_03__24__unnamedblk4__DOT__p);
    }
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__38__msg = "All ports served independently with no cross-bank corruption"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__38__cond = 1U;
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__38__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a0 = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a1 = 0;
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 4U;
    VL_WRITEF_NX("\n=== TC_INT_04: Bank Conflict Round-Robin ===\n",0);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__row = 0x0000000aU;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__bank = 0U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__Vfuncout = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__r = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__b = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__r 
        = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__row);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__b 
        = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__bank);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__Vfuncout 
        = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__r) 
            << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__b));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a0 
        = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__40__Vfuncout;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__row = 0x0000000bU;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__bank = 0U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__Vfuncout = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__r = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__b = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__r 
        = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__row);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__b 
        = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__bank);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__Vfuncout 
        = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__r) 
            << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__b));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a1 
        = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__41__Vfuncout;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__txn_id = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__d = 0xaaaaaaaaU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__43__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__43__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__43__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__43__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__43____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__43____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__43____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel10;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel10: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__43__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_err = 0U;
                goto __Vlabel11;
            }
        }
        __Vtemp_12[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_12[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_12[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_12[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_data 
            = __Vtemp_12[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel11: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__44__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__45__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__45__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__45__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__45__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__45__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__46__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__46__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__46__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__46__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__46__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__47__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__47__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__47__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__47__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__47__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__42__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__42__a] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__txn_id = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__d = 0xbbbbbbbbU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a1;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__port = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__49__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__49__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__49__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__49__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__49____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__49____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__49____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel12;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel12: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__49__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_err = 0U;
                goto __Vlabel13;
            }
        }
        __Vtemp_14[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_14[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_14[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_14[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_data 
            = __Vtemp_14[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel13: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__50__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__51__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__51__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__51__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__51__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__51__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__52__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__52__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__52__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__52__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__52__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__53__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__53__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__53__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__53__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__53__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__48__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__48__a] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__expected = 0xaaaaaaaaU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__txn_id = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__w = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__d = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__55__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__55__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__55__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__55__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__55____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__55____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__55____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel14;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel14: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__55__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_err = 0U;
                goto __Vlabel15;
            }
        }
        __Vtemp_16[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_16[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_16[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_16[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_data 
            = __Vtemp_16[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel15: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__56__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__57__msg
                  ,"Read data p=%0d a=%0h exp=%0h got=%0h",4
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__a)
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__expected
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__rd);
    __Vtask_tb_banked_sram_ctrl__DOT__check__57__cond 
        = (__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__rd 
           == __Vtask_tb_banked_sram_ctrl__DOT__do_read__54__expected);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__57__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__57__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__57__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__58__msg
                  ,"Read err=0  p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__58__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__58__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__58__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__58__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__59__msg
                  ,"Read id match p=%0d txn=%0h got=%0h",3
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__port
                  , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__txn_id)
                  , '#',4,__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__ri);
    __Vtask_tb_banked_sram_ctrl__DOT__check__59__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__54__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__59__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__59__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__59__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__expected = 0xbbbbbbbbU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__txn_id = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_04__39__a1;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__port = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__w = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__d = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__61__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__61__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__61__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__61__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__61____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__61____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__61____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel16;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel16: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__61__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_err = 0U;
                goto __Vlabel17;
            }
        }
        __Vtemp_18[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_18[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_18[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_18[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_data 
            = __Vtemp_18[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel17: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__62__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__63__msg
                  ,"Read data p=%0d a=%0h exp=%0h got=%0h",4
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__a)
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__expected
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__rd);
    __Vtask_tb_banked_sram_ctrl__DOT__check__63__cond 
        = (__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__rd 
           == __Vtask_tb_banked_sram_ctrl__DOT__do_read__60__expected);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__63__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__64__msg
                  ,"Read err=0  p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__64__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__64__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__65__msg
                  ,"Read id match p=%0d txn=%0h got=%0h",3
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__port
                  , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__txn_id)
                  , '#',4,__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__ri);
    __Vtask_tb_banked_sram_ctrl__DOT__check__65__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__60__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__65__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__65__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__65__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__66__msg = "Data integrity preserved under bank conflict"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__66__cond = 1U;
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__66__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__66__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__66__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__a = 0;
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 5U;
    VL_WRITEF_NX("\n=== TC_INT_05: Backpressure Isolation ===\n",0);
    vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready = 
        (0x0eU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__unnamedblk5__DOT__i = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000000cU, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__unnamedblk5__DOT__i)) {
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__row 
            = ((IData)(0x00000028U) + VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__unnamedblk5__DOT__i, (IData)(0x00000014U)));
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__bank = 0U;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__Vfuncout = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__r = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__b = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__r 
            = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__row);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__b 
            = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__bank);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__Vfuncout 
            = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__r) 
                << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__b));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__a 
            = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__68__Vfuncout;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((0x0eU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid)) 
               | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready)));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = ((0x000000fffffffc00ULL & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (IData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__a)));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_we 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[0U] 
            = ((IData)(0xfeed0000U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__unnamedblk5__DOT__i);
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
            = (0x0000000fU | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_id 
            = ((0xfff0U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
               | (0x0000000fU & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__unnamedblk5__DOT__i));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             370);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             371);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__unnamedblk5__DOT__i 
            = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__unnamedblk5__DOT__i);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        (0x0eU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             376);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         377);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__69__msg = "Port 0 req_ready deasserted (rsp_fifo full \342\206\222 PP1 stall \342\206\222 PP0 stall \342\206\222 req_fifo full)"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__69__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__69__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready = 
        (2U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready));
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__row = 0x0000005fU;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__bank = 1U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__Vfuncout = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__r = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__b = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__r 
        = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__row);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__b 
        = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__bank);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__Vfuncout 
        = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__r) 
            << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__b));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__a 
        = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__70__Vfuncout;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__txn_id = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__d = 0xccccccccU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__port = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__72__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__72__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__72__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__72__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__72____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__72____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__72____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel18;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel18: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__72__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_err = 0U;
                goto __Vlabel19;
            }
        }
        __Vtemp_20[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_20[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_20[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_20[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_data 
            = __Vtemp_20[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel19: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__73__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__74__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__74__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__74__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__74__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__74__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__75__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__75__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__75__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__75__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__75__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__76__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__76__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__76__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__76__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__76__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__71__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__71__a] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__expected = 0xccccccccU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__txn_id = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__port = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__w = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__d = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__78__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__78__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__78__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__78__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__78____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__78____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__78____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel20;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel20: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__78__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_err = 0U;
                goto __Vlabel21;
            }
        }
        __Vtemp_22[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_22[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_22[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_22[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_data 
            = __Vtemp_22[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel21: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__79__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__80__msg
                  ,"Read data p=%0d a=%0h exp=%0h got=%0h",4
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__a)
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__expected
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__rd);
    __Vtask_tb_banked_sram_ctrl__DOT__check__80__cond 
        = (__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__rd 
           == __Vtask_tb_banked_sram_ctrl__DOT__do_read__77__expected);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__80__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__80__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__80__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__81__msg
                  ,"Read err=0  p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__81__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__81__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__81__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__81__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__82__msg
                  ,"Read id match p=%0d txn=%0h got=%0h",3
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__port
                  , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__txn_id)
                  , '#',4,__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__ri);
    __Vtask_tb_banked_sram_ctrl__DOT__check__82__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__77__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__82__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__82__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__82__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__83__msg = "Port 1 unaffected while port 0 is stalled"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__83__cond = 1U;
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__83__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__83__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__83__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready = 
        (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x00000010U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             390);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_banked_sram_ctrl__DOT__tc_int_05__67__tb_banked_sram_ctrl__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         391);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__84__msg = "Port 0 req_ready recovers after backpressure release"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__84__cond 
        = (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__84__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__84__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__84__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 6U;
    VL_WRITEF_NX("\n=== TC_INT_06: OOB Address Check ===\n",0);
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__86__msg = "ADDR_WIDTH=10 >= min=10"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__86__cond = 1U;
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__86__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__86__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__86__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_WRITEF_NX("[INFO] TC_INT_06: OOB inactive in this config \342\200\224 addr_oob permanently 0.\n[INFO] Recompile with ADDR_WIDTH > 10 to activate OOB path.\n",0);
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__expected = 0;
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 7U;
    VL_WRITEF_NX("\n=== TC_INT_07: Partial Write Byte-Enable ===\n",0);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__row = 5U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__bank = 2U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__Vfuncout = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__r = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__b = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__r 
        = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__row);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__b 
        = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__bank);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__Vfuncout 
        = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__r) 
            << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__b));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a 
        = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__88__Vfuncout;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__txn_id = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__d = 0xaabbccddU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__90__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__90__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__90__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__90__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__90____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__90____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__90____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel22;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel22: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__90__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_err = 0U;
                goto __Vlabel23;
            }
        }
        __Vtemp_24[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_24[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_24[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_24[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_data 
            = __Vtemp_24[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel23: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__91__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__92__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__92__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__92__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__92__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__92__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__93__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__93__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__93__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__93__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__93__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__94__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__94__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__94__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__94__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__94__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__89__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__89__a] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__txn_id = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__s = 6U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__d = 0x12345678U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__96__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__96__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__96__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__96__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__96____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__96____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__96____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel24;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel24: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__96__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_err = 0U;
                goto __Vlabel25;
            }
        }
        __Vtemp_26[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_26[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_26[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_26[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_data 
            = __Vtemp_26[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel25: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__97__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__98__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__98__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__98__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__98__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__98__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__99__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__99__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__99__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__99__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__99__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__100__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__100__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__100__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__100__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__100__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__95__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__95__a] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__expected = 0xaa3456ddU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__expected 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__expected;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__txn_id = 2U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__w = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__d = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__102__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__102__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__102__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__102__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__102____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__102____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__102____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel26;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel26: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__102__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_err = 0U;
                goto __Vlabel27;
            }
        }
        __Vtemp_28[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_28[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_28[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_28[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_data 
            = __Vtemp_28[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel27: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__103__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__104__msg
                  ,"Read data p=%0d a=%0h exp=%0h got=%0h",4
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__a)
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__expected
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__rd);
    __Vtask_tb_banked_sram_ctrl__DOT__check__104__cond 
        = (__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__rd 
           == __Vtask_tb_banked_sram_ctrl__DOT__do_read__101__expected);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__104__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__104__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__104__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__105__msg
                  ,"Read err=0  p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__105__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__105__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__105__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__105__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__106__msg
                  ,"Read id match p=%0d txn=%0h got=%0h",3
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__port
                  , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__txn_id)
                  , '#',4,__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__ri);
    __Vtask_tb_banked_sram_ctrl__DOT__check__106__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__101__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__106__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__106__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__106__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__row = 6U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__bank = 2U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__Vfuncout = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__r = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__b = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__r 
        = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__row);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__b 
        = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__bank);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__Vfuncout 
        = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__r) 
            << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__b));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a 
        = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__107__Vfuncout;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__txn_id = 3U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__d = 0xffffffffU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__109__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__109__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__109__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__109__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__109____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__109____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__109____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel28;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel28: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__109__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_err = 0U;
                goto __Vlabel29;
            }
        }
        __Vtemp_30[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_30[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_30[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_30[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_data 
            = __Vtemp_30[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel29: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__110__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__111__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__111__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__111__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__111__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__111__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__112__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__112__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__112__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__112__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__112__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__113__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__113__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__113__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__113__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__113__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__108__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__108__a] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__txn_id = 4U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__s = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__d = 0x00000042U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__115__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__115__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__115__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__115__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__115____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__115____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__115____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel30;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel30: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__115__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_err = 0U;
                goto __Vlabel31;
            }
        }
        __Vtemp_32[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_32[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_32[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_32[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_data 
            = __Vtemp_32[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel31: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__116__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__117__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__117__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__117__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__117__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__117__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__118__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__118__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__118__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__118__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__118__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__119__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__119__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__119__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__119__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__119__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__114__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__114__a] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__expected = 0xffffff42U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__txn_id = 5U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_07__87__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__w = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__d = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__121__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__121__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__121__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__121__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__121____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__121____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__121____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel32;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel32: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__121__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_err = 0U;
                goto __Vlabel33;
            }
        }
        __Vtemp_34[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_34[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_34[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_34[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_data 
            = __Vtemp_34[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel33: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__122__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__123__msg
                  ,"Read data p=%0d a=%0h exp=%0h got=%0h",4
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__a)
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__expected
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__rd);
    __Vtask_tb_banked_sram_ctrl__DOT__check__123__cond 
        = (__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__rd 
           == __Vtask_tb_banked_sram_ctrl__DOT__do_read__120__expected);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__123__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__123__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__123__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__124__msg
                  ,"Read err=0  p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__124__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__124__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__124__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__124__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__125__msg
                  ,"Read id match p=%0d txn=%0h got=%0h",3
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__port
                  , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__txn_id)
                  , '#',4,__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__ri);
    __Vtask_tb_banked_sram_ctrl__DOT__check__125__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__120__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__125__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__125__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__125__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__addrs[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__datas[__Vi0] = 0;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__re = 0;
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 8U;
    VL_WRITEF_NX("\n=== TC_INT_08: In-Order Responses ===\n",0);
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b)) {
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__row 
            = ((IData)(0x00000032U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__bank 
            = VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b, (IData)(4U));
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__Vfuncout = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__r = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__b = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__r 
            = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__row);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__b 
            = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__bank);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__Vfuncout 
            = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__r) 
                << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__b));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126____VlefCall_0__make_addr 
            = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__127__Vfuncout;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__addrs[(3U 
                                                                 & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b)] 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126____VlefCall_0__make_addr;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__datas[(3U 
                                                                 & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b)] 
            = (0xf0000000U | ((__Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b 
                               << 8U) | __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b));
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__txn_id 
            = (0x0000000fU & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b);
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__s = 0x0fU;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__d 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__datas
            [(3U & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b)];
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__addrs
            [(3U & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b)];
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__port = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__rd = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__ri = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__re = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__txn_id 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__txn_id;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__s 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__s;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__w = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__d 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__d;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__a 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__port;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__129____Vincrement1 = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port)))))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port)))) 
                    & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__129__a)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port)))));
        }
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__d);
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__129__w) 
                           << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__129__s) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port 
                                      << 2U)))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__129__txn_id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port 
                                      << 2U)))));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             186);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port))))) {
                __Vtask_tb_banked_sram_ctrl__DOT__send_req__129____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__to);
                __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__to 
                    = __Vtask_tb_banked_sram_ctrl__DOT__send_req__129____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__129____Vincrement1)))) {
                    VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                    goto __Vlabel34;
                }
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     193);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel34: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             195);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__129__port))) 
               & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__port;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130____Vincrement2 = 0U;
        {
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_data = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_id = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_err = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__to = 0U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
                = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                   | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__port))));
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__port))))) {
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     205);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                     206);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130____Vincrement2 
                    = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__to);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__to 
                    = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130____Vincrement2;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130____Vincrement2)))) {
                    VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_data = 0U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_id = 0U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_err = 0U;
                    goto __Vlabel35;
                }
            }
            __Vtemp_36[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                      >> 5U));
            __Vtemp_36[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                      >> 5U));
            __Vtemp_36[2U] = (IData)((((QData)((IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 5U))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                         >> 5U)))));
            __Vtemp_36[3U] = (IData)(((((QData)((IData)(
                                                        (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                         >> 5U))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 5U)))) 
                                      >> 0x00000020U));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_data 
                = __Vtemp_36[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__port)];
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                >> 1U)) 
                                       << 4U)) | (0x0000000fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                             >> 1U)))) 
                                    << 8U) | ((0x000000f0U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)) 
                                                  << 4U)) 
                                              | (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U))))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__port 
                                       << 2U))));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_err 
                = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                   << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                           << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                            << 1U)) 
                                     | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__port)));
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 219);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 220);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel35: ;
        }
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__rd 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_data;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__ri 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_id;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__re 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__130__got_err;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__131__msg
                      ,"W-ACK data=0    p=%0d a=%0h",2
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__port
                      , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a));
        __Vtask_tb_banked_sram_ctrl__DOT__check__131__cond 
            = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__rd);
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__131__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__131__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__131__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__132__msg
                      ,"W-ACK err=0     p=%0d a=%0h",2
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__port
                      , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a));
        __Vtask_tb_banked_sram_ctrl__DOT__check__132__cond 
            = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__re)));
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__132__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__132__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__132__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__133__msg
                      ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__port);
        __Vtask_tb_banked_sram_ctrl__DOT__check__133__cond 
            = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__ri) 
               == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__txn_id));
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__133__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__133__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__133__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a] 
                = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a]) 
                   | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a] 
                = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a]);
        }
        if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a] 
                = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a]) 
                   | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a] 
                = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a]);
        }
        if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a] 
                = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a]) 
                   | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a] 
                = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a]);
        }
        if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a] 
                = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a]) 
                   | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__128__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a] 
                = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a]);
        }
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__128__a] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b 
            = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk8__DOT__b);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk9__DOT__b = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk9__DOT__b = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk9__DOT__b)) {
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__txn_id 
            = (0x0000000fU & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk9__DOT__b);
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__s = 0x0fU;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__w = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__d = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__a 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__addrs
            [(3U & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk9__DOT__b)];
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__134____Vincrement1 = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port)))))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port)))) 
                    & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__134__a)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port)))));
        }
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__d);
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__134__w) 
                           << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__134__s) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port 
                                      << 2U)))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__134__txn_id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port 
                                      << 2U)))));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             186);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port))))) {
                __Vtask_tb_banked_sram_ctrl__DOT__send_req__134____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__to);
                __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__to 
                    = __Vtask_tb_banked_sram_ctrl__DOT__send_req__134____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__134____Vincrement1)))) {
                    VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                    goto __Vlabel36;
                }
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     193);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel36: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             195);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__134__port))) 
               & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk9__DOT__b 
            = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk9__DOT__b);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b)) {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__port = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135____Vincrement2 = 0U;
        {
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_data = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_id = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_err = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__to = 0U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
                = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                   | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__port))));
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__port))))) {
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     205);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                     206);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135____Vincrement2 
                    = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__to);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__to 
                    = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135____Vincrement2;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135____Vincrement2)))) {
                    VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_data = 0U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_id = 0U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_err = 0U;
                    goto __Vlabel37;
                }
            }
            __Vtemp_38[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                      >> 5U));
            __Vtemp_38[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                      >> 5U));
            __Vtemp_38[2U] = (IData)((((QData)((IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 5U))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                         >> 5U)))));
            __Vtemp_38[3U] = (IData)(((((QData)((IData)(
                                                        (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                         >> 5U))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 5U)))) 
                                      >> 0x00000020U));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_data 
                = __Vtemp_38[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__port)];
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                >> 1U)) 
                                       << 4U)) | (0x0000000fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                             >> 1U)))) 
                                    << 8U) | ((0x000000f0U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)) 
                                                  << 4U)) 
                                              | (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U))))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__port 
                                       << 2U))));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_err 
                = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                   << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                           << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                            << 1U)) 
                                     | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__port)));
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 219);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 220);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel37: ;
        }
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__rd 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_data;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__ri 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_id;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__re 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__135__got_err;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__136__msg
                      ,"In-order: expected ID=%0d got=%0d",2
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b
                      , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__ri));
        __Vtask_tb_banked_sram_ctrl__DOT__check__136__cond 
            = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__ri) 
               == (0x0000000fU & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b));
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__136__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__136__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__136__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__137__msg
                      ,"In-order: data correct for slot %0d",1
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b);
        __Vtask_tb_banked_sram_ctrl__DOT__check__137__cond 
            = (__Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__rd 
               == __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__datas
               [(3U & __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b)]);
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__137__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__137__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__137__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__138__msg
                      ,"In-order: err=0 slot %0d",1
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b);
        __Vtask_tb_banked_sram_ctrl__DOT__check__138__cond 
            = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__re)));
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__138__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__138__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__138__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b 
            = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_08__126__unnamedblk10__DOT__b);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__a = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__accepted = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__handshake = 0;
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 9U;
    VL_WRITEF_NX("\n=== TC_INT_09: req_fifo Full Backpressure ===\n",0);
    vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready = 
        (0x0eU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__accepted = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__unnamedblk11__DOT__i = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__unnamedblk11__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000000cU, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__unnamedblk11__DOT__i)) {
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__row 
            = ((IData)(0x0000003cU) + VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__unnamedblk11__DOT__i, (IData)(0x00000014U)));
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__bank = 0U;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__Vfuncout = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__r = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__b = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__r 
            = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__row);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__b 
            = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__bank);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__Vfuncout 
            = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__r) 
                << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__b));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__a 
            = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__140__Vfuncout;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = ((0x000000fffffffc00ULL & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (IData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__a)));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_we 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_data[0U] 
            = ((IData)(0xbeef0000U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__unnamedblk11__DOT__i);
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
            = (0x0000000fU | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_id 
            = ((0xfff0U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
               | (0x0000000fU & VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__unnamedblk11__DOT__i, (IData)(0x00000010U))));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__handshake 
            = (1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                     & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             520);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (__Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__handshake) {
            __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__accepted 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__accepted);
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             522);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__unnamedblk11__DOT__i 
            = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__unnamedblk11__DOT__i);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        (0x0eU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             526);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (__Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         527);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__141__msg
                  ,"req_ready[0]=0 (fifo full) after %0d accepted",1
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__accepted);
    __Vtask_tb_banked_sram_ctrl__DOT__check__141__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__141__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__141__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__141__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__142__msg = "Accepted at least queue depth (4)"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__142__cond 
        = VL_LTES_III(32, 4U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__accepted);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__142__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__142__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__142__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__143__msg
                  ,"Accepted count (%0d) remained bounded",1
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__accepted);
    __Vtask_tb_banked_sram_ctrl__DOT__check__143__cond 
        = VL_GTS_III(32, 0x00000020U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__accepted);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__143__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__143__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__143__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready = 
        (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x00000014U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             534);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (__Vtask_tb_banked_sram_ctrl__DOT__tc_int_09__139__tb_banked_sram_ctrl__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         535);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__144__msg = "req_ready[0] recovers after drain"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__144__cond 
        = (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__144__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__144__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__144__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__a = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__d = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__p = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__bank = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__row = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 0x0000000aU;
    VL_WRITEF_NX("\n=== TC_INT_10: Random Traffic Scoreboard ===\n",0);
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i)) {
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__p 
            = VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i, (IData)(4U));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__bank 
            = VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i, (IData)(4U));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__row 
            = ((IData)(0x00000064U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__row 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__row;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__bank 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__bank;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__Vfuncout = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__r = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__b = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__r 
            = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__row);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__b 
            = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__bank);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__Vfuncout 
            = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__r) 
                << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__b));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__a 
            = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__146__Vfuncout;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__d 
            = (0xc0de0000U | ((__Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i 
                               << 8U) | __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i));
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__txn_id 
            = (0x0000000fU & VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i, (IData)(0x00000010U)));
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__s = 0x0fU;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__d 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__d;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__a;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__p;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__rd = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__ri = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__re = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__txn_id 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__txn_id;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__s 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__s;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__w = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__d 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__d;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__a 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__port;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__148____Vincrement1 = 0U;
        __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port))));
        if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port)))))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port)))) 
                    & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
                   | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__148__a)) 
                                               << (0x0000003fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port)))));
        }
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__d);
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_we 
            = (((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
               | (0x0fU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__148__w) 
                           << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__148__s) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port 
                                      << 2U)))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
               | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__148__txn_id) 
                                 << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port 
                                      << 2U)))));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             186);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port))))) {
                __Vtask_tb_banked_sram_ctrl__DOT__send_req__148____Vincrement1 
                    = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__to);
                __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__to 
                    = __Vtask_tb_banked_sram_ctrl__DOT__send_req__148____Vincrement1;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__148____Vincrement1)))) {
                    VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                    goto __Vlabel38;
                }
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     193);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            __Vlabel38: ;
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             195);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
            = ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__148__port))) 
               & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__port 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__port;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149____Vincrement2 = 0U;
        {
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_data = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_id = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_err = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__to = 0U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
                = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                   | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__port))));
            while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                          << 2U)) | 
                              (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                << 1U) | (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__port))))) {
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     205);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                     206);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149____Vincrement2 
                    = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__to);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__to 
                    = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149____Vincrement2;
                if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149____Vincrement2)))) {
                    VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                 , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__port
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                        = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_data = 0U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_id = 0U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_err = 0U;
                    goto __Vlabel39;
                }
            }
            __Vtemp_40[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                      >> 5U));
            __Vtemp_40[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                      >> 5U));
            __Vtemp_40[2U] = (IData)((((QData)((IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 5U))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                         >> 5U)))));
            __Vtemp_40[3U] = (IData)(((((QData)((IData)(
                                                        (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                         >> 5U))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 5U)))) 
                                      >> 0x00000020U));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_data 
                = __Vtemp_40[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__port)];
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_id 
                = (0x0000000fU & (((((0x000000f0U & 
                                      ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                >> 1U)) 
                                       << 4U)) | (0x0000000fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                             >> 1U)))) 
                                    << 8U) | ((0x000000f0U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)) 
                                                  << 4U)) 
                                              | (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U))))) 
                                  >> (0x0000000fU & 
                                      (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__port 
                                       << 2U))));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_err 
                = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                   << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                           << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                            << 1U)) 
                                     | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__port)));
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 219);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 220);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vlabel39: ;
        }
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__rd 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_data;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__ri 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_id;
        __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__re 
            = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__149__got_err;
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__150__msg
                      ,"W-ACK data=0    p=%0d a=%0h",2
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__port
                      , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a));
        __Vtask_tb_banked_sram_ctrl__DOT__check__150__cond 
            = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__rd);
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__150__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__150__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__150__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__151__msg
                      ,"W-ACK err=0     p=%0d a=%0h",2
                      , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__port
                      , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a));
        __Vtask_tb_banked_sram_ctrl__DOT__check__151__cond 
            = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__re)));
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__151__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__151__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__151__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__152__msg
                      ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__port);
        __Vtask_tb_banked_sram_ctrl__DOT__check__152__cond 
            = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__ri) 
               == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__txn_id));
        if (__Vtask_tb_banked_sram_ctrl__DOT__check__152__cond) {
            VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__152__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__152__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
        }
        if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a] 
                = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a]) 
                   | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a] 
                = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a]);
        }
        if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a] 
                = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a]) 
                   | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a] 
                = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a]);
        }
        if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a] 
                = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a]) 
                   | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a] 
                = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a]);
        }
        if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__s))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a] 
                = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a]) 
                   | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__147__d));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                    [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a])))) {
            vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a] 
                = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                   [__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a]);
        }
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__147__a] = 1U;
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i 
            = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk12__DOT__i);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i)) {
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__p 
            = VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i, (IData)(4U));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__bank 
            = VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i, (IData)(4U));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__row 
            = ((IData)(0x00000064U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__row 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__row;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__bank 
            = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__bank;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__Vfuncout = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__r = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__b = 0;
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__r 
            = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__row);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__b 
            = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__bank);
        __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__Vfuncout 
            = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__r) 
                << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__b));
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__a 
            = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__153__Vfuncout;
        if (vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
            [__Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__a]) {
            __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__expected 
                = vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__a];
            __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__txn_id 
                = (0x0000000fU & VL_MODDIVS_III(32, __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i, (IData)(0x00000010U)));
            __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__a 
                = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__a;
            __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__port 
                = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__p;
            __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__rd = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__ri = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__re = 0;
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__txn_id 
                = __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__txn_id;
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__s = 0x0fU;
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__w = 0U;
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__d = 0U;
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__a 
                = __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__a;
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port 
                = __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__port;
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__155____Vincrement1 = 0U;
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__to = 0U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
                = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
                   | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port))));
            if (VL_LIKELY(((0x27U >= (0x0000003fU & 
                                      ((IData)(0x0000000aU) 
                                       * __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port)))))) {
                vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
                    = (((~ (0x00000000000003ffULL << 
                            (0x0000003fU & ((IData)(0x0000000aU) 
                                            * __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port)))) 
                        & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
                       | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__155__a)) 
                                                   << 
                                                   (0x0000003fU 
                                                    & ((IData)(0x0000000aU) 
                                                       * __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port)))));
            }
            VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & 
                                      (__Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port 
                                       << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__d);
            vlSelfRef.tb_banked_sram_ctrl__DOT__req_we 
                = (((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port))) 
                    & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                   | (0x0fU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__155__w) 
                               << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port))));
            vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
                = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                             & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port 
                                                << 2U)))) 
                    & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
                   | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__155__s) 
                                     << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port 
                                            << 2U)))));
            vlSelfRef.tb_banked_sram_ctrl__DOT__req_id 
                = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                             & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port 
                                                << 2U)))) 
                    & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                   | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__155__txn_id) 
                                     << (0x0000000fU 
                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port 
                                            << 2U)))));
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 186);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            {
                while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                                 >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port))))) {
                    __Vtask_tb_banked_sram_ctrl__DOT__send_req__155____Vincrement1 
                        = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__to);
                    __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__to 
                        = __Vtask_tb_banked_sram_ctrl__DOT__send_req__155____Vincrement1;
                    if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__155____Vincrement1)))) {
                        VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                                     , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                        goto __Vlabel40;
                    }
                    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                               "@(posedge tb_banked_sram_ctrl.clk)");
                    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                         193);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
                __Vlabel40: ;
            }
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 195);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid 
                = ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__155__port))) 
                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__port 
                = __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__port;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156____Vincrement2 = 0U;
            {
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_data = 0;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_id = 0;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_err = 0;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__to = 0U;
                vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
                    = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
                       | (0x0fU & ((IData)(1U) << (3U 
                                                   & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__port))));
                while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                    << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                              << 2U)) 
                                  | (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                                 >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__port))))) {
                    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                               "@(posedge tb_banked_sram_ctrl.clk)");
                    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                         205);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                         nullptr, 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         206);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156____Vincrement2 
                        = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__to);
                    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__to 
                        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156____Vincrement2;
                    if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156____Vincrement2)))) {
                        VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                                     , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__port
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_data = 0U;
                        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_id = 0U;
                        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_err = 0U;
                        goto __Vlabel41;
                    }
                }
                __Vtemp_42[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 5U));
                __Vtemp_42[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                          >> 5U));
                __Vtemp_42[2U] = (IData)((((QData)((IData)(
                                                           (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 5U))) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                             >> 5U)))));
                __Vtemp_42[3U] = (IData)(((((QData)((IData)(
                                                            (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                             >> 5U))) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                              [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                              >> 5U)))) 
                                          >> 0x00000020U));
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_data 
                    = __Vtemp_42[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__port)];
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_id 
                    = (0x0000000fU & (((((0x000000f0U 
                                          & ((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 1U)) 
                                             << 4U)) 
                                         | (0x0000000fU 
                                            & (IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)))) 
                                        << 8U) | ((0x000000f0U 
                                                   & ((IData)(
                                                              (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                               >> 1U)) 
                                                      << 4U)) 
                                                  | (0x0000000fU 
                                                     & (IData)(
                                                               (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                >> 1U))))) 
                                      >> (0x0000000fU 
                                          & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__port 
                                             << 2U))));
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_err 
                    = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                       << 1U)) | (1U 
                                                  & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                                << 1U)) 
                                         | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                         [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                             >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__port)));
                Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                           "@(posedge tb_banked_sram_ctrl.clk)");
                co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                     219);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                     nullptr, 
                                                     "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                     220);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                __Vlabel41: ;
            }
            __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__rd 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_data;
            __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__ri 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_id;
            __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__re 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__156__got_err;
            VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__157__msg
                          ,"Read data p=%0d a=%0h exp=%0h got=%0h",4
                          , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__port
                          , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__a)
                          , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__expected
                          , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__rd);
            __Vtask_tb_banked_sram_ctrl__DOT__check__157__cond 
                = (__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__rd 
                   == __Vtask_tb_banked_sram_ctrl__DOT__do_read__154__expected);
            if (__Vtask_tb_banked_sram_ctrl__DOT__check__157__cond) {
                VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                             , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                             , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__157__msg)
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                             , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                             , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__157__msg)
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
            }
            VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__158__msg
                          ,"Read err=0  p=%0d a=%0h",2
                          , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__port
                          , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__a));
            __Vtask_tb_banked_sram_ctrl__DOT__check__158__cond 
                = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__re)));
            if (__Vtask_tb_banked_sram_ctrl__DOT__check__158__cond) {
                VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                             , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                             , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__158__msg)
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                             , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                             , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__158__msg)
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
            }
            VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__159__msg
                          ,"Read id match p=%0d txn=%0h got=%0h",3
                          , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__port
                          , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__txn_id)
                          , '#',4,__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__ri);
            __Vtask_tb_banked_sram_ctrl__DOT__check__159__cond 
                = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__ri) 
                   == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__154__txn_id));
            if (__Vtask_tb_banked_sram_ctrl__DOT__check__159__cond) {
                VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                             , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                             , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__159__msg)
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                             , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                             , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__159__msg)
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
            }
        }
        __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i 
            = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__tc_int_10__145__unnamedblk13__DOT__i);
    }
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__160__msg = "16-entry scoreboard W/R sweep complete"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__160__cond = 1U;
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__160__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__160__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__160__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__req_cnt0 = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__rsp_cnt0 = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__idle_bk0 = 0;
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 0x0000000bU;
    VL_WRITEF_NX("\n=== TC_INT_11: CSR Perf Counter Reads ===\n",0);
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__ca = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162____Vincrement3 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__val = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_addr_in 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__ca;
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             262);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             263);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__csr_ack)))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 266);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 267);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162____Vincrement3 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__to);
            __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162____Vincrement3;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000000aU, __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162____Vincrement3)))) {
                VL_WRITEF_NX("[ERROR] CSR ack timeout\n",0);
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel42;
            }
        }
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__csr_rdata;
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             276);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel42: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__req_cnt0 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__162__val;
    VL_WRITEF_NX("[INFO] req_count[0]  = %0d\n",1, '#',32,__Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__req_cnt0);
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__163__msg = "req_count[0] > 0 after test traffic"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__163__cond 
        = (0U < __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__req_cnt0);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__163__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__163__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__163__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__ca = 4U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164____Vincrement3 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__val = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_addr_in 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__ca;
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             262);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             263);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__csr_ack)))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 266);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 267);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164____Vincrement3 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__to);
            __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164____Vincrement3;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000000aU, __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164____Vincrement3)))) {
                VL_WRITEF_NX("[ERROR] CSR ack timeout\n",0);
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel43;
            }
        }
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__csr_rdata;
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             276);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel43: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__rsp_cnt0 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__164__val;
    VL_WRITEF_NX("[INFO] rsp_count[0]  = %0d\n",1, '#',32,__Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__rsp_cnt0);
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__165__msg = "rsp_count[0] > 0 after test traffic"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__165__cond 
        = (0U < __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__rsp_cnt0);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__165__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__165__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__165__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__ca = 0x1cU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166____Vincrement3 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__val = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_addr_in 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__ca;
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             262);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             263);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__csr_ack)))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 266);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 267);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166____Vincrement3 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__to);
            __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166____Vincrement3;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000000aU, __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166____Vincrement3)))) {
                VL_WRITEF_NX("[ERROR] CSR ack timeout\n",0);
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel44;
            }
        }
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__csr_rdata;
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             276);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel44: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__idle_bk0 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__166__val;
    VL_WRITEF_NX("[INFO] idle_count[0] = %0d (bank 0 idle cycles)\n",1
                 , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__idle_bk0);
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__unnamedblk14__DOT__req_cnt0_b = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__ca = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167____Vincrement3 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__val = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_addr_in 
            = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__ca;
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             262);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             263);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__csr_req = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__csr_ack)))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 266);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 267);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167____Vincrement3 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__to);
            __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167____Vincrement3;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000000aU, __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167____Vincrement3)))) {
                VL_WRITEF_NX("[ERROR] CSR ack timeout\n",0);
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel45;
            }
        }
        __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__val 
            = vlSelfRef.tb_banked_sram_ctrl__DOT__csr_rdata;
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             276);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel45: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__unnamedblk14__DOT__req_cnt0_b 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_csr__167__val;
    VL_WRITEF_NX("[INFO] req_count[0] re-read = %0d (non-intrusive CSR)\n",1
                 , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__tc_int_11__161__unnamedblk14__DOT__req_cnt0_b);
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__168__msg = "csr_ack deasserted between reads"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__168__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__csr_ack)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__168__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__168__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__168__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_12__169__a = 0;
    vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 0x0000000cU;
    VL_WRITEF_NX("\n=== TC_INT_12: Cross-Port Write/Read Same Address ===\n",0);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__row = 0x00000096U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__bank = 1U;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__Vfuncout = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__r = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__b = 0;
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__r 
        = (0x000000ffU & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__row);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__b 
        = (3U & __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__bank);
    __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__Vfuncout 
        = (((IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__r) 
            << 2U) | (IData)(__Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__b));
    __Vtask_tb_banked_sram_ctrl__DOT__tc_int_12__169__a 
        = __Vfunc_tb_banked_sram_ctrl__DOT__make_addr__170__Vfuncout;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__txn_id = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__d = 0xdeadcafeU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_12__169__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__port = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__172__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__172__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__172__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__172__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__172____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__172____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__172____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel46;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel46: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__172__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_err = 0U;
                goto __Vlabel47;
            }
        }
        __Vtemp_44[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_44[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_44[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_44[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_data 
            = __Vtemp_44[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel47: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__173__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__174__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__174__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__174__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__174__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__174__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__175__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__175__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__175__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__175__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__175__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__176__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__176__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__176__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__176__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__176__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__171__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__171__a] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__expected = 0xdeadcafeU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__txn_id = 5U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_12__169__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__port = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__w = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__d = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__178__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__178__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__178__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__178__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__178____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__178____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__178____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel48;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel48: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__178__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_err = 0U;
                goto __Vlabel49;
            }
        }
        __Vtemp_46[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_46[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_46[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_46[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_data 
            = __Vtemp_46[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel49: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__179__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__180__msg
                  ,"Read data p=%0d a=%0h exp=%0h got=%0h",4
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__a)
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__expected
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__rd);
    __Vtask_tb_banked_sram_ctrl__DOT__check__180__cond 
        = (__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__rd 
           == __Vtask_tb_banked_sram_ctrl__DOT__do_read__177__expected);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__180__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__180__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__180__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__181__msg
                  ,"Read err=0  p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__181__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__181__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__181__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__181__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__182__msg
                  ,"Read id match p=%0d txn=%0h got=%0h",3
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__port
                  , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__txn_id)
                  , '#',4,__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__ri);
    __Vtask_tb_banked_sram_ctrl__DOT__check__182__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__177__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__182__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__182__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__182__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__txn_id = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__d = 0x12345678U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_12__169__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__port = 2U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__s 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__s;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__w = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__d 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__d;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__184__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__184__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__184__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__184__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__184____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__184____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__184____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel50;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel50: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__184__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_err = 0U;
                goto __Vlabel51;
            }
        }
        __Vtemp_48[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_48[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_48[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_48[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_data 
            = __Vtemp_48[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel51: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__185__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__186__msg
                  ,"W-ACK data=0    p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__186__cond 
        = (0U == __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__rd);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__186__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__186__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__186__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__187__msg
                  ,"W-ACK err=0     p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__187__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__187__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__187__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__187__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__188__msg
                  ,"W-ACK id match  p=%0d",1, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__port);
    __Vtask_tb_banked_sram_ctrl__DOT__check__188__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__188__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__188__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__188__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    if ((1U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a] 
            = ((0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a]) 
               | (0x000000ffU & __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a] 
            = (0xffffff00U & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a]);
    }
    if ((2U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a] 
            = ((0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a]) 
               | (0x0000ff00U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a] 
            = (0xffff00ffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a]);
    }
    if ((4U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a] 
            = ((0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a]) 
               | (0x00ff0000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a] 
            = (0xff00ffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a]);
    }
    if ((8U & (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__s))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a] 
            = ((0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a]) 
               | (0xff000000U & __Vtask_tb_banked_sram_ctrl__DOT__do_write__183__d));
    } else if ((1U & (~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init
                                [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a])))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem[__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a] 
            = (0x00ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__gold_mem
               [__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a]);
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__gold_init[__Vtask_tb_banked_sram_ctrl__DOT__do_write__183__a] = 1U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__expected = 0x12345678U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__txn_id = 6U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__tc_int_12__169__a;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__port = 3U;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__rd = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__ri = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__re = 0;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__txn_id 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__txn_id;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__s = 0x0fU;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__w = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__d = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__a 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__a;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__port;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190____Vincrement1 = 0U;
    __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__to = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port))));
    if (VL_LIKELY(((0x27U >= (0x0000003fU & ((IData)(0x0000000aU) 
                                             * __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port)))))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr 
            = (((~ (0x00000000000003ffULL << (0x0000003fU 
                                              & ((IData)(0x0000000aU) 
                                                 * __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port)))) 
                & vlSelfRef.tb_banked_sram_ctrl__DOT__req_addr) 
               | (0x000000ffffffffffULL & ((QData)((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__190__a)) 
                                           << (0x0000003fU 
                                               & ((IData)(0x0000000aU) 
                                                  * __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port)))));
    }
    VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port 
                                             << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__req_data, __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__d);
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_we = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_we)) 
                                                  | (0x0fU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__190__w) 
                                                        << 
                                                        (3U 
                                                         & __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe 
        = (((~ ((IData)(0x000fU) << (0x0000000fU & 
                                     (__Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port 
                                      << 2U)))) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_strobe)) 
           | (0x0000ffffU & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__190__s) 
                             << (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port 
                                                << 2U)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_id = ((
                                                   (~ 
                                                    ((IData)(0x000fU) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port 
                                                         << 2U)))) 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_id)) 
                                                  | (0x0000ffffU 
                                                     & ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__send_req__190__txn_id) 
                                                        << 
                                                        (0x0000000fU 
                                                         & (__Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port 
                                                            << 2U)))));
    Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                               "@(posedge tb_banked_sram_ctrl.clk)");
    co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_banked_sram_ctrl.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    {
        while ((1U & (~ ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port))))) {
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__190____Vincrement1 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__to);
            __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__send_req__190____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x00000064U, __Vtask_tb_banked_sram_ctrl__DOT__send_req__190____Vincrement1)))) {
                VL_WRITEF_NX("[ERROR] send_req timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                goto __Vlabel52;
            }
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 193);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        __Vlabel52: ;
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid = 
        ((~ ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__send_req__190__port))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid));
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__port 
        = __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__port;
    __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191____Vincrement2 = 0U;
    {
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_data = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_id = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_err = 0;
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__to = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
               | (0x0fU & ((IData)(1U) << (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__port))));
        while ((1U & (~ (((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 2U)) | (((0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                         >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__port))))) {
            Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                       "@(posedge tb_banked_sram_ctrl.clk)");
            co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_banked_sram_ctrl.clk)", 
                                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                                 205);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                 206);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191____Vincrement2 
                = ((IData)(1U) + __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__to);
            __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__to 
                = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191____Vincrement2;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000000c8U, __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191____Vincrement2)))) {
                VL_WRITEF_NX("[ERROR] wait_rsp timeout port=%0d @%0t\n",3, 'T',-9
                             , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__port
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
                    = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_data = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_id = 0U;
                __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_err = 0U;
                goto __Vlabel53;
            }
        }
        __Vtemp_50[0U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_50[1U] = (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                  >> 5U));
        __Vtemp_50[2U] = (IData)((((QData)((IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))));
        __Vtemp_50[3U] = (IData)(((((QData)((IData)(
                                                    (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                      >> 5U)))) 
                                  >> 0x00000020U));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_data 
            = __Vtemp_50[(3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__port)];
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_id 
            = (0x0000000fU & (((((0x000000f0U & ((IData)(
                                                         (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                          [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                          >> 1U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                           >> 1U)))) 
                                << 8U) | ((0x000000f0U 
                                           & ((IData)(
                                                      (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                       >> 1U)) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                        >> 1U))))) 
                              >> (0x0000000fU & (__Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__port 
                                                 << 2U))));
        __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_err 
            = (1U & (((((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                               << 1U)) | (1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                       << 2U) | ((2U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))) 
                     >> (3U & __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__port)));
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             219);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                             220);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vlabel53: ;
    }
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__rd 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_data;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__ri 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_id;
    __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__re 
        = __Vtask_tb_banked_sram_ctrl__DOT__wait_rsp__191__got_err;
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__192__msg
                  ,"Read data p=%0d a=%0h exp=%0h got=%0h",4
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__a)
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__expected
                  , '#',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__rd);
    __Vtask_tb_banked_sram_ctrl__DOT__check__192__cond 
        = (__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__rd 
           == __Vtask_tb_banked_sram_ctrl__DOT__do_read__189__expected);
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__192__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__192__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__192__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__193__msg
                  ,"Read err=0  p=%0d a=%0h",2, '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__port
                  , '#',10,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__a));
    __Vtask_tb_banked_sram_ctrl__DOT__check__193__cond 
        = (1U & (~ (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__re)));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__193__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__193__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__193__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_SFORMAT_NX(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__194__msg
                  ,"Read id match p=%0d txn=%0h got=%0h",3
                  , '~',32,__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__port
                  , '#',4,(IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__txn_id)
                  , '#',4,__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__ri);
    __Vtask_tb_banked_sram_ctrl__DOT__check__194__cond 
        = ((IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__ri) 
           == (IData)(__Vtask_tb_banked_sram_ctrl__DOT__do_read__189__txn_id));
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__194__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__194__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__194__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__195__msg = "Cross-port R/W coherence verified"s;
    __Vtask_tb_banked_sram_ctrl__DOT__check__195__cond = 1U;
    if (__Vtask_tb_banked_sram_ctrl__DOT__check__195__cond) {
        VL_WRITEF_NX("[PASS] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__195__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[FAIL] TC%02d: %s  @%0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_banked_sram_ctrl__DOT__check__195__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    tb_banked_sram_ctrl__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x00000014U;
    while (VL_LTS_III(32, 0U, tb_banked_sram_ctrl__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        Vtb_banked_sram_ctrl___024root____VbeforeTrig_h3ef35864__0(vlSelf, 
                                                                   "@(posedge tb_banked_sram_ctrl.clk)");
        co_await vlSelfRef.__VtrigSched_h3ef35864__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_banked_sram_ctrl.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                                             678);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_banked_sram_ctrl__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (tb_banked_sram_ctrl__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 
                                         679);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\n  INTEGRATION TB COMPLETE\n  Tests run : %0d\n",1
                 , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__test_id);
    if ((0U == vlSelfRef.tb_banked_sram_ctrl__DOT__error_count)) {
        VL_WRITEF_NX("  RESULT    : ALL PASSED \342\234\223\n",0);
    } else {
        VL_WRITEF_NX("  RESULT    : %0d FAILURE(S) \342\234\227\n",1
                     , '~',32,vlSelfRef.tb_banked_sram_ctrl__DOT__error_count);
    }
    VL_WRITEF_NX("========================================\n\n",0);
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 688, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}
