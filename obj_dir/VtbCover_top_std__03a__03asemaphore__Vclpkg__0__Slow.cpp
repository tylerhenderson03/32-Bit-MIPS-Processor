// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbCover_top.h for the primary calling header

#include "VtbCover_top__pch.h"

VL_ATTR_COLD void VtbCover_top_std__03a__03asemaphore__Vclpkg___configure_coverage(VtbCover_top_std__03a__03asemaphore__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VtbCover_top_std__03a__03asemaphore__Vclpkg___configure_coverage\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2158, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 105, 36, "", "v_line/semaphore", "block", "105", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2159, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 106, 43, "", "v_line/semaphore", "block", "106", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2160, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 107, 47, "", "v_line/semaphore", "block", "107", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2161, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 109, 14, "", "v_line/semaphore", "block", "109-110", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2162, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 113, 19, "", "v_line/semaphore", "block", "113-114", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2163, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 122, 7, "", "v_branch/semaphore", "if", "122-124", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2164, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 122, 8, "", "v_branch/semaphore", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2165, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 122, 34, "", "v_expr/semaphore", "((m_keyCount >= keyCount)==1 && (m_nextKeyCount > m_keyCount)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2166, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 122, 34, "", "v_expr/semaphore", "((m_nextKeyCount > m_keyCount)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2167, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 122, 34, "", "v_expr/semaphore", "((m_keyCount >= keyCount)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2168, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 117, 10, "", "v_line/semaphore", "block", "117,119,126-131", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2169, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 136, 7, "", "v_branch/semaphore", "if", "136", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2170, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 136, 8, "", "v_branch/semaphore", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 2171, first, false, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 135, 18, "", "v_line/semaphore", "block", "135,137-138", "", "", "", "");
}

VL_ATTR_COLD void VtbCover_top_std__03a__03asemaphore___configure_coverage(VtbCover_top_std__03a__03asemaphore* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03asemaphore___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
