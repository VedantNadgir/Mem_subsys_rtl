// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sys.h for the primary calling header

#ifndef VERILATED_VTB_SYS___024ROOT_H_
#define VERILATED_VTB_SYS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sys__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sys___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_sys__DOT__clk;
        CData/*0:0*/ tb_sys__DOT__rst_n;
        CData/*0:0*/ tb_sys__DOT__csr_ack;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__bank_req_valid;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__mux_rsp_id;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__mux_rsp_err;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we;
        CData/*5:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we;
        CData/*5:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we;
        CData/*5:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we;
        CData/*5:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we;
        CData/*5:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_id;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we;
        CData/*5:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_id;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we;
    };
    struct {
        CData/*5:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we;
        CData/*5:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy;
        CData/*2:0*/ tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid;
        IData/*23:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready;
        CData/*7:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports;
        CData/*1:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p;
        CData/*0:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found;
        CData/*3:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted;
        CData/*3:0*/ tb_sys__DOT__u_env__DOT__drv_req_valid;
        SData/*15:0*/ tb_sys__DOT__u_env__DOT__drv_req_id;
        CData/*3:0*/ tb_sys__DOT__u_env__DOT__drv_req_we;
        CData/*0:0*/ tb_sys__DOT__u_env__DOT__drv_csr_req;
        CData/*4:0*/ tb_sys__DOT__u_env__DOT__drv_csr_addr;
        CData/*3:0*/ tb_sys__DOT__u_env__DOT__mon_rsp_ready;
        CData/*3:0*/ tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_16;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_17;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_18;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_19;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_20;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_21;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_22;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_23;
    };
    struct {
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_24;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_25;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_26;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_27;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_28;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_29;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_30;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_31;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sys__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sys__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe;
        SData/*15:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe;
        QData/*39:0*/ tb_sys__DOT__u_env__DOT__drv_req_addr;
        QData/*63:0*/ tb_sys__DOT__u_env__DOT__drv_req_strobe;
        SData/*9:0*/ __VdfgRegularize_hebeb780c_0_8;
        SData/*9:0*/ __VdfgRegularize_hebeb780c_0_9;
        SData/*9:0*/ __VdfgRegularize_hebeb780c_0_10;
        SData/*9:0*/ __VdfgRegularize_hebeb780c_0_11;
        IData/*31:0*/ tb_sys__DOT__csr_rdata;
        VlWide<16>/*511:0*/ tb_sys__DOT__u_dut__DOT__mux_rsp_data;
        VlWide<4>/*127:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata;
        VlWide<4>/*127:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata;
        VlWide<4>/*127:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata;
        VlWide<4>/*127:0*/ tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__z;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__y;
        VlWide<4>/*127:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data;
        VlWide<4>/*127:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data;
        VlWide<4>/*127:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data;
        VlWide<4>/*127:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_4__sat_inc;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_3__sat_inc;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_2__sat_inc;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_1__sat_inc;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT____VlemCall_0__sat_inc;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__i;
        IData/*31:0*/ tb_sys__DOT__u_dut__DOT__u_perf__DOT__b;
        VlWide<16>/*511:0*/ tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata;
        VlWide<16>/*511:0*/ tb_sys__DOT__u_env__DOT__drv_req_data;
        IData/*31:0*/ tb_sys__DOT__u_env__DOT__test_id;
        IData/*31:0*/ tb_sys__DOT__u_env__DOT__total_errors;
        IData/*31:0*/ tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count;
        IData/*31:0*/ tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlWide<20>/*635:0*/ tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt;
        VlWide<5>/*158:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt;
        VlWide<5>/*158:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt;
        VlWide<5>/*158:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt;
        VlWide<5>/*158:0*/ tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt;
        VlUnpacked<VlWide<5>/*132:0*/, 4> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*132:0*/, 4> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
    };
    struct {
        VlUnpacked<VlWide<5>/*132:0*/, 4> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*132:0*/, 4> tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<4>/*127:0*/, 256> tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 256> tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 256> tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 256> tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem;
        VlUnpacked<VlWide<5>/*158:0*/, 4> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*158:0*/, 4> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*158:0*/, 4> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<VlWide<5>/*158:0*/, 4> tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem;
        VlUnpacked<IData/*31:0*/, 32> tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter;
        VlUnpacked<VlWide<4>/*127:0*/, 1024> tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem;
        VlUnpacked<CData/*0:0*/, 1024> tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init;
        VlUnpacked<VlWide<4>/*127:0*/, 100> __Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
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
