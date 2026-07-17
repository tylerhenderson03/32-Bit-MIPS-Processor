// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtbCover_top.h for the primary calling header

#ifndef VERILATED_VTBCOVER_TOP___024ROOT_H_
#define VERILATED_VTBCOVER_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VtbCover_top___024unit;
class VtbCover_top___024unit__03a__03acover_top;
class VtbCover_top___024unit__03a__03acover_top__Vclpkg;
class VtbCover_top___024unit__03a__03arand_inst;
class VtbCover_top___024unit__03a__03arand_inst__Vclpkg;
class VtbCover_top_std;
class VtbCover_top_std__03a__03aprocess__Vclpkg;
class VtbCover_top_std__03a__03asemaphore__Vclpkg;


class VtbCover_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtbCover_top___024root final {
  public:
    // CELLS
    VtbCover_top_std* __PVT__std;
    VtbCover_top___024unit* __PVT____024unit;
    VtbCover_top_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    VtbCover_top_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    VtbCover_top___024unit__03a__03acover_top__Vclpkg* __024unit__03a__03acover_top__Vclpkg;
    VtbCover_top___024unit__03a__03arand_inst__Vclpkg* __024unit__03a__03arand_inst__Vclpkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tbCover_top__DOT__clk;
        CData/*0:0*/ tbCover_top__DOT__rst;
        CData/*4:0*/ tbCover_top__DOT__id_regD;
        CData/*4:0*/ tbCover_top__DOT__id_exCtrl;
        CData/*3:0*/ tbCover_top__DOT__id_memCtrl;
        CData/*3:0*/ tbCover_top__DOT__id_wbCtrl;
        CData/*0:0*/ tbCover_top__DOT__id_PCJmp;
        CData/*0:0*/ tbCover_top__DOT__if_id_write;
        CData/*0:0*/ tbCover_top__DOT__PCWrite;
        CData/*4:0*/ tbCover_top__DOT__id_ex_regT;
        CData/*4:0*/ tbCover_top__DOT__id_ex_regD;
        CData/*4:0*/ tbCover_top__DOT__id_ex_regS;
        CData/*4:0*/ tbCover_top__DOT__id_ex_shamt_out;
        CData/*4:0*/ tbCover_top__DOT__id_ex_exCtrl;
        CData/*3:0*/ tbCover_top__DOT__id_ex_memCtrl;
        CData/*3:0*/ tbCover_top__DOT__id_ex_wbCtrl;
        CData/*4:0*/ tbCover_top__DOT__ex_regDst;
        CData/*0:0*/ tbCover_top__DOT__ex_overflowFlag;
        CData/*4:0*/ tbCover_top__DOT__ex_mem_regDst;
        CData/*3:0*/ tbCover_top__DOT__ex_mem_memCtrl;
        CData/*3:0*/ tbCover_top__DOT__ex_mem_wbCtrl;
        CData/*0:0*/ tbCover_top__DOT__ex_mem_zeroFlag;
        CData/*3:0*/ tbCover_top__DOT__mem_wb_wbCtrl;
        CData/*4:0*/ tbCover_top__DOT__mem_wb_regDst;
        CData/*0:0*/ tbCover_top__DOT____Vtogcov__clk;
        CData/*0:0*/ tbCover_top__DOT____Vtogcov__rst;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__id_regT;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__id_regD;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__id_regS;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__id_exCtrl;
        CData/*3:0*/ tbCover_top__DOT____Vtogcov__id_memCtrl;
        CData/*3:0*/ tbCover_top__DOT____Vtogcov__id_wbCtrl;
        CData/*0:0*/ tbCover_top__DOT____Vtogcov__id_PCJmp;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__id_shamt_out;
        CData/*0:0*/ tbCover_top__DOT____Vtogcov__if_id_write;
        CData/*0:0*/ tbCover_top__DOT____Vtogcov__PCWrite;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__id_ex_regT;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__id_ex_regD;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__id_ex_regS;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__id_ex_shamt_out;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__id_ex_exCtrl;
        CData/*3:0*/ tbCover_top__DOT____Vtogcov__id_ex_memCtrl;
        CData/*3:0*/ tbCover_top__DOT____Vtogcov__id_ex_wbCtrl;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__ex_regDst;
        CData/*0:0*/ tbCover_top__DOT____Vtogcov__ex_zeroFlag;
        CData/*0:0*/ tbCover_top__DOT____Vtogcov__ex_overflowFlag;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__ex_mem_regDst;
        CData/*3:0*/ tbCover_top__DOT____Vtogcov__ex_mem_memCtrl;
        CData/*3:0*/ tbCover_top__DOT____Vtogcov__ex_mem_wbCtrl;
        CData/*0:0*/ tbCover_top__DOT____Vtogcov__ex_mem_zeroFlag;
        CData/*0:0*/ tbCover_top__DOT____Vtogcov__mem_branchFlag;
        CData/*3:0*/ tbCover_top__DOT____Vtogcov__mem_wb_wbCtrl;
        CData/*4:0*/ tbCover_top__DOT____Vtogcov__mem_wb_regDst;
        CData/*0:0*/ tbCover_top__DOT____Vtogcov__wb_regWrite;
        CData/*2:0*/ tbCover_top__DOT__unnamedblk1_1__DOT__unnamedblk1__DOT__actual_format;
        CData/*4:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT____VlemCond_0;
        CData/*1:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA;
        CData/*1:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB;
        CData/*3:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__ex_mem_RegWrite;
        CData/*1:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__forwardA;
        CData/*1:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__forwardB;
        CData/*3:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_ctrl;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____Vtogcov__wr_en;
    };
    struct {
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____Vtogcov__rd_en;
        CData/*4:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_1;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT__is_j_type;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__id_ex_MemRead;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__flushCtrlSignals;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__linkReg;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__signExtSel;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__is_jr;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__is_j_type;
        CData/*0:0*/ tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbCover_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbCover_top__DOT__rst__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tbCover_top__DOT__NUM_INSTRUCTIONS;
        IData/*31:0*/ tbCover_top__DOT__i;
        IData/*31:0*/ tbCover_top__DOT__if_inst;
        IData/*31:0*/ tbCover_top__DOT__if_id_pcIncr;
        IData/*31:0*/ tbCover_top__DOT__if_id_inst;
        IData/*31:0*/ tbCover_top__DOT__id_sgnExt;
        IData/*31:0*/ tbCover_top__DOT__id_rdDataOne;
        IData/*31:0*/ tbCover_top__DOT__id_rdDataTwo;
        IData/*31:0*/ tbCover_top__DOT__id_jump_addr;
        IData/*31:0*/ tbCover_top__DOT__id_ex_pcIncr;
        IData/*31:0*/ tbCover_top__DOT__id_ex_sgnExt;
        IData/*31:0*/ tbCover_top__DOT__id_ex_rdDataOne;
        IData/*31:0*/ tbCover_top__DOT__id_ex_rdDataTwo;
        IData/*31:0*/ tbCover_top__DOT__ex_aluResult;
        IData/*31:0*/ tbCover_top__DOT__ex_mem_aluResult;
        IData/*31:0*/ tbCover_top__DOT__ex_mem_rdDataTwo;
        IData/*31:0*/ tbCover_top__DOT__ex_mem_pcAdd;
        IData/*31:0*/ tbCover_top__DOT__mem_memReadData;
        IData/*31:0*/ tbCover_top__DOT__mem_wb_memReadData;
        IData/*31:0*/ tbCover_top__DOT__mem_wb_aluResult;
        IData/*31:0*/ tbCover_top__DOT__wb_regData;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__if_pc_pp;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__if_inst;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__if_id_pcIncr;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__if_id_inst;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__id_sgnExt;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__id_rdDataOne;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__id_rdDataTwo;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__id_jump_addr;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__id_ex_pcIncr;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__id_ex_sgnExt;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__id_ex_rdDataOne;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__id_ex_rdDataTwo;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__ex_aluResult;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__ex_pcAdd;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__ex_mem_aluResult;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__ex_mem_rdDataTwo;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__ex_mem_pcAdd;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__mem_memReadData;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__mem_wb_memReadData;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__mem_wb_aluResult;
        IData/*31:0*/ tbCover_top__DOT____Vtogcov__wb_regData;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT____VlemCond_1;
    };
    struct {
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT__pc_slt_add;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_in_a;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_in_b;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____VlemCond_1;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____VlemCond_0;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____VlemCond_0;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_4;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_3;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_2;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_0;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__id_top__DOT__i;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__wb_top__DOT____VlemCond_0;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__wb_top__DOT__tempMemData;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__wb_top__DOT____Vtogcov__tempMemData;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__if_top__DOT____VlemCond_0;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__if_top__DOT__pc_pp;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__if_top__DOT__pc;
        IData/*31:0*/ tbCover_top__DOT__top_00__DOT__if_top__DOT____Vtogcov__pc;
        IData/*31:0*/ __Vdly__tbCover_top__DOT__if_id_pcIncr;
        IData/*31:0*/ __Vdly__tbCover_top__DOT__if_id_inst;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*32:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended;
        QData/*32:0*/ tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____Vtogcov__result_extended;
        VlUnpacked<IData/*31:0*/, 200> tbCover_top__DOT__instruction_memory;
        VlUnpacked<IData/*31:0*/, 32> tbCover_top__DOT__reg_file_debug;
        VlUnpacked<IData/*31:0*/, 200> tbCover_top__DOT____Vcellinp__top_00__if_instruction_memory;
        VlUnpacked<IData/*31:0*/, 200> tbCover_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory;
        VlUnpacked<IData/*31:0*/, 32> tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    std::string tbCover_top__DOT____VlemCall_5__get_j_type_name;
    std::string tbCover_top__DOT____VlemCall_4__get_i_type_name;
    std::string tbCover_top__DOT____VlemCall_3__get_r_type_name;
    std::string tbCover_top__DOT____VlemCall_2__get_instruction_name;
    VlDelayScheduler __VdlySched;
    VlDynamicTriggerScheduler __VdynSched;
    VlClassRef<VtbCover_top___024unit__03a__03acover_top> tbCover_top__DOT__cg_inst_0;

    // INTERNAL VARIABLES
    VtbCover_top__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[2157]{};

    // CONSTRUCTORS
    VtbCover_top___024root(VtbCover_top__Syms* symsp, const char* namep);
    ~VtbCover_top___024root();
    VL_UNCOPYABLE(VtbCover_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
