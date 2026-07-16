// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rsp_mux.h for the primary calling header

#ifndef VERILATED_VTB_RSP_MUX___024ROOT_H_
#define VERILATED_VTB_RSP_MUX___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_rsp_mux__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rsp_mux___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_rsp_mux__DOT__pp1_valid;
    IData/*23:0*/ tb_rsp_mux__DOT__pp1_id;
    CData/*3:0*/ tb_rsp_mux__DOT__pp1_we;
    CData/*3:0*/ tb_rsp_mux__DOT__pp1_err;
    CData/*3:0*/ tb_rsp_mux__DOT__rsp_fifo_ready;
    CData/*3:0*/ tb_rsp_mux__DOT__rsp_valid;
    SData/*15:0*/ tb_rsp_mux__DOT__rsp_id;
    CData/*3:0*/ tb_rsp_mux__DOT__rsp_err;
    CData/*0:0*/ tb_rsp_mux__DOT__clk;
    CData/*3:0*/ tb_rsp_mux__DOT__dut__DOT__bank_pp1_ready;
    CData/*7:0*/ tb_rsp_mux__DOT__dut__DOT__dest_ports;
    CData/*1:0*/ tb_rsp_mux__DOT__dut__DOT__p;
    CData/*0:0*/ tb_rsp_mux__DOT__dut__DOT__found;
    CData/*3:0*/ tb_rsp_mux__DOT__dut__DOT__bank_granted;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_rsp_mux__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VlWide<4>/*127:0*/ tb_rsp_mux__DOT__pp1_rdata;
    VlWide<4>/*127:0*/ tb_rsp_mux__DOT__rsp_data;
    IData/*31:0*/ tb_rsp_mux__DOT__error_count;
    IData/*31:0*/ tb_rsp_mux__DOT__test_id;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    std::string __Vtask_tb_rsp_mux__DOT__check__2__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__3__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__4__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__5__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__6__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__7__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__10__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__11__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__12__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__13__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__14__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__15__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__16__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__17__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__20__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__21__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__22__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__23__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__24__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__25__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__28__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__29__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__30__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__31__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__34__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__35__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__36__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__37__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__38__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__39__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__40__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__43__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__44__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__45__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__46__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__47__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__48__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__51__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__52__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__53__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__54__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__55__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__56__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__57__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__58__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__59__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__62__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__63__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__64__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__67__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__68__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__69__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__70__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__73__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__74__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__75__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__76__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__77__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__78__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__79__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__80__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__81__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__82__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__83__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__86__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__87__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__88__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__89__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__90__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__91__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__92__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__93__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__94__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__95__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__96__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__99__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__100__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__101__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__102__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__103__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__104__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__105__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__106__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__107__msg;
    std::string __Vtask_tb_rsp_mux__DOT__check__108__msg;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4a770002__0;

    // INTERNAL VARIABLES
    Vtb_rsp_mux__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rsp_mux___024root(Vtb_rsp_mux__Syms* symsp, const char* namep);
    ~Vtb_rsp_mux___024root();
    VL_UNCOPYABLE(Vtb_rsp_mux___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
