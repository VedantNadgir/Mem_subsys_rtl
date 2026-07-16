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

extern const VlUnpacked<CData/*0:0*/, 256> Vtb_sys__ConstPool__TABLE_h3b57699f_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtb_sys__ConstPool__TABLE_hce1a8acc_0;
void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*51:0*/, 8>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 8>& __VdtypeVar);

void Vtb_sys___024root__trace_chg_0_sub_0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_0_sub_0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_12;
    VlWide<8>/*255:0*/ __Vtemp_18;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_sys__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid),8);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we),8);
        bufp->chgWData(oldp+3,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr),88);
        bufp->chgWData(oldp+6,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data),256);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id),32);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready),8);
        bufp->chgQData(oldp+17,((((QData)((IData)((0x000007ffU 
                                                   & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[0U]))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[0U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 << 5U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))))),52);
        bufp->chgBit(oldp+19,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid))));
        bufp->chgQData(oldp+20,((((QData)((IData)((0x000007ffU 
                                                   & vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[0U]))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[0U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 << 5U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))))),52);
        bufp->chgQData(oldp+22,((((QData)((IData)((0x000007ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[0U] 
                                                      >> 0x0000000bU)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[1U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 << 1U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 3U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 1U))))))))),52);
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 1U))));
        bufp->chgQData(oldp+25,((((QData)((IData)((0x000007ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[0U] 
                                                      >> 0x0000000bU)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[1U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 << 1U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 3U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 1U))))))))),52);
        bufp->chgQData(oldp+27,((((QData)((IData)((0x000007ffU 
                                                   & ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[1U] 
                                                       << 0x0000000aU) 
                                                      | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[0U] 
                                                         >> 0x00000016U))))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[2U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 3U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 7U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 2U))))))))),52);
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 2U))));
        bufp->chgQData(oldp+30,((((QData)((IData)((0x000007ffU 
                                                   & ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[1U] 
                                                       << 0x0000000aU) 
                                                      | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[0U] 
                                                         >> 0x00000016U))))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[2U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 3U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 7U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 2U))))))))),52);
        bufp->chgQData(oldp+32,((((QData)((IData)((0x000007ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[1U] 
                                                      >> 1U)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[3U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 7U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 0x0000000bU)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 3U))))))))),52);
        bufp->chgBit(oldp+34,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 3U))));
        bufp->chgQData(oldp+35,((((QData)((IData)((0x000007ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[1U] 
                                                      >> 1U)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[3U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 7U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 0x0000000bU)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 3U))))))))),52);
        bufp->chgQData(oldp+37,((((QData)((IData)((0x000007ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[1U] 
                                                      >> 0x0000000cU)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[4U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 0x0000000bU)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 0x0000000fU)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 4U))))))))),52);
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 4U))));
        bufp->chgQData(oldp+40,((((QData)((IData)((0x000007ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[1U] 
                                                      >> 0x0000000cU)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[4U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 0x0000000bU)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 0x0000000fU)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 4U))))))))),52);
        bufp->chgQData(oldp+42,((((QData)((IData)((0x000007ffU 
                                                   & ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[2U] 
                                                       << 9U) 
                                                      | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[1U] 
                                                         >> 0x00000017U))))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[5U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 0x0000000fU)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 0x00000013U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 5U))))))))),52);
        bufp->chgBit(oldp+44,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 5U))));
        bufp->chgQData(oldp+45,((((QData)((IData)((0x000007ffU 
                                                   & ((vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[2U] 
                                                       << 9U) 
                                                      | (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[1U] 
                                                         >> 0x00000017U))))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[5U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 0x0000000fU)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 0x00000013U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 5U))))))))),52);
        bufp->chgQData(oldp+47,((((QData)((IData)((0x000007ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[2U] 
                                                      >> 2U)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[6U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 0x00000013U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 0x00000017U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 6U))))))))),52);
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 6U))));
        bufp->chgQData(oldp+50,((((QData)((IData)((0x000007ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[2U] 
                                                      >> 2U)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[6U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 0x00000013U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 0x00000017U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 6U))))))))),52);
        bufp->chgQData(oldp+52,((((QData)((IData)((0x000007ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[2U] 
                                                      >> 0x0000000dU)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[7U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 0x00000017U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 0x0000001bU)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 7U))))))))),52);
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 7U))));
        bufp->chgQData(oldp+55,((((QData)((IData)((0x000007ffU 
                                                   & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr[2U] 
                                                      >> 0x0000000dU)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[7U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe 
                                                                 >> 0x00000017U)) 
                                                             | ((0x0000001eU 
                                                                 & (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id 
                                                                    >> 0x0000001bU)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 7U))))))))),52);
        bufp->chgBit(oldp+57,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready))));
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 1U))));
        bufp->chgBit(oldp+59,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 2U))));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 3U))));
        bufp->chgBit(oldp+61,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 4U))));
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 5U))));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 6U))));
        bufp->chgBit(oldp+64,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 7U))));
        bufp->chgIData(oldp+65,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[6U])))) {
        bufp->chgCData(oldp+67,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept),8);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue),8);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy),4);
        bufp->chgCData(oldp+70,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy),4);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy),4);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy),4);
        bufp->chgCData(oldp+73,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__nxt_occupancy),4);
        bufp->chgCData(oldp+74,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__nxt_occupancy),4);
        bufp->chgCData(oldp+75,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__nxt_occupancy),4);
        bufp->chgCData(oldp+76,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__nxt_occupancy),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+77,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready),8);
        bufp->chgCData(oldp+78,(((((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                     << 3U) | ((0U 
                                                != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                               << 2U)) 
                                   | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                                  << 4U) | ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                              << 3U) 
                                             | ((0U 
                                                 != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                << 2U)) 
                                            | (((0U 
                                                 != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                << 1U) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))))),8);
        bufp->chgCData(oldp+79,((((((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                           << 1U)) 
                                    | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                                   << 6U) | (((2U & 
                                               ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                                             << 4U)) 
                                 | ((((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                             << 1U)) 
                                      | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                      [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                                     << 2U) | ((2U 
                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr])))))),8);
        __Vtemp_6[0U] = (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_6[1U] = (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_6[2U] = (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_6[3U] = (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_6[4U] = (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_6[5U] = (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_6[6U] = (IData)((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 5U))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                     >> 5U)))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+80,(__Vtemp_6),256);
        bufp->chgIData(oldp+88,((((((0x000000f0U & 
                                     ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                               >> 1U)) 
                                      << 4U)) | (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U)))) 
                                   << 0x00000018U) 
                                  | (((0x000000f0U 
                                       & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 1U)) 
                                          << 4U)) | 
                                      (0x0000000fU 
                                       & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                  >> 1U)))) 
                                     << 0x00000010U)) 
                                 | ((((0x000000f0U 
                                       & ((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 1U)) 
                                          << 4U)) | 
                                      (0x0000000fU 
                                       & (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                  >> 1U)))) 
                                     << 8U) | ((0x000000f0U 
                                                & ((IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U)) 
                                                   << 4U)) 
                                               | (0x0000000fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                             [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                             >> 1U))))))),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tb_sys__DOT__csr_rdata),32);
        bufp->chgBit(oldp+90,(vlSelfRef.tb_sys__DOT__csr_ack));
        bufp->chgCData(oldp+91,(((((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__pop) 
                                     << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__pop) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__pop) 
                                       << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__pop))) 
                                  << 4U) | ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop))))),8);
        bufp->chgCData(oldp+92,(((((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                     << 3U) | ((0U 
                                                != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                               << 2U)) 
                                   | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy)))) 
                                  << 4U) | ((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                              << 3U) 
                                             | ((0U 
                                                 != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                << 2U)) 
                                            | (((0U 
                                                 != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                << 1U) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))))),8);
        bufp->chgWData(oldp+93,(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt),416);
        bufp->chgQData(oldp+106,(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid),64);
        bufp->chgCData(oldp+108,(((((((IData)(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                      << 1U) | Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                    << 6U) | ((((IData)(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                        [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                                << 1U) 
                                               | Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                              << 4U)) 
                                  | (((((IData)(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                        << 1U) | Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                      << 2U) | (((IData)(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 << 1U) 
                                                | Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant])))),8);
        bufp->chgIData(oldp+109,(((((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                      << 3U) | Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                    << 0x00000012U) 
                                   | ((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                        << 3U) | Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                      << 0x0000000cU)) 
                                  | (((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                        << 3U) | Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                      << 6U) | (((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                         [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                                 << 3U) 
                                                | Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant])))),24);
        bufp->chgCData(oldp+110,(((((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant_ready) 
                                      << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant_ready) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant_ready) 
                                        << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant_ready))) 
                                   << 4U) | ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready))))),8);
        bufp->chgQData(oldp+111,((((QData)((IData)(
                                                   (((((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_32) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_35) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_34))) 
                                                        << 0x0000000cU) 
                                                       | (((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_37) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_38))) 
                                                          << 8U)) 
                                                      | ((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_41) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_43) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_47) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))))) 
                                                     << 0x00000010U) 
                                                    | (((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49) 
                                                            << 3U) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_48) 
                                                              << 2U)) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50))) 
                                                         << 0x0000000cU) 
                                                        | (((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_55) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54))) 
                                                           << 8U)) 
                                                       | ((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_59) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_61) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_60) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_62)))))))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_65) 
                                                            << 3U) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_64) 
                                                              << 2U)) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_67) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_66))) 
                                                         << 0x0000000cU) 
                                                        | (((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_69) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_68) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_71) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_70))) 
                                                           << 8U)) 
                                                       | ((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_73) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_72) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_75) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_74))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_77) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_79) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_78))))) 
                                                      << 0x00000010U) 
                                                     | (((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_81) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_80) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_83) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_82))) 
                                                          << 0x0000000cU) 
                                                         | (((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_85) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_84) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_87) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_86))) 
                                                            << 8U)) 
                                                        | ((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_89) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_88) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_91) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_90))) 
                                                            << 4U) 
                                                           | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_93) 
                                                                << 3U) 
                                                               | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_92) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_95) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_94)))))))))),64);
        bufp->chgCData(oldp+113,(((((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__sram_we) 
                                      << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__sram_we) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__sram_we) 
                                        << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__sram_we))) 
                                   << 4U) | ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we))))),8);
        bufp->chgQData(oldp+114,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                                      << 0x00000018U) 
                                                     | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                                        << 0x00000010U)) 
                                                    | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_addr))))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                                       << 0x00000018U) 
                                                      | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                                         << 0x00000010U)) 
                                                     | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr))))))),64);
        __Vtemp_12[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data;
        __Vtemp_12[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data;
        __Vtemp_12[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data;
        __Vtemp_12[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data;
        __Vtemp_12[4U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_data;
        __Vtemp_12[5U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_data;
        __Vtemp_12[6U] = (IData)((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_data)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_data))));
        __Vtemp_12[7U] = (IData)(((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_data)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_data))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+116,(__Vtemp_12),256);
        bufp->chgIData(oldp+124,(((((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                      << 0x0000000cU) 
                                     | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                        << 8U)) | (
                                                   ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__sram_bwe))) 
                                   << 0x00000010U) 
                                  | ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                       << 0x0000000cU) 
                                      | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                         << 8U)) | 
                                     (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                       << 4U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe))))),32);
        bufp->chgCData(oldp+125,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid),8);
        bufp->chgWData(oldp+126,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata),256);
        bufp->chgQData(oldp+134,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id),56);
        bufp->chgCData(oldp+136,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we),8);
        bufp->chgCData(oldp+137,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err),8);
        bufp->chgCData(oldp+138,(((((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                      << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                        << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__bank_pp1_ready))) 
                                   << 4U) | ((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready))))),8);
        bufp->chgCData(oldp+139,(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid),8);
        bufp->chgCData(oldp+140,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready),8);
        bufp->chgCData(oldp+141,(((((((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 3U) | ((8U 
                                                 == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                << 2U)) 
                                    | (((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                        << 1U) | (8U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                                   << 4U) | ((((8U 
                                                == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                               << 3U) 
                                              | ((8U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                 << 2U)) 
                                             | (((8U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                 << 1U) 
                                                | (8U 
                                                   == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))))),8);
        bufp->chgQData(oldp+142,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict),64);
        bufp->chgCData(oldp+144,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle),8);
        bufp->chgCData(oldp+145,((0x000000ffU & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready)))),8);
        bufp->chgCData(oldp+146,(((((((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                      << 3U) | ((8U 
                                                 == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                << 2U)) 
                                    | (((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                        << 1U) | (8U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy)))) 
                                   << 4U) | ((((8U 
                                                == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                               << 3U) 
                                              | ((8U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                 << 2U)) 
                                             | (((8U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                 << 1U) 
                                                | (8U 
                                                   == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))))),8);
        bufp->chgCData(oldp+147,(((((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                      << 3U) | ((0U 
                                                 == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                << 2U)) 
                                    | (((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                        << 1U) | (0U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy)))) 
                                   << 4U) | ((((0U 
                                                == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                               << 3U) 
                                              | ((0U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                 << 2U)) 
                                             | (((0U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                                 << 1U) 
                                                | (0U 
                                                   == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy)))))),8);
        bufp->chgCData(oldp+148,(((((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                      << 3U) | ((0U 
                                                 == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                << 2U)) 
                                    | (((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                        << 1U) | (0U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy)))) 
                                   << 4U) | ((((0U 
                                                == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                               << 3U) 
                                              | ((0U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                 << 2U)) 
                                             | (((0U 
                                                  == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                                 << 1U) 
                                                | (0U 
                                                   == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy)))))),8);
        bufp->chgWData(oldp+149,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data),256);
        bufp->chgIData(oldp+157,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id),32);
        bufp->chgCData(oldp+158,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err),8);
        bufp->chgCData(oldp+159,(((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_89) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_88) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_91) 
                                        << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_90))) 
                                   << 4U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_93) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_92) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_95) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_94))))),8);
        bufp->chgQData(oldp+160,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt),52);
        bufp->chgCData(oldp+162,((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                                   << 4U) | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                        >> 1U))))),7);
        bufp->chgCData(oldp+163,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid),8);
        bufp->chgBit(oldp+164,(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+165,(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]),3);
        bufp->chgBit(oldp+166,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+167,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                  & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                     & (- (IData)((
                                                   VL_LTS_III(32, 1U, 
                                                              VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                   & Vtb_sys__ConstPool__TABLE_h3b57699f_0
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant])))))),8);
        bufp->chgCData(oldp+168,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr),3);
        bufp->chgBit(oldp+169,(VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))));
        bufp->chgCData(oldp+170,((0x000000ffU & (((0x0000ffffU 
                                                   & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                 >> 8U))),8);
        bufp->chgCData(oldp+171,((0x000000ffU & ((0x0000ffffU 
                                                  & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgCData(oldp+172,((0x000000ffU & ((~ 
                                                  (((0x0000ffffU 
                                                     & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                   - (IData)(1U))) 
                                                 & ((0x0000ffffU 
                                                     & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr))))),8);
        bufp->chgCData(oldp+173,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant),8);
        bufp->chgCData(oldp+174,((0x000000ffU & (((~ 
                                                   (((0x0000ffffU 
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
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgSData(oldp+175,((0x000007ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),11);
        bufp->chgIData(oldp+176,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+177,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+178,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+179,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+180,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+181,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+182,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgBit(oldp+183,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+184,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+185,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id),7);
        bufp->chgBit(oldp+186,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+187,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+188,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+189,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+190,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+191,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+192,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id),7);
        bufp->chgBit(oldp+193,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+194,(((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_81) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_80) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_83) 
                                        << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_82))) 
                                   << 4U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_85) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_84) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_87) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_86))))),8);
        bufp->chgQData(oldp+195,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt),52);
        bufp->chgCData(oldp+197,((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                   << 4U) | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                        >> 1U))))),7);
        bufp->chgCData(oldp+198,((0x000000ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                         >> 8U)))),8);
        bufp->chgBit(oldp+199,(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+200,(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]),3);
        bufp->chgBit(oldp+201,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+202,((0x000000ffU & ((IData)(
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
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]))))))),8);
        bufp->chgCData(oldp+203,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr),3);
        bufp->chgBit(oldp+204,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x000000ffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                             >> 8U)))))));
        bufp->chgCData(oldp+205,((0x000000ffU & (((0x0000ffffU 
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
                                                 >> 8U))),8);
        bufp->chgCData(oldp+206,((0x000000ffU & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 8U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 8U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgCData(oldp+207,((0x000000ffU & ((~ 
                                                  (((0x0000ffffU 
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
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr))))),8);
        bufp->chgCData(oldp+208,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant),8);
        bufp->chgCData(oldp+209,((0x000000ffU & (((~ 
                                                   (((0x0000ffffU 
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
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgSData(oldp+210,((0x000007ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),11);
        bufp->chgIData(oldp+211,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+212,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+213,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+214,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+215,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+216,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+217,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgBit(oldp+218,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+219,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+220,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id),7);
        bufp->chgBit(oldp+221,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+222,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+223,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+224,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+225,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+226,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+227,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id),7);
        bufp->chgBit(oldp+228,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+229,(((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_73) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_72) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_75) 
                                        << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_74))) 
                                   << 4U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_77) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_79) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_78))))),8);
        bufp->chgQData(oldp+230,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt),52);
        bufp->chgCData(oldp+232,((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                   << 4U) | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                        >> 1U))))),7);
        bufp->chgCData(oldp+233,((0x000000ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                         >> 0x00000010U)))),8);
        bufp->chgBit(oldp+234,(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+235,(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]),3);
        bufp->chgBit(oldp+236,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+237,((0x000000ffU & ((IData)(
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
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]))))))),8);
        bufp->chgCData(oldp+238,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr),3);
        bufp->chgBit(oldp+239,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x000000ffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                             >> 0x00000010U)))))));
        bufp->chgCData(oldp+240,((0x000000ffU & (((0x0000ffffU 
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
                                                 >> 8U))),8);
        bufp->chgCData(oldp+241,((0x000000ffU & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000010U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000010U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgCData(oldp+242,((0x000000ffU & ((~ 
                                                  (((0x0000ffffU 
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
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr))))),8);
        bufp->chgCData(oldp+243,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant),8);
        bufp->chgCData(oldp+244,((0x000000ffU & (((~ 
                                                   (((0x0000ffffU 
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
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgSData(oldp+245,((0x000007ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),11);
        bufp->chgIData(oldp+246,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+247,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+248,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+249,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+250,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+251,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+252,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgBit(oldp+253,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+254,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+255,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id),7);
        bufp->chgBit(oldp+256,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+257,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+258,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+259,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+260,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+261,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+262,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_id),7);
        bufp->chgBit(oldp+263,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+264,(((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_65) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_64) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_67) 
                                        << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_66))) 
                                   << 4U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_69) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_68) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_71) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_70))))),8);
        bufp->chgQData(oldp+265,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt),52);
        bufp->chgCData(oldp+267,((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                   << 4U) | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                        >> 1U))))),7);
        bufp->chgCData(oldp+268,((0x000000ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                         >> 0x00000018U)))),8);
        bufp->chgBit(oldp+269,(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+270,(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]),3);
        bufp->chgBit(oldp+271,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+272,((0x000000ffU & ((IData)(
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
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]))))))),8);
        bufp->chgCData(oldp+273,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr),3);
        bufp->chgBit(oldp+274,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x000000ffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                             >> 0x00000018U)))))));
        bufp->chgCData(oldp+275,((0x000000ffU & (((0x0000ffffU 
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
                                                 >> 8U))),8);
        bufp->chgCData(oldp+276,((0x000000ffU & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000018U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000018U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgCData(oldp+277,((0x000000ffU & ((~ 
                                                  (((0x0000ffffU 
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
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr))))),8);
        bufp->chgCData(oldp+278,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant),8);
        bufp->chgCData(oldp+279,((0x000000ffU & (((~ 
                                                   (((0x0000ffffU 
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
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgSData(oldp+280,((0x000007ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),11);
        bufp->chgIData(oldp+281,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+282,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+283,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+284,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+285,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+286,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+287,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgBit(oldp+288,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+289,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+290,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id),7);
        bufp->chgBit(oldp+291,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+292,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+293,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+294,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+295,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+296,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+297,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_id),7);
        bufp->chgBit(oldp+298,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+299,(((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_59) 
                                        << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58))) 
                                   << 4U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_61) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_60) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_62))))),8);
        bufp->chgQData(oldp+300,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt),52);
        bufp->chgCData(oldp+302,((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]) 
                                   << 4U) | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt 
                                                        >> 1U))))),7);
        bufp->chgCData(oldp+303,((0x000000ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                         >> 0x00000020U)))),8);
        bufp->chgBit(oldp+304,(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+305,(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]),3);
        bufp->chgBit(oldp+306,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+307,((0x000000ffU & ((IData)(
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
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant]))))))),8);
        bufp->chgCData(oldp+308,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr),3);
        bufp->chgBit(oldp+309,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x000000ffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                             >> 0x00000020U)))))));
        bufp->chgCData(oldp+310,((0x000000ffU & (((0x0000ffffU 
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
                                                 >> 8U))),8);
        bufp->chgCData(oldp+311,((0x000000ffU & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000020U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000020U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgCData(oldp+312,((0x000000ffU & ((~ 
                                                  (((0x0000ffffU 
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
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr))))),8);
        bufp->chgCData(oldp+313,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__grant),8);
        bufp->chgCData(oldp+314,((0x000000ffU & (((~ 
                                                   (((0x0000ffffU 
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
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgSData(oldp+315,((0x000007ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),11);
        bufp->chgIData(oldp+316,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+317,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+318,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+319,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+320,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+321,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+322,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgBit(oldp+323,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+324,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+325,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_scheduler__pp1_id),7);
        bufp->chgBit(oldp+326,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+327,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+328,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+329,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+330,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+331,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+332,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_id),7);
        bufp->chgBit(oldp+333,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+334,(((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_48) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                                        << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50))) 
                                   << 4U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_55) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54))))),8);
        bufp->chgQData(oldp+335,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt),52);
        bufp->chgCData(oldp+337,((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]) 
                                   << 4U) | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt 
                                                        >> 1U))))),7);
        bufp->chgCData(oldp+338,((0x000000ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                         >> 0x00000028U)))),8);
        bufp->chgBit(oldp+339,(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+340,(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]),3);
        bufp->chgBit(oldp+341,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+342,((0x000000ffU & ((IData)(
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
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant]))))))),8);
        bufp->chgCData(oldp+343,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr),3);
        bufp->chgBit(oldp+344,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x000000ffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                             >> 0x00000028U)))))));
        bufp->chgCData(oldp+345,((0x000000ffU & (((0x0000ffffU 
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
                                                 >> 8U))),8);
        bufp->chgCData(oldp+346,((0x000000ffU & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000028U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000028U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgCData(oldp+347,((0x000000ffU & ((~ 
                                                  (((0x0000ffffU 
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
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr))))),8);
        bufp->chgCData(oldp+348,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__grant),8);
        bufp->chgCData(oldp+349,((0x000000ffU & (((~ 
                                                   (((0x0000ffffU 
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
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgSData(oldp+350,((0x000007ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),11);
        bufp->chgIData(oldp+351,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+352,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+353,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+354,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+355,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+356,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+357,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgBit(oldp+358,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+359,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+360,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_scheduler__pp1_id),7);
        bufp->chgBit(oldp+361,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+362,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+363,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+364,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+365,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+366,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+367,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_id),7);
        bufp->chgBit(oldp+368,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+369,(((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_41) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_40) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_43) 
                                        << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42))) 
                                   << 4U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_47) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))))),8);
        bufp->chgQData(oldp+370,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt),52);
        bufp->chgCData(oldp+372,((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]) 
                                   << 4U) | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt 
                                                        >> 1U))))),7);
        bufp->chgCData(oldp+373,((0x000000ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                         >> 0x00000030U)))),8);
        bufp->chgBit(oldp+374,(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+375,(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]),3);
        bufp->chgBit(oldp+376,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+377,((0x000000ffU & ((IData)(
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
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant]))))))),8);
        bufp->chgCData(oldp+378,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr),3);
        bufp->chgBit(oldp+379,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x000000ffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                             >> 0x00000030U)))))));
        bufp->chgCData(oldp+380,((0x000000ffU & (((0x0000ffffU 
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
                                                 >> 8U))),8);
        bufp->chgCData(oldp+381,((0x000000ffU & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000030U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000030U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgCData(oldp+382,((0x000000ffU & ((~ 
                                                  (((0x0000ffffU 
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
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr))))),8);
        bufp->chgCData(oldp+383,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__grant),8);
        bufp->chgCData(oldp+384,((0x000000ffU & (((~ 
                                                   (((0x0000ffffU 
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
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgSData(oldp+385,((0x000007ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),11);
        bufp->chgIData(oldp+386,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+387,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+388,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+389,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+390,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+391,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+392,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgBit(oldp+393,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+394,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+395,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_scheduler__pp1_id),7);
        bufp->chgBit(oldp+396,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+397,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+398,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+399,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+400,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+401,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+402,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_id),7);
        bufp->chgBit(oldp+403,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+404,(((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_33) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_32) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_35) 
                                        << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_34))) 
                                   << 4U) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_37) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_36) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_38))))),8);
        bufp->chgQData(oldp+405,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt),52);
        bufp->chgCData(oldp+407,((((IData)(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]) 
                                   << 4U) | (0x0000000fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt 
                                                        >> 1U))))),7);
        bufp->chgCData(oldp+408,((0x000000ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                         >> 0x00000038U)))),8);
        bufp->chgBit(oldp+409,(Vtb_sys__ConstPool__TABLE_h3b57699f_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+410,(Vtb_sys__ConstPool__TABLE_hce1a8acc_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]),3);
        bufp->chgBit(oldp+411,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgCData(oldp+412,((0x000000ffU & ((IData)(
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
                                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant]))))))),8);
        bufp->chgCData(oldp+413,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr),3);
        bufp->chgBit(oldp+414,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x000000ffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                             >> 0x00000038U)))))));
        bufp->chgCData(oldp+415,((0x000000ffU & (((0x0000ffffU 
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
                                                 >> 8U))),8);
        bufp->chgCData(oldp+416,((0x000000ffU & ((0x0000ffffU 
                                                  & ((0x0000ff00U 
                                                      & ((IData)(
                                                                 (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                  >> 0x00000038U)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid 
                                                                   >> 0x00000038U))))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgCData(oldp+417,((0x000000ffU & ((~ 
                                                  (((0x0000ffffU 
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
                                                    >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr))))),8);
        bufp->chgCData(oldp+418,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__grant),8);
        bufp->chgCData(oldp+419,((0x000000ffU & (((~ 
                                                   (((0x0000ffffU 
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
                                                 << (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_arb__DOT__ptr)))),8);
        bufp->chgSData(oldp+420,((0x000007ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),11);
        bufp->chgIData(oldp+421,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+422,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+423,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+424,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+425,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+426,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+427,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgBit(oldp+428,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+429,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+430,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_scheduler__pp1_id),7);
        bufp->chgBit(oldp+431,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+432,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+433,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+434,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+435,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+436,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+437,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_id),7);
        bufp->chgBit(oldp+438,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgBit(oldp+439,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+440,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+441,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]),52);
        bufp->chgBit(oldp+443,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+444,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+445,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 446, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+462,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+463,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+464,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy),4);
        bufp->chgBit(oldp+465,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+466,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+467,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]),52);
        bufp->chgBit(oldp+469,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+470,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+471,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 472, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+488,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+489,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+490,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy),4);
        bufp->chgBit(oldp+491,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+492,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+493,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr]),52);
        bufp->chgBit(oldp+495,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+496,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+497,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 498, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+514,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+515,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+516,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy),4);
        bufp->chgBit(oldp+517,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+518,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+519,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr]),52);
        bufp->chgBit(oldp+521,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+522,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+523,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 524, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+540,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+541,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+542,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy),4);
        bufp->chgBit(oldp+543,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__4__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+544,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+545,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr]),52);
        bufp->chgBit(oldp+547,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+548,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+549,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 550, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+566,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+567,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+568,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__4__KET____DOT__u_req_fifo__DOT__occupancy),4);
        bufp->chgBit(oldp+569,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__5__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+570,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+571,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr]),52);
        bufp->chgBit(oldp+573,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+574,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+575,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 576, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+592,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+593,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+594,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__5__KET____DOT__u_req_fifo__DOT__occupancy),4);
        bufp->chgBit(oldp+595,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__6__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+596,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+597,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr]),52);
        bufp->chgBit(oldp+599,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+600,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+601,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 602, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+618,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+619,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+620,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__6__KET____DOT__u_req_fifo__DOT__occupancy),4);
        bufp->chgBit(oldp+621,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__7__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+622,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+623,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr]),52);
        bufp->chgBit(oldp+625,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+626,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+627,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 628, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+644,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+645,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+646,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__7__KET____DOT__u_req_fifo__DOT__occupancy),4);
        bufp->chgQData(oldp+647,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[0U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))))),37);
        bufp->chgQData(oldp+649,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+651,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid))));
        bufp->chgBit(oldp+652,((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+653,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[0U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))))),37);
        bufp->chgBit(oldp+655,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+656,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+658,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+659,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 660, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+676,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+677,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+678,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy),4);
        bufp->chgQData(oldp+679,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[1U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 3U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 1U))))))),37);
        bufp->chgQData(oldp+681,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+683,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+684,((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+685,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[1U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 3U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 1U))))))),37);
        bufp->chgBit(oldp+687,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+688,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+690,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+691,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 692, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+708,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+709,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+710,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy),4);
        bufp->chgQData(oldp+711,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[2U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 7U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 2U))))))),37);
        bufp->chgQData(oldp+713,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+715,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+716,((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+717,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[2U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 7U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 2U))))))),37);
        bufp->chgBit(oldp+719,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+720,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+722,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+723,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 724, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+740,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+741,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+742,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy),4);
        bufp->chgQData(oldp+743,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[3U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 0x0000000bU)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 3U))))))),37);
        bufp->chgQData(oldp+745,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+747,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 3U))));
        bufp->chgBit(oldp+748,((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+749,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[3U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 0x0000000bU)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 3U))))))),37);
        bufp->chgBit(oldp+751,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+752,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+754,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+755,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 756, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+772,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+773,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+774,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy),4);
        bufp->chgQData(oldp+775,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[4U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 0x0000000fU)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 4U))))))),37);
        bufp->chgQData(oldp+777,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+779,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 4U))));
        bufp->chgBit(oldp+780,((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+781,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[4U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 0x0000000fU)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 4U))))))),37);
        bufp->chgBit(oldp+783,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+784,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+786,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+787,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 788, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+804,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+805,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+806,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__4__KET____DOT__u_rsp_fifo__DOT__occupancy),4);
        bufp->chgQData(oldp+807,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[5U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 0x00000013U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 5U))))))),37);
        bufp->chgQData(oldp+809,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+811,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 5U))));
        bufp->chgBit(oldp+812,((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+813,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[5U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 0x00000013U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 5U))))))),37);
        bufp->chgBit(oldp+815,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+816,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+818,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+819,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 820, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+836,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+837,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+838,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__5__KET____DOT__u_rsp_fifo__DOT__occupancy),4);
        bufp->chgQData(oldp+839,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[6U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 0x00000017U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 6U))))))),37);
        bufp->chgQData(oldp+841,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+843,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 6U))));
        bufp->chgBit(oldp+844,((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+845,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[6U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 0x00000017U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 6U))))))),37);
        bufp->chgBit(oldp+847,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+848,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+850,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+851,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 852, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+868,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+869,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+870,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__6__KET____DOT__u_rsp_fifo__DOT__occupancy),4);
        bufp->chgQData(oldp+871,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[7U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 0x0000001bU)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 7U))))))),37);
        bufp->chgQData(oldp+873,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+875,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 7U))));
        bufp->chgBit(oldp+876,((8U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+877,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[7U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & (vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id 
                                                                 >> 0x0000001bU)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 7U))))))),37);
        bufp->chgBit(oldp+879,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+880,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+882,((8U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+883,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 884, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+900,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__wr_ptr),3);
        bufp->chgCData(oldp+901,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__rd_ptr),3);
        bufp->chgCData(oldp+902,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__7__KET____DOT__u_rsp_fifo__DOT__occupancy),4);
        bufp->chgIData(oldp+903,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__i),32);
        bufp->chgIData(oldp+904,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__b),32);
        bufp->chgIData(oldp+905,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports),24);
        bufp->chgCData(oldp+906,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p),3);
        bufp->chgBit(oldp+907,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found));
        bufp->chgCData(oldp+908,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        __Vtemp_18[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr];
        __Vtemp_18[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr];
        __Vtemp_18[2U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr];
        __Vtemp_18[3U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr];
        __Vtemp_18[4U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_addr];
        __Vtemp_18[5U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_addr];
        __Vtemp_18[6U] = (IData)((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_addr])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_addr]))));
        __Vtemp_18[7U] = (IData)(((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_addr])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_addr]))) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+909,(__Vtemp_18),256);
        bufp->chgIData(oldp+917,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+918,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+919,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+920,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+921,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__4__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+922,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__5__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+923,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__6__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+924,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__7__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
    }
    bufp->chgBit(oldp+925,(vlSelfRef.tb_sys__DOT__clk));
    bufp->chgBit(oldp+926,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_req));
    bufp->chgCData(oldp+927,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_addr),7);
    bufp->chgIData(oldp+928,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__z),32);
    bufp->chgIData(oldp+929,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__y),32);
    bufp->chgIData(oldp+930,(vlSelfRef.tb_sys__DOT__u_env__DOT__test_id),32);
    bufp->chgIData(oldp+931,(vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors),32);
}

void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*51:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[0]),52);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),52);
    bufp->chgQData(oldp+4,(__VdtypeVar[2]),52);
    bufp->chgQData(oldp+6,(__VdtypeVar[3]),52);
    bufp->chgQData(oldp+8,(__VdtypeVar[4]),52);
    bufp->chgQData(oldp+10,(__VdtypeVar[5]),52);
    bufp->chgQData(oldp+12,(__VdtypeVar[6]),52);
    bufp->chgQData(oldp+14,(__VdtypeVar[7]),52);
}

void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[0]),37);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),37);
    bufp->chgQData(oldp+4,(__VdtypeVar[2]),37);
    bufp->chgQData(oldp+6,(__VdtypeVar[3]),37);
    bufp->chgQData(oldp+8,(__VdtypeVar[4]),37);
    bufp->chgQData(oldp+10,(__VdtypeVar[5]),37);
    bufp->chgQData(oldp+12,(__VdtypeVar[6]),37);
    bufp->chgQData(oldp+14,(__VdtypeVar[7]),37);
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
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
