// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sys.h for the primary calling header

#ifndef VERILATED_VTB_SYS___024ROOT_H_
#define VERILATED_VTB_SYS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_sys_bank_scheduler__pi2;


class Vtb_sys__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sys___024root final {
  public:
    // CELLS
    Vtb_sys_bank_scheduler__pi2* __PVT__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler;
    Vtb_sys_bank_scheduler__pi2* __PVT__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler;
    Vtb_sys_bank_scheduler__pi2* __PVT__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler;
    Vtb_sys_bank_scheduler__pi2* __PVT__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler;
    Vtb_sys_bank_scheduler__pi2* __PVT__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler;
    Vtb_sys_bank_scheduler__pi2* __PVT__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler;
    Vtb_sys_bank_scheduler__pi2* __PVT__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler;
    Vtb_sys_bank_scheduler__pi2* __PVT__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_sys__DOT__clk;
        CData/*0:0*/ tb_sys__DOT__rst_n;
        CData/*0:0*/ tb_sys__DOT__csr_ack;
        QData/*63:0*/ tb_sys__DOT__u_dut__DOT__bank_req_valid;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid;
        QData/*47:0*/ tb_sys__DOT__u_dut__DOT__mux_rsp_id;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__mux_rsp_err;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__4__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__5__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__6__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__7__KET____DOT__u_req_fifo__push_ready;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant_ready;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant_ready;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant_ready;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant_ready;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant;
    };
    struct {
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__pop;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__pop;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__pop;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__pop;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue;
        QData/*63:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready;
        IData/*23:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted;
        CData/*7:0*/ tb_sys__DOT__u_env__DOT__drv_req_valid;
        QData/*47:0*/ tb_sys__DOT__u_env__DOT__drv_req_id;
        CData/*7:0*/ tb_sys__DOT__u_env__DOT__drv_req_we;
        CData/*0:0*/ tb_sys__DOT__u_env__DOT__drv_csr_req;
        CData/*6:0*/ tb_sys__DOT__u_env__DOT__drv_csr_addr;
        CData/*7:0*/ tb_sys__DOT__u_env__DOT__mon_rsp_ready;
        CData/*7:0*/ tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_32;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_33;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_34;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_35;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_36;
    };
    struct {
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_37;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_38;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_39;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_40;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_41;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_42;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_43;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_44;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_45;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_46;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_47;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_48;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_49;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_50;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_51;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_52;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_53;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_54;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_55;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_56;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_57;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_58;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_59;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_60;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_61;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_62;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_63;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_64;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_65;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_66;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_67;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_68;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_69;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_70;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_71;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_72;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_73;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_74;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_75;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_76;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_77;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_78;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_79;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_80;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_81;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_82;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_83;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_84;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_85;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_86;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_87;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_88;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_89;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_90;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_91;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_92;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_93;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_94;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_95;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sys__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sys__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
    };
    struct {
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VlWide<3>/*71:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id;
        VlWide<3>/*95:0*/ tb_sys__DOT__u_env__DOT__drv_req_addr;
        VlWide<4>/*127:0*/ tb_sys__DOT__u_env__DOT__drv_req_strobe;
        SData/*10:0*/ __VdfgRegularize_hebeb780c_0_16;
        SData/*10:0*/ __VdfgRegularize_hebeb780c_0_17;
        SData/*10:0*/ __VdfgRegularize_hebeb780c_0_18;
        SData/*10:0*/ __VdfgRegularize_hebeb780c_0_19;
        SData/*10:0*/ __VdfgRegularize_hebeb780c_0_20;
        SData/*10:0*/ __VdfgRegularize_hebeb780c_0_21;
        SData/*10:0*/ __VdfgRegularize_hebeb780c_0_22;
        SData/*10:0*/ __VdfgRegularize_hebeb780c_0_23;
        IData/*31:0*/ tb_sys__DOT__csr_rdata;
        VlWide<32>/*1023:0*/ tb_sys__DOT__u_dut__DOT__mux_rsp_data;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__z;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__y;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_4__sat_inc;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_3__sat_inc;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_1__sat_inc;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_0__sat_inc;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__i;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__b;
        VlWide<32>/*1023:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata;
        VlWide<32>/*1023:0*/ tb_sys__DOT__u_env__DOT__drv_req_data;
        IData/*31:0*/ tb_sys__DOT__u_env__DOT__test_id;
        IData/*31:0*/ tb_sys__DOT__u_env__DOT__total_errors;
        IData/*31:0*/ tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count;
        IData/*31:0*/ tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlWide<41>/*1303:0*/ tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt;
        VlWide<6>/*162:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt;
        VlWide<6>/*162:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt;
        VlWide<6>/*162:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt;
        VlWide<6>/*162:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt;
        VlWide<6>/*162:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt;
        VlWide<6>/*162:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt;
        VlWide<6>/*162:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt;
        VlWide<6>/*162:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt;
        VlUnpacked<VlWide<5>/*134:0*/, 8> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*134:0*/, 8> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*134:0*/, 8> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*134:0*/, 8> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*134:0*/, 8> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*134:0*/, 8> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*134:0*/, 8> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*134:0*/, 8> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<4>/*127:0*/, 512> tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 512> tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 512> tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 512> tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 512> tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 512> tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 512> tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 512> tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<6>/*162:0*/, 8> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<6>/*162:0*/, 8> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<6>/*162:0*/, 8> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<6>/*162:0*/, 8> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<6>/*162:0*/, 8> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<6>/*162:0*/, 8> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem;
    };
    struct {
        VlUnpacked<VlWide<6>/*162:0*/, 8> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<6>/*162:0*/, 8> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<IData/*31:0*/, 96> tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter;
        VlUnpacked<VlWide<4>/*127:0*/, 4096> tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem;
        VlUnpacked<CData/*0:0*/, 4096> tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init;
        VlUnpacked<VlWide<4>/*127:0*/, 100> __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 96>, false, IData/*31:0*/, 1> __VdlyCommitQueuetb_sys__DOT__u_dut__DOT__u_perf__DOT__counter;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc982ec79__0;

    // INTERNAL VARIABLES
    Vtb_sys__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_sys___024root(Vtb_sys__Syms* symsp, const char* namep);
    ~Vtb_sys___024root();
    VL_UNCOPYABLE(Vtb_sys___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
