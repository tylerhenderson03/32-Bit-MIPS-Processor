// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_top__DOT__i = 0U;
    }
    {
        // Inlined CFunc: __Vm_traceActivitySetAll
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__rst__0 
        = vlSelfRef.tb_top__DOT__rst;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtask_tb_top__DOT__write_i_type__1__opcode;
    __Vtask_tb_top__DOT__write_i_type__1__opcode = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__1__rs;
    __Vtask_tb_top__DOT__write_i_type__1__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__1__rt;
    __Vtask_tb_top__DOT__write_i_type__1__rt = 0;
    SData/*15:0*/ __Vtask_tb_top__DOT__write_i_type__1__imm;
    __Vtask_tb_top__DOT__write_i_type__1__imm = 0;
    CData/*5:0*/ __Vtask_tb_top__DOT__write_i_type__2__opcode;
    __Vtask_tb_top__DOT__write_i_type__2__opcode = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__2__rs;
    __Vtask_tb_top__DOT__write_i_type__2__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__2__rt;
    __Vtask_tb_top__DOT__write_i_type__2__rt = 0;
    SData/*15:0*/ __Vtask_tb_top__DOT__write_i_type__2__imm;
    __Vtask_tb_top__DOT__write_i_type__2__imm = 0;
    CData/*5:0*/ __Vtask_tb_top__DOT__write_i_type__3__opcode;
    __Vtask_tb_top__DOT__write_i_type__3__opcode = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__3__rs;
    __Vtask_tb_top__DOT__write_i_type__3__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__3__rt;
    __Vtask_tb_top__DOT__write_i_type__3__rt = 0;
    SData/*15:0*/ __Vtask_tb_top__DOT__write_i_type__3__imm;
    __Vtask_tb_top__DOT__write_i_type__3__imm = 0;
    CData/*5:0*/ __Vtask_tb_top__DOT__write_i_type__4__opcode;
    __Vtask_tb_top__DOT__write_i_type__4__opcode = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__4__rs;
    __Vtask_tb_top__DOT__write_i_type__4__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__4__rt;
    __Vtask_tb_top__DOT__write_i_type__4__rt = 0;
    SData/*15:0*/ __Vtask_tb_top__DOT__write_i_type__4__imm;
    __Vtask_tb_top__DOT__write_i_type__4__imm = 0;
    CData/*5:0*/ __Vtask_tb_top__DOT__write_i_type__5__opcode;
    __Vtask_tb_top__DOT__write_i_type__5__opcode = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__5__rs;
    __Vtask_tb_top__DOT__write_i_type__5__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__5__rt;
    __Vtask_tb_top__DOT__write_i_type__5__rt = 0;
    SData/*15:0*/ __Vtask_tb_top__DOT__write_i_type__5__imm;
    __Vtask_tb_top__DOT__write_i_type__5__imm = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__6__rs;
    __Vtask_tb_top__DOT__write_r_type__6__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__6__rt;
    __Vtask_tb_top__DOT__write_r_type__6__rt = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__6__rd;
    __Vtask_tb_top__DOT__write_r_type__6__rd = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__6__shamt;
    __Vtask_tb_top__DOT__write_r_type__6__shamt = 0;
    CData/*5:0*/ __Vtask_tb_top__DOT__write_r_type__6__funct;
    __Vtask_tb_top__DOT__write_r_type__6__funct = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__7__rs;
    __Vtask_tb_top__DOT__write_r_type__7__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__7__rt;
    __Vtask_tb_top__DOT__write_r_type__7__rt = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__7__rd;
    __Vtask_tb_top__DOT__write_r_type__7__rd = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__7__shamt;
    __Vtask_tb_top__DOT__write_r_type__7__shamt = 0;
    CData/*5:0*/ __Vtask_tb_top__DOT__write_r_type__7__funct;
    __Vtask_tb_top__DOT__write_r_type__7__funct = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__8__rs;
    __Vtask_tb_top__DOT__write_r_type__8__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__8__rt;
    __Vtask_tb_top__DOT__write_r_type__8__rt = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__8__rd;
    __Vtask_tb_top__DOT__write_r_type__8__rd = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__8__shamt;
    __Vtask_tb_top__DOT__write_r_type__8__shamt = 0;
    CData/*5:0*/ __Vtask_tb_top__DOT__write_r_type__8__funct;
    __Vtask_tb_top__DOT__write_r_type__8__funct = 0;
    CData/*5:0*/ __Vtask_tb_top__DOT__write_i_type__9__opcode;
    __Vtask_tb_top__DOT__write_i_type__9__opcode = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__9__rs;
    __Vtask_tb_top__DOT__write_i_type__9__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__9__rt;
    __Vtask_tb_top__DOT__write_i_type__9__rt = 0;
    SData/*15:0*/ __Vtask_tb_top__DOT__write_i_type__9__imm;
    __Vtask_tb_top__DOT__write_i_type__9__imm = 0;
    CData/*5:0*/ __Vtask_tb_top__DOT__write_i_type__10__opcode;
    __Vtask_tb_top__DOT__write_i_type__10__opcode = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__10__rs;
    __Vtask_tb_top__DOT__write_i_type__10__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_i_type__10__rt;
    __Vtask_tb_top__DOT__write_i_type__10__rt = 0;
    SData/*15:0*/ __Vtask_tb_top__DOT__write_i_type__10__imm;
    __Vtask_tb_top__DOT__write_i_type__10__imm = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__11__rs;
    __Vtask_tb_top__DOT__write_r_type__11__rs = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__11__rt;
    __Vtask_tb_top__DOT__write_r_type__11__rt = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__11__rd;
    __Vtask_tb_top__DOT__write_r_type__11__rd = 0;
    CData/*4:0*/ __Vtask_tb_top__DOT__write_r_type__11__shamt;
    __Vtask_tb_top__DOT__write_r_type__11__shamt = 0;
    CData/*5:0*/ __Vtask_tb_top__DOT__write_r_type__11__funct;
    __Vtask_tb_top__DOT__write_r_type__11__funct = 0;
    // Body
    vlSelfRef.tb_top__DOT__instruction_memory[0U] = 0x20030fffU;
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = 1U;
    __Vtask_tb_top__DOT__write_i_type__1__imm = 0x0fffU;
    __Vtask_tb_top__DOT__write_i_type__1__rt = 2U;
    __Vtask_tb_top__DOT__write_i_type__1__rs = 0U;
    __Vtask_tb_top__DOT__write_i_type__1__opcode = 8U;
    vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                               & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
        = (((IData)(__Vtask_tb_top__DOT__write_i_type__1__opcode) 
            << 0x0000001aU) | (((IData)(__Vtask_tb_top__DOT__write_i_type__1__rs) 
                                << 0x00000015U) | (
                                                   ((IData)(__Vtask_tb_top__DOT__write_i_type__1__rt) 
                                                    << 0x00000010U) 
                                                   | (IData)(__Vtask_tb_top__DOT__write_i_type__1__imm))));
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    __Vtask_tb_top__DOT__write_i_type__2__imm = 0x0010U;
    __Vtask_tb_top__DOT__write_i_type__2__rt = 5U;
    __Vtask_tb_top__DOT__write_i_type__2__rs = 0U;
    __Vtask_tb_top__DOT__write_i_type__2__opcode = 8U;
    if (VL_LIKELY(((0x0eU >= (0x0000000fU & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS))))) {
        vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                                   & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
            = (((IData)(__Vtask_tb_top__DOT__write_i_type__2__opcode) 
                << 0x0000001aU) | (((IData)(__Vtask_tb_top__DOT__write_i_type__2__rs) 
                                    << 0x00000015U) 
                                   | (((IData)(__Vtask_tb_top__DOT__write_i_type__2__rt) 
                                       << 0x00000010U) 
                                      | (IData)(__Vtask_tb_top__DOT__write_i_type__2__imm))));
    }
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    __Vtask_tb_top__DOT__write_i_type__3__imm = 0U;
    __Vtask_tb_top__DOT__write_i_type__3__rt = 7U;
    __Vtask_tb_top__DOT__write_i_type__3__rs = 0U;
    __Vtask_tb_top__DOT__write_i_type__3__opcode = 8U;
    if (VL_LIKELY(((0x0eU >= (0x0000000fU & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS))))) {
        vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                                   & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
            = (((IData)(__Vtask_tb_top__DOT__write_i_type__3__opcode) 
                << 0x0000001aU) | (((IData)(__Vtask_tb_top__DOT__write_i_type__3__rs) 
                                    << 0x00000015U) 
                                   | (((IData)(__Vtask_tb_top__DOT__write_i_type__3__rt) 
                                       << 0x00000010U) 
                                      | (IData)(__Vtask_tb_top__DOT__write_i_type__3__imm))));
    }
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    __Vtask_tb_top__DOT__write_i_type__4__imm = 1U;
    __Vtask_tb_top__DOT__write_i_type__4__rt = 6U;
    __Vtask_tb_top__DOT__write_i_type__4__rs = 2U;
    __Vtask_tb_top__DOT__write_i_type__4__opcode = 0x0cU;
    if (VL_LIKELY(((0x0eU >= (0x0000000fU & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS))))) {
        vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                                   & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
            = (((IData)(__Vtask_tb_top__DOT__write_i_type__4__opcode) 
                << 0x0000001aU) | (((IData)(__Vtask_tb_top__DOT__write_i_type__4__rs) 
                                    << 0x00000015U) 
                                   | (((IData)(__Vtask_tb_top__DOT__write_i_type__4__rt) 
                                       << 0x00000010U) 
                                      | (IData)(__Vtask_tb_top__DOT__write_i_type__4__imm))));
    }
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    __Vtask_tb_top__DOT__write_i_type__5__imm = 1U;
    __Vtask_tb_top__DOT__write_i_type__5__rt = 0U;
    __Vtask_tb_top__DOT__write_i_type__5__rs = 6U;
    __Vtask_tb_top__DOT__write_i_type__5__opcode = 4U;
    if (VL_LIKELY(((0x0eU >= (0x0000000fU & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS))))) {
        vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                                   & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
            = (((IData)(__Vtask_tb_top__DOT__write_i_type__5__opcode) 
                << 0x0000001aU) | (((IData)(__Vtask_tb_top__DOT__write_i_type__5__rs) 
                                    << 0x00000015U) 
                                   | (((IData)(__Vtask_tb_top__DOT__write_i_type__5__rt) 
                                       << 0x00000010U) 
                                      | (IData)(__Vtask_tb_top__DOT__write_i_type__5__imm))));
    }
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    __Vtask_tb_top__DOT__write_r_type__6__funct = 0x21U;
    __Vtask_tb_top__DOT__write_r_type__6__shamt = 0U;
    __Vtask_tb_top__DOT__write_r_type__6__rd = 7U;
    __Vtask_tb_top__DOT__write_r_type__6__rt = 7U;
    __Vtask_tb_top__DOT__write_r_type__6__rs = 3U;
    if (VL_LIKELY(((0x0eU >= (0x0000000fU & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS))))) {
        vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                                   & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
            = ((((IData)(__Vtask_tb_top__DOT__write_r_type__6__rs) 
                 << 0x00000015U) | ((IData)(__Vtask_tb_top__DOT__write_r_type__6__rt) 
                                    << 0x00000010U)) 
               | (((IData)(__Vtask_tb_top__DOT__write_r_type__6__rd) 
                   << 0x0000000bU) | (((IData)(__Vtask_tb_top__DOT__write_r_type__6__shamt) 
                                       << 6U) | (IData)(__Vtask_tb_top__DOT__write_r_type__6__funct))));
    }
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    __Vtask_tb_top__DOT__write_r_type__7__funct = 0U;
    __Vtask_tb_top__DOT__write_r_type__7__shamt = 1U;
    __Vtask_tb_top__DOT__write_r_type__7__rd = 3U;
    __Vtask_tb_top__DOT__write_r_type__7__rt = 3U;
    __Vtask_tb_top__DOT__write_r_type__7__rs = 0U;
    if (VL_LIKELY(((0x0eU >= (0x0000000fU & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS))))) {
        vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                                   & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
            = ((((IData)(__Vtask_tb_top__DOT__write_r_type__7__rs) 
                 << 0x00000015U) | ((IData)(__Vtask_tb_top__DOT__write_r_type__7__rt) 
                                    << 0x00000010U)) 
               | (((IData)(__Vtask_tb_top__DOT__write_r_type__7__rd) 
                   << 0x0000000bU) | (((IData)(__Vtask_tb_top__DOT__write_r_type__7__shamt) 
                                       << 6U) | (IData)(__Vtask_tb_top__DOT__write_r_type__7__funct))));
    }
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    __Vtask_tb_top__DOT__write_r_type__8__funct = 2U;
    __Vtask_tb_top__DOT__write_r_type__8__shamt = 1U;
    __Vtask_tb_top__DOT__write_r_type__8__rd = 2U;
    __Vtask_tb_top__DOT__write_r_type__8__rt = 2U;
    __Vtask_tb_top__DOT__write_r_type__8__rs = 0U;
    if (VL_LIKELY(((0x0eU >= (0x0000000fU & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS))))) {
        vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                                   & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
            = ((((IData)(__Vtask_tb_top__DOT__write_r_type__8__rs) 
                 << 0x00000015U) | ((IData)(__Vtask_tb_top__DOT__write_r_type__8__rt) 
                                    << 0x00000010U)) 
               | (((IData)(__Vtask_tb_top__DOT__write_r_type__8__rd) 
                   << 0x0000000bU) | (((IData)(__Vtask_tb_top__DOT__write_r_type__8__shamt) 
                                       << 6U) | (IData)(__Vtask_tb_top__DOT__write_r_type__8__funct))));
    }
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    __Vtask_tb_top__DOT__write_i_type__9__imm = 0xffffU;
    __Vtask_tb_top__DOT__write_i_type__9__rt = 5U;
    __Vtask_tb_top__DOT__write_i_type__9__rs = 5U;
    __Vtask_tb_top__DOT__write_i_type__9__opcode = 8U;
    if (VL_LIKELY(((0x0eU >= (0x0000000fU & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS))))) {
        vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                                   & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
            = (((IData)(__Vtask_tb_top__DOT__write_i_type__9__opcode) 
                << 0x0000001aU) | (((IData)(__Vtask_tb_top__DOT__write_i_type__9__rs) 
                                    << 0x00000015U) 
                                   | (((IData)(__Vtask_tb_top__DOT__write_i_type__9__rt) 
                                       << 0x00000010U) 
                                      | (IData)(__Vtask_tb_top__DOT__write_i_type__9__imm))));
    }
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    __Vtask_tb_top__DOT__write_i_type__10__imm = 0xfff9U;
    __Vtask_tb_top__DOT__write_i_type__10__rt = 5U;
    __Vtask_tb_top__DOT__write_i_type__10__rs = 0U;
    __Vtask_tb_top__DOT__write_i_type__10__opcode = 5U;
    if (VL_LIKELY(((0x0eU >= (0x0000000fU & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS))))) {
        vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                                   & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
            = (((IData)(__Vtask_tb_top__DOT__write_i_type__10__opcode) 
                << 0x0000001aU) | (((IData)(__Vtask_tb_top__DOT__write_i_type__10__rs) 
                                    << 0x00000015U) 
                                   | (((IData)(__Vtask_tb_top__DOT__write_i_type__10__rt) 
                                       << 0x00000010U) 
                                      | (IData)(__Vtask_tb_top__DOT__write_i_type__10__imm))));
    }
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    __Vtask_tb_top__DOT__write_r_type__11__funct = 0x21U;
    __Vtask_tb_top__DOT__write_r_type__11__shamt = 0U;
    __Vtask_tb_top__DOT__write_r_type__11__rd = 4U;
    __Vtask_tb_top__DOT__write_r_type__11__rt = 7U;
    __Vtask_tb_top__DOT__write_r_type__11__rs = 0U;
    if (VL_LIKELY(((0x0eU >= (0x0000000fU & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS))))) {
        vlSelfRef.tb_top__DOT__instruction_memory[(0x0000000fU 
                                                   & vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS)] 
            = ((((IData)(__Vtask_tb_top__DOT__write_r_type__11__rs) 
                 << 0x00000015U) | ((IData)(__Vtask_tb_top__DOT__write_r_type__11__rt) 
                                    << 0x00000010U)) 
               | (((IData)(__Vtask_tb_top__DOT__write_r_type__11__rd) 
                   << 0x0000000bU) | (((IData)(__Vtask_tb_top__DOT__write_r_type__11__shamt) 
                                       << 6U) | (IData)(__Vtask_tb_top__DOT__write_r_type__11__funct))));
    }
    vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS = ((IData)(1U) 
                                               + vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS);
    vlSymsp->_vm_contextp__->dumpfile("./vcd/tb_top.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_top__DOT__i = 0x00000020U;
}

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_settle(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_settle\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/tb_top.sv", 7, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<64>/*2047:0*/ Vtb_top__ConstPool__CONST_h06e2f2cb_0;

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc_pp 
        = ((IData)(4U) + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc);
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCSrc 
        = (((~ (IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag)) 
            & (0x0cU == (0x0cU & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl)))) 
           | ((IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag) 
              & (4U == (0x0cU & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl)))));
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[0U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[14U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[1U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[13U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[2U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[12U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[3U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[11U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[4U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[10U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[5U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[9U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[6U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[8U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[7U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[7U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[8U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[6U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[9U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[5U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[10U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[4U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[11U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[3U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[12U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[2U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[13U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[1U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[14U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[0U];
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl 
        = (0x0000000fU & ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                           ? ((4U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                               ? (9U & (- (IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                                                       >> 1U))))))
                               : ((2U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                   ? 7U : 1U)) : ((4U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                                   ? 
                                                  (((0x20U 
                                                     == 
                                                     (0x0000003fU 
                                                      & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                     ? 2U
                                                     : 
                                                    ((0x22U 
                                                      == 
                                                      (0x0000003fU 
                                                       & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                      ? 6U
                                                      : 
                                                     (((0x2aU 
                                                        == 
                                                        (0x0000003fU 
                                                         & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                        ? 7U
                                                        : 
                                                       ((0x21U 
                                                         == 
                                                         (0x0000003fU 
                                                          & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                         ? 3U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                          ? 8U
                                                          : 
                                                         (((0x27U 
                                                            == 
                                                            (0x0000003fU 
                                                             & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                            ? 0x0cU
                                                            : 
                                                           ((0x25U 
                                                             == 
                                                             (0x0000003fU 
                                                              & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                             ? 1U
                                                             : 
                                                            ((0x2aU 
                                                              == 
                                                              (0x0000003fU 
                                                               & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                              ? 7U
                                                              : 
                                                             ((0x2bU 
                                                               == 
                                                               (0x0000003fU 
                                                                & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                               ? 9U
                                                               : 
                                                              ((0U 
                                                                == 
                                                                (0x0000003fU 
                                                                 & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                                ? 0x0eU
                                                                : 
                                                               ((2U 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                                 ? 0x0bU
                                                                 : 
                                                                (0x0dU 
                                                                 & (- (IData)(
                                                                              (0x19U 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & vlSelfRef.tb_top__DOT__id_ex_sgnExt))))))))))) 
                                                          | (- (IData)(
                                                                       (0x18U 
                                                                        == 
                                                                        (0x0000003fU 
                                                                         & vlSelfRef.tb_top__DOT__id_ex_sgnExt)))))))) 
                                                      & (- (IData)(
                                                                   (0x24U 
                                                                    != 
                                                                    (0x0000003fU 
                                                                     & vlSelfRef.tb_top__DOT__id_ex_sgnExt))))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                                                                     >> 1U))))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                                    ? 6U
                                                    : 2U))));
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA = 0U;
    if (((((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
           >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst) 
            == (IData)(vlSelfRef.tb_top__DOT__id_ex_regS)))) {
        vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA = 2U;
    }
    if ((((((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__mem_wb_regDst))) 
          & (~ ((((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
                  >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst))) 
                & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst) 
                   == (IData)(vlSelfRef.tb_top__DOT__id_ex_regS))))) 
         & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_regDst) 
            == (IData)(vlSelfRef.tb_top__DOT__id_ex_regS)))) {
        vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA = 1U;
    }
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB = 0U;
    if (((((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
           >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst) 
            == (IData)(vlSelfRef.tb_top__DOT__id_ex_regT)))) {
        vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB = 2U;
    }
    if ((((((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__mem_wb_regDst))) 
          & (~ ((((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
                  >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst))) 
                & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst) 
                   == (IData)(vlSelfRef.tb_top__DOT__id_ex_regT))))) 
         & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_regDst) 
            == (IData)(vlSelfRef.tb_top__DOT__id_ex_regT)))) {
        vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB = 1U;
    }
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite 
        = ((IData)(vlSelfRef.tb_top__DOT__id_ex_memCtrl) 
           & (((IData)(vlSelfRef.tb_top__DOT__id_ex_regT) 
               == (0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                  >> 0x00000015U))) 
              | ((IData)(vlSelfRef.tb_top__DOT__id_ex_regT) 
                 == (0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                    >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData 
        = ((1U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
            ? vlSelfRef.tb_top__DOT__mem_wb_memReadData
            : vlSelfRef.tb_top__DOT__mem_wb_aluResult);
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[14U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[0U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[13U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[1U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[12U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[2U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[11U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[3U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[10U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[4U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[9U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[5U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[8U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[6U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[7U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[7U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[6U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[8U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[5U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[9U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[4U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[10U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[3U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[11U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[2U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[12U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[1U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[13U];
    vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[0U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[14U];
    if (((IData)(vlSelfRef.tb_top__DOT__rst) | (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite))) {
        vlSelfRef.tb_top__DOT__id_exCtrl = 0U;
        vlSelfRef.tb_top__DOT__id_memCtrl = 0U;
        vlSelfRef.tb_top__DOT__id_wbCtrl = 0U;
        vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
        vlSelfRef.tb_top__DOT__id_stallIF = 0U;
        vlSelfRef.tb_top__DOT__id_PCJmp = 0U;
        vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
    } else {
        vlSelfRef.__VcaseTableOut0 = (0x0001ffffU & Vtb_top__ConstPool__CONST_h06e2f2cb_0
                                      [(vlSelfRef.tb_top__DOT__if_id_inst 
                                        >> 0x0000001aU)]);
        vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel 
            = (1U & vlSelfRef.__VcaseTableOut0);
        vlSelfRef.tb_top__DOT__id_stallIF = (1U & (vlSelfRef.__VcaseTableOut0 
                                                   >> 1U));
        vlSelfRef.tb_top__DOT__id_PCJmp = (1U & (vlSelfRef.__VcaseTableOut0 
                                                 >> 2U));
        vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg 
            = (1U & (vlSelfRef.__VcaseTableOut0 >> 3U));
        vlSelfRef.tb_top__DOT__id_memCtrl = (0x0000000fU 
                                             & (vlSelfRef.__VcaseTableOut0 
                                                >> 4U));
        vlSelfRef.tb_top__DOT__id_wbCtrl = (0x0000000fU 
                                            & (vlSelfRef.__VcaseTableOut0 
                                               >> 8U));
        vlSelfRef.tb_top__DOT__id_exCtrl = (0x0000001fU 
                                            & (vlSelfRef.__VcaseTableOut0 
                                               >> 0x0000000cU));
    }
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__wr_data 
        = ((8U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
            ? ((4U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
                ? (vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData 
                   << 0x00000010U) : (0x0000ffffU & vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData))
            : ((0xffffff00U & (vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData 
                               & ((- (IData)((1U & 
                                              (~ ((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
                                                  >> 2U))))) 
                                  << 8U))) | (0x000000ffU 
                                              & vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData)));
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one 
        = ((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg)
            ? vlSelfRef.tb_top__DOT__if_id_pcIncr : vlSelfRef.tb_top__DOT__reg_file_debug
           [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                            >> 0x00000015U))]);
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA))
            ? vlSelfRef.tb_top__DOT__id_ex_rdDataOne
            : ((2U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA))
                ? vlSelfRef.tb_top__DOT__ex_mem_aluResult
                : (vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__wr_data 
                   & (- (IData)((1U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA)))))));
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB))
            ? ((1U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                ? vlSelfRef.tb_top__DOT__id_ex_sgnExt
                : vlSelfRef.tb_top__DOT__id_ex_rdDataTwo)
            : ((2U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB))
                ? vlSelfRef.tb_top__DOT__ex_mem_aluResult
                : (vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__wr_data 
                   & (- (IData)((1U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB)))))));
    if ((8U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            if ((2U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                    vlSelfRef.tb_top__DOT__ex_aluResult 
                        = VL_MULS_III(32, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
                } else {
                    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                    vlSelfRef.tb_top__DOT__ex_aluResult 
                        = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                           << (IData)(vlSelfRef.tb_top__DOT__id_ex_shamt_out));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                       * vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            } else {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = (~ (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                          | vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b));
            }
        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                       >> (IData)(vlSelfRef.tb_top__DOT__id_ex_shamt_out));
            } else {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tb_top__DOT__ex_aluResult = (
                                                   (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                    < vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)
                                                    ? 1U
                                                    : 0U);
        } else {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tb_top__DOT__ex_aluResult = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                   - vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
        }
        vlSelfRef.tb_top__DOT__ex_overflowFlag = 0U;
    } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = (VL_LTS_III(32, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)
                        ? 1U : 0U);
                vlSelfRef.tb_top__DOT__ex_overflowFlag = 0U;
            } else {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended 
                    = (0x00000001ffffffffULL & ((((QData)((IData)(
                                                                  (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                                   >> 0x1fU))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a))) 
                                                - (
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                                                                     >> 0x1fU))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)))));
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended);
                vlSelfRef.tb_top__DOT__ex_overflowFlag 
                    = (1U & VL_REDXOR_64((0x0000000180000000ULL 
                                          & vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)));
            }
        } else {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = VL_DIVS_III(32, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            } else {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = VL_DIV_III(32, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            }
            vlSelfRef.tb_top__DOT__ex_overflowFlag = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tb_top__DOT__ex_aluResult = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                   + vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            vlSelfRef.tb_top__DOT__ex_overflowFlag = 0U;
        } else {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended 
                = (0x00000001ffffffffULL & ((((QData)((IData)(
                                                              (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                               >> 0x1fU))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a))) 
                                            + (((QData)((IData)(
                                                                (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                                                                 >> 0x1fU))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)))));
            vlSelfRef.tb_top__DOT__ex_aluResult = (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended);
            vlSelfRef.tb_top__DOT__ex_overflowFlag 
                = (1U & VL_REDXOR_64((0x0000000180000000ULL 
                                      & vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)));
        }
    } else {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tb_top__DOT__ex_aluResult = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                   | vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
        } else {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tb_top__DOT__ex_aluResult = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                   & vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
        }
        vlSelfRef.tb_top__DOT__ex_overflowFlag = 0U;
    }
}

VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_top___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_top.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16256328344204653681ull);
    vlSelf->tb_top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 628691245840681375ull);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->tb_top__DOT__instruction_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16813697003253921489ull);
    }
    vlSelf->tb_top__DOT__NUM_INSTRUCTIONS = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1428304390573279799ull);
    vlSelf->tb_top__DOT__if_id_pcIncr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1082492753503743187ull);
    vlSelf->tb_top__DOT__if_id_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14538603260134980185ull);
    vlSelf->tb_top__DOT__id_exCtrl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4003432159509887397ull);
    vlSelf->tb_top__DOT__id_memCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12087341905563253379ull);
    vlSelf->tb_top__DOT__id_wbCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4091577935666505049ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__reg_file_debug[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13432881860753231406ull);
    }
    vlSelf->tb_top__DOT__id_stallIF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 448861703083543062ull);
    vlSelf->tb_top__DOT__id_PCJmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12036568720985349501ull);
    vlSelf->tb_top__DOT__id_ex_regT = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15497257225907551840ull);
    vlSelf->tb_top__DOT__id_ex_regD = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15636495725333499738ull);
    vlSelf->tb_top__DOT__id_ex_regS = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9181368416049342316ull);
    vlSelf->tb_top__DOT__id_ex_shamt_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3151994584539500298ull);
    vlSelf->tb_top__DOT__id_ex_exCtrl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13223891392324672794ull);
    vlSelf->tb_top__DOT__id_ex_memCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4513877857670469566ull);
    vlSelf->tb_top__DOT__id_ex_wbCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6935902156430462432ull);
    vlSelf->tb_top__DOT__id_ex_pcIncr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12505317891506319663ull);
    vlSelf->tb_top__DOT__id_ex_sgnExt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2718323497163223535ull);
    vlSelf->tb_top__DOT__id_ex_rdDataOne = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12618408786314537685ull);
    vlSelf->tb_top__DOT__id_ex_rdDataTwo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3746989433758672398ull);
    vlSelf->tb_top__DOT__ex_overflowFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16877183855894840811ull);
    vlSelf->tb_top__DOT__ex_aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10585549519812788508ull);
    vlSelf->tb_top__DOT__ex_mem_regDst = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11203738224896896705ull);
    vlSelf->tb_top__DOT__ex_mem_memCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13049752481420015665ull);
    vlSelf->tb_top__DOT__ex_mem_wbCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3570747638837076530ull);
    vlSelf->tb_top__DOT__ex_mem_zeroFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5577775668022982185ull);
    vlSelf->tb_top__DOT__ex_mem_aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18210929386593762740ull);
    vlSelf->tb_top__DOT__ex_mem_rdDataTwo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18044970087356106670ull);
    vlSelf->tb_top__DOT__ex_mem_pcAdd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12193102993349820534ull);
    vlSelf->tb_top__DOT__mem_wb_wbCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13764802217661845659ull);
    vlSelf->tb_top__DOT__mem_wb_regDst = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8452774933970876613ull);
    vlSelf->tb_top__DOT__mem_wb_memReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5994195765487902855ull);
    vlSelf->tb_top__DOT__mem_wb_aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8806988298306205466ull);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->tb_top__DOT____Vcellinp__top_00__if_instruction_memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory[__Vi0] = 0;
    }
    vlSelf->tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12021522746527764344ull);
    vlSelf->tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8252310348921464394ull);
    vlSelf->tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10366605737813535692ull);
    vlSelf->tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4684573628283342750ull);
    vlSelf->tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6465336281779736288ull);
    vlSelf->tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13106572961092210696ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14915665079186232580ull);
    }
    vlSelf->tb_top__DOT__top_00__DOT__id_top__DOT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15137856080446940577ull);
    vlSelf->tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12407538701408303662ull);
    vlSelf->tb_top__DOT__top_00__DOT__id_top__DOT__linkReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13111108091123521417ull);
    vlSelf->tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4444891961529359796ull);
    vlSelf->tb_top__DOT__top_00__DOT__id_top__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4023850717082588353ull);
    vlSelf->tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11353696509405275872ull);
    vlSelf->tb_top__DOT__top_00__DOT__if_top__DOT__PCSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5699295710524125623ull);
    vlSelf->tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3658761744159240864ull);
    vlSelf->tb_top__DOT__top_00__DOT__if_top__DOT__pc_pp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11134092151205132452ull);
    vlSelf->tb_top__DOT__top_00__DOT__if_top__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17089727492678903542ull);
    vlSelf->__VcaseTableOut0 = 0;
    vlSelf->__Vdly__tb_top__DOT__if_id_inst = 0;
    vlSelf->__VdlyVal__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
