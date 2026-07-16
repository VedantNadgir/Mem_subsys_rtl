// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rsp_fifo.h for the primary calling header

#ifndef VERILATED_VTB_RSP_FIFO___024ROOT_H_
#define VERILATED_VTB_RSP_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_rsp_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rsp_fifo___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_rsp_fifo__DOT__clk;
    CData/*0:0*/ tb_rsp_fifo__DOT__rst_n;
    CData/*0:0*/ tb_rsp_fifo__DOT__push_valid;
    CData/*0:0*/ tb_rsp_fifo__DOT__pop_ready;
    CData/*1:0*/ tb_rsp_fifo__DOT__dut__DOT__wr_ptr;
    CData/*1:0*/ tb_rsp_fifo__DOT__dut__DOT__rd_ptr;
    CData/*2:0*/ tb_rsp_fifo__DOT__dut__DOT__occupancy;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_rsp_fifo__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_rsp_fifo__DOT__error_count;
    IData/*31:0*/ tb_rsp_fifo__DOT__test_id;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ tb_rsp_fifo__DOT__push_data;
    QData/*63:0*/ tb_rsp_fifo__DOT__A;
    QData/*63:0*/ tb_rsp_fifo__DOT__B;
    QData/*63:0*/ tb_rsp_fifo__DOT__D0;
    QData/*63:0*/ tb_rsp_fifo__DOT__D1;
    QData/*63:0*/ tb_rsp_fifo__DOT__D2;
    QData/*63:0*/ tb_rsp_fifo__DOT__D3;
    QData/*63:0*/ tb_rsp_fifo__DOT__D4;
    QData/*63:0*/ tb_rsp_fifo__DOT__D5;
    QData/*63:0*/ tb_rsp_fifo__DOT__D6;
    QData/*63:0*/ tb_rsp_fifo__DOT__D7;
    VlUnpacked<QData/*63:0*/, 8> tb_rsp_fifo__DOT__observed;
    VlUnpacked<QData/*63:0*/, 4> tb_rsp_fifo__DOT__dut__DOT__fifo_mem;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    std::string __Vtask_tb_rsp_fifo__DOT__check__2__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__3__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__4__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__5__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__11__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__12__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__13__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__14__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__22__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__23__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__24__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__25__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__33__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__34__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__35__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__36__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__37__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__38__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__39__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__42__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__43__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__44__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__48__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__49__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__50__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__51__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__56__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__57__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__58__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__62__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__63__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__64__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__65__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__66__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__67__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__75__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__76__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__77__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__78__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__79__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__80__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__83__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__84__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__85__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__86__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__87__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__88__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__95__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__96__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__97__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__98__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__99__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__100__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__107__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__108__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__109__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__110__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__111__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__116__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__117__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__118__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__119__msg;
    std::string __Vtask_tb_rsp_fifo__DOT__check__120__msg;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0c5ec6d4__0;

    // INTERNAL VARIABLES
    Vtb_rsp_fifo__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rsp_fifo___024root(Vtb_rsp_fifo__Syms* symsp, const char* namep);
    ~Vtb_rsp_fifo___024root();
    VL_UNCOPYABLE(Vtb_rsp_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
