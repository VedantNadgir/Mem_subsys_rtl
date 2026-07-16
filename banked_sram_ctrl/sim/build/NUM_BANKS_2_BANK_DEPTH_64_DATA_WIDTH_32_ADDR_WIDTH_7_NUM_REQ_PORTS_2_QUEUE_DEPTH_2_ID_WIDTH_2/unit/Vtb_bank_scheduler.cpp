// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_bank_scheduler__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_bank_scheduler::Vtb_bank_scheduler(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_bank_scheduler__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_bank_scheduler::Vtb_bank_scheduler(const char* _vcname__)
    : Vtb_bank_scheduler(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_bank_scheduler::~Vtb_bank_scheduler() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_bank_scheduler___024root___eval_debug_assertions(Vtb_bank_scheduler___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_bank_scheduler___024root___eval_static(Vtb_bank_scheduler___024root* vlSelf);
void Vtb_bank_scheduler___024root___eval_initial(Vtb_bank_scheduler___024root* vlSelf);
void Vtb_bank_scheduler___024root___eval_settle(Vtb_bank_scheduler___024root* vlSelf);
void Vtb_bank_scheduler___024root___eval(Vtb_bank_scheduler___024root* vlSelf);

void Vtb_bank_scheduler::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_bank_scheduler::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_bank_scheduler___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_bank_scheduler___024root___eval_static(&(vlSymsp->TOP));
        Vtb_bank_scheduler___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_bank_scheduler___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_bank_scheduler___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_bank_scheduler::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_bank_scheduler::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_bank_scheduler::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_bank_scheduler::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_bank_scheduler::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_bank_scheduler___024root___eval_final(Vtb_bank_scheduler___024root* vlSelf);

VL_ATTR_COLD void Vtb_bank_scheduler::final() {
    contextp()->executingFinal(true);
    Vtb_bank_scheduler___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_bank_scheduler::hierName() const { return vlSymsp->name(); }
const char* Vtb_bank_scheduler::modelName() const { return "Vtb_bank_scheduler"; }
unsigned Vtb_bank_scheduler::threads() const { return 1; }
void Vtb_bank_scheduler::prepareClone() const { contextp()->prepareClone(); }
void Vtb_bank_scheduler::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_bank_scheduler::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtb_bank_scheduler___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_bank_scheduler___024root__trace_init_top(Vtb_bank_scheduler___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_bank_scheduler___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_bank_scheduler___024root*>(voidSelf);
    Vtb_bank_scheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_bank_scheduler___024root__trace_decl_types(tracep);
    Vtb_bank_scheduler___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_bank_scheduler___024root__trace_register(Vtb_bank_scheduler___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_bank_scheduler::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_bank_scheduler::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 42);
    Vtb_bank_scheduler___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
