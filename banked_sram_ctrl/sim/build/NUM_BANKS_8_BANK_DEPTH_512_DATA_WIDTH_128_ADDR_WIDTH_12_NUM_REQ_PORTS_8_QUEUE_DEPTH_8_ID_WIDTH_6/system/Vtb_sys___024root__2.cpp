// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sys.h for the primary calling header

#include "Vtb_sys__pch.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vtb_sys__ConstPool__TABLE_h3b57699f_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtb_sys__ConstPool__TABLE_hce1a8acc_0;

void Vtb_sys___024root___nba_sequent__TOP__3(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___nba_sequent__TOP__3\n"); );
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
    VlWide<6>/*191:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_12;
    VlWide<6>/*191:0*/ __Vtemp_14;
    VlWide<6>/*191:0*/ __Vtemp_16;
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
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23))) {
        __VExpandSel_WordIdx_1 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                  >> 5U);
        __VExpandSel_LoShift_1 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23));
        __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
        if (__VExpandSel_Aligned_1) {
            __VExpandSel_HiShift_1 = 0U;
            __VExpandSel_HiMask_1 = 0U;
        } else {
            __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_1);
            __VExpandSel_HiMask_1 = 0xffffffffU;
        }
        __Vtemp_2[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [__VExpandSel_WordIdx_1] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_2[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_1)
                             ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(6U) + __VExpandSel_WordIdx_1)]) 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
    } else {
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        __Vtemp_2[4U] = 0U;
        __Vtemp_2[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[4U] 
        = __Vtemp_2[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_2[5U]);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler.bank_pp1_ready)));
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22))) {
        __VExpandSel_WordIdx_2 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22) 
                                  >> 5U);
        __VExpandSel_LoShift_2 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22));
        __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
        if (__VExpandSel_Aligned_2) {
            __VExpandSel_HiShift_2 = 0U;
            __VExpandSel_HiMask_2 = 0U;
        } else {
            __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_2);
            __VExpandSel_HiMask_2 = 0xffffffffU;
        }
        __Vtemp_4[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [__VExpandSel_WordIdx_2] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_4[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_4[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_4[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_4[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_4[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_2)
                             ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(6U) + __VExpandSel_WordIdx_2)]) 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
    } else {
        __Vtemp_4[0U] = 0U;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = 0U;
        __Vtemp_4[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[3U] 
        = __Vtemp_4[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[4U] 
        = __Vtemp_4[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_4[5U]);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler.bank_pp1_ready)));
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21))) {
        __VExpandSel_WordIdx_3 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
                                  >> 5U);
        __VExpandSel_LoShift_3 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21));
        __VExpandSel_Aligned_3 = (0U == __VExpandSel_LoShift_3);
        if (__VExpandSel_Aligned_3) {
            __VExpandSel_HiShift_3 = 0U;
            __VExpandSel_HiMask_3 = 0U;
        } else {
            __VExpandSel_HiShift_3 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_3);
            __VExpandSel_HiMask_3 = 0xffffffffU;
        }
        __Vtemp_6[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(1U) + __VExpandSel_WordIdx_3)] 
                           << __VExpandSel_HiShift_3) 
                          & __VExpandSel_HiMask_3) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [__VExpandSel_WordIdx_3] 
                            >> __VExpandSel_LoShift_3));
        __Vtemp_6[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(2U) + __VExpandSel_WordIdx_3)] 
                           << __VExpandSel_HiShift_3) 
                          & __VExpandSel_HiMask_3) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_3)] 
                            >> __VExpandSel_LoShift_3));
        __Vtemp_6[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(3U) + __VExpandSel_WordIdx_3)] 
                           << __VExpandSel_HiShift_3) 
                          & __VExpandSel_HiMask_3) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_3)] 
                            >> __VExpandSel_LoShift_3));
        __Vtemp_6[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(4U) + __VExpandSel_WordIdx_3)] 
                           << __VExpandSel_HiShift_3) 
                          & __VExpandSel_HiMask_3) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_3)] 
                            >> __VExpandSel_LoShift_3));
        __Vtemp_6[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(5U) + __VExpandSel_WordIdx_3)] 
                           << __VExpandSel_HiShift_3) 
                          & __VExpandSel_HiMask_3) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_3)] 
                            >> __VExpandSel_LoShift_3));
        __Vtemp_6[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_3)
                             ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(6U) + __VExpandSel_WordIdx_3)]) 
                           << __VExpandSel_HiShift_3) 
                          & __VExpandSel_HiMask_3) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_3)] 
                            >> __VExpandSel_LoShift_3));
    } else {
        __Vtemp_6[0U] = 0U;
        __Vtemp_6[1U] = 0U;
        __Vtemp_6[2U] = 0U;
        __Vtemp_6[3U] = 0U;
        __Vtemp_6[4U] = 0U;
        __Vtemp_6[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[2U] 
        = __Vtemp_6[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[3U] 
        = __Vtemp_6[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[4U] 
        = __Vtemp_6[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_6[5U]);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler.bank_pp1_ready)));
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20))) {
        __VExpandSel_WordIdx_4 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                  >> 5U);
        __VExpandSel_LoShift_4 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20));
        __VExpandSel_Aligned_4 = (0U == __VExpandSel_LoShift_4);
        if (__VExpandSel_Aligned_4) {
            __VExpandSel_HiShift_4 = 0U;
            __VExpandSel_HiMask_4 = 0U;
        } else {
            __VExpandSel_HiShift_4 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_4);
            __VExpandSel_HiMask_4 = 0xffffffffU;
        }
        __Vtemp_8[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(1U) + __VExpandSel_WordIdx_4)] 
                           << __VExpandSel_HiShift_4) 
                          & __VExpandSel_HiMask_4) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [__VExpandSel_WordIdx_4] 
                            >> __VExpandSel_LoShift_4));
        __Vtemp_8[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(2U) + __VExpandSel_WordIdx_4)] 
                           << __VExpandSel_HiShift_4) 
                          & __VExpandSel_HiMask_4) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_4)] 
                            >> __VExpandSel_LoShift_4));
        __Vtemp_8[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(3U) + __VExpandSel_WordIdx_4)] 
                           << __VExpandSel_HiShift_4) 
                          & __VExpandSel_HiMask_4) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_4)] 
                            >> __VExpandSel_LoShift_4));
        __Vtemp_8[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(4U) + __VExpandSel_WordIdx_4)] 
                           << __VExpandSel_HiShift_4) 
                          & __VExpandSel_HiMask_4) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_4)] 
                            >> __VExpandSel_LoShift_4));
        __Vtemp_8[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                           [((IData)(5U) + __VExpandSel_WordIdx_4)] 
                           << __VExpandSel_HiShift_4) 
                          & __VExpandSel_HiMask_4) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_4)] 
                            >> __VExpandSel_LoShift_4));
        __Vtemp_8[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_4)
                             ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(6U) + __VExpandSel_WordIdx_4)]) 
                           << __VExpandSel_HiShift_4) 
                          & __VExpandSel_HiMask_4) 
                         | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_4)] 
                            >> __VExpandSel_LoShift_4));
    } else {
        __Vtemp_8[0U] = 0U;
        __Vtemp_8[1U] = 0U;
        __Vtemp_8[2U] = 0U;
        __Vtemp_8[3U] = 0U;
        __Vtemp_8[4U] = 0U;
        __Vtemp_8[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[0U] 
        = __Vtemp_8[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[2U] 
        = __Vtemp_8[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[3U] 
        = __Vtemp_8[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[4U] 
        = __Vtemp_8[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_8[5U]);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler.bank_pp1_ready)));
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))) {
        __VExpandSel_WordIdx_5 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
                                  >> 5U);
        __VExpandSel_LoShift_5 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19));
        __VExpandSel_Aligned_5 = (0U == __VExpandSel_LoShift_5);
        if (__VExpandSel_Aligned_5) {
            __VExpandSel_HiShift_5 = 0U;
            __VExpandSel_HiMask_5 = 0U;
        } else {
            __VExpandSel_HiShift_5 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_5);
            __VExpandSel_HiMask_5 = 0xffffffffU;
        }
        __Vtemp_10[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_5] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_10[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_10[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_10[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_10[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_5)] 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
        __Vtemp_10[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_5)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_5)]) 
                            << __VExpandSel_HiShift_5) 
                           & __VExpandSel_HiMask_5) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_5)] 
                             >> __VExpandSel_LoShift_5));
    } else {
        __Vtemp_10[0U] = 0U;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_10[4U] = 0U;
        __Vtemp_10[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[0U] 
        = __Vtemp_10[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[1U] 
        = __Vtemp_10[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[2U] 
        = __Vtemp_10[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[3U] 
        = __Vtemp_10[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[4U] 
        = __Vtemp_10[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_10[5U]);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler.bank_pp1_ready)));
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18))) {
        __VExpandSel_WordIdx_6 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18) 
                                  >> 5U);
        __VExpandSel_LoShift_6 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18));
        __VExpandSel_Aligned_6 = (0U == __VExpandSel_LoShift_6);
        if (__VExpandSel_Aligned_6) {
            __VExpandSel_HiShift_6 = 0U;
            __VExpandSel_HiMask_6 = 0U;
        } else {
            __VExpandSel_HiShift_6 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_6);
            __VExpandSel_HiMask_6 = 0xffffffffU;
        }
        __Vtemp_12[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_6)] 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_6] 
                             >> __VExpandSel_LoShift_6));
        __Vtemp_12[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_6)] 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_6)] 
                             >> __VExpandSel_LoShift_6));
        __Vtemp_12[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_6)] 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_6)] 
                             >> __VExpandSel_LoShift_6));
        __Vtemp_12[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_6)] 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_6)] 
                             >> __VExpandSel_LoShift_6));
        __Vtemp_12[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_6)] 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_6)] 
                             >> __VExpandSel_LoShift_6));
        __Vtemp_12[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_6)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_6)]) 
                            << __VExpandSel_HiShift_6) 
                           & __VExpandSel_HiMask_6) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_6)] 
                             >> __VExpandSel_LoShift_6));
    } else {
        __Vtemp_12[0U] = 0U;
        __Vtemp_12[1U] = 0U;
        __Vtemp_12[2U] = 0U;
        __Vtemp_12[3U] = 0U;
        __Vtemp_12[4U] = 0U;
        __Vtemp_12[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[0U] 
        = __Vtemp_12[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[1U] 
        = __Vtemp_12[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[2U] 
        = __Vtemp_12[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[3U] 
        = __Vtemp_12[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[4U] 
        = __Vtemp_12[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_12[5U]);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler.bank_pp1_ready)));
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17))) {
        __VExpandSel_WordIdx_7 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                  >> 5U);
        __VExpandSel_LoShift_7 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17));
        __VExpandSel_Aligned_7 = (0U == __VExpandSel_LoShift_7);
        if (__VExpandSel_Aligned_7) {
            __VExpandSel_HiShift_7 = 0U;
            __VExpandSel_HiMask_7 = 0U;
        } else {
            __VExpandSel_HiShift_7 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_7);
            __VExpandSel_HiMask_7 = 0xffffffffU;
        }
        __Vtemp_14[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_7] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_14[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_14[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_14[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_14[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_7)] 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
        __Vtemp_14[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_7)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_7)]) 
                            << __VExpandSel_HiShift_7) 
                           & __VExpandSel_HiMask_7) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_7)] 
                             >> __VExpandSel_LoShift_7));
    } else {
        __Vtemp_14[0U] = 0U;
        __Vtemp_14[1U] = 0U;
        __Vtemp_14[2U] = 0U;
        __Vtemp_14[3U] = 0U;
        __Vtemp_14[4U] = 0U;
        __Vtemp_14[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[0U] 
        = __Vtemp_14[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[1U] 
        = __Vtemp_14[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[2U] 
        = __Vtemp_14[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[3U] 
        = __Vtemp_14[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[4U] 
        = __Vtemp_14[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_14[5U]);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler.bank_pp1_ready)));
    if ((0x0517U >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16))) {
        __VExpandSel_WordIdx_8 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                  >> 5U);
        __VExpandSel_LoShift_8 = (0x0000001fU & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16));
        __VExpandSel_Aligned_8 = (0U == __VExpandSel_LoShift_8);
        if (__VExpandSel_Aligned_8) {
            __VExpandSel_HiShift_8 = 0U;
            __VExpandSel_HiMask_8 = 0U;
        } else {
            __VExpandSel_HiShift_8 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_8);
            __VExpandSel_HiMask_8 = 0xffffffffU;
        }
        __Vtemp_16[0U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(1U) + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [__VExpandSel_WordIdx_8] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_16[1U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(2U) + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(1U) + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_16[2U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(3U) + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(2U) + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_16[3U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(4U) + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(3U) + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_16[4U] = (((vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                            [((IData)(5U) + __VExpandSel_WordIdx_8)] 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(4U) + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
        __Vtemp_16[5U] = (((((0x00000023U <= __VExpandSel_WordIdx_8)
                              ? 0U : vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(6U) + __VExpandSel_WordIdx_8)]) 
                            << __VExpandSel_HiShift_8) 
                           & __VExpandSel_HiMask_8) 
                          | (vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt
                             [((IData)(5U) + __VExpandSel_WordIdx_8)] 
                             >> __VExpandSel_LoShift_8));
    } else {
        __Vtemp_16[0U] = 0U;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        __Vtemp_16[5U] = 0U;
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[0U] 
        = __Vtemp_16[0U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[1U] 
        = __Vtemp_16[1U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[2U] 
        = __Vtemp_16[2U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[3U] 
        = __Vtemp_16[3U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[4U] 
        = __Vtemp_16[4U];
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[5U] 
        = (7U & __Vtemp_16[5U]);
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.__PVT__pp0_valid)) 
                 | (IData)(vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler.bank_pp1_ready)));
    __VdfgRegularize_hebeb780c_0_7 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_6 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_5 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_4 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_3 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_2 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_1 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready));
    __VdfgRegularize_hebeb780c_0_0 = (Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant] 
                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready));
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
}

void Vtb_sys___024root___nba_comb__TOP__1(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___nba_comb__TOP__1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vtb_sys___024root___timing_ready(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___timing_ready\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc982ec79__0.ready("@(posedge tb_sys.clk)");
    }
}

void Vtb_sys___024root___timing_resume(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___timing_resume\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc982ec79__0.moveToResumeQueue(
                                                          "@(posedge tb_sys.clk)");
    vlSelfRef.__VtrigSched_hc982ec79__0.resume("@(posedge tb_sys.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sys___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_sys___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_sys___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_sys___024root___act_comb__TOP__0(Vtb_sys___024root* vlSelf);

bool Vtb_sys___024root___eval_phase__act(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_phase__act\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((~ (IData)(vlSelfRef.tb_sys__DOT__rst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__rst_n__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_sys__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__clk__0 
            = vlSelfRef.tb_sys__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__rst_n__0 
            = vlSelfRef.tb_sys__DOT__rst_n;
    }
    Vtb_sys___024root___timing_ready(vlSelf);
    Vtb_sys___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sys___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_sys___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_sys___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_sys___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_act
            if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_sys___024root___act_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_sys___024root___eval_phase__inact(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_phase__inact\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_sys___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_sys___024root___nba_sequent__TOP__0(Vtb_sys___024root* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys___024root___nba_sequent__TOP__1(Vtb_sys___024root* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__1(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys___024root___nba_sequent__TOP__2(Vtb_sys___024root* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf);
void Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__2(Vtb_sys_bank_scheduler__pi2* vlSelf);

bool Vtb_sys___024root___eval_phase__nba(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_phase__nba\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_sys___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__0((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler));
                Vtb_sys___024root___nba_sequent__TOP__1(vlSelf);
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__1((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler));
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys___024root___nba_sequent__TOP__2(vlSelf);
                vlSelfRef.__Vm_traceActivity[5U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_comb__TOP__0
                    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue 
                        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                           & ((((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                  << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                            << 2U)) 
                                | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                    << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                               << 4U) | ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                           << 3U) | 
                                          ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                           << 2U)) 
                                         | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                             << 1U) 
                                            | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))));
                    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept 
                        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready));
                }
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__2((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler));
                vlSelfRef.__Vm_traceActivity[6U] = 1U;
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__2((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__2((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__2((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__2((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__2((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__2((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler));
                Vtb_sys_bank_scheduler__pi2___nba_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__2((&vlSymsp->TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler));
                Vtb_sys___024root___nba_sequent__TOP__3(vlSelf);
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys___024root___nba_comb__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[7U] = 1U;
            }
        }
        Vtb_sys___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_sys___024root___eval(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sys___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_sys___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/Users/vedantnadgir/Desktop/Mem_Subsystem_RTL/banked_sram_ctrl/sim/../verif/system/tb_sys.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_sys___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_sys___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_sys___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_sys___024root____VbeforeTrig_hc982ec79__0(Vtb_sys___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root____VbeforeTrig_hc982ec79__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_sys__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sys__DOT__clk__0 
        = vlSelfRef.tb_sys__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc982ec79__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_sys___024root___eval_debug_assertions(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___eval_debug_assertions\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
