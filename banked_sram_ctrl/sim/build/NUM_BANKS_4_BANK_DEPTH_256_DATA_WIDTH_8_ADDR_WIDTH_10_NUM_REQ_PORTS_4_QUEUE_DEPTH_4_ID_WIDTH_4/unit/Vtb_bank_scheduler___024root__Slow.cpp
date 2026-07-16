// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bank_scheduler.h for the primary calling header

#include "Vtb_bank_scheduler__pch.h"

void Vtb_bank_scheduler___024root___ctor_var_reset(Vtb_bank_scheduler___024root* vlSelf);

Vtb_bank_scheduler___024root::Vtb_bank_scheduler___024root(Vtb_bank_scheduler__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_bank_scheduler___024root___ctor_var_reset(this);
}

void Vtb_bank_scheduler___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_bank_scheduler___024root::~Vtb_bank_scheduler___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
