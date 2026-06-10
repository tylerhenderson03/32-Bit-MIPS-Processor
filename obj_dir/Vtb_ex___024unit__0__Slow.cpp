// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ex.h for the primary calling header

#include "Vtb_ex__pch.h"

VL_ATTR_COLD void Vtb_ex___024unit___ctor_var_reset(Vtb_ex___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_ex___024unit___ctor_var_reset\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorOff = 0;
}
