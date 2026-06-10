// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem.h for the primary calling header

#include "Vtb_mem__pch.h"

void Vtb_mem___024unit___ctor_var_reset(Vtb_mem___024unit* vlSelf);

Vtb_mem___024unit::Vtb_mem___024unit() = default;
Vtb_mem___024unit::~Vtb_mem___024unit() = default;

void Vtb_mem___024unit::ctor(Vtb_mem__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_mem___024unit___ctor_var_reset(this);
}

void Vtb_mem___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_mem___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
