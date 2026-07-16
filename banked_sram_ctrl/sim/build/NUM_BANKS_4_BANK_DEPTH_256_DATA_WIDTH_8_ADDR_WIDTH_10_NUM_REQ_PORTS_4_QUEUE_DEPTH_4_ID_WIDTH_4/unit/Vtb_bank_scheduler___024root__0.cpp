// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bank_scheduler.h for the primary calling header

#include "Vtb_bank_scheduler__pch.h"

VlCoroutine Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__0(Vtb_bank_scheduler___024root* vlSelf);
VlCoroutine Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__1(Vtb_bank_scheduler___024root* vlSelf);
VlCoroutine Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__2(Vtb_bank_scheduler___024root* vlSelf);
VlCoroutine Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__3(Vtb_bank_scheduler___024root* vlSelf);

void Vtb_bank_scheduler___024root___eval_initial(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_initial\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("waves/bank_scheduler.vcd"s);
        vlSymsp->_traceDumpOpen();
        vlSelfRef.tb_bank_scheduler__DOT__clk = 0U;
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VlCoroutine Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__0(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000000007a120ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         13);
    VL_WRITEF_NX("WATCHDOG EXPIRED\n",0);
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 15, "");
    co_return;
}

void Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(Vtb_bank_scheduler___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__1(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_bank_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_bank_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_bank_scheduler__DOT__rst_n = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    tb_bank_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, tb_bank_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                                 "@(posedge tb_bank_scheduler.clk)");
        co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_bank_scheduler.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                             99);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_bank_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_bank_scheduler__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_bank_scheduler__DOT__rst_n = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_bank_scheduler___024root____VbeforeTrig_ha465fb53__0(Vtb_bank_scheduler___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__2(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_bank_scheduler__DOT__tc_bs_01__1__tb_bank_scheduler__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_bank_scheduler__DOT__tc_bs_01__1__tb_bank_scheduler__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__3__cond;
    __Vtask_tb_bank_scheduler__DOT__check__3__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__4__cond;
    __Vtask_tb_bank_scheduler__DOT__check__4__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__5__cond;
    __Vtask_tb_bank_scheduler__DOT__check__5__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__6__cond;
    __Vtask_tb_bank_scheduler__DOT__check__6__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__7__cond;
    __Vtask_tb_bank_scheduler__DOT__check__7__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__8__cond;
    __Vtask_tb_bank_scheduler__DOT__check__8__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__11__cond;
    __Vtask_tb_bank_scheduler__DOT__check__11__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__12__cond;
    __Vtask_tb_bank_scheduler__DOT__check__12__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__13__cond;
    __Vtask_tb_bank_scheduler__DOT__check__13__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__14__cond;
    __Vtask_tb_bank_scheduler__DOT__check__14__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__15__cond;
    __Vtask_tb_bank_scheduler__DOT__check__15__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__16__cond;
    __Vtask_tb_bank_scheduler__DOT__check__16__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__17__cond;
    __Vtask_tb_bank_scheduler__DOT__check__17__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__18__cond;
    __Vtask_tb_bank_scheduler__DOT__check__18__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__19__cond;
    __Vtask_tb_bank_scheduler__DOT__check__19__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__20__cond;
    __Vtask_tb_bank_scheduler__DOT__check__20__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__21__cond;
    __Vtask_tb_bank_scheduler__DOT__check__21__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__22__cond;
    __Vtask_tb_bank_scheduler__DOT__check__22__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__23__cond;
    __Vtask_tb_bank_scheduler__DOT__check__23__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__26__cond;
    __Vtask_tb_bank_scheduler__DOT__check__26__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__27__cond;
    __Vtask_tb_bank_scheduler__DOT__check__27__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__28__cond;
    __Vtask_tb_bank_scheduler__DOT__check__28__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__29__cond;
    __Vtask_tb_bank_scheduler__DOT__check__29__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__30__cond;
    __Vtask_tb_bank_scheduler__DOT__check__30__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__31__cond;
    __Vtask_tb_bank_scheduler__DOT__check__31__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__32__cond;
    __Vtask_tb_bank_scheduler__DOT__check__32__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__33__cond;
    __Vtask_tb_bank_scheduler__DOT__check__33__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__34__cond;
    __Vtask_tb_bank_scheduler__DOT__check__34__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__35__cond;
    __Vtask_tb_bank_scheduler__DOT__check__35__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__38__cond;
    __Vtask_tb_bank_scheduler__DOT__check__38__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__39__cond;
    __Vtask_tb_bank_scheduler__DOT__check__39__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__40__cond;
    __Vtask_tb_bank_scheduler__DOT__check__40__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__41__cond;
    __Vtask_tb_bank_scheduler__DOT__check__41__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__42__cond;
    __Vtask_tb_bank_scheduler__DOT__check__42__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__43__cond;
    __Vtask_tb_bank_scheduler__DOT__check__43__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__44__cond;
    __Vtask_tb_bank_scheduler__DOT__check__44__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__47__cond;
    __Vtask_tb_bank_scheduler__DOT__check__47__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__48__cond;
    __Vtask_tb_bank_scheduler__DOT__check__48__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__49__cond;
    __Vtask_tb_bank_scheduler__DOT__check__49__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__50__cond;
    __Vtask_tb_bank_scheduler__DOT__check__50__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__51__cond;
    __Vtask_tb_bank_scheduler__DOT__check__51__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__52__cond;
    __Vtask_tb_bank_scheduler__DOT__check__52__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__53__cond;
    __Vtask_tb_bank_scheduler__DOT__check__53__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__54__cond;
    __Vtask_tb_bank_scheduler__DOT__check__54__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__55__cond;
    __Vtask_tb_bank_scheduler__DOT__check__55__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__56__cond;
    __Vtask_tb_bank_scheduler__DOT__check__56__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__59__cond;
    __Vtask_tb_bank_scheduler__DOT__check__59__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__60__cond;
    __Vtask_tb_bank_scheduler__DOT__check__60__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__61__cond;
    __Vtask_tb_bank_scheduler__DOT__check__61__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__62__cond;
    __Vtask_tb_bank_scheduler__DOT__check__62__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__63__cond;
    __Vtask_tb_bank_scheduler__DOT__check__63__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__64__cond;
    __Vtask_tb_bank_scheduler__DOT__check__64__cond = 0;
    IData/*31:0*/ __Vtask_tb_bank_scheduler__DOT__tc_bs_07__65__tb_bank_scheduler__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_bank_scheduler__DOT__tc_bs_07__65__tb_bank_scheduler__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__67__cond;
    __Vtask_tb_bank_scheduler__DOT__check__67__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__68__cond;
    __Vtask_tb_bank_scheduler__DOT__check__68__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__69__cond;
    __Vtask_tb_bank_scheduler__DOT__check__69__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__70__cond;
    __Vtask_tb_bank_scheduler__DOT__check__70__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__71__cond;
    __Vtask_tb_bank_scheduler__DOT__check__71__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__72__cond;
    __Vtask_tb_bank_scheduler__DOT__check__72__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__73__cond;
    __Vtask_tb_bank_scheduler__DOT__check__73__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__77__cond;
    __Vtask_tb_bank_scheduler__DOT__check__77__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__78__cond;
    __Vtask_tb_bank_scheduler__DOT__check__78__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__79__cond;
    __Vtask_tb_bank_scheduler__DOT__check__79__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__80__cond;
    __Vtask_tb_bank_scheduler__DOT__check__80__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__81__cond;
    __Vtask_tb_bank_scheduler__DOT__check__81__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__82__cond;
    __Vtask_tb_bank_scheduler__DOT__check__82__cond = 0;
    IData/*31:0*/ __Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__tb_bank_scheduler__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__tb_bank_scheduler__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    CData/*7:0*/ __Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__addr_before;
    __Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__addr_before = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__85__cond;
    __Vtask_tb_bank_scheduler__DOT__check__85__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__86__cond;
    __Vtask_tb_bank_scheduler__DOT__check__86__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__87__cond;
    __Vtask_tb_bank_scheduler__DOT__check__87__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__88__cond;
    __Vtask_tb_bank_scheduler__DOT__check__88__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__91__cond;
    __Vtask_tb_bank_scheduler__DOT__check__91__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__92__cond;
    __Vtask_tb_bank_scheduler__DOT__check__92__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__93__cond;
    __Vtask_tb_bank_scheduler__DOT__check__93__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__94__cond;
    __Vtask_tb_bank_scheduler__DOT__check__94__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__95__cond;
    __Vtask_tb_bank_scheduler__DOT__check__95__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__98__cond;
    __Vtask_tb_bank_scheduler__DOT__check__98__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__99__cond;
    __Vtask_tb_bank_scheduler__DOT__check__99__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__100__cond;
    __Vtask_tb_bank_scheduler__DOT__check__100__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__101__cond;
    __Vtask_tb_bank_scheduler__DOT__check__101__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__102__cond;
    __Vtask_tb_bank_scheduler__DOT__check__102__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__103__cond;
    __Vtask_tb_bank_scheduler__DOT__check__103__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__104__cond;
    __Vtask_tb_bank_scheduler__DOT__check__104__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__105__cond;
    __Vtask_tb_bank_scheduler__DOT__check__105__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__106__cond;
    __Vtask_tb_bank_scheduler__DOT__check__106__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__107__cond;
    __Vtask_tb_bank_scheduler__DOT__check__107__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__108__cond;
    __Vtask_tb_bank_scheduler__DOT__check__108__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__109__cond;
    __Vtask_tb_bank_scheduler__DOT__check__109__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__110__cond;
    __Vtask_tb_bank_scheduler__DOT__check__110__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__113__cond;
    __Vtask_tb_bank_scheduler__DOT__check__113__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__114__cond;
    __Vtask_tb_bank_scheduler__DOT__check__114__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__115__cond;
    __Vtask_tb_bank_scheduler__DOT__check__115__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__116__cond;
    __Vtask_tb_bank_scheduler__DOT__check__116__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__117__cond;
    __Vtask_tb_bank_scheduler__DOT__check__117__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__118__cond;
    __Vtask_tb_bank_scheduler__DOT__check__118__cond = 0;
    CData/*0:0*/ __Vtask_tb_bank_scheduler__DOT__check__119__cond;
    __Vtask_tb_bank_scheduler__DOT__check__119__cond = 0;
    // Body
    VL_WRITEF_NX("TB START\n",0);
    Vtb_bank_scheduler___024root____VbeforeTrig_ha465fb53__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.rst_n)");
    co_await vlSelfRef.__VtrigSched_ha465fb53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.rst_n)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         549);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         550);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_bank_scheduler__DOT__tc_bs_01__1__tb_bank_scheduler__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 1U;
    VL_WRITEF_NX("\n=== Test %0d: Reset ===\n",1, '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__rst_n = 0U;
    __Vtask_tb_bank_scheduler__DOT__tc_bs_01__1__tb_bank_scheduler__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_bank_scheduler__DOT__tc_bs_01__1__tb_bank_scheduler__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                                 "@(posedge tb_bank_scheduler.clk)");
        co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_bank_scheduler.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                             149);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_bank_scheduler__DOT__tc_bs_01__1__tb_bank_scheduler__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_bank_scheduler__DOT__tc_bs_01__1__tb_bank_scheduler__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__3__msg = "pp0_valid=0 after reset"s;
    __Vtask_tb_bank_scheduler__DOT__check__3__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid)));
    if (__Vtask_tb_bank_scheduler__DOT__check__3__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__3__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__3__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__4__msg = "pp1_valid=0 after reset"s;
    __Vtask_tb_bank_scheduler__DOT__check__4__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_valid)));
    if (__Vtask_tb_bank_scheduler__DOT__check__4__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__4__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__5__msg = "grant_ready=1 after reset"s;
    __Vtask_tb_bank_scheduler__DOT__check__5__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready;
    if (__Vtask_tb_bank_scheduler__DOT__check__5__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__5__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__5__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__6__msg = "pp1_ready=1 after reset"s;
    __Vtask_tb_bank_scheduler__DOT__check__6__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready;
    if (__Vtask_tb_bank_scheduler__DOT__check__6__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__6__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__6__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__7__msg = "sram_we=0 after reset"s;
    __Vtask_tb_bank_scheduler__DOT__check__7__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we)));
    if (__Vtask_tb_bank_scheduler__DOT__check__7__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__7__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__7__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__8__msg = "pp1_err=0 after reset"s;
    __Vtask_tb_bank_scheduler__DOT__check__8__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_err)));
    if (__Vtask_tb_bank_scheduler__DOT__check__8__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__8__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__8__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__rst_n = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 2U;
    VL_WRITEF_NX("\n=== Test %0d: Basic Read 3-Cycle Latency ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0xcafebabeU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0x0085U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0x1aU;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         174);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         175);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__11__msg = "C1: pp0_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__11__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__11__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__11__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__11__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__12__msg = "C1: pp0_addr=0x21"s;
    __Vtask_tb_bank_scheduler__DOT__check__12__cond 
        = (0x21U == (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_addr));
    if (__Vtask_tb_bank_scheduler__DOT__check__12__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__12__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__13__msg = "C1: pp0_we=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__13__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_we)));
    if (__Vtask_tb_bank_scheduler__DOT__check__13__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__13__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__14__msg = "C1: pp0_err=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__14__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_err)));
    if (__Vtask_tb_bank_scheduler__DOT__check__14__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__14__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__14__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__15__msg = "C1: sram_addr=0x21"s;
    __Vtask_tb_bank_scheduler__DOT__check__15__cond 
        = (0x21U == (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_addr));
    if (__Vtask_tb_bank_scheduler__DOT__check__15__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__15__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__15__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__16__msg = "C1: sram_we=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__16__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we)));
    if (__Vtask_tb_bank_scheduler__DOT__check__16__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__16__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__16__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__17__msg = "C1: grant_ready=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__17__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready;
    if (__Vtask_tb_bank_scheduler__DOT__check__17__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__17__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__17__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         187);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         188);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__18__msg = "C2: pp1_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__18__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__18__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__18__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__18__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__19__msg = "C2: pp1_rdata=CAFE_BABE"s;
    __Vtask_tb_bank_scheduler__DOT__check__19__cond 
        = (0xcafebabeU == vlSelfRef.tb_bank_scheduler__DOT__pp1_rdata);
    if (__Vtask_tb_bank_scheduler__DOT__check__19__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__19__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__19__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__20__msg = "C2: pp1_id=0x1A"s;
    __Vtask_tb_bank_scheduler__DOT__check__20__cond 
        = (0x1aU == (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_id));
    if (__Vtask_tb_bank_scheduler__DOT__check__20__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__20__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__20__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__21__msg = "C2: pp1_we=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__21__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_we)));
    if (__Vtask_tb_bank_scheduler__DOT__check__21__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__21__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__21__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__22__msg = "C2: pp1_err=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__22__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_err)));
    if (__Vtask_tb_bank_scheduler__DOT__check__22__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__22__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__22__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         196);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         197);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__23__msg = "C3: pp1_valid=0 (bubble exited)"s;
    __Vtask_tb_bank_scheduler__DOT__check__23__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_valid)));
    if (__Vtask_tb_bank_scheduler__DOT__check__23__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__23__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 3U;
    VL_WRITEF_NX("\n=== Test %0d: Basic Write ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 4U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0xdeadbeefU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         215);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         216);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__26__msg = "pp0_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__26__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__26__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__26__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__26__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__27__msg = "pp0_we=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__27__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_we;
    if (__Vtask_tb_bank_scheduler__DOT__check__27__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__27__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__27__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__28__msg = "pp0_err=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__28__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_err)));
    if (__Vtask_tb_bank_scheduler__DOT__check__28__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__28__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__28__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__29__msg = "sram_addr=0x01"s;
    __Vtask_tb_bank_scheduler__DOT__check__29__cond 
        = (1U == (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_addr));
    if (__Vtask_tb_bank_scheduler__DOT__check__29__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__29__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__29__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__30__msg = "sram_we=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__30__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we;
    if (__Vtask_tb_bank_scheduler__DOT__check__30__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__30__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__30__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__31__msg = "sram_wdata correct"s;
    __Vtask_tb_bank_scheduler__DOT__check__31__cond 
        = (0xdeadbeefU == vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_data);
    if (__Vtask_tb_bank_scheduler__DOT__check__31__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__31__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__31__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__32__msg = "sram_bwe=4'hF"s;
    __Vtask_tb_bank_scheduler__DOT__check__32__cond 
        = (0x0fU == ((0xfffffff8U & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                     & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we) 
                                        << 3U))) | 
                     ((0xfffffffcU & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                      & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we) 
                                         << 2U))) | 
                      (3U & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                             & (- (IData)((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we))))))));
    if (__Vtask_tb_bank_scheduler__DOT__check__32__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__32__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__32__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         229);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__33__msg = "pp1_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__33__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__33__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__33__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__33__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__34__msg = "pp1_we=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__34__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_we;
    if (__Vtask_tb_bank_scheduler__DOT__check__34__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__34__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__34__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__35__msg = "pp1_err=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__35__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_err)));
    if (__Vtask_tb_bank_scheduler__DOT__check__35__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__35__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__35__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 4U;
    VL_WRITEF_NX("\n=== Test %0d: Partial Write Byte Enable ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 8U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0xabcdef12U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 6U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         248);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         249);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__38__msg = "sram_we=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__38__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we;
    if (__Vtask_tb_bank_scheduler__DOT__check__38__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__38__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__39__msg = "sram_wdata correct"s;
    __Vtask_tb_bank_scheduler__DOT__check__39__cond 
        = (0xabcdef12U == vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_data);
    if (__Vtask_tb_bank_scheduler__DOT__check__39__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__39__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__39__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__40__msg = "sram_bwe=4'b0110"s;
    __Vtask_tb_bank_scheduler__DOT__check__40__cond 
        = (6U == ((0xfffffff8U & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                  & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we) 
                                     << 3U))) | ((0xfffffffcU 
                                                  & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                                     & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we) 
                                                        << 2U))) 
                                                 | (3U 
                                                    & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                                       & (- (IData)((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we))))))));
    if (__Vtask_tb_bank_scheduler__DOT__check__40__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__40__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__40__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__41__msg = "sram_bwe[0]=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__41__cond 
        = (1U & (~ ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                    & (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we))));
    if (__Vtask_tb_bank_scheduler__DOT__check__41__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__41__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__41__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__42__msg = "sram_bwe[3]=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__42__cond 
        = (1U & (~ (((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                     >> 3U) & (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we))));
    if (__Vtask_tb_bank_scheduler__DOT__check__42__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__42__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__42__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__43__msg = "sram_bwe[1]=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__43__cond 
        = (((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
            >> 1U) & (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we));
    if (__Vtask_tb_bank_scheduler__DOT__check__43__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__43__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__43__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__44__msg = "sram_bwe[2]=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__44__cond 
        = (((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
            >> 2U) & (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we));
    if (__Vtask_tb_bank_scheduler__DOT__check__44__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__44__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__44__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 5U;
    VL_WRITEF_NX("\n=== Test %0d: OOB Write ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0x0c04U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0x12345678U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         272);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         273);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__47__msg = "addr_oob=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__47__cond 
        = (0U != (3U & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__grant_addr) 
                        >> 0x0000000aU)));
    if (__Vtask_tb_bank_scheduler__DOT__check__47__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__47__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__47__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__48__msg = "pp0_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__48__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__48__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__48__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__48__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__49__msg = "pp0_err=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__49__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_err;
    if (__Vtask_tb_bank_scheduler__DOT__check__49__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__49__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__49__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__50__msg = "pp0_we=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__50__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_we;
    if (__Vtask_tb_bank_scheduler__DOT__check__50__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__50__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__50__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__51__msg = "sram_we=0 (suppressed by OOB)"s;
    __Vtask_tb_bank_scheduler__DOT__check__51__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we)));
    if (__Vtask_tb_bank_scheduler__DOT__check__51__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__51__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__51__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__52__msg = "sram_bwe=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__52__cond 
        = (0U == ((0xfffffff8U & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                  & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we) 
                                     << 3U))) | ((0xfffffffcU 
                                                  & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                                     & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we) 
                                                        << 2U))) 
                                                 | (3U 
                                                    & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe) 
                                                       & (- (IData)((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we))))))));
    if (__Vtask_tb_bank_scheduler__DOT__check__52__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__52__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__52__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         284);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         285);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__53__msg = "pp1_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__53__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__53__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__53__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__53__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__54__msg = "pp1_err=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__54__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_err;
    if (__Vtask_tb_bank_scheduler__DOT__check__54__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__54__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__54__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__55__msg = "pp1_we=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__55__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_we;
    if (__Vtask_tb_bank_scheduler__DOT__check__55__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__55__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__55__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__56__msg = "pp1_rdata=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__56__cond 
        = (0U == vlSelfRef.tb_bank_scheduler__DOT__pp1_rdata);
    if (__Vtask_tb_bank_scheduler__DOT__check__56__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__56__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__56__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 6U;
    VL_WRITEF_NX("\n=== Test %0d: OOB Read ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0xffffffffU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0x0c04U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         304);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         305);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__59__msg = "pp0_err=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__59__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_err;
    if (__Vtask_tb_bank_scheduler__DOT__check__59__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__59__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__59__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__60__msg = "sram_we=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__60__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we)));
    if (__Vtask_tb_bank_scheduler__DOT__check__60__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__60__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__60__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         311);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         312);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__61__msg = "pp1_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__61__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__61__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__61__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__61__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__62__msg = "pp1_err=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__62__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_err;
    if (__Vtask_tb_bank_scheduler__DOT__check__62__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__62__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__62__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__63__msg = "pp1_rdata=0 (forced, not 0xFFFFFFFF)"s;
    __Vtask_tb_bank_scheduler__DOT__check__63__cond 
        = (0U == vlSelfRef.tb_bank_scheduler__DOT__pp1_rdata);
    if (__Vtask_tb_bank_scheduler__DOT__check__63__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__63__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__64__msg = "pp1_we=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__64__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_we)));
    if (__Vtask_tb_bank_scheduler__DOT__check__64__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__64__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    __Vtask_tb_bank_scheduler__DOT__tc_bs_07__65__tb_bank_scheduler__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 7U;
    VL_WRITEF_NX("\n=== Test %0d: Full Pipeline Stall ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 4U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         331);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         332);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 8U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         338);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         339);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__67__msg = "pp0_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__67__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__67__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__67__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__67__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__68__msg = "pp1_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__68__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__68__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__68__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__68__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         346);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__69__msg = "pp1_ready=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__69__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready)));
    if (__Vtask_tb_bank_scheduler__DOT__check__69__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__69__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__70__msg = "grant_ready=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__70__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready)));
    if (__Vtask_tb_bank_scheduler__DOT__check__70__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__70__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__70__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    __Vtask_tb_bank_scheduler__DOT__tc_bs_07__65__tb_bank_scheduler__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_bank_scheduler__DOT__tc_bs_07__65__tb_bank_scheduler__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                                 "@(posedge tb_bank_scheduler.clk)");
        co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_bank_scheduler.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                             353);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                             354);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__71__msg = "pp0_valid stable during stall"s;
        __Vtask_tb_bank_scheduler__DOT__check__71__cond 
            = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
        if (__Vtask_tb_bank_scheduler__DOT__check__71__cond) {
            VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__71__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__71__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_bank_scheduler__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
        }
        vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__72__msg = "pp1_valid stable during stall"s;
        __Vtask_tb_bank_scheduler__DOT__check__72__cond 
            = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
        if (__Vtask_tb_bank_scheduler__DOT__check__72__cond) {
            VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__72__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__72__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_bank_scheduler__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
        }
        vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__73__msg = "grant_ready=0 during stall"s;
        __Vtask_tb_bank_scheduler__DOT__check__73__cond 
            = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready)));
        if (__Vtask_tb_bank_scheduler__DOT__check__73__cond) {
            VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__73__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__73__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_bank_scheduler__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
        }
        __Vtask_tb_bank_scheduler__DOT__tc_bs_07__65__tb_bank_scheduler__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_bank_scheduler__DOT__tc_bs_07__65__tb_bank_scheduler__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 8U;
    VL_WRITEF_NX("\n=== Test %0d: PP0 Full PP1 Empty ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    while (((IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_valid) 
            | (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid))) {
        Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                                 "@(posedge tb_bank_scheduler.clk)");
        co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_bank_scheduler.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                             135);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 4U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         373);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         374);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__77__msg = "pp0_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__77__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__77__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__77__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__77__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__78__msg = "pp1_valid=0 (captured bubble)"s;
    __Vtask_tb_bank_scheduler__DOT__check__78__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_valid)));
    if (__Vtask_tb_bank_scheduler__DOT__check__78__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__78__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__78__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__79__msg = "pp1_ready=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__79__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready;
    if (__Vtask_tb_bank_scheduler__DOT__check__79__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__79__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__79__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__80__msg = "grant_ready=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__80__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready;
    if (__Vtask_tb_bank_scheduler__DOT__check__80__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__80__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__80__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         383);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         384);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__81__msg = "pp1_valid=1 (captured PP0)"s;
    __Vtask_tb_bank_scheduler__DOT__check__81__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__81__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__81__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__81__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__82__msg = "pp0_valid=0 (captured bubble)"s;
    __Vtask_tb_bank_scheduler__DOT__check__82__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid)));
    if (__Vtask_tb_bank_scheduler__DOT__check__82__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__82__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__82__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    __Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__tb_bank_scheduler__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    __Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__addr_before = 0;
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 9U;
    VL_WRITEF_NX("\n=== Test %0d: bank_pp1_ready=0 Addr Stable ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0x0010U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         402);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         403);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0x0014U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         407);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         408);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         413);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__addr_before 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_addr;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__85__msg = "grant_ready=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__85__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready)));
    if (__Vtask_tb_bank_scheduler__DOT__check__85__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__85__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__85__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    __Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__tb_bank_scheduler__DOT__unnamedblk1_4__DOT____Vrepeat3 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__tb_bank_scheduler__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                                 "@(posedge tb_bank_scheduler.clk)");
        co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_bank_scheduler.clk)", 
                                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                             420);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                             421);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__86__msg = "sram_addr stable during stall"s;
        __Vtask_tb_bank_scheduler__DOT__check__86__cond 
            = ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_addr) 
               == (IData)(__Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__addr_before));
        if (__Vtask_tb_bank_scheduler__DOT__check__86__cond) {
            VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__86__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__86__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_bank_scheduler__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
        }
        vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__87__msg = "pp1_valid=1 during stall"s;
        __Vtask_tb_bank_scheduler__DOT__check__87__cond 
            = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
        if (__Vtask_tb_bank_scheduler__DOT__check__87__cond) {
            VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__87__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__87__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_bank_scheduler__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
        }
        vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__88__msg = "pp0_valid=1 during stall"s;
        __Vtask_tb_bank_scheduler__DOT__check__88__cond 
            = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
        if (__Vtask_tb_bank_scheduler__DOT__check__88__cond) {
            VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__88__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
        } else {
            VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                         , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                         , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__88__msg)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            vlSelfRef.tb_bank_scheduler__DOT__error_count 
                = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
        }
        __Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__tb_bank_scheduler__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_bank_scheduler__DOT__tc_bs_09__83__tb_bank_scheduler__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 0x0000000aU;
    VL_WRITEF_NX("\n=== Test %0d: Bubble Propagation ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 4U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         441);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         442);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__91__msg = "C1: pp0_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__91__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__91__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__91__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__91__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         448);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         449);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__92__msg = "C2: pp1_valid=1 (real txn in PP1)"s;
    __Vtask_tb_bank_scheduler__DOT__check__92__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__92__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__92__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__92__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__93__msg = "C2: pp0_valid=0 (bubble)"s;
    __Vtask_tb_bank_scheduler__DOT__check__93__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid)));
    if (__Vtask_tb_bank_scheduler__DOT__check__93__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__93__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__93__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         454);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         455);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__94__msg = "C3: pp1_valid=0 (bubble exited)"s;
    __Vtask_tb_bank_scheduler__DOT__check__94__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_valid)));
    if (__Vtask_tb_bank_scheduler__DOT__check__94__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__94__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__94__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__95__msg = "C3: pp0_valid=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__95__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid)));
    if (__Vtask_tb_bank_scheduler__DOT__check__95__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__95__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__95__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 0x0000000bU;
    VL_WRITEF_NX("\n=== Test %0d: Back-to-Back Grants ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 4U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0xdada0001U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         473);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         474);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__98__msg = "C1: pp0_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__98__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__98__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__98__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__98__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__99__msg = "C1: pp0_id=A"s;
    __Vtask_tb_bank_scheduler__DOT__check__99__cond 
        = (1U == (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_id));
    if (__Vtask_tb_bank_scheduler__DOT__check__99__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__99__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__99__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__100__msg = "C1: sram_addr=A"s;
    __Vtask_tb_bank_scheduler__DOT__check__100__cond 
        = (1U == (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_addr));
    if (__Vtask_tb_bank_scheduler__DOT__check__100__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__100__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__100__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 8U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 2U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         487);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         488);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__101__msg = "C2: pp1_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__101__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__101__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__101__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__101__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__102__msg = "C2: pp1_id=A"s;
    __Vtask_tb_bank_scheduler__DOT__check__102__cond 
        = (1U == (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_id));
    if (__Vtask_tb_bank_scheduler__DOT__check__102__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__102__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__102__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__103__msg = "C2: pp1_rdata=A"s;
    __Vtask_tb_bank_scheduler__DOT__check__103__cond 
        = (0xdada0001U == vlSelfRef.tb_bank_scheduler__DOT__pp1_rdata);
    if (__Vtask_tb_bank_scheduler__DOT__check__103__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__103__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__103__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__104__msg = "C2: pp0_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__104__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__104__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__104__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__104__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__105__msg = "C2: pp0_id=B"s;
    __Vtask_tb_bank_scheduler__DOT__check__105__cond 
        = (2U == (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_id));
    if (__Vtask_tb_bank_scheduler__DOT__check__105__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__105__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__105__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__106__msg = "C2: sram_addr=B"s;
    __Vtask_tb_bank_scheduler__DOT__check__106__cond 
        = (2U == (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_addr));
    if (__Vtask_tb_bank_scheduler__DOT__check__106__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__106__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__106__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0xdada0002U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         502);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         503);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__107__msg = "C3: pp1_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__107__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__107__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__107__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__107__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__108__msg = "C3: pp1_id=B"s;
    __Vtask_tb_bank_scheduler__DOT__check__108__cond 
        = (2U == (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_id));
    if (__Vtask_tb_bank_scheduler__DOT__check__108__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__108__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__108__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__109__msg = "C3: pp1_rdata=B"s;
    __Vtask_tb_bank_scheduler__DOT__check__109__cond 
        = (0xdada0002U == vlSelfRef.tb_bank_scheduler__DOT__pp1_rdata);
    if (__Vtask_tb_bank_scheduler__DOT__check__109__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__109__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__109__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__110__msg = "C3: pp0_valid=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__110__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid)));
    if (__Vtask_tb_bank_scheduler__DOT__check__110__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__110__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__110__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__test_id = 0x0000000cU;
    VL_WRITEF_NX("\n=== Test %0d: Write Response Not Zeroed ===\n",1
                 , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id);
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_id = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_addr = 0x0020U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_we = 1U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_data = 0xbeef0000U;
    vlSelfRef.tb_bank_scheduler__DOT__grant_strobe = 0x0fU;
    vlSelfRef.tb_bank_scheduler__DOT__sram_rdata = 0xaaaaaaaaU;
    vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready = 1U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         525);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         526);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__113__msg = "pp0_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__113__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__113__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__113__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__113__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__114__msg = "pp0_err=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__114__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_err)));
    if (__Vtask_tb_bank_scheduler__DOT__check__114__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__114__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__114__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__115__msg = "sram_we=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__115__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we;
    if (__Vtask_tb_bank_scheduler__DOT__check__115__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__115__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__115__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.tb_bank_scheduler__DOT__grant_valid = 0U;
    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(vlSelf, 
                                                             "@(posedge tb_bank_scheduler.clk)");
    co_await vlSelfRef.__VtrigSched_hf13cd25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bank_scheduler.clk)", 
                                                         "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                                         534);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                         535);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__116__msg = "pp1_valid=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__116__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_valid;
    if (__Vtask_tb_bank_scheduler__DOT__check__116__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__116__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__116__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__117__msg = "pp1_we=1"s;
    __Vtask_tb_bank_scheduler__DOT__check__117__cond 
        = vlSelfRef.tb_bank_scheduler__DOT__pp1_we;
    if (__Vtask_tb_bank_scheduler__DOT__check__117__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__117__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__117__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__118__msg = "pp1_err=0"s;
    __Vtask_tb_bank_scheduler__DOT__check__118__cond 
        = (1U & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_err)));
    if (__Vtask_tb_bank_scheduler__DOT__check__118__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__118__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__118__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__119__msg = "pp1_rdata=SRAM data (not zeroed here)"s;
    __Vtask_tb_bank_scheduler__DOT__check__119__cond 
        = (0xaaaaaaaaU == vlSelfRef.tb_bank_scheduler__DOT__pp1_rdata);
    if (__Vtask_tb_bank_scheduler__DOT__check__119__cond) {
        VL_WRITEF_NX("[OK]    Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__119__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("[ERROR] Test %0d : %s @ time %0t\n",4, 'T',-9
                     , '~',32,vlSelfRef.tb_bank_scheduler__DOT__test_id
                     , 'S',&(vlSelfRef.__Vtask_tb_bank_scheduler__DOT__check__119__msg)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_bank_scheduler__DOT__error_count 
            = ((IData)(1U) + vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    VL_WRITEF_NX("\n=== TESTBENCH SUMMARY ===\n",0);
    if ((0U == vlSelfRef.tb_bank_scheduler__DOT__error_count)) {
        VL_WRITEF_NX("ALL TESTS PASSED\n",0);
    } else {
        VL_WRITEF_NX("%0d TEST(S) FAILED\n",1, '~',32,vlSelfRef.tb_bank_scheduler__DOT__error_count);
    }
    VL_FINISH_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 573, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    co_return;
}

VlCoroutine Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__3(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 
                                             93);
        vlSelfRef.tb_bank_scheduler__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__clk)));
    }
    co_return;
}

bool Vtb_bank_scheduler___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_bank_scheduler___024root___timing_ready(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___timing_ready\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready("@(posedge tb_bank_scheduler.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha465fb53__0.ready("@(posedge tb_bank_scheduler.rst_n)");
    }
}

void Vtb_bank_scheduler___024root___timing_resume(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___timing_resume\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hf13cd25e__0.moveToResumeQueue(
                                                          "@(posedge tb_bank_scheduler.clk)");
    vlSelfRef.__VtrigSched_ha465fb53__0.moveToResumeQueue(
                                                          "@(posedge tb_bank_scheduler.rst_n)");
    vlSelfRef.__VtrigSched_hf13cd25e__0.resume("@(posedge tb_bank_scheduler.clk)");
    vlSelfRef.__VtrigSched_ha465fb53__0.resume("@(posedge tb_bank_scheduler.rst_n)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_bank_scheduler___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bank_scheduler___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_bank_scheduler___024root___eval_phase__act(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_phase__act\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.tb_bank_scheduler__DOT__rst_n) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__rst_n__0))) 
                                                           << 3U) 
                                                          | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 2U)) 
                                                         | ((((~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_bank_scheduler__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__clk__0 
            = vlSelfRef.tb_bank_scheduler__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__rst_n__0 
            = vlSelfRef.tb_bank_scheduler__DOT__rst_n;
    }
    Vtb_bank_scheduler___024root___timing_ready(vlSelf);
    Vtb_bank_scheduler___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_bank_scheduler___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_bank_scheduler___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_bank_scheduler___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_bank_scheduler___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready 
                        = (1U & ((~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_valid)) 
                                 | (IData)(vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready)));
                    vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready 
                        = (1U & ((~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid)) 
                                 | (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready)));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_bank_scheduler___024root___eval_phase__inact(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_phase__inact\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_bank_scheduler___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_bank_scheduler___024root___eval_phase__nba(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_phase__nba\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_bank_scheduler___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.tb_bank_scheduler__DOT__rst_n) {
                        if (vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready) {
                            vlSelfRef.tb_bank_scheduler__DOT__pp1_id 
                                = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_id;
                            vlSelfRef.tb_bank_scheduler__DOT__pp1_we 
                                = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_we;
                            if (vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_err) {
                                vlSelfRef.tb_bank_scheduler__DOT__pp1_err = 1U;
                                vlSelfRef.tb_bank_scheduler__DOT__pp1_rdata = 0U;
                            } else {
                                vlSelfRef.tb_bank_scheduler__DOT__pp1_err = 0U;
                                vlSelfRef.tb_bank_scheduler__DOT__pp1_rdata 
                                    = vlSelfRef.tb_bank_scheduler__DOT__sram_rdata;
                            }
                            vlSelfRef.tb_bank_scheduler__DOT__pp1_valid 
                                = vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid;
                        }
                        if (vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready) {
                            vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_strobe 
                                = vlSelfRef.tb_bank_scheduler__DOT__grant_strobe;
                            vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_data 
                                = vlSelfRef.tb_bank_scheduler__DOT__grant_data;
                            vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_addr 
                                = (0x000000ffU & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__grant_addr) 
                                                  >> 2U));
                            vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_id 
                                = vlSelfRef.tb_bank_scheduler__DOT__grant_id;
                            vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_we 
                                = vlSelfRef.tb_bank_scheduler__DOT__grant_we;
                            vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_err 
                                = (0U != (3U & ((IData)(vlSelfRef.tb_bank_scheduler__DOT__grant_addr) 
                                                >> 0x0000000aU)));
                            vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid 
                                = vlSelfRef.tb_bank_scheduler__DOT__grant_valid;
                        }
                    } else {
                        vlSelfRef.tb_bank_scheduler__DOT__pp1_valid = 0U;
                        vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid = 0U;
                    }
                    vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__sram_we 
                        = ((IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid) 
                           & ((~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_err)) 
                              & (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_we)));
                }
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready 
                        = (1U & ((~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__pp1_valid)) 
                                 | (IData)(vlSelfRef.tb_bank_scheduler__DOT__bank_pp1_ready)));
                    vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__grant_ready 
                        = (1U & ((~ (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp0_valid)) 
                                 | (IData)(vlSelfRef.tb_bank_scheduler__DOT__dut__DOT__pp1_ready)));
                }
            }
        }
        Vtb_bank_scheduler___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_bank_scheduler___024root___eval(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_bank_scheduler___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_bank_scheduler___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_bank_scheduler.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_bank_scheduler___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_bank_scheduler___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_bank_scheduler___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0(Vtb_bank_scheduler___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root____VbeforeTrig_hf13cd25e__0\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_bank_scheduler__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__clk__0 
        = vlSelfRef.tb_bank_scheduler__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf13cd25e__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_bank_scheduler___024root____VbeforeTrig_ha465fb53__0(Vtb_bank_scheduler___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root____VbeforeTrig_ha465fb53__0\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_bank_scheduler__DOT__rst_n) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__rst_n__0))) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_bank_scheduler__DOT__rst_n__0 
        = vlSelfRef.tb_bank_scheduler__DOT__rst_n;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha465fb53__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_bank_scheduler___024root___eval_debug_assertions(Vtb_bank_scheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bank_scheduler___024root___eval_debug_assertions\n"); );
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
