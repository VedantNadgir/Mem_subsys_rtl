// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_req_fifo.h for the primary calling header

#include "Vtb_req_fifo__pch.h"

void Vtb_req_fifo___024root___ctor_var_reset(Vtb_req_fifo___024root* vlSelf);

Vtb_req_fifo___024root::Vtb_req_fifo___024root(Vtb_req_fifo__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_req_fifo___024root___ctor_var_reset(this);
}

void Vtb_req_fifo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_req_fifo___024root::~Vtb_req_fifo___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
