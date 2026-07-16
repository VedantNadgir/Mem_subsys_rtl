// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SYS__SYMS_H_
#define VERILATED_VTB_SYS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_sys.h"

// INCLUDE MODULE CLASSES
#include "Vtb_sys___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_sys__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_sys* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_sys___024root              TOP;

    // CONSTRUCTORS
    Vtb_sys__Syms(VerilatedContext* contextp, const char* namep, Vtb_sys* modelp);
    ~Vtb_sys__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
