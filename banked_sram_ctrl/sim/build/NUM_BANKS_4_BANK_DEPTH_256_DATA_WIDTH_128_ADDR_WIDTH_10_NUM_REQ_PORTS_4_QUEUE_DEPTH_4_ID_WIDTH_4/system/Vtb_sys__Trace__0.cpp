// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_sys__Syms.h"


void Vtb_sys___024root__trace_chg_0_sub_0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_sys___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_0\n"); );
    // Body
    Vtb_sys___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sys___024root*>(voidSelf);
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_sys___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_sys__ConstPool__TABLE_h8665d168_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtb_sys__ConstPool__TABLE_ha1fb25ee_0;
void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<5>/*158:0*/, 4>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<5>/*132:0*/, 4>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____2(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vtb_sys___024root__trace_chg_0_sub_0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_0_sub_0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<16>/*511:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_37;
    VlWide<5>/*159:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_41;
    VlWide<5>/*159:0*/ __Vtemp_43;
    VlWide<5>/*159:0*/ __Vtemp_45;
    VlWide<5>/*159:0*/ __Vtemp_47;
    VlWide<16>/*511:0*/ __Vtemp_50;
    VlWide<16>/*511:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_57;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_sys__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid),4);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we),4);
        bufp->chgQData(oldp+3,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr),40);
        bufp->chgWData(oldp+5,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data),512);
        bufp->chgQData(oldp+21,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe),64);
        bufp->chgSData(oldp+23,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id),16);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready),4);
        __Vtemp_3[0U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[0U] 
                          << 0x00000015U) | ((0x001fffe0U 
                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                 << 5U)) 
                                             | ((0x0000001eU 
                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)))));
        __Vtemp_3[1U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[0U] 
                          >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[1U] 
                                             << 0x00000015U));
        __Vtemp_3[2U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[1U] 
                          >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[2U] 
                                             << 0x00000015U));
        __Vtemp_3[3U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[2U] 
                          >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[3U] 
                                             << 0x00000015U));
        __Vtemp_3[4U] = ((0x7fe00000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                         << 0x00000015U)) 
                         | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[3U] 
                            >> 0x0000000bU));
        bufp->chgWData(oldp+25,(__Vtemp_3),159);
        bufp->chgBit(oldp+30,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid))));
        __Vtemp_6[0U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[0U] 
                          << 0x00000015U) | ((0x001fffe0U 
                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                 << 5U)) 
                                             | ((0x0000001eU 
                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we)))));
        __Vtemp_6[1U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[0U] 
                          >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[1U] 
                                             << 0x00000015U));
        __Vtemp_6[2U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[1U] 
                          >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[2U] 
                                             << 0x00000015U));
        __Vtemp_6[3U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[2U] 
                          >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[3U] 
                                             << 0x00000015U));
        __Vtemp_6[4U] = ((0x7fe00000U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr) 
                                         << 0x00000015U)) 
                         | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[3U] 
                            >> 0x0000000bU));
        bufp->chgWData(oldp+31,(__Vtemp_6),159);
        __Vtemp_9[0U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[4U] 
                          << 0x00000015U) | ((0x001fffe0U 
                                              & ((IData)(
                                                         (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                          >> 0x00000010U)) 
                                                 << 5U)) 
                                             | ((0x0000001eU 
                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                    >> 3U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                      >> 1U)))));
        __Vtemp_9[1U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[4U] 
                          >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[5U] 
                                             << 0x00000015U));
        __Vtemp_9[2U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[5U] 
                          >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[6U] 
                                             << 0x00000015U));
        __Vtemp_9[3U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[6U] 
                          >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[7U] 
                                             << 0x00000015U));
        __Vtemp_9[4U] = ((0x7fe00000U & ((IData)((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                  >> 0x0000000aU)) 
                                         << 0x00000015U)) 
                         | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[7U] 
                            >> 0x0000000bU));
        bufp->chgWData(oldp+36,(__Vtemp_9),159);
        bufp->chgBit(oldp+41,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 1U))));
        __Vtemp_12[0U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[4U] 
                           << 0x00000015U) | ((0x001fffe0U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                           >> 0x00000010U)) 
                                                  << 5U)) 
                                              | ((0x0000001eU 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                     >> 3U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                       >> 1U)))));
        __Vtemp_12[1U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[4U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[5U] 
                                              << 0x00000015U));
        __Vtemp_12[2U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[5U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[6U] 
                                              << 0x00000015U));
        __Vtemp_12[3U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[6U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[7U] 
                                              << 0x00000015U));
        __Vtemp_12[4U] = ((0x7fe00000U & ((IData)((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                   >> 0x0000000aU)) 
                                          << 0x00000015U)) 
                          | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[7U] 
                             >> 0x0000000bU));
        bufp->chgWData(oldp+42,(__Vtemp_12),159);
        __Vtemp_15[0U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[8U] 
                           << 0x00000015U) | ((0x001fffe0U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                           >> 0x00000020U)) 
                                                  << 5U)) 
                                              | ((0x0000001eU 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                     >> 7U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                       >> 2U)))));
        __Vtemp_15[1U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[8U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[9U] 
                                              << 0x00000015U));
        __Vtemp_15[2U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[9U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[10U] 
                                              << 0x00000015U));
        __Vtemp_15[3U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[10U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[11U] 
                                              << 0x00000015U));
        __Vtemp_15[4U] = ((0x7fe00000U & ((IData)((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                   >> 0x00000014U)) 
                                          << 0x00000015U)) 
                          | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[11U] 
                             >> 0x0000000bU));
        bufp->chgWData(oldp+47,(__Vtemp_15),159);
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 2U))));
        __Vtemp_18[0U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[8U] 
                           << 0x00000015U) | ((0x001fffe0U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                           >> 0x00000020U)) 
                                                  << 5U)) 
                                              | ((0x0000001eU 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                     >> 7U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                       >> 2U)))));
        __Vtemp_18[1U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[8U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[9U] 
                                              << 0x00000015U));
        __Vtemp_18[2U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[9U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[10U] 
                                              << 0x00000015U));
        __Vtemp_18[3U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[10U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[11U] 
                                              << 0x00000015U));
        __Vtemp_18[4U] = ((0x7fe00000U & ((IData)((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                   >> 0x00000014U)) 
                                          << 0x00000015U)) 
                          | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[11U] 
                             >> 0x0000000bU));
        bufp->chgWData(oldp+53,(__Vtemp_18),159);
        __Vtemp_21[0U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[12U] 
                           << 0x00000015U) | ((0x001fffe0U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                           >> 0x00000030U)) 
                                                  << 5U)) 
                                              | ((0x0000001eU 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                     >> 0x0000000bU)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                       >> 3U)))));
        __Vtemp_21[1U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[12U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[13U] 
                                              << 0x00000015U));
        __Vtemp_21[2U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[13U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[14U] 
                                              << 0x00000015U));
        __Vtemp_21[3U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[14U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[15U] 
                                              << 0x00000015U));
        __Vtemp_21[4U] = ((0x7fe00000U & ((IData)((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                   >> 0x0000001eU)) 
                                          << 0x00000015U)) 
                          | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[15U] 
                             >> 0x0000000bU));
        bufp->chgWData(oldp+58,(__Vtemp_21),159);
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 3U))));
        __Vtemp_24[0U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[12U] 
                           << 0x00000015U) | ((0x001fffe0U 
                                               & ((IData)(
                                                          (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                           >> 0x00000030U)) 
                                                  << 5U)) 
                                              | ((0x0000001eU 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                     >> 0x0000000bU)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                       >> 3U)))));
        __Vtemp_24[1U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[12U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[13U] 
                                              << 0x00000015U));
        __Vtemp_24[2U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[13U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[14U] 
                                              << 0x00000015U));
        __Vtemp_24[3U] = ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[14U] 
                           >> 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[15U] 
                                              << 0x00000015U));
        __Vtemp_24[4U] = ((0x7fe00000U & ((IData)((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                   >> 0x0000001eU)) 
                                          << 0x00000015U)) 
                          | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[15U] 
                             >> 0x0000000bU));
        bufp->chgWData(oldp+64,(__Vtemp_24),159);
        bufp->chgBit(oldp+69,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready))));
        bufp->chgBit(oldp+70,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 1U))));
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 2U))));
        bufp->chgBit(oldp+72,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 3U))));
        bufp->chgIData(oldp+73,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+75,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready),4);
        bufp->chgCData(oldp+76,(((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                     << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
        bufp->chgCData(oldp+77,(((((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                          [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                          << 1U)) | 
                                   (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])) 
                                  << 2U) | ((2U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   << 1U)) 
                                            | (1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U])))),4);
        __Vtemp_31[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_31[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_31[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_31[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_31[4U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_31[5U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_31[6U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                              >> 5U));
        __Vtemp_31[7U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                              >> 5U));
        __Vtemp_31[8U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                              >> 5U));
        __Vtemp_31[9U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                           << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                              >> 5U));
        __Vtemp_31[10U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_31[11U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        __Vtemp_31[12U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                               >> 5U));
        __Vtemp_31[13U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][1U] 
                                               >> 5U));
        __Vtemp_31[14U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][2U] 
                                               >> 5U));
        __Vtemp_31[15U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][4U] 
                            << 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][3U] 
                                               >> 5U));
        bufp->chgWData(oldp+78,(__Vtemp_31),512);
        bufp->chgSData(oldp+94,(((((0x000000f0U & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                   << 3U)) 
                                   | (0x0000000fU & 
                                      (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                       >> 1U))) << 8U) 
                                 | ((0x000000f0U & 
                                     (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                      << 3U)) | (0x0000000fU 
                                                 & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr][0U] 
                                                    >> 1U))))),16);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_sys__DOT__csr_rdata),32);
        bufp->chgBit(oldp+96,(vlSelfRef.tb_sys__DOT__csr_ack));
        bufp->chgCData(oldp+97,(((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                   << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                     << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
        bufp->chgWData(oldp+98,(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt),636);
        bufp->chgSData(oldp+118,(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid),16);
        bufp->chgCData(oldp+119,((((((IData)(Vtb_sys__ConstPool__TABLE_h8665d168_0
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                     << 1U) | Vtb_sys__ConstPool__TABLE_h8665d168_0
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                   << 2U) | (((IData)(Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                              << 1U) 
                                             | Vtb_sys__ConstPool__TABLE_h8665d168_0
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]))),4);
        bufp->chgCData(oldp+120,((((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                     << 2U) | Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                   << 4U) | (((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                              << 2U) 
                                             | Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]))),8);
        bufp->chgCData(oldp+121,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid),4);
        bufp->chgWData(oldp+122,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata),512);
        bufp->chgIData(oldp+138,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id),24);
        bufp->chgCData(oldp+139,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we),4);
        bufp->chgCData(oldp+140,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err),4);
        bufp->chgCData(oldp+141,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready)))),4);
        bufp->chgCData(oldp+142,(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid),4);
        bufp->chgCData(oldp+143,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready),4);
        bufp->chgCData(oldp+144,(((((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                    << 3U) | ((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                              << 2U)) 
                                  | (((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 1U) | (4U 
                                                == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
        bufp->chgSData(oldp+145,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict),16);
        bufp->chgCData(oldp+146,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle),4);
        bufp->chgCData(oldp+147,((0x0000000fU & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready)))),4);
        bufp->chgCData(oldp+148,(((((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                    << 3U) | ((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                              << 2U)) 
                                  | (((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                      << 1U) | (4U 
                                                == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
        bufp->chgCData(oldp+149,(((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                    << 3U) | ((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                              << 2U)) 
                                  | (((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                      << 1U) | (0U 
                                                == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
        bufp->chgCData(oldp+150,(((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                    << 3U) | ((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                              << 2U)) 
                                  | (((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 1U) | (0U 
                                                == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
        bufp->chgWData(oldp+151,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data),512);
        bufp->chgSData(oldp+167,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id),16);
        bufp->chgCData(oldp+168,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err),4);
        bufp->chgCData(oldp+169,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid),4);
        bufp->chgBit(oldp+170,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+171,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+172,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                  & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                     & (- (IData)((
                                                   VL_LTS_III(32, 1U, 
                                                              VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                   & Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant])))))),4);
        bufp->chgCData(oldp+173,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+174,(VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))));
        bufp->chgCData(oldp+175,((0x0000000fU & (((0x000000ffU 
                                                   & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+176,((0x0000000fU & ((0x000000ffU 
                                                  & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+177,((0x0000000fU & ((~ 
                                                  (((0x000000ffU 
                                                     & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                         << 4U) 
                                                        | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                                 & ((0x000000ffU 
                                                     & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                         << 4U) 
                                                        | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))))),4);
        bufp->chgCData(oldp+178,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+179,((0x0000000fU & (((~ 
                                                   (((0x000000ffU 
                                                      & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                          << 4U) 
                                                         | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                    - (IData)(1U))) 
                                                  & ((0x000000ffU 
                                                      & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                          << 4U) 
                                                         | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))) 
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgBit(oldp+180,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgWData(oldp+181,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata),128);
        bufp->chgCData(oldp+185,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+186,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+187,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+188,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+189,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgSData(oldp+190,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe),16);
        bufp->chgBit(oldp+191,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+192,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+193,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+194,((0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 4U))),4);
        bufp->chgBit(oldp+195,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+196,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+197,((0x0000000fU & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                  >> 4U) 
                                                 & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant)) 
                                                    & (- (IData)(
                                                                 (VL_LTS_III(32, 1U, 
                                                                             VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 4U)))) 
                                                                  & Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]))))))),4);
        bufp->chgCData(oldp+198,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+199,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 4U))))));
        bufp->chgCData(oldp+200,((0x0000000fU & (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 4U)))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+201,((0x0000000fU & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                           >> 4U)))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+202,((0x0000000fU & ((~ 
                                                  (((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 4U)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                                 & ((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 4U)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))))),4);
        bufp->chgCData(oldp+203,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+204,((0x0000000fU & (((~ 
                                                   (((0x000000ffU 
                                                      & ((0x000000f0U 
                                                          & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                         | (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                               >> 4U)))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                    - (IData)(1U))) 
                                                  & ((0x000000ffU 
                                                      & ((0x000000f0U 
                                                          & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                         | (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                               >> 4U)))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))) 
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgBit(oldp+205,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgWData(oldp+206,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata),128);
        bufp->chgCData(oldp+210,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+211,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+212,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+213,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+214,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgSData(oldp+215,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe),16);
        bufp->chgBit(oldp+216,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+217,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+218,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+219,((0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 8U))),4);
        bufp->chgBit(oldp+220,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+221,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+222,((0x0000000fU & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant)) 
                                                    & (- (IData)(
                                                                 (VL_LTS_III(32, 1U, 
                                                                             VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 8U)))) 
                                                                  & Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]))))))),4);
        bufp->chgCData(oldp+223,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+224,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 8U))))));
        bufp->chgCData(oldp+225,((0x0000000fU & (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                          >> 4U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 8U)))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+226,((0x0000000fU & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                         >> 4U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                           >> 8U)))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+227,((0x0000000fU & ((~ 
                                                  (((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 4U)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 8U)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                                 & ((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 4U)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 8U)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))))),4);
        bufp->chgCData(oldp+228,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+229,((0x0000000fU & (((~ 
                                                   (((0x000000ffU 
                                                      & ((0x000000f0U 
                                                          & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                             >> 4U)) 
                                                         | (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                               >> 8U)))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                    - (IData)(1U))) 
                                                  & ((0x000000ffU 
                                                      & ((0x000000f0U 
                                                          & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                             >> 4U)) 
                                                         | (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                               >> 8U)))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))) 
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgBit(oldp+230,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgWData(oldp+231,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata),128);
        bufp->chgCData(oldp+235,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+236,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+237,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+238,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+239,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgSData(oldp+240,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe),16);
        bufp->chgBit(oldp+241,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+242,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+243,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+244,((0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 0x0000000cU))),4);
        bufp->chgBit(oldp+245,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+246,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+247,((0x0000000fU & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                  >> 0x0000000cU) 
                                                 & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant)) 
                                                    & (- (IData)(
                                                                 (VL_LTS_III(32, 1U, 
                                                                             VL_COUNTONES_I(
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                                >> 0x0000000cU)))) 
                                                                  & Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]))))))),4);
        bufp->chgCData(oldp+248,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+249,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 0x0000000cU))))));
        bufp->chgCData(oldp+250,((0x0000000fU & (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                          >> 8U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 0x0000000cU)))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+251,((0x0000000fU & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                         >> 8U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                           >> 0x0000000cU)))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+252,((0x0000000fU & ((~ 
                                                  (((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 8U)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 0x0000000cU)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                                 & ((0x000000ffU 
                                                     & ((0x000000f0U 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 8U)) 
                                                        | (0x0000000fU 
                                                           & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                              >> 0x0000000cU)))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))))),4);
        bufp->chgCData(oldp+253,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+254,((0x0000000fU & (((~ 
                                                   (((0x000000ffU 
                                                      & ((0x000000f0U 
                                                          & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                             >> 8U)) 
                                                         | (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                               >> 0x0000000cU)))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                    - (IData)(1U))) 
                                                  & ((0x000000ffU 
                                                      & ((0x000000f0U 
                                                          & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                             >> 8U)) 
                                                         | (0x0000000fU 
                                                            & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                               >> 0x0000000cU)))) 
                                                     >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))) 
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgBit(oldp+255,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgWData(oldp+256,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata),128);
        bufp->chgCData(oldp+260,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+261,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+262,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+263,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+264,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgSData(oldp+265,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe),16);
        bufp->chgBit(oldp+266,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+267,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+268,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgBit(oldp+269,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+270,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgWData(oldp+271,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]),159);
        bufp->chgBit(oldp+276,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+277,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 278, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+298,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+299,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+300,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+301,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+302,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgWData(oldp+303,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]),159);
        bufp->chgBit(oldp+308,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+309,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 310, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+330,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+331,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+332,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+333,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+334,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgWData(oldp+335,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr]),159);
        bufp->chgBit(oldp+340,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+341,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 342, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+362,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+363,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+364,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+365,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+366,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgWData(oldp+367,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr]),159);
        bufp->chgBit(oldp+372,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+373,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 374, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+394,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+395,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+396,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy),3);
        __Vtemp_33[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[0U] 
                           << 5U) | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       << 1U)) | (1U 
                                                  & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))));
        __Vtemp_33[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[0U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[1U] 
                                              << 5U));
        __Vtemp_33[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[1U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[2U] 
                                              << 5U));
        __Vtemp_33[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[2U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[3U] 
                                              << 5U));
        __Vtemp_33[4U] = (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[3U] 
                          >> 0x0000001bU);
        bufp->chgWData(oldp+397,(__Vtemp_33),133);
        bufp->chgWData(oldp+402,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),133);
        bufp->chgBit(oldp+407,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid))));
        bufp->chgBit(oldp+408,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        __Vtemp_35[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[0U] 
                           << 5U) | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       << 1U)) | (1U 
                                                  & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))));
        __Vtemp_35[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[0U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[1U] 
                                              << 5U));
        __Vtemp_35[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[1U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[2U] 
                                              << 5U));
        __Vtemp_35[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[2U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[3U] 
                                              << 5U));
        __Vtemp_35[4U] = (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[3U] 
                          >> 0x0000001bU);
        bufp->chgWData(oldp+409,(__Vtemp_35),133);
        bufp->chgBit(oldp+414,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgWData(oldp+415,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),133);
        bufp->chgBit(oldp+420,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+421,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 422, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+442,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+443,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+444,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        __Vtemp_37[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[4U] 
                           << 5U) | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 3U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                     >> 1U))));
        __Vtemp_37[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[4U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[5U] 
                                              << 5U));
        __Vtemp_37[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[5U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[6U] 
                                              << 5U));
        __Vtemp_37[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[6U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[7U] 
                                              << 5U));
        __Vtemp_37[4U] = (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[7U] 
                          >> 0x0000001bU);
        bufp->chgWData(oldp+445,(__Vtemp_37),133);
        bufp->chgWData(oldp+450,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),133);
        bufp->chgBit(oldp+455,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+456,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        __Vtemp_39[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[4U] 
                           << 5U) | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 3U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                     >> 1U))));
        __Vtemp_39[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[4U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[5U] 
                                              << 5U));
        __Vtemp_39[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[5U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[6U] 
                                              << 5U));
        __Vtemp_39[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[6U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[7U] 
                                              << 5U));
        __Vtemp_39[4U] = (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[7U] 
                          >> 0x0000001bU);
        bufp->chgWData(oldp+457,(__Vtemp_39),133);
        bufp->chgBit(oldp+462,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgWData(oldp+463,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),133);
        bufp->chgBit(oldp+468,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+469,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 470, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+490,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+491,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+492,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        __Vtemp_41[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[8U] 
                           << 5U) | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 7U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                     >> 2U))));
        __Vtemp_41[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[8U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[9U] 
                                              << 5U));
        __Vtemp_41[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[9U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[10U] 
                                              << 5U));
        __Vtemp_41[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[10U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[11U] 
                                              << 5U));
        __Vtemp_41[4U] = (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[11U] 
                          >> 0x0000001bU);
        bufp->chgWData(oldp+493,(__Vtemp_41),133);
        bufp->chgWData(oldp+498,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),133);
        bufp->chgBit(oldp+503,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+504,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        __Vtemp_43[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[8U] 
                           << 5U) | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 7U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                     >> 2U))));
        __Vtemp_43[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[8U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[9U] 
                                              << 5U));
        __Vtemp_43[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[9U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[10U] 
                                              << 5U));
        __Vtemp_43[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[10U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[11U] 
                                              << 5U));
        __Vtemp_43[4U] = (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[11U] 
                          >> 0x0000001bU);
        bufp->chgWData(oldp+505,(__Vtemp_43),133);
        bufp->chgBit(oldp+510,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgWData(oldp+511,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),133);
        bufp->chgBit(oldp+516,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+517,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 518, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+538,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+539,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+540,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        __Vtemp_45[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[12U] 
                           << 5U) | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 0x0000000bU)) 
                                     | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                              >> 3U))));
        __Vtemp_45[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[12U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[13U] 
                                              << 5U));
        __Vtemp_45[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[13U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[14U] 
                                              << 5U));
        __Vtemp_45[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[14U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[15U] 
                                              << 5U));
        __Vtemp_45[4U] = (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[15U] 
                          >> 0x0000001bU);
        bufp->chgWData(oldp+541,(__Vtemp_45),133);
        bufp->chgWData(oldp+546,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),133);
        bufp->chgBit(oldp+551,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 3U))));
        bufp->chgBit(oldp+552,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        __Vtemp_47[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[12U] 
                           << 5U) | ((0x0000001eU & 
                                      ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                       >> 0x0000000bU)) 
                                     | (1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                              >> 3U))));
        __Vtemp_47[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[12U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[13U] 
                                              << 5U));
        __Vtemp_47[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[13U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[14U] 
                                              << 5U));
        __Vtemp_47[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[14U] 
                           >> 0x0000001bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[15U] 
                                              << 5U));
        __Vtemp_47[4U] = (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[15U] 
                          >> 0x0000001bU);
        bufp->chgWData(oldp+553,(__Vtemp_47),133);
        bufp->chgBit(oldp+558,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgWData(oldp+559,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),133);
        bufp->chgBit(oldp+564,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+565,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 566, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+586,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+587,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+588,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        Vtb_sys___024root__trace_chg_dtype____2(vlSelf, bufp, 589, vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter);
        bufp->chgIData(oldp+621,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__i),32);
        bufp->chgIData(oldp+622,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__b),32);
        bufp->chgCData(oldp+623,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports),8);
        bufp->chgCData(oldp+624,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p),2);
        bufp->chgBit(oldp+625,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found));
        bufp->chgCData(oldp+626,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        __Vtemp_50[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr][0U];
        __Vtemp_50[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr][1U];
        __Vtemp_50[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr][2U];
        __Vtemp_50[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr][3U];
        __Vtemp_50[4U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr][0U];
        __Vtemp_50[5U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr][1U];
        __Vtemp_50[6U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr][2U];
        __Vtemp_50[7U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr][3U];
        __Vtemp_50[8U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr][0U];
        __Vtemp_50[9U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr][1U];
        __Vtemp_50[10U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr][2U];
        __Vtemp_50[11U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr][3U];
        __Vtemp_50[12U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr][0U];
        __Vtemp_50[13U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr][1U];
        __Vtemp_50[14U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr][2U];
        __Vtemp_50[15U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr][3U];
        bufp->chgWData(oldp+627,(__Vtemp_50),512);
        bufp->chgWData(oldp+643,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr]),128);
        bufp->chgWData(oldp+647,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]),128);
        bufp->chgWData(oldp+651,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]),128);
        bufp->chgWData(oldp+655,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr]),128);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+659,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop)))),4);
        bufp->chgCData(oldp+660,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready)))),4);
        bufp->chgSData(oldp+661,((((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                       << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
                                         << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18))) 
                                    << 0x0000000cU) 
                                   | (((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
                                         << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                           << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22))) 
                                      << 8U)) | (((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)))))),16);
        bufp->chgCData(oldp+662,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we)))),4);
        bufp->chgIData(oldp+663,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                      << 0x00000010U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                      << 8U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr)))),32);
        __Vtemp_53[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data[0U];
        __Vtemp_53[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data[1U];
        __Vtemp_53[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data[2U];
        __Vtemp_53[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data[3U];
        __Vtemp_53[4U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data[0U];
        __Vtemp_53[5U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data[1U];
        __Vtemp_53[6U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data[2U];
        __Vtemp_53[7U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data[3U];
        __Vtemp_53[8U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data[0U];
        __Vtemp_53[9U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data[1U];
        __Vtemp_53[10U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data[2U];
        __Vtemp_53[11U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data[3U];
        __Vtemp_53[12U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data[0U];
        __Vtemp_53[13U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data[1U];
        __Vtemp_53[14U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data[2U];
        __Vtemp_53[15U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data[3U];
        bufp->chgWData(oldp+664,(__Vtemp_53),512);
        bufp->chgQData(oldp+680,((((QData)((IData)(
                                                   (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                                     << 0x00000010U) 
                                                    | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe)))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                                      << 0x00000010U) 
                                                     | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe)))))),64);
        bufp->chgCData(oldp+682,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)))),4);
        bufp->chgWData(oldp+683,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt),159);
        bufp->chgBit(oldp+688,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+689,((0x000003ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[4U] 
                                                 >> 0x00000015U))),10);
        __Vtemp_54[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[1U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[0U] 
                                              >> 0x00000015U));
        __Vtemp_54[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[2U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[1U] 
                                              >> 0x00000015U));
        __Vtemp_54[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[3U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[2U] 
                                              >> 0x00000015U));
        __Vtemp_54[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[4U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[3U] 
                                              >> 0x00000015U));
        bufp->chgWData(oldp+690,(__Vtemp_54),128);
        bufp->chgSData(oldp+694,((0x0000ffffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[0U] 
                                                 >> 5U))),16);
        bufp->chgBit(oldp+695,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[0U])));
        bufp->chgBit(oldp+696,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+697,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgWData(oldp+698,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data),128);
        bufp->chgSData(oldp+702,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe),16);
        bufp->chgCData(oldp+703,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)))),4);
        bufp->chgWData(oldp+704,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt),159);
        bufp->chgBit(oldp+709,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+710,((0x000003ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[4U] 
                                                 >> 0x00000015U))),10);
        __Vtemp_55[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[1U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[0U] 
                                              >> 0x00000015U));
        __Vtemp_55[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[2U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[1U] 
                                              >> 0x00000015U));
        __Vtemp_55[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[3U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[2U] 
                                              >> 0x00000015U));
        __Vtemp_55[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[4U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[3U] 
                                              >> 0x00000015U));
        bufp->chgWData(oldp+711,(__Vtemp_55),128);
        bufp->chgSData(oldp+715,((0x0000ffffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[0U] 
                                                 >> 5U))),16);
        bufp->chgBit(oldp+716,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[0U])));
        bufp->chgBit(oldp+717,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+718,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgWData(oldp+719,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data),128);
        bufp->chgSData(oldp+723,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe),16);
        bufp->chgCData(oldp+724,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22)))),4);
        bufp->chgWData(oldp+725,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt),159);
        bufp->chgBit(oldp+730,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+731,((0x000003ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[4U] 
                                                 >> 0x00000015U))),10);
        __Vtemp_56[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[1U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[0U] 
                                              >> 0x00000015U));
        __Vtemp_56[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[2U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[1U] 
                                              >> 0x00000015U));
        __Vtemp_56[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[3U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[2U] 
                                              >> 0x00000015U));
        __Vtemp_56[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[4U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[3U] 
                                              >> 0x00000015U));
        bufp->chgWData(oldp+732,(__Vtemp_56),128);
        bufp->chgSData(oldp+736,((0x0000ffffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[0U] 
                                                 >> 5U))),16);
        bufp->chgBit(oldp+737,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[0U])));
        bufp->chgBit(oldp+738,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+739,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgWData(oldp+740,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data),128);
        bufp->chgSData(oldp+744,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe),16);
        bufp->chgCData(oldp+745,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18)))),4);
        bufp->chgWData(oldp+746,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt),159);
        bufp->chgBit(oldp+751,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+752,((0x000003ffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[4U] 
                                                 >> 0x00000015U))),10);
        __Vtemp_57[0U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[1U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[0U] 
                                              >> 0x00000015U));
        __Vtemp_57[1U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[2U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[1U] 
                                              >> 0x00000015U));
        __Vtemp_57[2U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[3U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[2U] 
                                              >> 0x00000015U));
        __Vtemp_57[3U] = ((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[4U] 
                           << 0x0000000bU) | (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[3U] 
                                              >> 0x00000015U));
        bufp->chgWData(oldp+753,(__Vtemp_57),128);
        bufp->chgSData(oldp+757,((0x0000ffffU & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[0U] 
                                                 >> 5U))),16);
        bufp->chgBit(oldp+758,((1U & vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[0U])));
        bufp->chgBit(oldp+759,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+760,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgWData(oldp+761,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data),128);
        bufp->chgSData(oldp+765,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe),16);
        bufp->chgBit(oldp+766,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+767,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+768,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+769,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop));
    }
    bufp->chgBit(oldp+770,(vlSelfRef.tb_sys__DOT__clk));
    bufp->chgBit(oldp+771,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_req));
    bufp->chgCData(oldp+772,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_addr),5);
    bufp->chgCData(oldp+773,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept),4);
    bufp->chgCData(oldp+774,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue),4);
    bufp->chgCData(oldp+775,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt[0U] 
                                            >> 1U)))),6);
    bufp->chgCData(oldp+776,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt[0U] 
                                            >> 1U)))),6);
    bufp->chgCData(oldp+777,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt[0U] 
                                            >> 1U)))),6);
    bufp->chgCData(oldp+778,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt[0U] 
                                            >> 1U)))),6);
    bufp->chgCData(oldp+779,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+780,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+781,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+782,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgIData(oldp+783,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__z),32);
    bufp->chgIData(oldp+784,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__y),32);
    bufp->chgIData(oldp+785,(vlSelfRef.tb_sys__DOT__u_env__DOT__test_id),32);
    bufp->chgIData(oldp+786,(vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors),32);
}

void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<5>/*158:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgWData(oldp+0,(__VdtypeVar[0]),159);
    bufp->chgWData(oldp+5,(__VdtypeVar[1]),159);
    bufp->chgWData(oldp+10,(__VdtypeVar[2]),159);
    bufp->chgWData(oldp+15,(__VdtypeVar[3]),159);
}

void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<5>/*132:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgWData(oldp+0,(__VdtypeVar[0]),133);
    bufp->chgWData(oldp+5,(__VdtypeVar[1]),133);
    bufp->chgWData(oldp+10,(__VdtypeVar[2]),133);
    bufp->chgWData(oldp+15,(__VdtypeVar[3]),133);
}

void Vtb_sys___024root__trace_chg_dtype____2(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____2\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[31]),32);
}

void Vtb_sys___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_cleanup\n"); );
    // Body
    Vtb_sys___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sys___024root*>(voidSelf);
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
