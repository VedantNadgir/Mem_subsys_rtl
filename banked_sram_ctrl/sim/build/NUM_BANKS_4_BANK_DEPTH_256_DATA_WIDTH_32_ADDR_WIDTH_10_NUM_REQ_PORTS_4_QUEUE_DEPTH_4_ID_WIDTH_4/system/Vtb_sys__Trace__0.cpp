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
void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*50:0*/, 4>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 4>& __VdtypeVar);
void Vtb_sys___024root__trace_chg_dtype____2(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vtb_sys___024root__trace_chg_0_sub_0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_0_sub_0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_sys__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid),4);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we),4);
        bufp->chgQData(oldp+3,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr),40);
        bufp->chgWData(oldp+5,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data),128);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe),16);
        bufp->chgSData(oldp+10,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id),16);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready),4);
        bufp->chgQData(oldp+12,((((QData)((IData)((0x000003ffU 
                                                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[0U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 << 5U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))))),51);
        bufp->chgBit(oldp+14,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid))));
        bufp->chgQData(oldp+15,((((QData)((IData)((0x000003ffU 
                                                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr)))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[0U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 << 5U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we))))))))),51);
        bufp->chgQData(oldp+17,((((QData)((IData)((0x000003ffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                              >> 0x0000000aU))))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[1U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 << 1U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    >> 3U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 1U))))))))),51);
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 1U))));
        bufp->chgQData(oldp+20,((((QData)((IData)((0x000003ffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                              >> 0x0000000aU))))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[1U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 << 1U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    >> 3U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 1U))))))))),51);
        bufp->chgQData(oldp+22,((((QData)((IData)((0x000003ffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                              >> 0x00000014U))))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[2U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 >> 3U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    >> 7U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 2U))))))))),51);
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 2U))));
        bufp->chgQData(oldp+25,((((QData)((IData)((0x000003ffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                              >> 0x00000014U))))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[2U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 >> 3U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    >> 7U)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 2U))))))))),51);
        bufp->chgQData(oldp+27,((((QData)((IData)((0x000003ffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                              >> 0x0000001eU))))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[3U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 >> 7U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    >> 0x0000000bU)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 3U))))))))),51);
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_valid) 
                                     >> 3U))));
        bufp->chgQData(oldp+30,((((QData)((IData)((0x000003ffU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_addr 
                                                              >> 0x0000001eU))))) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_data[3U])) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x000001e0U 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_strobe) 
                                                                 >> 7U)) 
                                                             | ((0x0000001eU 
                                                                 & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_id) 
                                                                    >> 0x0000000bU)) 
                                                                | (1U 
                                                                   & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_req_we) 
                                                                      >> 3U))))))))),51);
        bufp->chgBit(oldp+32,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 1U))));
        bufp->chgBit(oldp+34,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 2U))));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__mon_rsp_ready) 
                                     >> 3U))));
        bufp->chgIData(oldp+36,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__error_count),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_sb__DOT__check_count),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+38,(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready),4);
        bufp->chgCData(oldp+39,(((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                     << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
        bufp->chgCData(oldp+40,(((((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                          << 1U)) | 
                                   (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))) 
                                  << 2U) | ((2U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                           [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]))))),4);
        __Vtemp_2[0U] = (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_2[1U] = (IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                 >> 5U));
        __Vtemp_2[2U] = (IData)((((QData)((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                   >> 5U))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                                     >> 5U)))));
        __Vtemp_2[3U] = (IData)(((((QData)((IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                    >> 5U))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                     >> 5U)))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+41,(__Vtemp_2),128);
        bufp->chgSData(oldp+45,(((((0x000000f0U & ((IData)(
                                                           (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr] 
                                                            >> 1U)) 
                                                   << 4U)) 
                                   | (0x0000000fU & (IData)(
                                                            (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
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
                                                          >> 1U)))))),16);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_sys__DOT__csr_rdata),32);
        bufp->chgBit(oldp+47,(vlSelfRef.tb_sys__DOT__csr_ack));
        bufp->chgCData(oldp+48,(((((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                   << 3U) | ((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                     << 1U) | (0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
        bufp->chgWData(oldp+49,(vlSelfRef.tb_sys__DOT__u_dut__DOT__req_fifo_head_pkt),204);
        bufp->chgSData(oldp+56,(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid),16);
        bufp->chgCData(oldp+57,((((((IData)(Vtb_sys__ConstPool__TABLE_h8665d168_0
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                    << 1U) | Vtb_sys__ConstPool__TABLE_h8665d168_0
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                  << 2U) | (((IData)(Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                             << 1U) 
                                            | Vtb_sys__ConstPool__TABLE_h8665d168_0
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]))),4);
        bufp->chgCData(oldp+58,((((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                                    << 2U) | Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                                  << 4U) | (((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                                     [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                                             << 2U) 
                                            | Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]))),8);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_valid),4);
        bufp->chgWData(oldp+60,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_rdata),128);
        bufp->chgIData(oldp+64,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_id),24);
        bufp->chgCData(oldp+65,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_we),4);
        bufp->chgCData(oldp+66,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__pp1_err),4);
        bufp->chgCData(oldp+67,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                   << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready) 
                                     << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready)))),4);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid),4);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__rsp_fifo_ready),4);
        bufp->chgCData(oldp+70,(((((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 3U) | ((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                     << 1U) | (4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
        bufp->chgSData(oldp+71,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__conflict),16);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__bank_idle),4);
        bufp->chgCData(oldp+73,((0x0000000fU & (~ (IData)(vlSelfRef.tb_sys__DOT__u_env__DOT__u_drv__DOT__req_ready)))),4);
        bufp->chgCData(oldp+74,(((((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                   << 3U) | ((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                     << 1U) | (4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
        bufp->chgCData(oldp+75,(((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                   << 3U) | ((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy)) 
                                     << 1U) | (0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))))),4);
        bufp->chgCData(oldp+76,(((((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                   << 3U) | ((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                             << 2U)) 
                                 | (((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy)) 
                                     << 1U) | (0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))))),4);
        bufp->chgWData(oldp+77,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data),128);
        bufp->chgSData(oldp+81,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id),16);
        bufp->chgCData(oldp+82,(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err),4);
        bufp->chgCData(oldp+83,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid),4);
        bufp->chgBit(oldp+84,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                              [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+85,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+86,(((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                 & ((~ (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant)) 
                                    & (- (IData)((VL_LTS_III(32, 1U, 
                                                             VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                  & Vtb_sys__ConstPool__TABLE_h8665d168_0
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant])))))),4);
        bufp->chgCData(oldp+87,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+88,(VL_LTS_III(32, 1U, VL_COUNTONES_I((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid)))));
        bufp->chgCData(oldp+89,((0x0000000fU & (((0x000000ffU 
                                                  & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)) 
                                                >> 4U))),4);
        bufp->chgCData(oldp+90,((0x0000000fU & ((0x000000ffU 
                                                 & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__req_valid))) 
                                                >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+91,((0x0000000fU & ((~ 
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
        bufp->chgCData(oldp+92,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+93,((0x0000000fU & (((~ 
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
        bufp->chgBit(oldp+94,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+95,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+96,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+97,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+98,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+99,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+100,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+101,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+102,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+103,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+104,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+105,((0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 4U))),4);
        bufp->chgBit(oldp+106,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+107,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+108,((0x0000000fU & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
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
        bufp->chgCData(oldp+109,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+110,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 4U))))));
        bufp->chgCData(oldp+111,((0x0000000fU & (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 4U)))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)) 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+112,((0x0000000fU & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                           >> 4U)))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+113,((0x0000000fU & ((~ 
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
        bufp->chgCData(oldp+114,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+115,((0x0000000fU & (((~ 
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
        bufp->chgBit(oldp+116,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+117,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+118,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+119,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+120,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+121,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+122,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+123,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+124,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+125,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+126,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+127,((0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 8U))),4);
        bufp->chgBit(oldp+128,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+129,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+130,((0x0000000fU & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
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
        bufp->chgCData(oldp+131,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+132,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 8U))))));
        bufp->chgCData(oldp+133,((0x0000000fU & (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                          >> 4U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 8U)))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)) 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+134,((0x0000000fU & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                         >> 4U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                           >> 8U)))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+135,((0x0000000fU & ((~ 
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
        bufp->chgCData(oldp+136,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+137,((0x0000000fU & (((~ 
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
        bufp->chgBit(oldp+138,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+139,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+140,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+141,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+142,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+143,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+144,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+145,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+146,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+147,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+148,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgCData(oldp+149,((0x0000000fU & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                 >> 0x0000000cU))),4);
        bufp->chgBit(oldp+150,(Vtb_sys__ConstPool__TABLE_h8665d168_0
                               [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]));
        bufp->chgCData(oldp+151,(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]),2);
        bufp->chgCData(oldp+152,((0x0000000fU & (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
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
        bufp->chgCData(oldp+153,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr),2);
        bufp->chgBit(oldp+154,(VL_LTS_III(32, 1U, VL_COUNTONES_I(
                                                                 (0x0000000fU 
                                                                  & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                                     >> 0x0000000cU))))));
        bufp->chgCData(oldp+155,((0x0000000fU & (((0x000000ffU 
                                                   & ((0x000000f0U 
                                                       & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                          >> 8U)) 
                                                      | (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                            >> 0x0000000cU)))) 
                                                  >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)) 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+156,((0x0000000fU & ((0x000000ffU 
                                                  & ((0x000000f0U 
                                                      & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                         >> 8U)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__bank_req_valid) 
                                                           >> 0x0000000cU)))) 
                                                 >> (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__ptr)))),4);
        bufp->chgCData(oldp+157,((0x0000000fU & ((~ 
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
        bufp->chgCData(oldp+158,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant),4);
        bufp->chgCData(oldp+159,((0x0000000fU & (((~ 
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
        bufp->chgBit(oldp+160,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_valid));
        bufp->chgIData(oldp+161,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_rdata),32);
        bufp->chgCData(oldp+162,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_id),6);
        bufp->chgBit(oldp+163,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_we));
        bufp->chgBit(oldp+164,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_scheduler__pp1_err));
        bufp->chgBit(oldp+165,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__bank_pp1_ready));
        bufp->chgBit(oldp+166,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_valid));
        bufp->chgCData(oldp+167,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_strobe),4);
        bufp->chgBit(oldp+168,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_we));
        bufp->chgCData(oldp+169,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_id),6);
        bufp->chgBit(oldp+170,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_err));
        bufp->chgBit(oldp+171,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__0__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+172,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+173,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr]),51);
        bufp->chgBit(oldp+175,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+176,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 177, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+185,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+186,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+187,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+188,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__1__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+189,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+190,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr]),51);
        bufp->chgBit(oldp+192,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+193,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 194, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+202,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+203,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+204,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+205,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__2__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+206,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+207,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr]),51);
        bufp->chgBit(oldp+209,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+210,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 211, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+219,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+220,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+221,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgBit(oldp+222,(vlSelfRef.tb_sys__DOT__u_dut__DOT____Vcellout__g_req_ports__BRA__3__KET____DOT__u_req_fifo__push_ready));
        bufp->chgBit(oldp+223,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+224,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr]),51);
        bufp->chgBit(oldp+226,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+227,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____0(vlSelf, bufp, 228, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+236,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+237,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+238,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__occupancy),3);
        bufp->chgQData(oldp+239,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[0U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))))),37);
        bufp->chgQData(oldp+241,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+243,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid))));
        bufp->chgBit(oldp+244,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+245,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[0U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err))))))),37);
        bufp->chgBit(oldp+247,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+248,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+250,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+251,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 252, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+260,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+261,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+262,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__0__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        bufp->chgQData(oldp+263,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[1U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 >> 3U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 1U))))))),37);
        bufp->chgQData(oldp+265,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+267,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+268,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+269,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[1U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 >> 3U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 1U))))))),37);
        bufp->chgBit(oldp+271,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+272,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+274,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+275,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 276, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+284,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+285,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+286,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__1__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        bufp->chgQData(oldp+287,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[2U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 >> 7U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 2U))))))),37);
        bufp->chgQData(oldp+289,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+291,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+292,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+293,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[2U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 >> 7U)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 2U))))))),37);
        bufp->chgBit(oldp+295,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+296,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+298,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+299,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 300, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+308,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+309,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+310,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__2__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        bufp->chgQData(oldp+311,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[3U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 >> 0x0000000bU)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 3U))))))),37);
        bufp->chgQData(oldp+313,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+315,((1U & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__rsp_fifo_push_valid) 
                                      >> 3U))));
        bufp->chgBit(oldp+316,((4U > (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+317,((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_data[3U])) 
                                   << 5U) | (QData)((IData)(
                                                            ((0x0000001eU 
                                                              & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_id) 
                                                                 >> 0x0000000bU)) 
                                                             | (1U 
                                                                & ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__mux_rsp_err) 
                                                                   >> 3U))))))),37);
        bufp->chgBit(oldp+319,((0U != (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgQData(oldp+320,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr]),37);
        bufp->chgBit(oldp+322,((4U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        bufp->chgBit(oldp+323,((0U == (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy))));
        Vtb_sys___024root__trace_chg_dtype____1(vlSelf, bufp, 324, vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__fifo_mem);
        bufp->chgCData(oldp+332,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+333,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__rd_ptr),2);
        bufp->chgCData(oldp+334,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_rsp_ports__BRA__3__KET____DOT__u_rsp_fifo__DOT__occupancy),3);
        Vtb_sys___024root__trace_chg_dtype____2(vlSelf, bufp, 335, vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__counter);
        bufp->chgIData(oldp+367,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__i),32);
        bufp->chgIData(oldp+368,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__b),32);
        bufp->chgCData(oldp+369,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__dest_ports),8);
        bufp->chgCData(oldp+370,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__p),2);
        bufp->chgBit(oldp+371,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__found));
        bufp->chgCData(oldp+372,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_rsp_mux__DOT__bank_granted),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        __Vtemp_4[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr];
        __Vtemp_4[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
            [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr];
        __Vtemp_4[2U] = (IData)((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                                  [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr])) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]))));
        __Vtemp_4[3U] = (IData)(((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                                   [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                                    [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+373,(__Vtemp_4),128);
        bufp->chgIData(oldp+377,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+378,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+379,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
        bufp->chgIData(oldp+380,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_sram__DOT__mem
                                 [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+381,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop)))),4);
        bufp->chgCData(oldp+382,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready)))),4);
        bufp->chgSData(oldp+383,((((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
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
        bufp->chgCData(oldp+384,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we) 
                                    << 3U) | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we) 
                                      << 1U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we)))),4);
        bufp->chgIData(oldp+385,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                    << 0x00000018U) 
                                   | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                      << 0x00000010U)) 
                                  | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr) 
                                      << 8U) | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr)))),32);
        __Vtemp_6[0U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data;
        __Vtemp_6[1U] = vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data;
        __Vtemp_6[2U] = (IData)((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data)) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data))));
        __Vtemp_6[3U] = (IData)(((((QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data))) 
                                 >> 0x00000020U));
        bufp->chgWData(oldp+386,(__Vtemp_6),128);
        bufp->chgSData(oldp+390,(((((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                      << 8U)) | (((IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe)))),16);
        bufp->chgCData(oldp+391,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_29) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_28) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)))),4);
        bufp->chgQData(oldp+392,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt),51);
        bufp->chgBit(oldp+394,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+395,((0x000003ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),10);
        bufp->chgIData(oldp+396,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+397,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+398,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+399,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+400,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+401,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+402,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgCData(oldp+403,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_24) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)))),4);
        bufp->chgQData(oldp+404,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt),51);
        bufp->chgBit(oldp+406,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+407,((0x000003ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),10);
        bufp->chgIData(oldp+408,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+409,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+410,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+411,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+412,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+413,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+414,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgCData(oldp+415,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_21) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_20) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22)))),4);
        bufp->chgQData(oldp+416,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt),51);
        bufp->chgBit(oldp+418,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+419,((0x000003ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),10);
        bufp->chgIData(oldp+420,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+421,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+422,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+423,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+424,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+425,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+426,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgCData(oldp+427,(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_17) 
                                    << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
                                      << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_18)))),4);
        bufp->chgQData(oldp+428,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt),51);
        bufp->chgBit(oldp+430,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant_ready));
        bufp->chgSData(oldp+431,((0x000003ffU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                         >> 0x00000029U)))),10);
        bufp->chgIData(oldp+432,((IData)((vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                          >> 9U))),32);
        bufp->chgCData(oldp+433,((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                         >> 5U)))),4);
        bufp->chgBit(oldp+434,((1U & (IData)(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt))));
        bufp->chgBit(oldp+435,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_we));
        bufp->chgCData(oldp+436,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_addr),8);
        bufp->chgIData(oldp+437,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__pp0_data),32);
        bufp->chgCData(oldp+438,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_scheduler__DOT__sram_bwe),4);
        bufp->chgBit(oldp+439,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+440,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+441,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__pop));
        bufp->chgBit(oldp+442,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__pop));
    }
    bufp->chgBit(oldp+443,(vlSelfRef.tb_sys__DOT__clk));
    bufp->chgBit(oldp+444,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_req));
    bufp->chgCData(oldp+445,(vlSelfRef.tb_sys__DOT__u_env__DOT__drv_csr_addr),5);
    bufp->chgCData(oldp+446,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__req_accept),4);
    bufp->chgCData(oldp+447,(vlSelfRef.tb_sys__DOT__u_dut__DOT__u_perf__DOT__rsp_issue),4);
    bufp->chgCData(oldp+448,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__0__KET____DOT__grant_pkt 
                                                    >> 1U))))),6);
    bufp->chgCData(oldp+449,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__1__KET____DOT__grant_pkt 
                                                    >> 1U))))),6);
    bufp->chgCData(oldp+450,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__2__KET____DOT__grant_pkt 
                                                    >> 1U))))),6);
    bufp->chgCData(oldp+451,((((IData)(Vtb_sys__ConstPool__TABLE_ha1fb25ee_0
                                       [vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__u_arb__DOT__grant]) 
                               << 4U) | (0x0000000fU 
                                         & (IData)(
                                                   (vlSelfRef.tb_sys__DOT__u_dut__DOT__g_bank__BRA__3__KET____DOT__grant_pkt 
                                                    >> 1U))))),6);
    bufp->chgCData(oldp+452,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__0__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+453,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__1__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+454,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__2__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgCData(oldp+455,(vlSelfRef.tb_sys__DOT__u_dut__DOT__g_req_ports__BRA__3__KET____DOT__u_req_fifo__DOT__nxt_occupancy),3);
    bufp->chgIData(oldp+456,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__z),32);
    bufp->chgIData(oldp+457,(vlSelfRef.tb_sys__DOT__u_dut__DOT__unnamedblk3__DOT__y),32);
    bufp->chgIData(oldp+458,(vlSelfRef.tb_sys__DOT__u_env__DOT__test_id),32);
    bufp->chgIData(oldp+459,(vlSelfRef.tb_sys__DOT__u_env__DOT__total_errors),32);
}

void Vtb_sys___024root__trace_chg_dtype____0(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*50:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____0\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[0]),51);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),51);
    bufp->chgQData(oldp+4,(__VdtypeVar[2]),51);
    bufp->chgQData(oldp+6,(__VdtypeVar[3]),51);
}

void Vtb_sys___024root__trace_chg_dtype____1(Vtb_sys___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sys___024root__trace_chg_dtype____1\n"); );
    Vtb_sys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[0]),37);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),37);
    bufp->chgQData(oldp+4,(__VdtypeVar[2]),37);
    bufp->chgQData(oldp+6,(__VdtypeVar[3]),37);
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
