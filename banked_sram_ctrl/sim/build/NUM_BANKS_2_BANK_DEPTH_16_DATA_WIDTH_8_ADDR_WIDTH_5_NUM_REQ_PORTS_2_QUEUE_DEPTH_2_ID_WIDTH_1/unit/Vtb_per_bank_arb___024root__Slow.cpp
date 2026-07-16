// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_per_bank_arb.h for the primary calling header

#include "Vtb_per_bank_arb__pch.h"

void Vtb_per_bank_arb___024root___ctor_var_reset(Vtb_per_bank_arb___024root* vlSelf);

Vtb_per_bank_arb___024root::Vtb_per_bank_arb___024root(Vtb_per_bank_arb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_per_bank_arb___024root___ctor_var_reset(this);
}

void Vtb_per_bank_arb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_per_bank_arb___024root::~Vtb_per_bank_arb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
