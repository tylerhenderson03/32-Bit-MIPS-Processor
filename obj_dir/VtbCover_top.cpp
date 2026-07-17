// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VtbCover_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VtbCover_top::VtbCover_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VtbCover_top__Syms(contextp(), _vcname__, this)}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , __024unit__03a__03acover_top__Vclpkg{vlSymsp->TOP.__024unit__03a__03acover_top__Vclpkg}
    , __024unit__03a__03arand_inst__Vclpkg{vlSymsp->TOP.__024unit__03a__03arand_inst__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VtbCover_top::VtbCover_top(const char* _vcname__)
    : VtbCover_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VtbCover_top::~VtbCover_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VtbCover_top___024root___eval_debug_assertions(VtbCover_top___024root* vlSelf);
#endif  // VL_DEBUG
void VtbCover_top___024root___eval_static(VtbCover_top___024root* vlSelf);
void VtbCover_top___024root___eval_initial(VtbCover_top___024root* vlSelf);
void VtbCover_top___024root___eval_settle(VtbCover_top___024root* vlSelf);
void VtbCover_top___024root___eval(VtbCover_top___024root* vlSelf);

void VtbCover_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VtbCover_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VtbCover_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VtbCover_top___024root___eval_static(&(vlSymsp->TOP));
        VtbCover_top___024root___eval_initial(&(vlSymsp->TOP));
        VtbCover_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VtbCover_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VtbCover_top::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VtbCover_top::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VtbCover_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VtbCover_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VtbCover_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VtbCover_top___024root___eval_final(VtbCover_top___024root* vlSelf);

VL_ATTR_COLD void VtbCover_top::final() {
    contextp()->executingFinal(true);
    VtbCover_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VtbCover_top::hierName() const { return vlSymsp->name(); }
const char* VtbCover_top::modelName() const { return "VtbCover_top"; }
unsigned VtbCover_top::threads() const { return 1; }
void VtbCover_top::prepareClone() const { contextp()->prepareClone(); }
void VtbCover_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VtbCover_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VtbCover_top___024root__trace_decl_types(VerilatedVcd* tracep);

void VtbCover_top___024root__trace_init_top(VtbCover_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VtbCover_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtbCover_top___024root*>(voidSelf);
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VtbCover_top___024root__trace_decl_types(tracep);
    VtbCover_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VtbCover_top___024root__trace_register(VtbCover_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VtbCover_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VtbCover_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 155);
    VtbCover_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
