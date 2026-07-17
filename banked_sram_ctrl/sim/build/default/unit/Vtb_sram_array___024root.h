// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sram_array.h for the primary calling header

#ifndef VERILATED_VTB_SRAM_ARRAY___024ROOT_H_
#define VERILATED_VTB_SRAM_ARRAY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sram_array__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sram_array___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_sram_array__DOT__clk;
    CData/*0:0*/ tb_sram_array__DOT__we;
    CData/*7:0*/ tb_sram_array__DOT__addr;
    CData/*3:0*/ tb_sram_array__DOT__bwe;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sram_array__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_sram_array__DOT__wdata;
    IData/*31:0*/ tb_sram_array__DOT__error_count;
    IData/*31:0*/ tb_sram_array__DOT__test_id;
    IData/*31:0*/ tb_sram_array__DOT__old_rdata;
    IData/*31:0*/ tb_sram_array__DOT__expected;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 256> tb_sram_array__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    std::string __Vtask_tb_sram_array__DOT__expect_read__2__msg;
    std::string __Vtask_tb_sram_array__DOT__check__4__msg;
    std::string __Vtask_tb_sram_array__DOT__check__9__msg;
    std::string __Vtask_tb_sram_array__DOT__check__11__msg;
    std::string __Vtask_tb_sram_array__DOT__check__12__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__15__msg;
    std::string __Vtask_tb_sram_array__DOT__check__17__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__21__msg;
    std::string __Vtask_tb_sram_array__DOT__check__23__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__27__msg;
    std::string __Vtask_tb_sram_array__DOT__check__29__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__31__msg;
    std::string __Vtask_tb_sram_array__DOT__check__33__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__35__msg;
    std::string __Vtask_tb_sram_array__DOT__check__37__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__41__msg;
    std::string __Vtask_tb_sram_array__DOT__check__43__msg;
    std::string __Vtask_tb_sram_array__DOT__check__46__msg;
    std::string __Vtask_tb_sram_array__DOT__check__48__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__53__msg;
    std::string __Vtask_tb_sram_array__DOT__check__55__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__56__msg;
    std::string __Vtask_tb_sram_array__DOT__check__58__msg;
    std::string __Vtask_tb_sram_array__DOT__check__63__msg;
    std::string __Vtask_tb_sram_array__DOT__check__64__msg;
    std::string __Vtask_tb_sram_array__DOT__check__65__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__69__msg;
    std::string __Vtask_tb_sram_array__DOT__check__71__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__75__msg;
    std::string __Vtask_tb_sram_array__DOT__check__77__msg;
    std::string __Vtask_tb_sram_array__DOT__expect_read__78__msg;
    std::string __Vtask_tb_sram_array__DOT__check__80__msg;
    std::string __Vtask_tb_sram_array__DOT__check__82__msg;
    std::string __Vtask_tb_sram_array__DOT__check__83__msg;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2b413ccf__0;

    // INTERNAL VARIABLES
    Vtb_sram_array__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_sram_array___024root(Vtb_sram_array__Syms* symsp, const char* namep);
    ~Vtb_sram_array___024root();
    VL_UNCOPYABLE(Vtb_sram_array___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
