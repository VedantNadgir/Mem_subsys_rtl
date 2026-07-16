// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_bank_scheduler.h for the primary calling header

#ifndef VERILATED_VTB_BANK_SCHEDULER___024ROOT_H_
#define VERILATED_VTB_BANK_SCHEDULER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_bank_scheduler__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_bank_scheduler___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_bank_scheduler__DOT__clk;
    CData/*0:0*/ tb_bank_scheduler__DOT__rst_n;
    CData/*0:0*/ tb_bank_scheduler__DOT__grant_valid;
    CData/*3:0*/ tb_bank_scheduler__DOT__grant_strobe;
    CData/*0:0*/ tb_bank_scheduler__DOT__grant_we;
    CData/*5:0*/ tb_bank_scheduler__DOT__grant_id;
    CData/*0:0*/ tb_bank_scheduler__DOT__pp1_valid;
    CData/*5:0*/ tb_bank_scheduler__DOT__pp1_id;
    CData/*0:0*/ tb_bank_scheduler__DOT__pp1_we;
    CData/*0:0*/ tb_bank_scheduler__DOT__pp1_err;
    CData/*0:0*/ tb_bank_scheduler__DOT__bank_pp1_ready;
    CData/*0:0*/ tb_bank_scheduler__DOT__dut__DOT__grant_ready;
    CData/*0:0*/ tb_bank_scheduler__DOT__dut__DOT__sram_we;
    CData/*0:0*/ tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
    CData/*7:0*/ tb_bank_scheduler__DOT__dut__DOT__pp0_addr;
    CData/*3:0*/ tb_bank_scheduler__DOT__dut__DOT__pp0_strobe;
    CData/*0:0*/ tb_bank_scheduler__DOT__dut__DOT__pp0_we;
    CData/*5:0*/ tb_bank_scheduler__DOT__dut__DOT__pp0_id;
    CData/*0:0*/ tb_bank_scheduler__DOT__dut__DOT__pp0_err;
    CData/*0:0*/ tb_bank_scheduler__DOT__dut__DOT__pp1_ready;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*11:0*/ tb_bank_scheduler__DOT__grant_addr;
    IData/*31:0*/ tb_bank_scheduler__DOT__grant_data;
    IData/*31:0*/ tb_bank_scheduler__DOT__sram_rdata;
    IData/*31:0*/ tb_bank_scheduler__DOT__pp1_rdata;
    IData/*31:0*/ tb_bank_scheduler__DOT__error_count;
    IData/*31:0*/ tb_bank_scheduler__DOT__test_id;
    IData/*31:0*/ tb_bank_scheduler__DOT__dut__DOT__pp0_data;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    std::string __Vtask_tb_bank_scheduler__DOT__check__3__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__4__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__5__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__6__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__7__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__8__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__11__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__12__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__13__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__14__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__15__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__16__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__17__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__18__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__19__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__20__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__21__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__22__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__23__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__26__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__27__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__28__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__29__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__30__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__31__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__32__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__33__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__34__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__35__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__38__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__39__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__40__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__41__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__42__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__43__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__44__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__47__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__48__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__49__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__50__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__51__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__52__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__53__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__54__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__55__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__56__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__59__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__60__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__61__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__62__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__63__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__64__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__67__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__68__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__69__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__70__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__71__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__72__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__73__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__77__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__78__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__79__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__80__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__81__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__82__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__85__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__86__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__87__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__88__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__91__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__92__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__93__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__94__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__95__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__98__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__99__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__100__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__101__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__102__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__103__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__104__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__105__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__106__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__107__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__108__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__109__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__110__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__113__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__114__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__115__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__116__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__117__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__118__msg;
    std::string __Vtask_tb_bank_scheduler__DOT__check__119__msg;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf13cd25e__0;
    VlTriggerScheduler __VtrigSched_ha465fb53__0;

    // INTERNAL VARIABLES
    Vtb_bank_scheduler__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_bank_scheduler___024root(Vtb_bank_scheduler__Syms* symsp, const char* namep);
    ~Vtb_bank_scheduler___024root();
    VL_UNCOPYABLE(Vtb_bank_scheduler___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
