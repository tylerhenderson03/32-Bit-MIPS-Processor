// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbCover_top.h for the primary calling header

#include "VtbCover_top__pch.h"

VL_ATTR_COLD void VtbCover_top_std___configure_coverage(VtbCover_top_std* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VtbCover_top_std___configure_coverage\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 0, first, true, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 246, 16, "", "v_line/std", "block", "246-247", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2157, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 246, 16, "", "v_line/std", "block", "246-247", "", "", "", "");
}
