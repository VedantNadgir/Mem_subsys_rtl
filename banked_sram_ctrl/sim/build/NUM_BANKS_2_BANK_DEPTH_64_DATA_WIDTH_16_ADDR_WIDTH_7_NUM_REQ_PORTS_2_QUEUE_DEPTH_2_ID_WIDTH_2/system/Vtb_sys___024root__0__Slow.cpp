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

VL_ATTR_COLD void Vtb_sys___024root___stl_sequent__TOP__0(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___stl_sequent__TOP__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_12;
    __VdfgRegularize_hebeb780c_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_13;
    __VdfgRegularize_hebeb780c_0_13 = 0;
    // Body
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
           & (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
               << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready) 
            << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt 
        = (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr])) 
            << 0x0000001cU) | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr])));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata) 
            << 0x00000010U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id) 
            << 3U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we) 
            << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err) 
            << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready 
        = (((2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
            << 1U) | (2U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid 
        = (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid) 
            << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports 
        = ((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id) 
                  >> 1U)) | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id) 
                                   >> 2U)));
    __VdfgRegularize_hebeb780c_0_10 = (1U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                             >> 0x00000015U));
    __VdfgRegularize_hebeb780c_0_12 = (1U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                             >> 0x00000015U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
           & (- (IData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
           & (- (IData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((1U & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
                & (~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports))) 
               & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (~ ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports) 
                            >> 1U))) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports)) 
         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports) 
                         >> 1U)) & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
                                    >> 1U))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    __VdfgRegularize_hebeb780c_0_11 = (1U & (~ ((0U 
                                                 == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                | (IData)(__VdfgRegularize_hebeb780c_0_10))));
    __VdfgRegularize_hebeb780c_0_13 = (1U & (~ ((0U 
                                                 == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                | (IData)(__VdfgRegularize_hebeb780c_0_12))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id = 0U;
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports));
    if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (3U & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
            = (((~ ((IData)(0x0000ffffU) << (0x0000001fU 
                                             & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                << 4U)))) 
                & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
               | (0x00000000ffffffffULL & (((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))
                                             ? 0U : 
                                            (0x0000ffffU 
                                             & vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata)) 
                                           << (0x0000001fU 
                                               & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                  << 4U)))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (3U & ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err)) 
                        << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
            = (((~ ((IData)(3U) << (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                          << 1U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id)) 
               | (0x0fU & ((3U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id)) 
                           << (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                     << 1U)))));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p 
        = (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports) 
                 >> 1U));
    if ((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
               | (3U & ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data 
            = (((~ ((IData)(0x0000ffffU) << (0x0000001fU 
                                             & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                << 4U)))) 
                & vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data) 
               | (0x00000000ffffffffULL & (((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we))
                                             ? 0U : 
                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata 
                                             >> 0x10U)) 
                                           << (0x0000001fU 
                                               & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                                  << 4U)))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err)) 
               | (3U & ((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err) 
                               >> 1U)) << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
            = (((~ ((IData)(3U) << (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                          << 1U)))) 
                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id)) 
               | (0x0fU & ((3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id) 
                                  >> 3U)) << (3U & 
                                              ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p) 
                                               << 1U)))));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid)) 
                 | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted) 
                    >> 1U)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid)) 
                 | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid 
        = (((IData)(__VdfgRegularize_hebeb780c_0_11) 
            << 1U) | (IData)(__VdfgRegularize_hebeb780c_0_13));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant 
        = (3U & ((((0x0000000cU & (((~ (((0x0000000fU 
                                          & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                         >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                        - (IData)(1U))) 
                                    & ((0x0000000fU 
                                        & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                       >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))) 
                                   << 2U)) | (3U & 
                                              ((~ (
                                                   ((0x0000000fU 
                                                     & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                         << 2U) 
                                                        | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                               & ((0x0000000fU 
                                                   & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))))) 
                  << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                 >> 2U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
        = ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
             & (IData)(__VdfgRegularize_hebeb780c_0_10)) 
            << 3U) | ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)) 
                        & (IData)(__VdfgRegularize_hebeb780c_0_12)) 
                       << 2U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)));
    __VdfgRegularize_hebeb780c_0_9 = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready) 
                                      & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__ = 0U;
    if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__ = 0U;
    }
    if ((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__ = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle 
        = (3U & (~ (((0U != (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                   >> 2U))) << 1U) 
                    | ((IData)(__VdfgRegularize_hebeb780c_0_11) 
                       | (IData)(__VdfgRegularize_hebeb780c_0_13)))));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant 
        = (3U & ((((0x0000000cU & (((~ (((0x0000000fU 
                                          & ((0x0000000cU 
                                              & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                             | (3U 
                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                   >> 2U)))) 
                                         >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                        - (IData)(1U))) 
                                    & ((0x0000000fU 
                                        & ((0x0000000cU 
                                            & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                           | (3U & 
                                              ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                               >> 2U)))) 
                                       >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))) 
                                   << 2U)) | (3U & 
                                              ((~ (
                                                   ((0x0000000fU 
                                                     & ((0x0000000cU 
                                                         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                        | (3U 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 2U)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                               & ((0x0000000fU 
                                                   & ((0x0000000cU 
                                                       & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                      | (3U 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 2U)))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))))) 
                  << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                 >> 2U));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
        = (0x0fffffffU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt 
                                   >> (0x0000003fU 
                                       & ((IData)(0x0000001cU) 
                                          * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__))))) 
                          & (- (IData)((0x37U >= (0x0000003fU 
                                                  & ((IData)(0x0000001cU) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__)) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_9));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_9));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict 
        = ((0x0000000cU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                           & (((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                               & (- (IData)((VL_LTS_III(32, 1U, 
                                                        VL_COUNTONES_I(
                                                                       (3U 
                                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                           >> 2U)))) 
                                             & (0U 
                                                != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)))))) 
                              << 2U))) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                          & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                             & (- (IData)(
                                                          (VL_LTS_III(32, 1U, 
                                                                      VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                           & (0U 
                                                              != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant))))))));
    __VdfgRegularize_hebeb780c_0_6 = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                      & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)));
    vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port = 0U;
    if ((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port = 0U;
    }
    if ((2U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port = 1U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
        = (0x0fffffffU & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt 
                                   >> (0x0000003fU 
                                       & ((IData)(0x0000001cU) 
                                          * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port))))) 
                          & (- (IData)((0x37U >= (0x0000003fU 
                                                  & ((IData)(0x0000001cU) 
                                                     * (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port)) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port) 
                                                & (IData)(__VdfgRegularize_hebeb780c_0_6));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
           | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
           | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy;
    if (((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 1U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (3U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
}

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
                Vtb_sys___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                }
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
    vlSelf->tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 14502024236414423830ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__bank_req_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6937521815958828291ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__arb_grant_port__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7263391325105401884ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16275124559851677768ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__mux_rsp_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2768241688017686757ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__mux_rsp_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5471128551806203977ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__mux_rsp_err = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6351592219969006822ull);
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 8761872740517337633ull);
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arb__grant_port = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 2286217418991733404ull);
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata = 0;
    vlSelf->tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 13393449875228266999ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14352041771864821353ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16618534469204343049ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11619730500408025334ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 15537313178400827705ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1477738612815415099ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13948966510760467925ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17700083909766029810ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17285201247196969414ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5274656142287601768ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11250487667611885863ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2094238043924168253ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9768333004053411577ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2772360731610625463ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14045847799106862087ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9025876683054794538ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11399237687444017334ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2762819601480063998ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3673954993088699498ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14337756444676293904ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14468165964695570762ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2563522022070439268ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10530855338698038454ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 420277071333318824ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8795596621256295060ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4746823982663676524ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15071087375972885391ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8349446884634259133ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 664461399362657149ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7114770855930427848ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2120841977140214575ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10758287468434723119ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2613882546769584175ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12861935750226065753ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15509437793911967964ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1099991300153119777ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7836615052374401025ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17417398108381146651ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 14052935889520420404ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4465376221105142662ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12791749441406666804ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11511328287422613914ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1781297360359463275ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6191315492363460151ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 3230797865360903270ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11673168535484334551ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17437815931300706389ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4506254242510895420ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10789750139615551920ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12805208493036467346ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6229784881246276829ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3889547836078477394ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2779035486907197847ull);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6312991514436214119ull);
    }
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4944362987993145914ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_perf__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3240390350866235432ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1740246981491322471ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1319382626340188077ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2142966427788499196ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11171179237280527781ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15678721587264732742ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 88815463358458356ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18373657839350769760ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9996503983784279570ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11020637404837618838ull);
    vlSelf->tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17263569861041896357ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_req_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10642680432640499000ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_req_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10022838445535883327ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_req_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15604243173449894204ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_req_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13654987517723305140ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_req_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 424954615966519701ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_req_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9055619539727754893ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_csr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2893390781428474355ull);
    vlSelf->tb_sys__DOT__u_env__DOT__drv_csr_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11569731801559909060ull);
    vlSelf->tb_sys__DOT__u_env__DOT__mon_rsp_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11330519322934567098ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14890757545920479676ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_sys__DOT__u_env__DOT__u_sb__DOT__gold_init[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12257764431484447078ull);
    }
    vlSelf->tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count = 0;
    vlSelf->tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count = 0;
    vlSelf->tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2999129567307374573ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_5 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
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
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
