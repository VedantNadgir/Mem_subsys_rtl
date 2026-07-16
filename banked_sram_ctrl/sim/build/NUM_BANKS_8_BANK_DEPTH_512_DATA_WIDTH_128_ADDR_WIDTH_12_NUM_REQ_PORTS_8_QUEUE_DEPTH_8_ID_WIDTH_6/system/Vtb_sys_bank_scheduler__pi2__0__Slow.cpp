// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sys.h for the primary calling header

#include "Vtb_sys__pch.h"

VL_ATTR_COLD void Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___stl_sequent__TOP__tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__0\n"); );
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
}

VL_ATTR_COLD void Vtb_sys_bank_scheduler__pi2___ctor_var_reset(Vtb_sys_bank_scheduler__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_sys_bank_scheduler__pi2___ctor_var_reset\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->grant_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13526804512904818558ull);
    vlSelf->grant_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12952522268145920192ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->grant_data, __VscopeHash, 11214131073902290069ull);
    vlSelf->grant_strobe = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2284404732892904209ull);
    vlSelf->grant_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15713271743853295776ull);
    vlSelf->grant_id = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12068297226462965252ull);
    vlSelf->grant_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4540708897870490185ull);
    vlSelf->sram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14561761711137505759ull);
    vlSelf->sram_addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4568339235526564229ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->sram_wdata, __VscopeHash, 8664337622486087717ull);
    vlSelf->sram_bwe = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11368126370771696284ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->sram_rdata, __VscopeHash, 5828256916710478211ull);
    vlSelf->pp1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14064418409202235185ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->pp1_rdata, __VscopeHash, 17218468638137877349ull);
    vlSelf->pp1_id = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6098852938046114881ull);
    vlSelf->pp1_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4830237220456996373ull);
    vlSelf->pp1_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18425401148966966783ull);
    vlSelf->bank_pp1_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4008286290121211111ull);
    vlSelf->__PVT__pp0_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5708028457118380198ull);
    vlSelf->__PVT__pp0_addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 526328429074276522ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__pp0_data, __VscopeHash, 8029090172887181828ull);
    vlSelf->__PVT__pp0_strobe = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8325582155238182027ull);
    vlSelf->__PVT__pp0_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3231959518555092172ull);
    vlSelf->__PVT__pp0_id = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4500575236144268944ull);
    vlSelf->__PVT__pp0_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6484406937884606531ull);
}
