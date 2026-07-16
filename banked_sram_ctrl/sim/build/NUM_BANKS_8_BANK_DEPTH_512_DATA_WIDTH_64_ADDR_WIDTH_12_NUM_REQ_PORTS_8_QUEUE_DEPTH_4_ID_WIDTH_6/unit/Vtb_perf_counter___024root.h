// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_perf_counter.h for the primary calling header

#ifndef VERILATED_VTB_PERF_COUNTER___024ROOT_H_
#define VERILATED_VTB_PERF_COUNTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_perf_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_perf_counter___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_perf_counter__DOT__clk;
    CData/*0:0*/ tb_perf_counter__DOT__rst_n;
    CData/*3:0*/ tb_perf_counter__DOT__req_accept;
    CData/*3:0*/ tb_perf_counter__DOT__rsp_issue;
    SData/*15:0*/ tb_perf_counter__DOT__conflict;
    CData/*3:0*/ tb_perf_counter__DOT__req_queue_full;
    CData/*3:0*/ tb_perf_counter__DOT__bank_idle;
    CData/*0:0*/ tb_perf_counter__DOT__csr_req;
    CData/*4:0*/ tb_perf_counter__DOT__csr_addr;
    CData/*0:0*/ tb_perf_counter__DOT__csr_ack;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_perf_counter__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_perf_counter__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_perf_counter__DOT__csr_rdata;
    IData/*31:0*/ tb_perf_counter__DOT__error_count;
    IData/*31:0*/ tb_perf_counter__DOT__test_id;
    IData/*31:0*/ tb_perf_counter__DOT__rdata;
    IData/*31:0*/ tb_perf_counter__DOT__dut__DOT____VlemCall_4__sat_inc;
    IData/*31:0*/ tb_perf_counter__DOT__dut__DOT____VlemCall_3__sat_inc;
    IData/*31:0*/ tb_perf_counter__DOT__dut__DOT____VlemCall_2__sat_inc;
    IData/*31:0*/ tb_perf_counter__DOT__dut__DOT____VlemCall_1__sat_inc;
    IData/*31:0*/ tb_perf_counter__DOT__dut__DOT____VlemCall_0__sat_inc;
    IData/*31:0*/ tb_perf_counter__DOT__dut__DOT__i;
    IData/*31:0*/ tb_perf_counter__DOT__dut__DOT__b;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 32> tb_perf_counter__DOT__dut__DOT__counter;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    std::string __Vtask_tb_perf_counter__DOT__check__1__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__2__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__7__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__10__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__13__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__16__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__19__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__24__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__27__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__30__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__35__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__38__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__42__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__45__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__48__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__53__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__56__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__61__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__64__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__67__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__68__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__69__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__70__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__75__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__78__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__82__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__86__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__90__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__94__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__98__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__102__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__103__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__106__msg;
    std::string __Vtask_tb_perf_counter__DOT__check__109__msg;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h97891024__0;
    VlTriggerScheduler __VtrigSched_h043317c9__0;
    VlTriggerScheduler __VtrigSched_h978910e5__0;

    // INTERNAL VARIABLES
    Vtb_perf_counter__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_perf_counter___024root(Vtb_perf_counter__Syms* symsp, const char* namep);
    ~Vtb_perf_counter___024root();
    VL_UNCOPYABLE(Vtb_perf_counter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
