// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_req_fifo.h for the primary calling header

#ifndef VERILATED_VTB_REQ_FIFO___024ROOT_H_
#define VERILATED_VTB_REQ_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_req_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_req_fifo___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_req_fifo__DOT__clk;
    CData/*0:0*/ tb_req_fifo__DOT__rst_n;
    CData/*0:0*/ tb_req_fifo__DOT__push_valid;
    CData/*0:0*/ tb_req_fifo__DOT__push_ready;
    CData/*0:0*/ tb_req_fifo__DOT__pop;
    CData/*1:0*/ tb_req_fifo__DOT__dut__DOT__wr_ptr;
    CData/*1:0*/ tb_req_fifo__DOT__dut__DOT__rd_ptr;
    CData/*2:0*/ tb_req_fifo__DOT__dut__DOT__occupancy;
    CData/*2:0*/ tb_req_fifo__DOT__dut__DOT__nxt_occupancy;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_req_fifo__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_req_fifo__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_req_fifo__DOT__error_count;
    IData/*31:0*/ tb_req_fifo__DOT__test_id;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ tb_req_fifo__DOT__push_data;
    QData/*63:0*/ tb_req_fifo__DOT__A;
    QData/*63:0*/ tb_req_fifo__DOT__B;
    QData/*63:0*/ tb_req_fifo__DOT__C;
    QData/*63:0*/ tb_req_fifo__DOT__D;
    QData/*63:0*/ tb_req_fifo__DOT__D0;
    QData/*63:0*/ tb_req_fifo__DOT__D1;
    QData/*63:0*/ tb_req_fifo__DOT__D2;
    QData/*63:0*/ tb_req_fifo__DOT__D3;
    QData/*63:0*/ tb_req_fifo__DOT__D4;
    QData/*63:0*/ tb_req_fifo__DOT__D5;
    QData/*63:0*/ tb_req_fifo__DOT__D6;
    QData/*63:0*/ tb_req_fifo__DOT__D7;
    QData/*63:0*/ tb_req_fifo__DOT__old_head;
    QData/*63:0*/ tb_req_fifo__DOT__cap_data;
    QData/*63:0*/ tb_req_fifo__DOT__exp_data;
    VlUnpacked<QData/*63:0*/, 4> tb_req_fifo__DOT__dut__DOT__fifo_mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    std::string __Vtask_tb_req_fifo__DOT__check__1__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__2__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__3__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__4__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__8__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__9__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__10__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__13__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__15__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__17__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__19__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__21__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__22__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__24__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__26__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__27__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__29__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__31__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__37__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__38__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__40__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__44__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__45__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__47__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__48__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__52__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__53__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__54__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__56__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__57__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__63__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__64__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__66__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__67__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__69__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__71__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__72__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__81__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__84__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__87__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__90__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__98__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__101__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__104__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__107__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__113__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__115__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__116__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__118__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__119__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__120__msg;
    std::string __Vtask_tb_req_fifo__DOT__check__121__msg;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc1438f4c__0;
    VlTriggerScheduler __VtrigSched_h39ef7a8f__0;

    // INTERNAL VARIABLES
    Vtb_req_fifo__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_req_fifo___024root(Vtb_req_fifo__Syms* symsp, const char* namep);
    ~Vtb_req_fifo___024root();
    VL_UNCOPYABLE(Vtb_req_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
