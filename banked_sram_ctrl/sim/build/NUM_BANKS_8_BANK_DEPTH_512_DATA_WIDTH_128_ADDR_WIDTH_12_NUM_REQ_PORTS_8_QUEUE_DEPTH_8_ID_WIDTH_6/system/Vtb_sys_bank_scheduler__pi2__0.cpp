// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sys.h for the primary calling header

#include "Vtb_sys__pch.h"

extern const VlUnpacked<CData/*2:0*/, 256> Vtb_sys__ConstPool__TABLE_hce1a8acc_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtb_sys__ConstPool__TABLE_h3b57699f_0;

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSelfRef.bank_pp1_ready) {
            if (vlSelfRef.__PVT__pp0_err) {
                vlSelfRef.pp1_err = 1U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = 0U;
                vlSelfRef.pp1_rdata[1U] = 0U;
                vlSelfRef.pp1_rdata[2U] = 0U;
                vlSelfRef.pp1_rdata[3U] = 0U;
            } else {
                vlSelfRef.pp1_err = 0U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][0U];
                vlSelfRef.pp1_rdata[1U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][1U];
                vlSelfRef.pp1_rdata[2U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][2U];
                vlSelfRef.pp1_rdata[3U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][3U];
            }
            vlSelfRef.pp1_id = vlSelfRef.__PVT__pp0_id;
            vlSelfRef.pp1_valid = vlSelfRef.__PVT__pp0_valid;
        }
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_strobe = (0x0000ffffU 
                                           & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[0U] 
                                              >> 7U));
            vlSelfRef.__PVT__pp0_we = (1U & vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[0U]);
            vlSelfRef.__PVT__pp0_err = 0U;
            vlSelfRef.__PVT__pp0_id = (((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                        << 6U) | (0x0000003fU 
                                                  & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[0U] 
                                                     >> 1U)));
            vlSelfRef.__PVT__pp0_valid = Vtb_sys__ConstPool__TABLE_h3b57699f_0
                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant];
        }
    } else {
        vlSelfRef.pp1_valid = 0U;
        vlSelfRef.__PVT__pp0_valid = 0U;
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bank_pp1_ready = (1U & ((~ (IData)(vlSelfRef.pp1_valid)) 
                                      | (IData)(vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted)));
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sram_we = ((IData)(vlSelfRef.__PVT__pp0_valid) 
                         & ((~ (IData)(vlSelfRef.__PVT__pp0_err)) 
                            & (IData)(vlSelfRef.__PVT__pp0_we)));
    vlSelfRef.sram_bwe = (((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                              >> 0x0000000cU) 
                                             & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                << 2U))) 
                             | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                       >> 0x0000000cU) 
                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                            << 0x0000000cU) | (((0x0000000cU 
                                                 & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                     >> 8U) 
                                                    & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                       << 2U))) 
                                                | (3U 
                                                   & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                       >> 8U) 
                                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                                               << 8U)) 
                          | ((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                >> 4U) 
                                               & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                  << 2U))) 
                               | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                         >> 4U) & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                              << 4U) | ((0x0000000cU 
                                         & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                            & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                               << 2U))) 
                                        | (3U & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                 & (- (IData)((IData)(vlSelfRef.sram_we))))))));
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_data[0U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[1U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[0U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[1U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[2U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[1U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[2U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[3U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[2U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[3U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[4U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[3U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_addr = (0x000001ffU 
                                         & ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[5U] 
                                             << 6U) 
                                            | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[4U] 
                                               >> 0x0000001aU)));
        }
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSelfRef.bank_pp1_ready) {
            if (vlSelfRef.__PVT__pp0_err) {
                vlSelfRef.pp1_err = 1U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = 0U;
                vlSelfRef.pp1_rdata[1U] = 0U;
                vlSelfRef.pp1_rdata[2U] = 0U;
                vlSelfRef.pp1_rdata[3U] = 0U;
            } else {
                vlSelfRef.pp1_err = 0U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][0U];
                vlSelfRef.pp1_rdata[1U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][1U];
                vlSelfRef.pp1_rdata[2U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][2U];
                vlSelfRef.pp1_rdata[3U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][3U];
            }
            vlSelfRef.pp1_id = vlSelfRef.__PVT__pp0_id;
            vlSelfRef.pp1_valid = vlSelfRef.__PVT__pp0_valid;
        }
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_strobe = (0x0000ffffU 
                                           & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[0U] 
                                              >> 7U));
            vlSelfRef.__PVT__pp0_we = (1U & vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[0U]);
            vlSelfRef.__PVT__pp0_err = 0U;
            vlSelfRef.__PVT__pp0_id = (((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                        << 6U) | (0x0000003fU 
                                                  & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[0U] 
                                                     >> 1U)));
            vlSelfRef.__PVT__pp0_valid = Vtb_sys__ConstPool__TABLE_h3b57699f_0
                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant];
        }
    } else {
        vlSelfRef.pp1_valid = 0U;
        vlSelfRef.__PVT__pp0_valid = 0U;
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bank_pp1_ready = (1U & ((~ (IData)(vlSelfRef.pp1_valid)) 
                                      | ((IData)(vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted) 
                                         >> 1U)));
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sram_we = ((IData)(vlSelfRef.__PVT__pp0_valid) 
                         & ((~ (IData)(vlSelfRef.__PVT__pp0_err)) 
                            & (IData)(vlSelfRef.__PVT__pp0_we)));
    vlSelfRef.sram_bwe = (((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                              >> 0x0000000cU) 
                                             & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                << 2U))) 
                             | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                       >> 0x0000000cU) 
                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                            << 0x0000000cU) | (((0x0000000cU 
                                                 & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                     >> 8U) 
                                                    & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                       << 2U))) 
                                                | (3U 
                                                   & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                       >> 8U) 
                                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                                               << 8U)) 
                          | ((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                >> 4U) 
                                               & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                  << 2U))) 
                               | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                         >> 4U) & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                              << 4U) | ((0x0000000cU 
                                         & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                            & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                               << 2U))) 
                                        | (3U & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                 & (- (IData)((IData)(vlSelfRef.sram_we))))))));
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_data[0U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[1U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[0U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[1U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[2U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[1U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[2U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[3U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[2U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[3U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[4U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[3U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_addr = (0x000001ffU 
                                         & ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[5U] 
                                             << 6U) 
                                            | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[4U] 
                                               >> 0x0000001aU)));
        }
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSelfRef.bank_pp1_ready) {
            if (vlSelfRef.__PVT__pp0_err) {
                vlSelfRef.pp1_err = 1U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = 0U;
                vlSelfRef.pp1_rdata[1U] = 0U;
                vlSelfRef.pp1_rdata[2U] = 0U;
                vlSelfRef.pp1_rdata[3U] = 0U;
            } else {
                vlSelfRef.pp1_err = 0U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][0U];
                vlSelfRef.pp1_rdata[1U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][1U];
                vlSelfRef.pp1_rdata[2U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][2U];
                vlSelfRef.pp1_rdata[3U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][3U];
            }
            vlSelfRef.pp1_id = vlSelfRef.__PVT__pp0_id;
            vlSelfRef.pp1_valid = vlSelfRef.__PVT__pp0_valid;
        }
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_strobe = (0x0000ffffU 
                                           & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[0U] 
                                              >> 7U));
            vlSelfRef.__PVT__pp0_we = (1U & vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[0U]);
            vlSelfRef.__PVT__pp0_err = 0U;
            vlSelfRef.__PVT__pp0_id = (((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                        << 6U) | (0x0000003fU 
                                                  & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[0U] 
                                                     >> 1U)));
            vlSelfRef.__PVT__pp0_valid = Vtb_sys__ConstPool__TABLE_h3b57699f_0
                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant];
        }
    } else {
        vlSelfRef.pp1_valid = 0U;
        vlSelfRef.__PVT__pp0_valid = 0U;
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bank_pp1_ready = (1U & ((~ (IData)(vlSelfRef.pp1_valid)) 
                                      | ((IData)(vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted) 
                                         >> 2U)));
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sram_we = ((IData)(vlSelfRef.__PVT__pp0_valid) 
                         & ((~ (IData)(vlSelfRef.__PVT__pp0_err)) 
                            & (IData)(vlSelfRef.__PVT__pp0_we)));
    vlSelfRef.sram_bwe = (((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                              >> 0x0000000cU) 
                                             & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                << 2U))) 
                             | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                       >> 0x0000000cU) 
                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                            << 0x0000000cU) | (((0x0000000cU 
                                                 & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                     >> 8U) 
                                                    & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                       << 2U))) 
                                                | (3U 
                                                   & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                       >> 8U) 
                                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                                               << 8U)) 
                          | ((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                >> 4U) 
                                               & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                  << 2U))) 
                               | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                         >> 4U) & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                              << 4U) | ((0x0000000cU 
                                         & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                            & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                               << 2U))) 
                                        | (3U & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                 & (- (IData)((IData)(vlSelfRef.sram_we))))))));
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_data[0U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[1U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[0U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[1U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[2U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[1U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[2U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[3U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[2U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[3U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[4U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[3U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_addr = (0x000001ffU 
                                         & ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[5U] 
                                             << 6U) 
                                            | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[4U] 
                                               >> 0x0000001aU)));
        }
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSelfRef.bank_pp1_ready) {
            if (vlSelfRef.__PVT__pp0_err) {
                vlSelfRef.pp1_err = 1U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = 0U;
                vlSelfRef.pp1_rdata[1U] = 0U;
                vlSelfRef.pp1_rdata[2U] = 0U;
                vlSelfRef.pp1_rdata[3U] = 0U;
            } else {
                vlSelfRef.pp1_err = 0U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][0U];
                vlSelfRef.pp1_rdata[1U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][1U];
                vlSelfRef.pp1_rdata[2U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][2U];
                vlSelfRef.pp1_rdata[3U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][3U];
            }
            vlSelfRef.pp1_id = vlSelfRef.__PVT__pp0_id;
            vlSelfRef.pp1_valid = vlSelfRef.__PVT__pp0_valid;
        }
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_strobe = (0x0000ffffU 
                                           & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[0U] 
                                              >> 7U));
            vlSelfRef.__PVT__pp0_we = (1U & vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[0U]);
            vlSelfRef.__PVT__pp0_err = 0U;
            vlSelfRef.__PVT__pp0_id = (((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                        << 6U) | (0x0000003fU 
                                                  & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[0U] 
                                                     >> 1U)));
            vlSelfRef.__PVT__pp0_valid = Vtb_sys__ConstPool__TABLE_h3b57699f_0
                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant];
        }
    } else {
        vlSelfRef.pp1_valid = 0U;
        vlSelfRef.__PVT__pp0_valid = 0U;
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bank_pp1_ready = (1U & ((~ (IData)(vlSelfRef.pp1_valid)) 
                                      | ((IData)(vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted) 
                                         >> 3U)));
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sram_we = ((IData)(vlSelfRef.__PVT__pp0_valid) 
                         & ((~ (IData)(vlSelfRef.__PVT__pp0_err)) 
                            & (IData)(vlSelfRef.__PVT__pp0_we)));
    vlSelfRef.sram_bwe = (((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                              >> 0x0000000cU) 
                                             & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                << 2U))) 
                             | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                       >> 0x0000000cU) 
                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                            << 0x0000000cU) | (((0x0000000cU 
                                                 & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                     >> 8U) 
                                                    & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                       << 2U))) 
                                                | (3U 
                                                   & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                       >> 8U) 
                                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                                               << 8U)) 
                          | ((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                >> 4U) 
                                               & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                  << 2U))) 
                               | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                         >> 4U) & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                              << 4U) | ((0x0000000cU 
                                         & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                            & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                               << 2U))) 
                                        | (3U & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                 & (- (IData)((IData)(vlSelfRef.sram_we))))))));
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_data[0U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[1U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[0U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[1U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[2U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[1U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[2U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[3U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[2U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[3U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[4U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[3U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_addr = (0x000001ffU 
                                         & ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[5U] 
                                             << 6U) 
                                            | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[4U] 
                                               >> 0x0000001aU)));
        }
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSelfRef.bank_pp1_ready) {
            if (vlSelfRef.__PVT__pp0_err) {
                vlSelfRef.pp1_err = 1U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = 0U;
                vlSelfRef.pp1_rdata[1U] = 0U;
                vlSelfRef.pp1_rdata[2U] = 0U;
                vlSelfRef.pp1_rdata[3U] = 0U;
            } else {
                vlSelfRef.pp1_err = 0U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][0U];
                vlSelfRef.pp1_rdata[1U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][1U];
                vlSelfRef.pp1_rdata[2U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][2U];
                vlSelfRef.pp1_rdata[3U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][3U];
            }
            vlSelfRef.pp1_id = vlSelfRef.__PVT__pp0_id;
            vlSelfRef.pp1_valid = vlSelfRef.__PVT__pp0_valid;
        }
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_strobe = (0x0000ffffU 
                                           & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[0U] 
                                              >> 7U));
            vlSelfRef.__PVT__pp0_we = (1U & vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[0U]);
            vlSelfRef.__PVT__pp0_err = 0U;
            vlSelfRef.__PVT__pp0_id = (((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                        << 6U) | (0x0000003fU 
                                                  & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[0U] 
                                                     >> 1U)));
            vlSelfRef.__PVT__pp0_valid = Vtb_sys__ConstPool__TABLE_h3b57699f_0
                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant];
        }
    } else {
        vlSelfRef.pp1_valid = 0U;
        vlSelfRef.__PVT__pp0_valid = 0U;
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bank_pp1_ready = (1U & ((~ (IData)(vlSelfRef.pp1_valid)) 
                                      | ((IData)(vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted) 
                                         >> 4U)));
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sram_we = ((IData)(vlSelfRef.__PVT__pp0_valid) 
                         & ((~ (IData)(vlSelfRef.__PVT__pp0_err)) 
                            & (IData)(vlSelfRef.__PVT__pp0_we)));
    vlSelfRef.sram_bwe = (((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                              >> 0x0000000cU) 
                                             & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                << 2U))) 
                             | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                       >> 0x0000000cU) 
                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                            << 0x0000000cU) | (((0x0000000cU 
                                                 & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                     >> 8U) 
                                                    & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                       << 2U))) 
                                                | (3U 
                                                   & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                       >> 8U) 
                                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                                               << 8U)) 
                          | ((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                >> 4U) 
                                               & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                  << 2U))) 
                               | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                         >> 4U) & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                              << 4U) | ((0x0000000cU 
                                         & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                            & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                               << 2U))) 
                                        | (3U & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                 & (- (IData)((IData)(vlSelfRef.sram_we))))))));
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_data[0U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[1U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[0U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[1U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[2U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[1U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[2U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[3U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[2U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[3U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[4U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[3U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_addr = (0x000001ffU 
                                         & ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[5U] 
                                             << 6U) 
                                            | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[4U] 
                                               >> 0x0000001aU)));
        }
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSelfRef.bank_pp1_ready) {
            if (vlSelfRef.__PVT__pp0_err) {
                vlSelfRef.pp1_err = 1U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = 0U;
                vlSelfRef.pp1_rdata[1U] = 0U;
                vlSelfRef.pp1_rdata[2U] = 0U;
                vlSelfRef.pp1_rdata[3U] = 0U;
            } else {
                vlSelfRef.pp1_err = 0U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][0U];
                vlSelfRef.pp1_rdata[1U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][1U];
                vlSelfRef.pp1_rdata[2U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][2U];
                vlSelfRef.pp1_rdata[3U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][3U];
            }
            vlSelfRef.pp1_id = vlSelfRef.__PVT__pp0_id;
            vlSelfRef.pp1_valid = vlSelfRef.__PVT__pp0_valid;
        }
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_strobe = (0x0000ffffU 
                                           & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[0U] 
                                              >> 7U));
            vlSelfRef.__PVT__pp0_we = (1U & vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[0U]);
            vlSelfRef.__PVT__pp0_err = 0U;
            vlSelfRef.__PVT__pp0_id = (((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                        << 6U) | (0x0000003fU 
                                                  & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[0U] 
                                                     >> 1U)));
            vlSelfRef.__PVT__pp0_valid = Vtb_sys__ConstPool__TABLE_h3b57699f_0
                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant];
        }
    } else {
        vlSelfRef.pp1_valid = 0U;
        vlSelfRef.__PVT__pp0_valid = 0U;
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bank_pp1_ready = (1U & ((~ (IData)(vlSelfRef.pp1_valid)) 
                                      | ((IData)(vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted) 
                                         >> 5U)));
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sram_we = ((IData)(vlSelfRef.__PVT__pp0_valid) 
                         & ((~ (IData)(vlSelfRef.__PVT__pp0_err)) 
                            & (IData)(vlSelfRef.__PVT__pp0_we)));
    vlSelfRef.sram_bwe = (((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                              >> 0x0000000cU) 
                                             & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                << 2U))) 
                             | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                       >> 0x0000000cU) 
                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                            << 0x0000000cU) | (((0x0000000cU 
                                                 & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                     >> 8U) 
                                                    & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                       << 2U))) 
                                                | (3U 
                                                   & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                       >> 8U) 
                                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                                               << 8U)) 
                          | ((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                >> 4U) 
                                               & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                  << 2U))) 
                               | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                         >> 4U) & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                              << 4U) | ((0x0000000cU 
                                         & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                            & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                               << 2U))) 
                                        | (3U & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                 & (- (IData)((IData)(vlSelfRef.sram_we))))))));
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_data[0U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[1U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[0U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[1U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[2U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[1U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[2U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[3U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[2U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[3U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[4U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[3U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_addr = (0x000001ffU 
                                         & ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[5U] 
                                             << 6U) 
                                            | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[4U] 
                                               >> 0x0000001aU)));
        }
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSelfRef.bank_pp1_ready) {
            if (vlSelfRef.__PVT__pp0_err) {
                vlSelfRef.pp1_err = 1U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = 0U;
                vlSelfRef.pp1_rdata[1U] = 0U;
                vlSelfRef.pp1_rdata[2U] = 0U;
                vlSelfRef.pp1_rdata[3U] = 0U;
            } else {
                vlSelfRef.pp1_err = 0U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][0U];
                vlSelfRef.pp1_rdata[1U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][1U];
                vlSelfRef.pp1_rdata[2U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][2U];
                vlSelfRef.pp1_rdata[3U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][3U];
            }
            vlSelfRef.pp1_id = vlSelfRef.__PVT__pp0_id;
            vlSelfRef.pp1_valid = vlSelfRef.__PVT__pp0_valid;
        }
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_strobe = (0x0000ffffU 
                                           & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[0U] 
                                              >> 7U));
            vlSelfRef.__PVT__pp0_we = (1U & vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[0U]);
            vlSelfRef.__PVT__pp0_err = 0U;
            vlSelfRef.__PVT__pp0_id = (((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                        << 6U) | (0x0000003fU 
                                                  & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[0U] 
                                                     >> 1U)));
            vlSelfRef.__PVT__pp0_valid = Vtb_sys__ConstPool__TABLE_h3b57699f_0
                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant];
        }
    } else {
        vlSelfRef.pp1_valid = 0U;
        vlSelfRef.__PVT__pp0_valid = 0U;
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bank_pp1_ready = (1U & ((~ (IData)(vlSelfRef.pp1_valid)) 
                                      | ((IData)(vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted) 
                                         >> 6U)));
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sram_we = ((IData)(vlSelfRef.__PVT__pp0_valid) 
                         & ((~ (IData)(vlSelfRef.__PVT__pp0_err)) 
                            & (IData)(vlSelfRef.__PVT__pp0_we)));
    vlSelfRef.sram_bwe = (((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                              >> 0x0000000cU) 
                                             & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                << 2U))) 
                             | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                       >> 0x0000000cU) 
                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                            << 0x0000000cU) | (((0x0000000cU 
                                                 & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                     >> 8U) 
                                                    & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                       << 2U))) 
                                                | (3U 
                                                   & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                       >> 8U) 
                                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                                               << 8U)) 
                          | ((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                >> 4U) 
                                               & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                  << 2U))) 
                               | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                         >> 4U) & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                              << 4U) | ((0x0000000cU 
                                         & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                            & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                               << 2U))) 
                                        | (3U & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                 & (- (IData)((IData)(vlSelfRef.sram_we))))))));
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_data[0U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[1U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[0U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[1U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[2U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[1U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[2U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[3U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[2U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[3U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[4U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[3U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_addr = (0x000001ffU 
                                         & ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[5U] 
                                             << 6U) 
                                            | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[4U] 
                                               >> 0x0000001aU)));
        }
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSelfRef.bank_pp1_ready) {
            if (vlSelfRef.__PVT__pp0_err) {
                vlSelfRef.pp1_err = 1U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = 0U;
                vlSelfRef.pp1_rdata[1U] = 0U;
                vlSelfRef.pp1_rdata[2U] = 0U;
                vlSelfRef.pp1_rdata[3U] = 0U;
            } else {
                vlSelfRef.pp1_err = 0U;
                vlSelfRef.pp1_we = vlSelfRef.__PVT__pp0_we;
                vlSelfRef.pp1_rdata[0U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][0U];
                vlSelfRef.pp1_rdata[1U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][1U];
                vlSelfRef.pp1_rdata[2U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][2U];
                vlSelfRef.pp1_rdata[3U] = vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                    [vlSelfRef.__PVT__pp0_addr][3U];
            }
            vlSelfRef.pp1_id = vlSelfRef.__PVT__pp0_id;
            vlSelfRef.pp1_valid = vlSelfRef.__PVT__pp0_valid;
        }
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_strobe = (0x0000ffffU 
                                           & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[0U] 
                                              >> 7U));
            vlSelfRef.__PVT__pp0_we = (1U & vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[0U]);
            vlSelfRef.__PVT__pp0_err = 0U;
            vlSelfRef.__PVT__pp0_id = (((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                        << 6U) | (0x0000003fU 
                                                  & (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[0U] 
                                                     >> 1U)));
            vlSelfRef.__PVT__pp0_valid = Vtb_sys__ConstPool__TABLE_h3b57699f_0
                [vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant];
        }
    } else {
        vlSelfRef.pp1_valid = 0U;
        vlSelfRef.__PVT__pp0_valid = 0U;
    }
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bank_pp1_ready = (1U & ((~ (IData)(vlSelfRef.pp1_valid)) 
                                      | ((IData)(vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted) 
                                         >> 7U)));
}

void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sram_we = ((IData)(vlSelfRef.__PVT__pp0_valid) 
                         & ((~ (IData)(vlSelfRef.__PVT__pp0_err)) 
                            & (IData)(vlSelfRef.__PVT__pp0_we)));
    vlSelfRef.sram_bwe = (((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                              >> 0x0000000cU) 
                                             & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                << 2U))) 
                             | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                       >> 0x0000000cU) 
                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                            << 0x0000000cU) | (((0x0000000cU 
                                                 & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                     >> 8U) 
                                                    & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                       << 2U))) 
                                                | (3U 
                                                   & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                       >> 8U) 
                                                      & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                                               << 8U)) 
                          | ((((0x0000000cU & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                >> 4U) 
                                               & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                                  << 2U))) 
                               | (3U & (((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                         >> 4U) & (- (IData)((IData)(vlSelfRef.sram_we)))))) 
                              << 4U) | ((0x0000000cU 
                                         & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                            & ((- (IData)((IData)(vlSelfRef.sram_we))) 
                                               << 2U))) 
                                        | (3U & ((IData)(vlSelfRef.__PVT__pp0_strobe) 
                                                 & (- (IData)((IData)(vlSelfRef.sram_we))))))));
    if (vlSymsp->TOP.tb_sys__DOT__rst_n) {
        if (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant_ready) {
            vlSelfRef.__PVT__pp0_data[0U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[1U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[0U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[1U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[2U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[1U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[2U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[3U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[2U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_data[3U] = ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[4U] 
                                              << 9U) 
                                             | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[3U] 
                                                >> 0x00000017U));
            vlSelfRef.__PVT__pp0_addr = (0x000001ffU 
                                         & ((vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[5U] 
                                             << 6U) 
                                            | (vlSymsp->TOP.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[4U] 
                                               >> 0x0000001aU)));
        }
    }
}
