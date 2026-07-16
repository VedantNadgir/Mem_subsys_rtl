// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sys.h for the primary calling header

#include "Vtb_sys__pch.h"

void Vtb_sys___024root___timing_ready(Vtb_sys___024root* vlSelf);

VL_ATTR_COLD void Vtb_sys___024root___eval_static(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_static\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16165678552244663194ull);
        vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15654432110794695568ull);
        vlSelfRef.tb_sys__DOT__u_env__DOT__test_id = 0U;
        vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__clk__0 
        = vlSelfRef.tb_sys__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__rst_n__0 
        = vlSelfRef.tb_sys__DOT__rst_n;
    Vtb_sys___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_sys___024root___eval_final(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_final\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sys___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sys___024root___eval_phase__stl(Vtb_sys___024root* vlSelf);

VL_ATTR_COLD void Vtb_sys___024root___eval_settle(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_settle\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sys___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_sys___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_sys___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sys___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sys___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_sys___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___trigger_anySet__stl\n"); );
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

extern const VlWide<32>/*1023:0*/ Vtb_sys__ConstPool__CONST_hd6b7ba52_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtb_sys__ConstPool__TABLE_hce1a8acc_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_sys__ConstPool__TABLE_h3b57699f_0;

VL_ATTR_COLD void Vtb_sys___024root___stl_sequent__TOP__0(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___stl_sequent__TOP__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_12;
    __VdfgRegularize_hebeb780c_0_12 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_13;
    __VdfgRegularize_hebeb780c_0_13 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_14;
    __VdfgRegularize_hebeb780c_0_14 = 0;
    CData/*2:0*/ __VdfgRegularize_hebeb780c_0_15;
    __VdfgRegularize_hebeb780c_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_96;
    __VdfgRegularize_hebeb780c_0_96 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_97;
    __VdfgRegularize_hebeb780c_0_97 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_98;
    __VdfgRegularize_hebeb780c_0_98 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_99;
    __VdfgRegularize_hebeb780c_0_99 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_100;
    __VdfgRegularize_hebeb780c_0_100 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_101;
    __VdfgRegularize_hebeb780c_0_101 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_102;
    __VdfgRegularize_hebeb780c_0_102 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_103;
    __VdfgRegularize_hebeb780c_0_103 = 0;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<6>/*191:0*/ __Vtemp_21;
    VlWide<6>/*191:0*/ __Vtemp_23;
    VlWide<6>/*191:0*/ __Vtemp_25;
    VlWide<6>/*191:0*/ __Vtemp_27;
    VlWide<6>/*191:0*/ __Vtemp_29;
    VlWide<6>/*191:0*/ __Vtemp_31;
    VlWide<6>/*191:0*/ __Vtemp_33;
    VlWide<6>/*191:0*/ __Vtemp_35;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    IData/*31:0*/ __VExpandSel_WordIdx_3;
    IData/*31:0*/ __VExpandSel_LoShift_3;
    CData/*0:0*/ __VExpandSel_Aligned_3;
    IData/*31:0*/ __VExpandSel_HiShift_3;
    IData/*31:0*/ __VExpandSel_HiMask_3;
    IData/*31:0*/ __VExpandSel_WordIdx_4;
    IData/*31:0*/ __VExpandSel_LoShift_4;
    CData/*0:0*/ __VExpandSel_Aligned_4;
    IData/*31:0*/ __VExpandSel_HiShift_4;
    IData/*31:0*/ __VExpandSel_HiMask_4;
    IData/*31:0*/ __VExpandSel_WordIdx_5;
    IData/*31:0*/ __VExpandSel_LoShift_5;
    CData/*0:0*/ __VExpandSel_Aligned_5;
    IData/*31:0*/ __VExpandSel_HiShift_5;
    IData/*31:0*/ __VExpandSel_HiMask_5;
    IData/*31:0*/ __VExpandSel_WordIdx_6;
    IData/*31:0*/ __VExpandSel_LoShift_6;
    CData/*0:0*/ __VExpandSel_Aligned_6;
    IData/*31:0*/ __VExpandSel_HiShift_6;
    IData/*31:0*/ __VExpandSel_HiMask_6;
    IData/*31:0*/ __VExpandSel_WordIdx_7;
    IData/*31:0*/ __VExpandSel_LoShift_7;
    CData/*0:0*/ __VExpandSel_Aligned_7;
    IData/*31:0*/ __VExpandSel_HiShift_7;
    IData/*31:0*/ __VExpandSel_HiMask_7;
    IData/*31:0*/ __VExpandSel_WordIdx_8;
    IData/*31:0*/ __VExpandSel_LoShift_8;
    CData/*0:0*/ __VExpandSel_Aligned_8;
    IData/*31:0*/ __VExpandSel_HiShift_8;
    IData/*31:0*/ __VExpandSel_HiMask_8;
    // Body
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
           & ((((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                  << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                            << 2U)) | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                        << 1U) | (0U 
                                                  != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
               << 4U) | ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                           << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                     << 2U)) | (((0U 
                                                  != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                 << 1U) 
                                                | (0U 
                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready 
        = ((((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__7__KET____DOT__u_req_fifo__push_ready) 
               << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__6__KET____DOT__u_req_fifo__push_ready) 
                         << 2U)) | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__5__KET____DOT__u_req_fifo__push_ready) 
                                     << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__4__KET____DOT__u_req_fifo__push_ready))) 
            << 4U) | ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready) 
                        << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready) 
                                  << 2U)) | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[0U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.pp1_rdata[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[1U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.pp1_rdata[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[2U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.pp1_rdata[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[3U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.pp1_rdata[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[4U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.pp1_rdata[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[5U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.pp1_rdata[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[6U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.pp1_rdata[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[7U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.pp1_rdata[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[8U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.pp1_rdata[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[9U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.pp1_rdata[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[10U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.pp1_rdata[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[11U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.pp1_rdata[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[12U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.pp1_rdata[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[13U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.pp1_rdata[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[14U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.pp1_rdata[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[15U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.pp1_rdata[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[16U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_rdata[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[17U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_rdata[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[18U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_rdata[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[19U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_rdata[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[20U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_rdata[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[21U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_rdata[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[22U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_rdata[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[23U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_rdata[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[24U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_rdata[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[25U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_rdata[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[26U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_rdata[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[27U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_rdata[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[28U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_rdata[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[29U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_rdata[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[30U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_rdata[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[31U] 
        = vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_rdata[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.pp1_id)) 
                    << 0x0000001bU) | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.pp1_id) 
                                                        << 0x00000012U) 
                                                       | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.pp1_id) 
                                                           << 9U) 
                                                          | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.pp1_id)))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[1U] 
        = ((0xfffffff0U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[1U]) 
           | (IData)(((((QData)((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.pp1_id)) 
                        << 0x0000001bU) | (QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.pp1_id) 
                                                            << 0x00000012U) 
                                                           | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.pp1_id) 
                                                               << 9U) 
                                                              | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.pp1_id)))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[1U] 
        = ((0x0000000fU & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[1U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_id)) 
                        << 0x0000001bU) | (QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_id) 
                                                            << 0x00000012U) 
                                                           | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_id) 
                                                               << 9U) 
                                                              | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_id))))))) 
              << 4U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[2U] 
        = (0x000000ffU & (((IData)((((QData)((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_id)) 
                                     << 0x0000001bU) 
                                    | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_id) 
                                                        << 0x00000012U) 
                                                       | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_id) 
                                                           << 9U) 
                                                          | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_id))))))) 
                           >> 0x0000001cU) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_id)) 
                                                         << 0x0000001bU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_id) 
                                                                            << 0x00000012U) 
                                                                           | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_id) 
                                                                               << 9U) 
                                                                              | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_id)))))) 
                                                       >> 0x00000020U)) 
                                              << 4U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we 
        = ((((((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_we) 
               << 3U) | ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_we) 
                         << 2U)) | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_we) 
                                     << 1U) | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_we))) 
            << 4U) | ((((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.pp1_we) 
                        << 3U) | ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.pp1_we) 
                                  << 2U)) | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.pp1_we) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.pp1_we))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err 
        = ((((((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_err) 
               << 3U) | ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_err) 
                         << 2U)) | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_err) 
                                     << 1U) | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_err))) 
            << 4U) | ((((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.pp1_err) 
                        << 3U) | ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.pp1_err) 
                                  << 2U)) | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.pp1_err) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.pp1_err))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[0U] 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr][0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[1U] 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr][1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[2U] 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr][2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[3U] 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr][3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[4U] 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr][4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[5U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
            << 3U) | vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr][5U]);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[6U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
            >> 0x0000001dU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                               << 3U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[7U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
            >> 0x0000001dU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                               << 3U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[8U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
            >> 0x0000001dU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                               << 3U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[9U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
            >> 0x0000001dU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                               << 3U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[10U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
            << 6U) | ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                       >> 0x0000001dU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][5U] 
                                          << 3U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[11U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
            >> 0x0000001aU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                               << 6U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[12U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
            >> 0x0000001aU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                               << 6U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[13U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
            >> 0x0000001aU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                               << 6U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[14U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
            >> 0x0000001aU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                               << 6U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[15U] 
        = ((0xfffffe00U & vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[15U]) 
           | ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
               >> 0x0000001aU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][5U] 
                                  << 6U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[15U] 
        = ((0x000001ffU & vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[15U]) 
           | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
              << 9U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[16U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
            >> 0x00000017U) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                               << 9U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[17U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
            >> 0x00000017U) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                               << 9U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[18U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
            >> 0x00000017U) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                               << 9U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[19U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
            >> 0x00000017U) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                               << 9U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[20U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
            >> 0x00000017U) | ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
                                << 0x0000000cU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][5U] 
                                                   << 9U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[21U] 
        = (((0x000001ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
                            >> 0x00000014U)) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][5U] 
                                                >> 0x00000017U)) 
           | ((0x00000e00U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
                              >> 0x00000014U)) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                                                  << 0x0000000cU)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[22U] 
        = ((0x000001ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                           >> 0x00000014U)) | ((0x00000e00U 
                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                                                   >> 0x00000014U)) 
                                               | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                                                  << 0x0000000cU)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[23U] 
        = ((0x000001ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                           >> 0x00000014U)) | ((0x00000e00U 
                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                                                   >> 0x00000014U)) 
                                               | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                                                  << 0x0000000cU)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[24U] 
        = ((0x000001ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                           >> 0x00000014U)) | ((0x00000e00U 
                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                                                   >> 0x00000014U)) 
                                               | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                                  << 0x0000000cU)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[25U] 
        = ((0x000001ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                           >> 0x00000014U)) | ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
                                                << 0x0000000fU) 
                                               | ((0x00000e00U 
                                                   & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                                      >> 0x00000014U)) 
                                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][5U] 
                                                     << 0x0000000cU))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[26U] 
        = ((0x000001ffU & ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
                            >> 0x00000011U) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][5U] 
                                               >> 0x00000014U))) 
           | ((0x00007e00U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
                              >> 0x00000011U)) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                                                  << 0x0000000fU)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[27U] 
        = ((0x000001ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                           >> 0x00000011U)) | ((0x00007e00U 
                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                                                  << 0x0000000fU)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[28U] 
        = ((0x000001ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                           >> 0x00000011U)) | ((0x00007e00U 
                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                                                  << 0x0000000fU)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[29U] 
        = ((0x000001ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                           >> 0x00000011U)) | ((0x00007e00U 
                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                                  << 0x0000000fU)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[30U] 
        = ((0xfffc0000U & vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[30U]) 
           | ((0x000001ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                              >> 0x00000011U)) | ((0x00007e00U 
                                                   & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                                      >> 0x00000011U)) 
                                                  | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][5U] 
                                                     << 0x0000000fU))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[30U] 
        = ((0x0003ffffU & vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[30U]) 
           | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
              << 0x00000012U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[31U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
            >> 0x0000000eU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                               << 0x00000012U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[32U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
            >> 0x0000000eU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                               << 0x00000012U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[33U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
            >> 0x0000000eU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                               << 0x00000012U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[34U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
            >> 0x0000000eU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                               << 0x00000012U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[35U] 
        = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
            >> 0x0000000eU) | ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
                                << 0x00000015U) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][5U] 
                                                   << 0x00000012U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[36U] 
        = (((0x0003ffffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
                            >> 0x0000000bU)) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][5U] 
                                                >> 0x0000000eU)) 
           | ((0x001c0000U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][0U] 
                              >> 0x0000000bU)) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                                                  << 0x00000015U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[37U] 
        = ((0x0003ffffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                           >> 0x0000000bU)) | ((0x001c0000U 
                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][1U] 
                                                   >> 0x0000000bU)) 
                                               | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                                                  << 0x00000015U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[38U] 
        = ((0x0003ffffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                           >> 0x0000000bU)) | ((0x001c0000U 
                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][2U] 
                                                   >> 0x0000000bU)) 
                                               | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                                                  << 0x00000015U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[39U] 
        = ((0x0003ffffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                           >> 0x0000000bU)) | ((0x001c0000U 
                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][3U] 
                                                   >> 0x0000000bU)) 
                                               | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                                  << 0x00000015U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt[40U] 
        = (0x00ffffffU & ((0x0003ffffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                          >> 0x0000000bU)) 
                          | ((0x001c0000U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                             >> 0x0000000bU)) 
                             | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][5U] 
                                << 0x00000015U))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready 
        = ((((((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
               << 3U) | ((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                         << 2U)) | (((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                     << 1U) | (8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
            << 4U) | ((((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                        << 3U) | ((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                  << 2U)) | (((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                              << 1U) 
                                             | (8U 
                                                > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid 
        = ((((((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_valid) 
               << 3U) | ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_valid) 
                         << 2U)) | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_valid) 
                                     << 1U) | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_valid))) 
            << 4U) | ((((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.pp1_valid) 
                        << 3U) | ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.pp1_valid) 
                                  << 2U)) | (((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.pp1_valid) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.pp1_valid))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports 
        = (((((0x00000038U & ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.pp1_id) 
                              >> 3U)) | (7U & ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.pp1_id) 
                                               >> 6U))) 
             << 0x00000012U) | (((0x00000038U & ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.pp1_id) 
                                                 >> 3U)) 
                                 | (7U & ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.pp1_id) 
                                          >> 6U))) 
                                << 0x0000000cU)) | 
           ((((0x00000038U & ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.pp1_id) 
                              >> 3U)) | (7U & ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.pp1_id) 
                                               >> 6U))) 
             << 6U) | ((0x00000038U & ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.pp1_id) 
                                       >> 3U)) | (7U 
                                                  & ((IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.pp1_id) 
                                                     >> 6U)))));
    __VdfgRegularize_hebeb780c_0_8 = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                            >> 0x00000017U));
    __VdfgRegularize_hebeb780c_0_9 = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                            >> 0x00000017U));
    __VdfgRegularize_hebeb780c_0_10 = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                             >> 0x00000017U));
    __VdfgRegularize_hebeb780c_0_11 = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                             >> 0x00000017U));
    __VdfgRegularize_hebeb780c_0_12 = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                             >> 0x00000017U));
    __VdfgRegularize_hebeb780c_0_13 = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                             >> 0x00000017U));
    __VdfgRegularize_hebeb780c_0_14 = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                             >> 0x00000017U));
    __VdfgRegularize_hebeb780c_0_15 = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr][4U] 
                                             >> 0x00000017U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (0U == (7U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0U == (0x00000038U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0U == (0x000001c0U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0U == (0x00000e00U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 4U)) & (0U == (0x00007000U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000010U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 5U)) & (0U == (0x00038000U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000020U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 6U)) & (0U == (0x001c0000U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000040U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 7U)) & (0U == (0x00e00000U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000080U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (1U == (7U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (8U == (0x00000038U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x00000040U == (0x000001c0U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x00000200U == (0x00000e00U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 4U)) & (0x00001000U == (0x00007000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000010U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 5U)) & (0x00008000U == (0x00038000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000020U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 6U)) & (0x00040000U == (0x001c0000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000040U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 7U)) & (0x00200000U == (0x00e00000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000080U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (2U == (7U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0x00000010U == (0x00000038U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x00000080U == (0x000001c0U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x00000400U == (0x00000e00U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 4U)) & (0x00002000U == (0x00007000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000010U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 5U)) & (0x00010000U == (0x00038000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000020U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 6U)) & (0x00080000U == (0x001c0000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000040U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 7U)) & (0x00400000U == (0x00e00000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000080U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (3U == (7U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0x00000018U == (0x00000038U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x000000c0U == (0x000001c0U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x00000600U == (0x00000e00U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 4U)) & (0x00003000U == (0x00007000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000010U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 5U)) & (0x00018000U == (0x00038000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000020U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 6U)) & (0x000c0000U == (0x001c0000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000040U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 7U)) & (0x00600000U == (0x00e00000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000080U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (4U == (7U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 4U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0x00000020U == (0x00000038U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 4U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x00000100U == (0x000001c0U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 4U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x00000800U == (0x00000e00U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 4U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 4U)) & (0x00004000U == (0x00007000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 4U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000010U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 5U)) & (0x00020000U == (0x00038000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 4U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000020U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 6U)) & (0x00100000U == (0x001c0000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 4U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000040U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 7U)) & (0x00800000U == (0x00e00000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 4U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000080U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (5U == (7U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 5U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0x00000028U == (0x00000038U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 5U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x00000140U == (0x000001c0U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 5U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x00000a00U == (0x00000e00U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 5U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 4U)) & (0x00005000U == (0x00007000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 5U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000010U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 5U)) & (0x00028000U == (0x00038000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 5U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000020U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 6U)) & (0x00140000U == (0x001c0000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 5U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000040U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 7U)) & (0x00a00000U == (0x00e00000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 5U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000080U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (6U == (7U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 6U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0x00000030U == (0x00000038U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 6U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x00000180U == (0x000001c0U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 6U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x00000c00U == (0x00000e00U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 6U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 4U)) & (0x00006000U == (0x00007000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 6U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000010U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 5U)) & (0x00030000U == (0x00038000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 6U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000020U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 6U)) & (0x00180000U == (0x001c0000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 6U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000040U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 7U)) & (0x00c00000U == (0x00e00000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 6U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000080U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (7U == (7U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 7U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0x00000038U == (0x00000038U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 7U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x000001c0U == (0x000001c0U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 7U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x00000e00U == (0x00000e00U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 7U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 4U)) & (0x00007000U == (0x00007000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 7U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000010U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 5U)) & (0x00038000U == (0x00038000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 7U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000020U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 6U)) & (0x001c0000U == (0x001c0000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 7U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000040U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 7U)) & (0x00e00000U == (0x00e00000U 
                                         & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 7U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (0x00000080U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    __VdfgRegularize_hebeb780c_0_96 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_8)) 
                                       & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_97 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_9)) 
                                       & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_98 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_10)) 
                                       & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_99 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_11)) 
                                       & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_100 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_12)) 
                                        & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_101 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_13)) 
                                        & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_102 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_14)) 
                                        & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_103 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_15)) 
                                        & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid = 0U;
    VL_ASSIGN_W(1024, vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data, Vtb_sys__ConstPool__CONST_hd6b7ba52_0);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id = 0ULL;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (7U & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports);
    if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))) {
            __Vtemp_12[0U] = 0U;
            __Vtemp_12[1U] = 0U;
            __Vtemp_12[2U] = 0U;
            __Vtemp_12[3U] = 0U;
        } else {
            __Vtemp_12[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[0U];
            __Vtemp_12[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[1U];
            __Vtemp_12[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[2U];
            __Vtemp_12[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[3U];
        }
        VL_ASSIGNSEL_WW(1024, 128, (0x000003ffU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                   << 7U)), vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data, __Vtemp_12);
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (0x00ffU & ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err)) 
                             << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x2fU >= (0x0000003fU & ((IData)(6U) * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                = (((~ (0x000000000000003fULL << (0x0000003fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) 
                    & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(
                                                               (0x0000003fU 
                                                                & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[0U]))) 
                                               << (0x0000003fU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))));
        }
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports 
                 >> 3U));
    if ((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))) {
            __Vtemp_13[0U] = 0U;
            __Vtemp_13[1U] = 0U;
            __Vtemp_13[2U] = 0U;
            __Vtemp_13[3U] = 0U;
        } else {
            __Vtemp_13[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[4U];
            __Vtemp_13[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[5U];
            __Vtemp_13[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[6U];
            __Vtemp_13[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[7U];
        }
        VL_ASSIGNSEL_WW(1024, 128, (0x000003ffU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                   << 7U)), vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data, __Vtemp_13);
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (0x00ffU & ((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                    >> 1U)) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x2fU >= (0x0000003fU & ((IData)(6U) * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                = (((~ (0x000000000000003fULL << (0x0000003fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) 
                    & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(
                                                               (0x0000003fU 
                                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[0U] 
                                                                   >> 9U)))) 
                                               << (0x0000003fU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))));
        }
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports 
                 >> 6U));
    if ((4U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((4U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))) {
            __Vtemp_14[0U] = 0U;
            __Vtemp_14[1U] = 0U;
            __Vtemp_14[2U] = 0U;
            __Vtemp_14[3U] = 0U;
        } else {
            __Vtemp_14[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[8U];
            __Vtemp_14[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[9U];
            __Vtemp_14[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[10U];
            __Vtemp_14[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[11U];
        }
        VL_ASSIGNSEL_WW(1024, 128, (0x000003ffU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                   << 7U)), vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data, __Vtemp_14);
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (0x00ffU & ((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                    >> 2U)) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x2fU >= (0x0000003fU & ((IData)(6U) * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                = (((~ (0x000000000000003fULL << (0x0000003fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) 
                    & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(
                                                               (0x0000003fU 
                                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[0U] 
                                                                   >> 0x00000012U)))) 
                                               << (0x0000003fU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))));
        }
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports 
                 >> 9U));
    if ((8U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((8U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))) {
            __Vtemp_15[0U] = 0U;
            __Vtemp_15[1U] = 0U;
            __Vtemp_15[2U] = 0U;
            __Vtemp_15[3U] = 0U;
        } else {
            __Vtemp_15[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[12U];
            __Vtemp_15[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[13U];
            __Vtemp_15[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[14U];
            __Vtemp_15[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[15U];
        }
        VL_ASSIGNSEL_WW(1024, 128, (0x000003ffU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                   << 7U)), vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data, __Vtemp_15);
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (0x00ffU & ((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                    >> 3U)) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x2fU >= (0x0000003fU & ((IData)(6U) * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                = (((~ (0x000000000000003fULL << (0x0000003fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) 
                    & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(
                                                               (0x0000003fU 
                                                                & ((vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[1U] 
                                                                    << 5U) 
                                                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[0U] 
                                                                      >> 0x0000001bU))))) 
                                               << (0x0000003fU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))));
        }
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports 
                 >> 0x0cU));
    if ((0x00000010U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x00000010U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))) {
            __Vtemp_16[0U] = 0U;
            __Vtemp_16[1U] = 0U;
            __Vtemp_16[2U] = 0U;
            __Vtemp_16[3U] = 0U;
        } else {
            __Vtemp_16[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[16U];
            __Vtemp_16[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[17U];
            __Vtemp_16[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[18U];
            __Vtemp_16[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[19U];
        }
        VL_ASSIGNSEL_WW(1024, 128, (0x000003ffU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                   << 7U)), vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data, __Vtemp_16);
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (0x00ffU & ((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                    >> 4U)) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x2fU >= (0x0000003fU & ((IData)(6U) * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                = (((~ (0x000000000000003fULL << (0x0000003fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) 
                    & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(
                                                               (0x0000003fU 
                                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[1U] 
                                                                   >> 4U)))) 
                                               << (0x0000003fU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))));
        }
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports 
                 >> 0x0fU));
    if ((0x00000020U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x00000020U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))) {
            __Vtemp_17[0U] = 0U;
            __Vtemp_17[1U] = 0U;
            __Vtemp_17[2U] = 0U;
            __Vtemp_17[3U] = 0U;
        } else {
            __Vtemp_17[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[20U];
            __Vtemp_17[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[21U];
            __Vtemp_17[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[22U];
            __Vtemp_17[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[23U];
        }
        VL_ASSIGNSEL_WW(1024, 128, (0x000003ffU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                   << 7U)), vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data, __Vtemp_17);
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (0x00ffU & ((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                    >> 5U)) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x2fU >= (0x0000003fU & ((IData)(6U) * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                = (((~ (0x000000000000003fULL << (0x0000003fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) 
                    & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(
                                                               (0x0000003fU 
                                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[1U] 
                                                                   >> 0x0000000dU)))) 
                                               << (0x0000003fU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))));
        }
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports 
                 >> 0x12U));
    if ((0x00000040U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x00000040U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))) {
            __Vtemp_18[0U] = 0U;
            __Vtemp_18[1U] = 0U;
            __Vtemp_18[2U] = 0U;
            __Vtemp_18[3U] = 0U;
        } else {
            __Vtemp_18[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[24U];
            __Vtemp_18[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[25U];
            __Vtemp_18[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[26U];
            __Vtemp_18[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[27U];
        }
        VL_ASSIGNSEL_WW(1024, 128, (0x000003ffU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                   << 7U)), vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data, __Vtemp_18);
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (0x00ffU & ((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                    >> 6U)) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x2fU >= (0x0000003fU & ((IData)(6U) * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                = (((~ (0x000000000000003fULL << (0x0000003fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) 
                    & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(
                                                               (0x0000003fU 
                                                                & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[1U] 
                                                                   >> 0x00000016U)))) 
                                               << (0x0000003fU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))));
        }
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (7U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports 
                 >> 0x15U));
    if ((0x00000080U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x00000080U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))) {
            __Vtemp_19[0U] = 0U;
            __Vtemp_19[1U] = 0U;
            __Vtemp_19[2U] = 0U;
            __Vtemp_19[3U] = 0U;
        } else {
            __Vtemp_19[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[28U];
            __Vtemp_19[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[29U];
            __Vtemp_19[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[30U];
            __Vtemp_19[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata[31U];
        }
        VL_ASSIGNSEL_WW(1024, 128, (0x000003ffU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                   << 7U)), vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data, __Vtemp_19);
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (0x00ffU & ((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                    >> 7U)) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        if ((0x2fU >= (0x0000003fU & ((IData)(6U) * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) {
            vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                = (((~ (0x000000000000003fULL << (0x0000003fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))) 
                    & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(
                                                               (0x0000003fU 
                                                                & ((vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[2U] 
                                                                    << 1U) 
                                                                   | (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id[1U] 
                                                                      >> 0x0000001fU))))) 
                                               << (0x0000003fU 
                                                   & ((IData)(6U) 
                                                      * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))))));
        }
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid 
        = ((((((IData)(__VdfgRegularize_hebeb780c_0_96) 
               << 3U) | ((IData)(__VdfgRegularize_hebeb780c_0_97) 
                         << 2U)) | (((IData)(__VdfgRegularize_hebeb780c_0_98) 
                                     << 1U) | (IData)(__VdfgRegularize_hebeb780c_0_99))) 
            << 4U) | ((((IData)(__VdfgRegularize_hebeb780c_0_100) 
                        << 3U) | ((IData)(__VdfgRegularize_hebeb780c_0_101) 
                                  << 2U)) | (((IData)(__VdfgRegularize_hebeb780c_0_102) 
                                              << 1U) 
                                             | (IData)(__VdfgRegularize_hebeb780c_0_103))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant 
        = (0x000000ffU & ((((0x0000ff00U & (((~ (((0x0000ffffU 
                                                   & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x0000ffffU 
                                                 & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))) 
                                            << 8U)) 
                            | (0x000000ffU & ((~ ((
                                                   (0x0000ffffU 
                                                    & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x0000ffffU 
                                                  & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                          >> 8U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
        = (((QData)((IData)(((((((((((7U == (IData)(__VdfgRegularize_hebeb780c_0_8)) 
                                     & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                    << 3U) | (((7U 
                                                == (IData)(__VdfgRegularize_hebeb780c_0_9)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                              << 2U)) 
                                  | ((((7U == (IData)(__VdfgRegularize_hebeb780c_0_10)) 
                                       & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                      << 1U) | ((7U 
                                                 == (IData)(__VdfgRegularize_hebeb780c_0_11)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                 << 0x0000000cU) | 
                                ((((((7U == (IData)(__VdfgRegularize_hebeb780c_0_12)) 
                                     & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                    << 3U) | (((7U 
                                                == (IData)(__VdfgRegularize_hebeb780c_0_13)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                              << 2U)) 
                                  | ((((7U == (IData)(__VdfgRegularize_hebeb780c_0_14)) 
                                       & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                      << 1U) | ((7U 
                                                 == (IData)(__VdfgRegularize_hebeb780c_0_15)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                 << 8U)) | (((((((6U 
                                                  == (IData)(__VdfgRegularize_hebeb780c_0_8)) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                << 3U) 
                                               | (((6U 
                                                    == (IData)(__VdfgRegularize_hebeb780c_0_9)) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                  << 2U)) 
                                              | ((((6U 
                                                    == (IData)(__VdfgRegularize_hebeb780c_0_10)) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                  << 1U) 
                                                 | ((6U 
                                                     == (IData)(__VdfgRegularize_hebeb780c_0_11)) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                             << 4U) 
                                            | (((((6U 
                                                   == (IData)(__VdfgRegularize_hebeb780c_0_12)) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                 << 3U) 
                                                | (((6U 
                                                     == (IData)(__VdfgRegularize_hebeb780c_0_13)) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                   << 2U)) 
                                               | ((((6U 
                                                     == (IData)(__VdfgRegularize_hebeb780c_0_14)) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                   << 1U) 
                                                  | ((6U 
                                                      == (IData)(__VdfgRegularize_hebeb780c_0_15)) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))))) 
                              << 0x00000010U) | (((
                                                   (((((5U 
                                                        == (IData)(__VdfgRegularize_hebeb780c_0_8)) 
                                                       & (0U 
                                                          != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                      << 3U) 
                                                     | (((5U 
                                                          == (IData)(__VdfgRegularize_hebeb780c_0_9)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                        << 2U)) 
                                                    | ((((5U 
                                                          == (IData)(__VdfgRegularize_hebeb780c_0_10)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                        << 1U) 
                                                       | ((5U 
                                                           == (IData)(__VdfgRegularize_hebeb780c_0_11)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                                   << 0x0000000cU) 
                                                  | ((((((5U 
                                                          == (IData)(__VdfgRegularize_hebeb780c_0_12)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                        << 3U) 
                                                       | (((5U 
                                                            == (IData)(__VdfgRegularize_hebeb780c_0_13)) 
                                                           & (0U 
                                                              != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                          << 2U)) 
                                                      | ((((5U 
                                                            == (IData)(__VdfgRegularize_hebeb780c_0_14)) 
                                                           & (0U 
                                                              != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                          << 1U) 
                                                         | ((5U 
                                                             == (IData)(__VdfgRegularize_hebeb780c_0_15)) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                                     << 8U)) 
                                                 | (((((((4U 
                                                          == (IData)(__VdfgRegularize_hebeb780c_0_8)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                        << 3U) 
                                                       | (((4U 
                                                            == (IData)(__VdfgRegularize_hebeb780c_0_9)) 
                                                           & (0U 
                                                              != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                          << 2U)) 
                                                      | ((((4U 
                                                            == (IData)(__VdfgRegularize_hebeb780c_0_10)) 
                                                           & (0U 
                                                              != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                          << 1U) 
                                                         | ((4U 
                                                             == (IData)(__VdfgRegularize_hebeb780c_0_11)) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                                     << 4U) 
                                                    | (((((4U 
                                                           == (IData)(__VdfgRegularize_hebeb780c_0_12)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                         << 3U) 
                                                        | (((4U 
                                                             == (IData)(__VdfgRegularize_hebeb780c_0_13)) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                           << 2U)) 
                                                       | ((((4U 
                                                             == (IData)(__VdfgRegularize_hebeb780c_0_14)) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                           << 1U) 
                                                          | ((4U 
                                                              == (IData)(__VdfgRegularize_hebeb780c_0_15)) 
                                                             & (0U 
                                                                != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((((3U 
                                                        == (IData)(__VdfgRegularize_hebeb780c_0_8)) 
                                                       & (0U 
                                                          != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                      << 3U) 
                                                     | (((3U 
                                                          == (IData)(__VdfgRegularize_hebeb780c_0_9)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                        << 2U)) 
                                                    | ((((3U 
                                                          == (IData)(__VdfgRegularize_hebeb780c_0_10)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                        << 1U) 
                                                       | ((3U 
                                                           == (IData)(__VdfgRegularize_hebeb780c_0_11)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                                   << 0x0000000cU) 
                                                  | ((((((3U 
                                                          == (IData)(__VdfgRegularize_hebeb780c_0_12)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                        << 3U) 
                                                       | (((3U 
                                                            == (IData)(__VdfgRegularize_hebeb780c_0_13)) 
                                                           & (0U 
                                                              != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                          << 2U)) 
                                                      | ((((3U 
                                                            == (IData)(__VdfgRegularize_hebeb780c_0_14)) 
                                                           & (0U 
                                                              != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                          << 1U) 
                                                         | ((3U 
                                                             == (IData)(__VdfgRegularize_hebeb780c_0_15)) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                                     << 8U)) 
                                                 | (((((((2U 
                                                          == (IData)(__VdfgRegularize_hebeb780c_0_8)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                        << 3U) 
                                                       | (((2U 
                                                            == (IData)(__VdfgRegularize_hebeb780c_0_9)) 
                                                           & (0U 
                                                              != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                          << 2U)) 
                                                      | ((((2U 
                                                            == (IData)(__VdfgRegularize_hebeb780c_0_10)) 
                                                           & (0U 
                                                              != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                          << 1U) 
                                                         | ((2U 
                                                             == (IData)(__VdfgRegularize_hebeb780c_0_11)) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                                     << 4U) 
                                                    | (((((2U 
                                                           == (IData)(__VdfgRegularize_hebeb780c_0_12)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                         << 3U) 
                                                        | (((2U 
                                                             == (IData)(__VdfgRegularize_hebeb780c_0_13)) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                           << 2U)) 
                                                       | ((((2U 
                                                             == (IData)(__VdfgRegularize_hebeb780c_0_14)) 
                                                            & (0U 
                                                               != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                           << 1U) 
                                                          | ((2U 
                                                              == (IData)(__VdfgRegularize_hebeb780c_0_15)) 
                                                             & (0U 
                                                                != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))))) 
                                                << 0x00000010U) 
                                               | (((((((1U 
                                                        == (IData)(__VdfgRegularize_hebeb780c_0_8)) 
                                                       & (0U 
                                                          != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                      << 3U) 
                                                     | (((1U 
                                                          == (IData)(__VdfgRegularize_hebeb780c_0_9)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                        << 2U)) 
                                                    | ((((1U 
                                                          == (IData)(__VdfgRegularize_hebeb780c_0_10)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                        << 1U) 
                                                       | ((1U 
                                                           == (IData)(__VdfgRegularize_hebeb780c_0_11)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                                   << 0x0000000cU) 
                                                  | (((((1U 
                                                         == (IData)(__VdfgRegularize_hebeb780c_0_12)) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                       << 0x0000000bU) 
                                                      | (((1U 
                                                           == (IData)(__VdfgRegularize_hebeb780c_0_13)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                         << 0x0000000aU)) 
                                                     | ((((1U 
                                                           == (IData)(__VdfgRegularize_hebeb780c_0_14)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                         << 9U) 
                                                        | ((((1U 
                                                              == (IData)(__VdfgRegularize_hebeb780c_0_15)) 
                                                             & (0U 
                                                                != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                            << 8U) 
                                                           | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = (0x000007ffU 
                                                 & ((IData)(0x000000a3U) 
                                                    * Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle 
        = (0x000000ffU & (~ ((((((0U != (0x000000ffU 
                                         & (IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                    >> 0x00000038U)))) 
                                 << 3U) | ((0U != (0x000000ffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                              >> 0x00000030U)))) 
                                           << 2U)) 
                               | (((0U != (0x000000ffU 
                                           & (IData)(
                                                     (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                      >> 0x00000028U)))) 
                                   << 1U) | (0U != 
                                             (0x000000ffU 
                                              & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                         >> 0x00000020U)))))) 
                              << 4U) | ((((0U != (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                             >> 0x00000018U)))) 
                                          << 3U) | 
                                         ((0U != (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                             >> 0x00000010U)))) 
                                          << 2U)) | 
                                        (((0U != (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                             >> 8U)))) 
                                          << 1U) | 
                                         ((IData)(__VdfgRegularize_hebeb780c_0_103) 
                                          | ((IData)(__VdfgRegularize_hebeb780c_0_102) 
                                             | ((IData)(__VdfgRegularize_hebeb780c_0_101) 
                                                | ((IData)(__VdfgRegularize_hebeb780c_0_100) 
                                                   | ((IData)(__VdfgRegularize_hebeb780c_0_99) 
                                                      | ((IData)(__VdfgRegularize_hebeb780c_0_98) 
                                                         | ((IData)(__VdfgRegularize_hebeb780c_0_96) 
                                                            | (IData)(__VdfgRegularize_hebeb780c_0_97)))))))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant 
        = (0x000000ffU & ((((0x0000ff00U & (((~ (((0x0000ffffU 
                                                   & ((0x0000ff00U 
                                                       & ((IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000038U)) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000038U))))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x0000ffffU 
                                                 & ((0x0000ff00U 
                                                     & ((IData)(
                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                 >> 0x00000038U)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000038U))))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr))) 
                                            << 8U)) 
                            | (0x000000ffU & ((~ ((
                                                   (0x0000ffffU 
                                                    & ((0x0000ff00U 
                                                        & ((IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000038U)) 
                                                           << 8U)) 
                                                       | (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                     >> 0x00000038U))))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000038U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000038U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr)) 
                          >> 8U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant 
        = (0x000000ffU & ((((0x0000ff00U & (((~ (((0x0000ffffU 
                                                   & ((0x0000ff00U 
                                                       & ((IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000030U)) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000030U))))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x0000ffffU 
                                                 & ((0x0000ff00U 
                                                     & ((IData)(
                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                 >> 0x00000030U)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000030U))))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr))) 
                                            << 8U)) 
                            | (0x000000ffU & ((~ ((
                                                   (0x0000ffffU 
                                                    & ((0x0000ff00U 
                                                        & ((IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000030U)) 
                                                           << 8U)) 
                                                       | (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                     >> 0x00000030U))))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000030U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000030U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr)) 
                          >> 8U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant 
        = (0x000000ffU & ((((0x0000ff00U & (((~ (((0x0000ffffU 
                                                   & ((0x0000ff00U 
                                                       & ((IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000028U)) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000028U))))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x0000ffffU 
                                                 & ((0x0000ff00U 
                                                     & ((IData)(
                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                 >> 0x00000028U)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000028U))))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr))) 
                                            << 8U)) 
                            | (0x000000ffU & ((~ ((
                                                   (0x0000ffffU 
                                                    & ((0x0000ff00U 
                                                        & ((IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000028U)) 
                                                           << 8U)) 
                                                       | (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                     >> 0x00000028U))))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000028U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000028U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr)) 
                          >> 8U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant 
        = (0x000000ffU & ((((0x0000ff00U & (((~ (((0x0000ffffU 
                                                   & ((0x0000ff00U 
                                                       & ((IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000020U)) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000020U))))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x0000ffffU 
                                                 & ((0x0000ff00U 
                                                     & ((IData)(
                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                 >> 0x00000020U)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000020U))))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr))) 
                                            << 8U)) 
                            | (0x000000ffU & ((~ ((
                                                   (0x0000ffffU 
                                                    & ((0x0000ff00U 
                                                        & ((IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000020U)) 
                                                           << 8U)) 
                                                       | (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                     >> 0x00000020U))))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000020U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000020U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr)) 
                          >> 8U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant 
        = (0x000000ffU & ((((0x0000ff00U & (((~ (((0x0000ffffU 
                                                   & ((0x0000ff00U 
                                                       & ((IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000018U)) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000018U))))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x0000ffffU 
                                                 & ((0x0000ff00U 
                                                     & ((IData)(
                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                 >> 0x00000018U)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000018U))))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))) 
                                            << 8U)) 
                            | (0x000000ffU & ((~ ((
                                                   (0x0000ffffU 
                                                    & ((0x0000ff00U 
                                                        & ((IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000018U)) 
                                                           << 8U)) 
                                                       | (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                     >> 0x00000018U))))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000018U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000018U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                          >> 8U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant 
        = (0x000000ffU & ((((0x0000ff00U & (((~ (((0x0000ffffU 
                                                   & ((0x0000ff00U 
                                                       & ((IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000010U)) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000010U))))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x0000ffffU 
                                                 & ((0x0000ff00U 
                                                     & ((IData)(
                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                 >> 0x00000010U)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000010U))))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))) 
                                            << 8U)) 
                            | (0x000000ffU & ((~ ((
                                                   (0x0000ffffU 
                                                    & ((0x0000ff00U 
                                                        & ((IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 0x00000010U)) 
                                                           << 8U)) 
                                                       | (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                     >> 0x00000010U))))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000010U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000010U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                          >> 8U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant 
        = (0x000000ffU & ((((0x0000ff00U & (((~ (((0x0000ffffU 
                                                   & ((0x0000ff00U 
                                                       & ((IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 8U)) 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 8U))))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x0000ffffU 
                                                 & ((0x0000ff00U 
                                                     & ((IData)(
                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                 >> 8U)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 8U))))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))) 
                                            << 8U)) 
                            | (0x000000ffU & ((~ ((
                                                   (0x0000ffffU 
                                                    & ((0x0000ff00U 
                                                        & ((IData)(
                                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                    >> 8U)) 
                                                           << 8U)) 
                                                       | (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                     >> 8U))))) 
                                                   >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 8U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 8U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                          >> 8U));
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16))) {
        __VExpandSel_WordIdx_1 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                  >> 5U);
        __VExpandSel_LoShift_1 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16));
        __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
        if (__VExpandSel_Aligned_1) {
            __VExpandSel_HiShift_1 = 0U;
            __VExpandSel_HiMask_1 = 0U;
        } else {
            __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_1);
            __VExpandSel_HiMask_1 = 0xffffffffU;
        }
        __Vtemp_21[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_1] 
                             >> __VExpandSel_LoShift_1));
        __Vtemp_21[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
        __Vtemp_21[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
        __Vtemp_21[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
        __Vtemp_21[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
        __Vtemp_21[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_1)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_1)]) 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
    } else {
        __Vtemp_21[0U] = 0U;
        __Vtemp_21[1U] = 0U;
        __Vtemp_21[2U] = 0U;
        __Vtemp_21[3U] = 0U;
        __Vtemp_21[4U] = 0U;
        __Vtemp_21[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[0U] 
        = __Vtemp_21[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[1U] 
        = __Vtemp_21[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[2U] 
        = __Vtemp_21[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[3U] 
        = __Vtemp_21[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[4U] 
        = __Vtemp_21[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_21[5U]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_23 = (0x000007ffU 
                                                 & ((IData)(0x000000a3U) 
                                                    * Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = (0x000007ffU 
                                                 & ((IData)(0x000000a3U) 
                                                    * Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_21 = (0x000007ffU 
                                                 & ((IData)(0x000000a3U) 
                                                    * Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_20 = (0x000007ffU 
                                                 & ((IData)(0x000000a3U) 
                                                    * Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = (0x000007ffU 
                                                 & ((IData)(0x000000a3U) 
                                                    * Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_18 = (0x000007ffU 
                                                 & ((IData)(0x000000a3U) 
                                                    * Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_17 = (0x000007ffU 
                                                 & ((IData)(0x000000a3U) 
                                                    * Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict 
        = (((QData)((IData)(((((0x0000ff00U & (((IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                         >> 0x00000038U)) 
                                                & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant)) 
                                                   & (- (IData)(
                                                                (VL_LTS_III(32, 1U, 
                                                                            VL_COUNTONES_I(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                                >> 0x00000038U))))) 
                                                                 & Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]))))) 
                                               << 8U)) 
                               | (0x000000ffU & ((IData)(
                                                         (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                          >> 0x00000030U)) 
                                                 & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant)) 
                                                    & (- (IData)(
                                                                 (VL_LTS_III(32, 1U, 
                                                                             VL_COUNTONES_I(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                                >> 0x00000030U))))) 
                                                                  & Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]))))))) 
                              << 0x00000010U) | ((0x0000ff00U 
                                                  & (((IData)(
                                                              (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                               >> 0x00000028U)) 
                                                      & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant)) 
                                                         & (- (IData)(
                                                                      (VL_LTS_III(32, 1U, 
                                                                                VL_COUNTONES_I(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                                >> 0x00000028U))))) 
                                                                       & Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]))))) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & ((IData)(
                                                               (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                >> 0x00000020U)) 
                                                       & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant)) 
                                                          & (- (IData)(
                                                                       (VL_LTS_III(32, 1U, 
                                                                                VL_COUNTONES_I(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                                >> 0x00000020U))))) 
                                                                        & Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant])))))))))) 
            << 0x00000020U) | (QData)((IData)(((((0x0000ff00U 
                                                  & (((IData)(
                                                              (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                               >> 0x00000018U)) 
                                                      & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant)) 
                                                         & (- (IData)(
                                                                      (VL_LTS_III(32, 1U, 
                                                                                VL_COUNTONES_I(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                                >> 0x00000018U))))) 
                                                                       & Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]))))) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & ((IData)(
                                                               (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                >> 0x00000010U)) 
                                                       & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant)) 
                                                          & (- (IData)(
                                                                       (VL_LTS_III(32, 1U, 
                                                                                VL_COUNTONES_I(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                                >> 0x00000010U))))) 
                                                                        & Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]))))))) 
                                                << 0x00000010U) 
                                               | ((0x0000ff00U 
                                                   & (((IData)(
                                                               (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                >> 8U)) 
                                                       & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                                          & (- (IData)(
                                                                       (VL_LTS_III(32, 1U, 
                                                                                VL_COUNTONES_I(
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                                >> 8U))))) 
                                                                        & Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]))))) 
                                                      << 8U)) 
                                                  | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                     & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                                        & (- (IData)(
                                                                     (VL_LTS_III(32, 1U, 
                                                                                VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                                      & Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]))))))))));
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23))) {
        __VExpandSel_WordIdx_2 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                  >> 5U);
        __VExpandSel_LoShift_2 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23));
        __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
        if (__VExpandSel_Aligned_2) {
            __VExpandSel_HiShift_2 = 0U;
            __VExpandSel_HiMask_2 = 0U;
        } else {
            __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_2);
            __VExpandSel_HiMask_2 = 0xffffffffU;
        }
        __Vtemp_23[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_2] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_23[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_23[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_23[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_23[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_23[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_2)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_2)]) 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
    } else {
        __Vtemp_23[0U] = 0U;
        __Vtemp_23[1U] = 0U;
        __Vtemp_23[2U] = 0U;
        __Vtemp_23[3U] = 0U;
        __Vtemp_23[4U] = 0U;
        __Vtemp_23[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[0U] 
        = __Vtemp_23[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[1U] 
        = __Vtemp_23[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[2U] 
        = __Vtemp_23[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[3U] 
        = __Vtemp_23[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[4U] 
        = __Vtemp_23[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_23[5U]);
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22))) {
        __VExpandSel_WordIdx_3 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22) 
                                  >> 5U);
        __VExpandSel_LoShift_3 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22));
        __VExpandSel_Aligned_3 = (0U == __VExpandSel_LoShift_3);
        if (__VExpandSel_Aligned_3) {
            __VExpandSel_HiShift_3 = 0U;
            __VExpandSel_HiMask_3 = 0U;
        } else {
            __VExpandSel_HiShift_3 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_3);
            __VExpandSel_HiMask_3 = 0xffffffffU;
        }
        __Vtemp_25[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_3)] 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_3] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_25[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_3)] 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_3)] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_25[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_3)] 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_3)] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_25[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_3)] 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_3)] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_25[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_3)] 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_3)] 
                             >> __VExpandSel_LoShift_3));
        __Vtemp_25[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_3)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_3)]) 
                            << __VExpandSel_HiShift_3) 
                           & __VExpandSel_HiMask_3) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_3)] 
                             >> __VExpandSel_LoShift_3));
    } else {
        __Vtemp_25[0U] = 0U;
        __Vtemp_25[1U] = 0U;
        __Vtemp_25[2U] = 0U;
        __Vtemp_25[3U] = 0U;
        __Vtemp_25[4U] = 0U;
        __Vtemp_25[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[0U] 
        = __Vtemp_25[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[1U] 
        = __Vtemp_25[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[2U] 
        = __Vtemp_25[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[3U] 
        = __Vtemp_25[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[4U] 
        = __Vtemp_25[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_25[5U]);
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21))) {
        __VExpandSel_WordIdx_4 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
                                  >> 5U);
        __VExpandSel_LoShift_4 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21));
        __VExpandSel_Aligned_4 = (0U == __VExpandSel_LoShift_4);
        if (__VExpandSel_Aligned_4) {
            __VExpandSel_HiShift_4 = 0U;
            __VExpandSel_HiMask_4 = 0U;
        } else {
            __VExpandSel_HiShift_4 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_4);
            __VExpandSel_HiMask_4 = 0xffffffffU;
        }
        __Vtemp_27[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_4)] 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_4] 
                             >> __VExpandSel_LoShift_4));
        __Vtemp_27[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_4)] 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_4)] 
                             >> __VExpandSel_LoShift_4));
        __Vtemp_27[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_4)] 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_4)] 
                             >> __VExpandSel_LoShift_4));
        __Vtemp_27[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_4)] 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_4)] 
                             >> __VExpandSel_LoShift_4));
        __Vtemp_27[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_4)] 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_4)] 
                             >> __VExpandSel_LoShift_4));
        __Vtemp_27[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_4)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_4)]) 
                            << __VExpandSel_HiShift_4) 
                           & __VExpandSel_HiMask_4) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_4)] 
                             >> __VExpandSel_LoShift_4));
    } else {
        __Vtemp_27[0U] = 0U;
        __Vtemp_27[1U] = 0U;
        __Vtemp_27[2U] = 0U;
        __Vtemp_27[3U] = 0U;
        __Vtemp_27[4U] = 0U;
        __Vtemp_27[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[0U] 
        = __Vtemp_27[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[1U] 
        = __Vtemp_27[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[2U] 
        = __Vtemp_27[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[3U] 
        = __Vtemp_27[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[4U] 
        = __Vtemp_27[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_27[5U]);
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20))) {
        __VExpandSel_WordIdx_5 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                  >> 5U);
        __VExpandSel_LoShift_5 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20));
        __VExpandSel_Aligned_5 = (0U == __VExpandSel_LoShift_5);
        if (__VExpandSel_Aligned_5) {
            __VExpandSel_HiShift_5 = 0U;
            __VExpandSel_HiMask_5 = 0U;
        } else {
            __VExpandSel_HiShift_5 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_5);
            __VExpandSel_HiMask_5 = 0xffffffffU;
        }
        __Vtemp_29[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_5] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_29[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_29[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_29[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_29[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_29[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_5)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_5)]) 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
    } else {
        __Vtemp_29[0U] = 0U;
        __Vtemp_29[1U] = 0U;
        __Vtemp_29[2U] = 0U;
        __Vtemp_29[3U] = 0U;
        __Vtemp_29[4U] = 0U;
        __Vtemp_29[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[0U] 
        = __Vtemp_29[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[1U] 
        = __Vtemp_29[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[2U] 
        = __Vtemp_29[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[3U] 
        = __Vtemp_29[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[4U] 
        = __Vtemp_29[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_29[5U]);
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))) {
        __VExpandSel_WordIdx_6 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
                                  >> 5U);
        __VExpandSel_LoShift_6 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19));
        __VExpandSel_Aligned_6 = (0U == __VExpandSel_LoShift_6);
        if (__VExpandSel_Aligned_6) {
            __VExpandSel_HiShift_6 = 0U;
            __VExpandSel_HiMask_6 = 0U;
        } else {
            __VExpandSel_HiShift_6 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_6);
            __VExpandSel_HiMask_6 = 0xffffffffU;
        }
        __Vtemp_31[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_6)] 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_6] 
                             >> __VExpandSel_LoShift_6));
        __Vtemp_31[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_6)] 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_6)] 
                             >> __VExpandSel_LoShift_6));
        __Vtemp_31[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_6)] 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_6)] 
                             >> __VExpandSel_LoShift_6));
        __Vtemp_31[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_6)] 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_6)] 
                             >> __VExpandSel_LoShift_6));
        __Vtemp_31[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_6)] 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_6)] 
                             >> __VExpandSel_LoShift_6));
        __Vtemp_31[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_6)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_6)]) 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_6)] 
                             >> __VExpandSel_LoShift_6));
    } else {
        __Vtemp_31[0U] = 0U;
        __Vtemp_31[1U] = 0U;
        __Vtemp_31[2U] = 0U;
        __Vtemp_31[3U] = 0U;
        __Vtemp_31[4U] = 0U;
        __Vtemp_31[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[0U] 
        = __Vtemp_31[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[1U] 
        = __Vtemp_31[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[2U] 
        = __Vtemp_31[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[3U] 
        = __Vtemp_31[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[4U] 
        = __Vtemp_31[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_31[5U]);
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18))) {
        __VExpandSel_WordIdx_7 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18) 
                                  >> 5U);
        __VExpandSel_LoShift_7 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18));
        __VExpandSel_Aligned_7 = (0U == __VExpandSel_LoShift_7);
        if (__VExpandSel_Aligned_7) {
            __VExpandSel_HiShift_7 = 0U;
            __VExpandSel_HiMask_7 = 0U;
        } else {
            __VExpandSel_HiShift_7 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_7);
            __VExpandSel_HiMask_7 = 0xffffffffU;
        }
        __Vtemp_33[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_7] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_33[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_33[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_33[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_33[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_33[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_7)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_7)]) 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
    } else {
        __Vtemp_33[0U] = 0U;
        __Vtemp_33[1U] = 0U;
        __Vtemp_33[2U] = 0U;
        __Vtemp_33[3U] = 0U;
        __Vtemp_33[4U] = 0U;
        __Vtemp_33[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[0U] 
        = __Vtemp_33[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[1U] 
        = __Vtemp_33[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[2U] 
        = __Vtemp_33[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[3U] 
        = __Vtemp_33[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[4U] 
        = __Vtemp_33[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_33[5U]);
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17))) {
        __VExpandSel_WordIdx_8 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                  >> 5U);
        __VExpandSel_LoShift_8 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17));
        __VExpandSel_Aligned_8 = (0U == __VExpandSel_LoShift_8);
        if (__VExpandSel_Aligned_8) {
            __VExpandSel_HiShift_8 = 0U;
            __VExpandSel_HiMask_8 = 0U;
        } else {
            __VExpandSel_HiShift_8 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_8);
            __VExpandSel_HiMask_8 = 0xffffffffU;
        }
        __Vtemp_35[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_8] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_35[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_35[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_35[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_35[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_35[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_8)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_8)]) 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
    } else {
        __Vtemp_35[0U] = 0U;
        __Vtemp_35[1U] = 0U;
        __Vtemp_35[2U] = 0U;
        __Vtemp_35[3U] = 0U;
        __Vtemp_35[4U] = 0U;
        __Vtemp_35[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[0U] 
        = __Vtemp_35[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[1U] 
        = __Vtemp_35[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[2U] 
        = __Vtemp_35[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[3U] 
        = __Vtemp_35[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[4U] 
        = __Vtemp_35[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_35[5U]);
}

VL_ATTR_COLD void Vtb_sys___024root___stl_sequent__TOP__1(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___stl_sequent__TOP__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    // Body
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.bank_pp1_ready)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.bank_pp1_ready)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.bank_pp1_ready)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.bank_pp1_ready)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.bank_pp1_ready)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.bank_pp1_ready)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.bank_pp1_ready)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.bank_pp1_ready)));
    __VdfgRegularize_hebeb780c_0_0 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_1 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_2 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_3 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_4 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_5 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_6 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_7 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant_ready));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_88 = ((6U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_89 = ((7U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_90 = ((4U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_91 = ((5U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_92 = ((2U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_93 = ((3U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_94 = ((0U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_95 = ((1U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_80 = ((6U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_81 = ((7U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_82 = ((4U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_83 = ((5U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_84 = ((2U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_85 = ((3U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_86 = ((0U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_87 = ((1U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_72 = ((6U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_73 = ((7U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_74 = ((4U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_75 = ((5U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_76 = ((2U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_77 = ((3U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_78 = ((0U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_79 = ((1U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_64 = ((6U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_65 = ((7U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_66 = ((4U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_67 = ((5U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_68 = ((2U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_69 = ((3U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_70 = ((0U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_71 = ((1U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_56 = ((6U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_4));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = ((7U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_4));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_58 = ((4U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_4));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_59 = ((5U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_4));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_60 = ((2U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_4));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_61 = ((3U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_4));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_62 = ((0U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_4));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_63 = ((1U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_4));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_48 = ((6U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_49 = ((7U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_50 = ((4U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_51 = ((5U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_52 = ((2U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_53 = ((3U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_54 = ((0U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_55 = ((1U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_40 = ((6U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_41 = ((7U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_42 = ((4U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_43 = ((5U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_44 = ((2U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_45 = ((3U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_46 = ((0U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_47 = ((1U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_32 = ((6U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_33 = ((7U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_34 = ((4U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_35 = ((5U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_36 = ((2U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_37 = ((3U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_38 = ((0U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_39 = ((1U 
                                                  == Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_32) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_48) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56) 
                    | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_64) 
                       | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_72) 
                          | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_80) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_88))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_41) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57) 
                    | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_65) 
                       | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_73) 
                          | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_81) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_89))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_34) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58) 
                    | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_66) 
                       | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_74) 
                          | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_82) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_90))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_35) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_43) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_59) 
                    | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_67) 
                       | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_75) 
                          | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_83) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_91))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_60) 
                    | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_68) 
                       | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76) 
                          | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_84) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_92))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_37) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_61) 
                    | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_69) 
                       | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_77) 
                          | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_85) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_93))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_38) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_62) 
                    | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_70) 
                       | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_78) 
                          | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_86) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_94))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_47) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_55) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63) 
                    | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_71) 
                       | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_79) 
                          | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_87) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_95))))))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 6U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__6__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                              - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 7U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__7__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                              - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 4U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__4__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                              - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 5U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__5__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                              - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 2U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                              - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 3U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                              - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy;
    if (((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                              - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 1U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                              - (IData)(1U)));
    }
}

VL_ATTR_COLD void Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);

VL_ATTR_COLD bool Vtb_sys___024root___eval_phase__stl(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_phase__stl\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sys___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_sys___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler));
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                    vlSelfRef.__Vm_traceActivity[6U] = 1U;
                    vlSelfRef.__Vm_traceActivity[7U] = 1U;
                }
                Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler));
                Vtb_sys___024root___stl_sequent__TOP__0(vlSelf);
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler));
                Vtb_sys___024root___stl_sequent__TOP__1(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_sys___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sys___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sys___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_sys.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_sys.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sys___024root___ctor_var_reset(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___ctor_var_reset\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_sys__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1738402316144181584ull);
    vlSelf->tb_sys__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15980833087478111613ull);
    vlSelf->tb_sys__DOT__csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16818117033242485536ull);
    vlSelf->tb_sys__DOT__csr_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17153614614359484228ull);
    VL_SCOPED_RAND_RESET_W(1304, vlSelf->tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt, __VscopeHash, 14502024236414423830ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__bank_req_valid = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6937521815958828291ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16275124559851677768ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb_sys__DOT__u_dut__DOT__mux_rsp_data, __VscopeHash, 2768241688017686757ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__mux_rsp_id = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 5471128551806203977ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__mux_rsp_err = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6351592219969006822ull);
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__4__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__5__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__6__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__7__KET____DOT__u_req_fifo__push_ready = 0;
    VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt, __VscopeHash, 8761872740517337633ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt, __VscopeHash, 2286217418991733404ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt, __VscopeHash, 12972867342616008528ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt, __VscopeHash, 2760469503664548858ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt, __VscopeHash, 13014631746710672391ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt, __VscopeHash, 922308852826481400ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt, __VscopeHash, 4469000741137780854ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt, __VscopeHash, 1558730728534603150ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(135, vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 3339186668970449530ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10980984013844550107ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3971365006861541554ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16993258243304692588ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(135, vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 15789913339952554325ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7523145233252794290ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14858327136284146726ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3454855351623759657ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(135, vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 487374236404686736ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11483931049378898617ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13363376373695009929ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17949734805468404921ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(135, vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 9918205444158385056ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8649971268797512897ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13823872960470874636ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16216674890615839222ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(135, vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 10435673217673558749ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11972253496826830064ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2729707850029532020ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9100714983992985679ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(135, vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 12606580928688572012ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12315157449251448385ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5632464151655188614ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12160803158254041117ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(135, vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 13393449875228266999ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14352041771864821353ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16618534469204343049ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11619730500408025334ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(135, vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 15537313178400827705ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1477738612815415099ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13948966510760467925ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17700083909766029810ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem[__Vi0], __VscopeHash, 451816339953092312ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12497061450773533632ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12406275735033432600ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8969563206749980074ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem[__Vi0], __VscopeHash, 8025859302078151762ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12949652830977045480ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18228148959258767011ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10280957414363925401ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem[__Vi0], __VscopeHash, 10856039908064093111ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2842330455257811111ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11008371249511645751ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2449564539718767372ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem[__Vi0], __VscopeHash, 13325507803473609021ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5374786326741922666ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12322464906970004556ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2992485215397173671ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[__Vi0], __VscopeHash, 595689534626170082ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13894620521742621546ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4538940518977083366ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15164375207237859527ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[__Vi0], __VscopeHash, 6082304268674369675ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15624737696469743616ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5062996880948817471ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12935854955976112338ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__Vi0], __VscopeHash, 17285201247196969414ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14337756444676293904ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14468165964695570762ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2563522022070439268ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__Vi0], __VscopeHash, 10530855338698038454ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12861935750226065753ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15509437793911967964ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1099991300153119777ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7836615052374401025ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16738453463386399462ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 16485969871654834864ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10952383294680619875ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1833563886308993989ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16522438258534780671ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15765243712271319085ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11693867060842287239ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 13582906335250684414ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5259713412143139859ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2038029975726832521ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15467706255270631484ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14612696562955883071ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6500018577787777396ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 687758087739492750ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13250936220635262792ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10814260788123769912ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10718159446227176061ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4025275448205417135ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11094690178283196923ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 1509445181431774493ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6634490843126557277ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7172240433412170213ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7427694514658057870ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1900007853395775414ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12998731263448458186ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 15341985533325009005ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11798037712431772916ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4493909617056484239ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12189029708250135200ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15168571738903224720ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14331687411310478430ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 17256370966206878656ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13679167375466883796ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11203007248294229977ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4508626744317434359ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17495881551520014012ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17417398108381146651ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 14052935889520420404ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4465376221105142662ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12791749441406666804ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11511328287422613914ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1781297360359463275ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6191315492363460151ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(163, vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0], __VscopeHash, 3230797865360903270ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11673168535484334551ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17437815931300706389ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4506254242510895420ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10789750139615551920ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12805208493036467346ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6229784881246276829ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3889547836078477394ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2779035486907197847ull);
    for (int __Vi0 = 0; __Vi0 < 96; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6312991514436214119ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4944362987993145914ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3240390350866235432ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1740246981491322471ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata, __VscopeHash, 1319382626340188077ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id, __VscopeHash, 2142966427788499196ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11171179237280527781ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15678721587264732742ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 88815463358458356ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18373657839350769760ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9996503983784279570ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11020637404837618838ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17263569861041896357ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_req_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10642680432640499000ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->tb_sys__DOT__u_env__DOT__drv_req_addr, __VscopeHash, 10022838445535883327ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb_sys__DOT__u_env__DOT__drv_req_data, __VscopeHash, 15604243173449894204ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sys__DOT__u_env__DOT__drv_req_strobe, __VscopeHash, 13654987517723305140ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_req_id = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 424954615966519701ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_req_we = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9055619539727754893ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_csr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2893390781428474355ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_csr_addr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11569731801559909060ull);
    vlSelf->tb_sys__DOT__u_env__DOT__mon_rsp_ready = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11330519322934567098ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vi0], __VscopeHash, 14890757545920479676ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12257764431484447078ull);
    }
    vlSelf->tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count = 0;
    vlSelf->tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count = 0;
    vlSelf->tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2999129567307374573ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->__Vtask_tb_sys__DOT__u_env__DOT__run_stress__73__datas[__Vi0]);
    }
    vlSelf->__VdfgRegularize_hebeb780c_0_16 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_17 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_18 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_19 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_20 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_21 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_22 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_23 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_32 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_33 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_34 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_35 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_36 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_37 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_38 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_39 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_40 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_41 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_42 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_43 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_44 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_45 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_46 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_47 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_48 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_49 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_50 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_51 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_52 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_53 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_54 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_55 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_56 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_57 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_58 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_59 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_60 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_61 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_62 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_63 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_64 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_65 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_66 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_67 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_68 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_69 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_70 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_71 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_72 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_73 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_74 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_75 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_76 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_77 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_78 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_79 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_80 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_81 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_82 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_83 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_84 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_85 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_86 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_87 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_88 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_89 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_90 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_91 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_92 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_93 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_94 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_95 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_sys__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_sys__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
