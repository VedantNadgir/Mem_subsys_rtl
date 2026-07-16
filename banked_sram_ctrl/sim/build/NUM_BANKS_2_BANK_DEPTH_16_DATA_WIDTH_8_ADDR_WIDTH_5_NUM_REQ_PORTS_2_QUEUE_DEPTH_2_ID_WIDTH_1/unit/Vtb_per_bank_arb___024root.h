// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_per_bank_arb.h for the primary calling header

#ifndef VERILATED_VTB_PER_BANK_ARB___024ROOT_H_
#define VERILATED_VTB_PER_BANK_ARB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_per_bank_arb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_per_bank_arb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_per_bank_arb__DOT__clk;
    CData/*0:0*/ tb_per_bank_arb__DOT__rst_n;
    CData/*3:0*/ tb_per_bank_arb__DOT__req_valid;
    CData/*0:0*/ tb_per_bank_arb__DOT__grant_ready;
    CData/*3:0*/ tb_per_bank_arb__DOT__dut__DOT__conflict_mask;
    CData/*1:0*/ tb_per_bank_arb__DOT__dut__DOT__ptr;
    CData/*3:0*/ tb_per_bank_arb__DOT__dut__DOT__grant;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_per_bank_arb__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_per_bank_arb__DOT__error_count;
    IData/*31:0*/ tb_per_bank_arb__DOT__test_id;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_tb_per_bank_arb__DOT__check__1__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__2__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__3__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__4__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__5__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__7__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__8__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__9__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__12__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__13__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__14__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__16__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__17__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__20__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__21__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__23__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__24__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__26__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__28__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__29__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__31__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__32__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__34__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__35__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__37__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__38__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__40__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__41__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__43__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__44__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__46__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__47__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__49__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__50__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__52__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__54__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__55__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__56__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__57__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__59__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__61__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__62__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__63__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__65__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__66__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__68__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__69__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__71__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__72__msg;
    std::string __Vtask_tb_per_bank_arb__DOT__check__73__msg;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8b0fb96c__0;
    VlTriggerScheduler __VtrigSched_h61eeb86b__0;

    // INTERNAL VARIABLES
    Vtb_per_bank_arb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_per_bank_arb___024root(Vtb_per_bank_arb__Syms* symsp, const char* namep);
    ~Vtb_per_bank_arb___024root();
    VL_UNCOPYABLE(Vtb_per_bank_arb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
