// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sys.h for the primary calling header

#include "Vtb_sys__pch.h"

void Vtb_sys_bank_scheduler__pi2___ctor_var_reset(Vtb_sys_bank_scheduler__pi2* vlSelf);

Vtb_sys_bank_scheduler__pi2::Vtb_sys_bank_scheduler__pi2() = default;
Vtb_sys_bank_scheduler__pi2::~Vtb_sys_bank_scheduler__pi2() = default;

void Vtb_sys_bank_scheduler__pi2::ctor(Vtb_sys__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_sys_bank_scheduler__pi2___ctor_var_reset(this);
}

void Vtb_sys_bank_scheduler__pi2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_sys_bank_scheduler__pi2::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
