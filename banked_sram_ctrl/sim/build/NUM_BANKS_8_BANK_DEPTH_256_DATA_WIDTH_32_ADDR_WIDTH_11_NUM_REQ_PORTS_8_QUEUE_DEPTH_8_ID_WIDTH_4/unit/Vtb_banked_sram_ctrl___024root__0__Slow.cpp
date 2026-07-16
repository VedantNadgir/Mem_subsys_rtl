// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_banked_sram_ctrl.h for the primary calling header

#include "Vtb_banked_sram_ctrl__pch.h"

void Vtb_banked_sram_ctrl___024root___timing_ready(Vtb_banked_sram_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root___eval_static(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_static\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_banked_sram_ctrl__DOT__error_count = 0U;
        vlSelfRef.tb_banked_sram_ctrl__DOT__test_id = 0U;
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__unnamedblk3__DOT__z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9306104718034491034ull);
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__unnamedblk3__DOT__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2601208154316485888ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_banked_sram_ctrl__DOT__clk__0 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_banked_sram_ctrl__DOT__rst_n__0 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__rst_n;
    Vtb_banked_sram_ctrl___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root___eval_final(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_final\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_banked_sram_ctrl___024root___eval_phase__stl(Vtb_banked_sram_ctrl___024root* vlSelf);

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root___eval_settle(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_settle\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_banked_sram_ctrl___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/unit/tb_banked_sram_ctrl.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_banked_sram_ctrl___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_banked_sram_ctrl___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_banked_sram_ctrl___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_banked_sram_ctrl___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 16> Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0;

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root___stl_sequent__TOP__0(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___stl_sequent__TOP__0\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    CData/*1:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_32;
    __VdfgRegularize_hebeb780c_0_32 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_33;
    __VdfgRegularize_hebeb780c_0_33 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_34;
    __VdfgRegularize_hebeb780c_0_34 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_35;
    __VdfgRegularize_hebeb780c_0_35 = 0;
    // Body
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__rsp_issue 
        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__rsp_ready) 
           & ((((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                << 3U) | ((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                          << 2U)) | (((0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we 
        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid) 
           & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err)) 
              & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready 
        = ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready) 
             << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready) 
                       << 2U)) | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[0U] 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[1U] 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata))) 
                   >> 0x00000020U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id 
        = ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id) 
             << 0x00000012U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id) 
                                << 0x0000000cU)) | 
           (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id) 
             << 6U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we 
        = ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we) 
             << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we) 
                       << 2U)) | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err 
        = ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err) 
             << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err) 
                       << 2U)) | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[0U] 
        = (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]);
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[1U] 
        = (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
            << 0x00000013U) | (IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                       >> 0x00000020U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[2U] 
        = (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
            >> 0x0000000dU) | ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                        >> 0x00000020U)) 
                               << 0x00000013U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[3U] 
        = (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
            << 6U) | ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                               >> 0x00000020U)) >> 0x0000000dU));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[4U] 
        = ((0xfe000000U & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[4U]) 
           | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
               >> 0x0000001aU) | ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                                           [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                           >> 0x00000020U)) 
                                  << 6U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[4U] 
        = ((0x01ffffffU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[4U]) 
           | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
              << 0x00000019U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[5U] 
        = (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr]) 
            >> 7U) | ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                               [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                               >> 0x00000020U)) << 0x00000019U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt[6U] 
        = (0x00000fffU & ((IData)((vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                   [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                   >> 0x00000020U)) 
                          >> 7U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready 
        = ((((4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
             << 3U) | ((4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                       << 2U)) | (((4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 1U) | (4U > (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid 
        = ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid) 
             << 3U) | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid) 
                       << 2U)) | (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid) 
                                   << 1U) | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports 
        = ((((0x0000000cU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id) 
                             >> 2U)) | (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id) 
                                              >> 4U))) 
            << 4U) | ((0x0000000cU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id) 
                                      >> 2U)) | (3U 
                                                 & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id) 
                                                    >> 4U))));
    __VdfgRegularize_hebeb780c_0_4 = (3U & (IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                                    >> 0x00000029U)));
    __VdfgRegularize_hebeb780c_0_5 = (3U & (IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                                    >> 0x00000029U)));
    __VdfgRegularize_hebeb780c_0_6 = (3U & (IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                                    >> 0x00000029U)));
    __VdfgRegularize_hebeb780c_0_7 = (3U & (IData)(
                                                   (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr] 
                                                    >> 0x00000029U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((0xfffffff8U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                              & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U))) 
                                          | (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((0xfffffff8U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                              & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U))) 
                                          | (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((0xfffffff8U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                              & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U))) 
                                          | (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe 
        = ((0xfffffff8U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                              & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U))) 
                                          | (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe) 
                                                   & (- (IData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we)))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__req_accept 
        = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
           & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_ready));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (0U == (3U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0U == (0x0cU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0U == (0x30U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0U == (0xc0U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (1U == (3U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (4U == (0x0cU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x10U == (0x30U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x40U == (0xc0U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 1U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (2U == (3U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (8U == (0x0cU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x20U == (0x30U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0x80U == (0xc0U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 2U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 0U;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
          & (3U == (3U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (1U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 1U)) & (0x0cU == (0x0cU & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (2U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 2U)) & (0x30U == (0x30U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (4U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    if (((((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found)) 
           & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid) 
              >> 3U)) & (0xc0U == (0xc0U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports)))) 
         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready) 
            >> 3U))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted 
            = (8U | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = 1U;
    }
    __VdfgRegularize_hebeb780c_0_32 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_4)) 
                                       & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_33 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_5)) 
                                       & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_34 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_6)) 
                                       & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)));
    __VdfgRegularize_hebeb780c_0_35 = ((0U == (IData)(__VdfgRegularize_hebeb780c_0_7)) 
                                       & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[0U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[1U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[2U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data[3U] = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id = 0U;
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p 
        = (3U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports));
    if ((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data, 
                        ((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[0U]));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err)) 
               | (0x0fU & ((1U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err)) 
                           << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id)) 
               | (0x0000ffffU & ((0x0000000fU & vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id) 
                                 << (0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                      << 2U)))));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p 
        = (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports) 
                 >> 2U));
    if ((2U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data, 
                        ((2U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[1U]));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err)) 
               | (0x0fU & ((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                  >> 1U)) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id)) 
               | (0x0000ffffU & ((0x0000000fU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id 
                                                 >> 6U)) 
                                 << (0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                      << 2U)))));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p 
        = (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports) 
                 >> 4U));
    if ((4U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data, 
                        ((4U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[2U]));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err)) 
               | (0x0fU & ((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                  >> 2U)) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id)) 
               | (0x0000ffffU & ((0x0000000fU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id 
                                                 >> 0x0cU)) 
                                 << (0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                      << 2U)))));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p 
        = (3U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports) 
                 >> 6U));
    if ((8U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid 
            = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        VL_ASSIGNSEL_WI(128, 32, (0x0000007fU & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                                 << 5U)), vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data, 
                        ((8U & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we))
                          ? 0U : vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata[3U]));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err)) 
               | (0x0fU & ((1U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err) 
                                  >> 3U)) << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p))));
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                            << 2U)))) 
                & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id)) 
               | (0x0000ffffU & ((0x0000000fU & (vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id 
                                                 >> 0x12U)) 
                                 << (0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p) 
                                      << 2U)))));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid)) 
                 | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted) 
                    >> 3U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid)) 
                 | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted) 
                    >> 2U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid)) 
                 | ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted) 
                    >> 1U)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid)) 
                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid 
        = ((((IData)(__VdfgRegularize_hebeb780c_0_32) 
             << 3U) | ((IData)(__VdfgRegularize_hebeb780c_0_33) 
                       << 2U)) | (((IData)(__VdfgRegularize_hebeb780c_0_34) 
                                   << 1U) | (IData)(__VdfgRegularize_hebeb780c_0_35)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid)) 
                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready)));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant 
        = (0x0000000fU & ((((0x000000f0U & (((~ (((0x000000ffU 
                                                   & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))) 
                                            << 4U)) 
                            | (0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                        << 4U) 
                                                       | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                          >> 4U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid 
        = ((((((((3U == (IData)(__VdfgRegularize_hebeb780c_0_4)) 
                 & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                << 3U) | (((3U == (IData)(__VdfgRegularize_hebeb780c_0_5)) 
                           & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                          << 2U)) | ((((3U == (IData)(__VdfgRegularize_hebeb780c_0_6)) 
                                       & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                      << 1U) | ((3U 
                                                 == (IData)(__VdfgRegularize_hebeb780c_0_7)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))) 
             << 0x0000000cU) | ((((((2U == (IData)(__VdfgRegularize_hebeb780c_0_4)) 
                                    & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                   << 3U) | (((2U == (IData)(__VdfgRegularize_hebeb780c_0_5)) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                             << 2U)) 
                                 | ((((2U == (IData)(__VdfgRegularize_hebeb780c_0_6)) 
                                      & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                     << 1U) | ((2U 
                                                == (IData)(__VdfgRegularize_hebeb780c_0_7)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))) 
                                << 8U)) | (((((1U == (IData)(__VdfgRegularize_hebeb780c_0_4)) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                             << 7U) 
                                            | (((1U 
                                                 == (IData)(__VdfgRegularize_hebeb780c_0_5)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                               << 6U)) 
                                           | ((((1U 
                                                 == (IData)(__VdfgRegularize_hebeb780c_0_6)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                               << 5U) 
                                              | ((((1U 
                                                    == (IData)(__VdfgRegularize_hebeb780c_0_7)) 
                                                   & (0U 
                                                      != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x000000ffU 
                                                & ((IData)(0x00000033U) 
                                                   * Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                   [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]));
    __VdfgRegularize_hebeb780c_0_3 = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready) 
                                      & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]);
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__bank_idle 
        = (0x0000000fU & (~ ((((0U != (0x0000000fU 
                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                          >> 0x0000000cU))) 
                               << 3U) | ((0U != (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                    >> 8U))) 
                                         << 2U)) | 
                             (((0U != (0x0000000fU 
                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                          >> 4U))) 
                               << 1U) | ((IData)(__VdfgRegularize_hebeb780c_0_35) 
                                         | ((IData)(__VdfgRegularize_hebeb780c_0_34) 
                                            | ((IData)(__VdfgRegularize_hebeb780c_0_32) 
                                               | (IData)(__VdfgRegularize_hebeb780c_0_33))))))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant 
        = (0x0000000fU & ((((0x000000f0U & (((~ (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 8U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 0x0000000cU)))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & ((0x000000f0U 
                                                     & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                        >> 8U)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 0x0000000cU)))) 
                                                >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))) 
                                            << 4U)) 
                            | (0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 8U)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                             >> 0x0000000cU)))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                         >> 8U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 0x0000000cU)))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                          >> 4U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant 
        = (0x0000000fU & ((((0x000000f0U & (((~ (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 4U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 8U)))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & ((0x000000f0U 
                                                     & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                        >> 4U)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 8U)))) 
                                                >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))) 
                                            << 4U)) 
                            | (0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 4U)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                             >> 8U)))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                         >> 4U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 8U)))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                          >> 4U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant 
        = (0x0000000fU & ((((0x000000f0U & (((~ (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                            >> 4U)))) 
                                                  >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                 - (IData)(1U))) 
                                             & ((0x000000ffU 
                                                 & ((0x000000f0U 
                                                     & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                    | (0x0000000fU 
                                                       & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                          >> 4U)))) 
                                                >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))) 
                                            << 4U)) 
                            | (0x0000000fU & ((~ ((
                                                   (0x000000ffU 
                                                    & ((0x000000f0U 
                                                        & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                       | (0x0000000fU 
                                                          & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                             >> 4U)))) 
                                                   >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                  - (IData)(1U))) 
                                              & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                           >> 4U)))) 
                                                 >> (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))))) 
                           << (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                          >> 4U));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
        = (0x0007ffffffffffffULL & ((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                      [
                                                      (((IData)(0x00000032U) 
                                                        + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8))))) 
                                     | (((0U == (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                           [
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                                                            >> 5U)])) 
                                           >> (0x0000001fU 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8))))) 
                                    & (- (QData)((IData)(
                                                         (0xcbU 
                                                          >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_28 = ((2U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_29 = ((3U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = ((0U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = ((1U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_11 = (0x000000ffU 
                                                 & ((IData)(0x00000033U) 
                                                    * Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]));
    __VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) 
                                      & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_10 = (0x000000ffU 
                                                 & ((IData)(0x00000033U) 
                                                    * Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                    [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]));
    __VdfgRegularize_hebeb780c_0_1 = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) 
                                      & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = (0x000000ffU 
                                                & ((IData)(0x00000033U) 
                                                   * Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                   [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict 
        = ((((0x000000f0U & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                              >> 8U) & (((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant)) 
                                         & (- (IData)(
                                                      (VL_LTS_III(32, 1U, 
                                                                  VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                                >> 0x0000000cU)))) 
                                                       & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                                       [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant])))) 
                                        << 4U))) | 
             (0x0000000fU & (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                              >> 8U) & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant)) 
                                        & (- (IData)(
                                                     (VL_LTS_III(32, 1U, 
                                                                 VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                                >> 8U)))) 
                                                      & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]))))))) 
            << 8U) | ((0x000000f0U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                      & (((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                          & (- (IData)(
                                                       (VL_LTS_III(32, 1U, 
                                                                   VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid) 
                                                                                >> 4U)))) 
                                                        & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant])))) 
                                         << 4U))) | 
                      ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                       & ((~ (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                          & (- (IData)((VL_LTS_III(32, 1U, 
                                                   VL_COUNTONES_I((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                        & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                        [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant])))))));
    __VdfgRegularize_hebeb780c_0_2 = ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                      & Vtb_banked_sram_ctrl__ConstPool__TABLE_h8665d168_0
                                      [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]);
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
        = (0x0007ffffffffffffULL & ((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                      [
                                                      (((IData)(0x00000032U) 
                                                        + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11))))) 
                                     | (((0U == (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                           [
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11) 
                                                            >> 5U)])) 
                                           >> (0x0000001fU 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11))))) 
                                    & (- (QData)((IData)(
                                                         (0xcbU 
                                                          >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_11)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = ((2U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_17 = ((3U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_18 = ((0U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = ((1U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
        = (0x0007ffffffffffffULL & ((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                      [
                                                      (((IData)(0x00000032U) 
                                                        + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10))))) 
                                     | (((0U == (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                           [
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10) 
                                                            >> 5U)])) 
                                           >> (0x0000001fU 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10))))) 
                                    & (- (QData)((IData)(
                                                         (0xcbU 
                                                          >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_10)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_20 = ((2U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_21 = ((3U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = ((0U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_23 = ((1U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
        = (0x0007ffffffffffffULL & ((((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                      [
                                                      (((IData)(0x00000032U) 
                                                        + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))))) 
                                     | (((0U == (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt
                                                           [
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                                                            >> 5U)])) 
                                           >> (0x0000001fU 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))))) 
                                    & (- (QData)((IData)(
                                                         (0xcbU 
                                                          >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_24 = ((2U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_25 = ((3U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = ((0U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = ((1U 
                                                  == Vtb_banked_sram_ctrl__ConstPool__TABLE_ha1fb25ee_0
                                                  [vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 & (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31))));
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
          >> 2U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
          >> 3U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy;
    if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
         & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__req_valid) 
          >> 1U) & (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
}

VL_ATTR_COLD bool Vtb_banked_sram_ctrl___024root___eval_phase__stl(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___eval_phase__stl\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vtb_banked_sram_ctrl___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_banked_sram_ctrl___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_banked_sram_ctrl___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_banked_sram_ctrl___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_banked_sram_ctrl___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_banked_sram_ctrl.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_banked_sram_ctrl.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_banked_sram_ctrl___024root___ctor_var_reset(Vtb_banked_sram_ctrl___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_banked_sram_ctrl___024root___ctor_var_reset\n"); );
    Vtb_banked_sram_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_banked_sram_ctrl__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 978474285009840894ull);
    vlSelf->tb_banked_sram_ctrl__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10806034368891313537ull);
    vlSelf->tb_banked_sram_ctrl__DOT__req_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6138167919081182653ull);
    vlSelf->tb_banked_sram_ctrl__DOT__req_addr = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8493232391666435575ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_banked_sram_ctrl__DOT__req_data, __VscopeHash, 2690246119957381379ull);
    vlSelf->tb_banked_sram_ctrl__DOT__req_strobe = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3151256629398920099ull);
    vlSelf->tb_banked_sram_ctrl__DOT__req_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15101987172197680446ull);
    vlSelf->tb_banked_sram_ctrl__DOT__req_we = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11116197149087090781ull);
    vlSelf->tb_banked_sram_ctrl__DOT__rsp_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8912817938572363232ull);
    vlSelf->tb_banked_sram_ctrl__DOT__csr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11679744194505487479ull);
    vlSelf->tb_banked_sram_ctrl__DOT__csr_addr_in = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8101796346277490385ull);
    vlSelf->tb_banked_sram_ctrl__DOT__csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8961458975950217730ull);
    vlSelf->tb_banked_sram_ctrl__DOT__csr_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14741859022968713281ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__gold_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4110555428110182326ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__gold_init[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14942694286206769556ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__req_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9155355015689597939ull);
    VL_SCOPED_RAND_RESET_W(204, vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__req_fifo_head_pkt, __VscopeHash, 6103112640394127853ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__bank_req_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13887777862017225639ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__rsp_fifo_push_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12580458195073490460ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_data, __VscopeHash, 10099140204230533404ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9568063777430682723ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__mux_rsp_err = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 209929727593710440ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 13180853793313764292ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 11426586714807992750ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 7120101210687510791ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 17260856901435993875ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata = 0;
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 15782857946119372566ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3597347321017198820ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8707990429149251623ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6312331665744963091ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 5246573890117160537ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10607253572765372517ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15326418879368389263ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12090765445690226685ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 13584134795579714138ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9053425000149077080ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9331980289555110785ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2531960498482099870ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 2803369884800361542ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16227809596218903133ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7506893241241974589ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10617662066711073755ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13333287427908569572ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9381116572393960820ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17322758209765500993ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5023812958935047140ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17622784263072653967ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9638866441687109024ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5010118273624811073ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15948303832932738843ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17845124582423061532ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18272105761254207346ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15391836477297573014ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15834403184258946158ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11249367285980637156ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18310917824776413761ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7910399003482023302ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11575745137767299702ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14118001148751153566ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 797215821827237608ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192773835916105465ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 334655581495758361ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11261666675784730461ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4727514403593518740ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10419697404861508921ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1289684421952243730ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13327690569236804704ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 152973703223469694ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 340190761405409715ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1938821200594380391ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5168557079831971792ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4541009276741075425ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1614360553556261720ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6940652166550394108ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11554323549459210848ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2748590562424068212ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4764757069079700126ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7693065939249692468ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14870338482062615024ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12291346150849971531ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 85046822224471551ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3532187523997515005ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18112082712053682161ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 367820522747629435ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1251474212472473377ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12891481711336258400ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10158338410501354335ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 240814621452049060ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14005757453502685469ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6682953956793604429ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5295586453766880897ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5714423388435666416ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16326783297879670807ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5786929018559880670ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5434828999708348186ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11761808486095441657ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14331748436469372152ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15134581890030067507ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14105987192739623156ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1353895947584829229ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 17949820131509903253ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11755321292008147446ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15445027705712894652ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6265567578585213144ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17467573679947619975ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2323565804641125371ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 2206815494991852855ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3920820473754766168ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17548599066685168034ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10455927778641258384ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15388604525545285927ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17311052482392612957ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 5617002678366230717ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8592557993734158416ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5164355034393589643ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16081364089285133230ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14236140022140931778ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2729149363492769829ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 6866366656571186619ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16730790771586387587ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17849647656909171167ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7833518229721490040ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7975949165374660975ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__req_accept = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3338075059186562794ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__rsp_issue = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8258210794905566971ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__conflict = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7907592579196095572ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__bank_idle = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4006501314297018278ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__counter[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12069600756936538345ull);
    }
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16569957485408025495ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_perf__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4788611397206694154ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16276752255192067444ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_rdata, __VscopeHash, 5865572299284038859ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_id = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10955798344718665811ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_we = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8161328802808489611ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__pp1_err = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9638695445336270170ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12421679688476639936ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__dest_ports = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1255235632386529799ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__p = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14796393409260972556ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15648658419995995631ull);
    vlSelf->tb_banked_sram_ctrl__DOT__dut__DOT__u_rsp_mux__DOT__bank_granted = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15084107962057803347ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_9 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_10 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_11 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_16 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_17 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_18 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_19 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_20 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_21 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_22 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_23 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_24 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_25 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_26 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_27 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_28 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_29 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_30 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_31 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_banked_sram_ctrl__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_banked_sram_ctrl__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
