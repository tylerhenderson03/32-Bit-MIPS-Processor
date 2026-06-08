// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_if.h for the primary calling header

#include "Vtb_if__pch.h"

void Vtb_if___024unit___ctor_var_reset(Vtb_if___024unit* vlSelf);

Vtb_if___024unit::Vtb_if___024unit() = default;
Vtb_if___024unit::~Vtb_if___024unit() = default;

void Vtb_if___024unit::ctor(Vtb_if__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_if___024unit___ctor_var_reset(this);
}

void Vtb_if___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_if___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
