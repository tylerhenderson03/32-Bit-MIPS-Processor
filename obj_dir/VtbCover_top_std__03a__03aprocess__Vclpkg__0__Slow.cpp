// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbCover_top.h for the primary calling header

#include "VtbCover_top__pch.h"

VL_ATTR_COLD void VtbCover_top_std__03a__03aprocess__Vclpkg___configure_coverage(VtbCover_top_std__03a__03aprocess__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VtbCover_top_std__03a__03aprocess__Vclpkg___configure_coverage\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2172, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 156, 29, "", "v_line/process", "block", "156-157,159,161", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2173, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 164, 29, "", "v_line/process", "block", "164,166", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2174, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 170, 20, "", "v_line/process", "block", "170,172", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2175, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 178, 19, "", "v_line/process", "block", "178-179", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2176, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 186, 19, "", "v_line/process", "block", "186-187", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2177, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 192, 34, "", "v_expr/process", "((status() == process::KILLED)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2178, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 192, 34, "", "v_expr/process", "((status() == process::FINISHED)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2179, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 192, 34, "", "v_expr/process", "((status() == process::FINISHED)==0 && (status() == process::KILLED)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2180, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 190, 10, "", "v_line/process", "block", "190,192", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2181, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 198, 7, "", "v_line/process", "block", "198-199", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2182, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 196, 17, "", "v_line/process", "block", "196,198", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2183, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 232, 21, "", "v_line/process", "block", "232,234,236-237", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2184, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 240, 19, "", "v_line/process", "block", "240-241", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2185, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 143, 3, "", "v_line/process", "block", "143", "", "", "", "");
}

VL_ATTR_COLD void VtbCover_top_std__03a__03aprocess___configure_coverage(VtbCover_top_std__03a__03aprocess* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
