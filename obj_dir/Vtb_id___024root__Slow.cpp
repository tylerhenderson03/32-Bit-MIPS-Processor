// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_id.h for the primary calling header

#include "Vtb_id__pch.h"

void Vtb_id___024root___ctor_var_reset(Vtb_id___024root* vlSelf);

Vtb_id___024root::Vtb_id___024root(Vtb_id__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_id___024root___ctor_var_reset(this);
}

void Vtb_id___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_id___024root::~Vtb_id___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
