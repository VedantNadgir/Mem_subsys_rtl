// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sys.h for the primary calling header

#include "Vtb_sys__pch.h"

void Vtb_sys___024root___nba_sequent__TOP__2(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___nba_sequent__TOP__2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v4) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v5) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v6) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v7) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v4) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v5) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v6) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v7) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v4) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v5) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v6) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v7) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v4) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v5) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v6) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v7) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v4) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v5) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v6) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v7) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v4) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v5) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v6) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v7) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v4) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v5) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v6) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v7) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem__v7)) 
                  << 0x00000038U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0] 
            = ((0xffffffffffffff00ULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1] 
            = ((0xffffffffffff00ffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v1)) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2] 
            = ((0xffffffffff00ffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v2)) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3] 
            = ((0xffffffff00ffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v3)) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v4) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v4] 
            = ((0xffffff00ffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v4)) 
                  << 0x00000020U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v5) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v5] 
            = ((0xffff00ffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v5)) 
                  << 0x00000028U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v6) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v6] 
            = ((0xff00ffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v6)) 
                  << 0x00000030U));
    }
    if (vlSelfRef.__VdlySet__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v7) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem[vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v7] 
            = ((0x00ffffffffffffffULL & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem__v7)) 
                  << 0x00000038U));
    }
}

void Vtb_sys___024root___nba_comb__TOP__0(Vtb_sys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root___nba_comb__TOP__0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept 
        = ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
           & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready));
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 6U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__6__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 7U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__7__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 4U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__4__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 5U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__5__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 2U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 3U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy;
    if (((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
        = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy;
    if ((((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
          >> 1U) & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy)));
    }
    if (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
         & (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)))) {
        vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy 
            = (7U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy) 
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
void Vtb_sys___024root___nba_sequent__TOP__1(Vtb_sys___024root* vlSelf);

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
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys___024root___nba_sequent__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys___024root___nba_sequent__TOP__2(vlSelf);
                vlSelfRef.__Vm_traceActivity[5U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_sys___024root___nba_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[6U] = 1U;
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
