// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbCover_top.h for the primary calling header

#include "VtbCover_top__pch.h"

void VtbCover_top___024unit__03a__03acover_top__Vclpkg::__VnoInFunc_get_coverage(VtbCover_top__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VtbCover_top___024unit__03a__03acover_top__Vclpkg::__VnoInFunc_get_coverage\n"); );
    // Body
    get_coverage__Vfuncrtn = 0.0;
}

void VtbCover_top___024unit__03a__03acover_top::init(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VtbCover_top___024unit__03a__03acover_top::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT____Vcp_opcode_cover.init("cover_top.opcode_cover", 1, 20);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "r_type", "rtl/covergroups.sv", 6, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "addi_op", "rtl/covergroups.sv", 7, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "addiu_op", "rtl/covergroups.sv", 8, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "andi_op", "rtl/covergroups.sv", 9, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "beq_op", "rtl/covergroups.sv", 10, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "bne_op", "rtl/covergroups.sv", 11, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "j_op", "rtl/covergroups.sv", 13, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "jal_op", "rtl/covergroups.sv", 14, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "lbu_op", "rtl/covergroups.sv", 15, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "lhu_op", "rtl/covergroups.sv", 16, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "ll_op", "rtl/covergroups.sv", 17, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "lui_op", "rtl/covergroups.sv", 18, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "lw_op", "rtl/covergroups.sv", 20, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "ori_op", "rtl/covergroups.sv", 21, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "slti_op", "rtl/covergroups.sv", 22, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "sltiu_op", "rtl/covergroups.sv", 23, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "sb_op", "rtl/covergroups.sv", 25, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "sc_op", "rtl/covergroups.sv", 26, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "sh_op", "rtl/covergroups.sv", 27, 14);
    this->__PVT____Vcp_opcode_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "sw_op", "rtl/covergroups.sv", 28, 14);
    this->__PVT____Vcp_opcode_cover.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_funct_cover.init("cover_top.funct_cover", 1, 12);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "add_funct", "rtl/covergroups.sv", 32, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "addu_funct", "rtl/covergroups.sv", 33, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "and_funct", "rtl/covergroups.sv", 34, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "jr_funct", "rtl/covergroups.sv", 35, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "nor_funct", "rtl/covergroups.sv", 36, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "or_funct", "rtl/covergroups.sv", 37, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "slt_funct", "rtl/covergroups.sv", 38, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "sltu_funct", "rtl/covergroups.sv", 39, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "sll_funct", "rtl/covergroups.sv", 40, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "srl_funct", "rtl/covergroups.sv", 41, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "sub_funct", "rtl/covergroups.sv", 42, 14);
    this->__PVT____Vcp_funct_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "subu_funct", "rtl/covergroups.sv", 43, 14);
    this->__PVT____Vcp_funct_cover.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_wb_cover.init("cover_top.wb_cover", 1, 64);
    this->__PVT____Vcp_wb_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "zero", "rtl/covergroups.sv", 47, 14);
    this->__PVT____Vcp_wb_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "at", "rtl/covergroups.sv", 48, 14);
    this->__PVT____Vcp_wb_cover.addArrayNamer(VlCovBinKind::KIND_NORMAL, 2, "vals", "rtl/covergroups.sv", 49, 14);
    this->__PVT____Vcp_wb_cover.addArrayNamer(VlCovBinKind::KIND_NORMAL, 4, "args", "rtl/covergroups.sv", 50, 14);
    this->__PVT____Vcp_wb_cover.addArrayNamer(VlCovBinKind::KIND_NORMAL, 10, "temps", "rtl/covergroups.sv", 51, 14);
    this->__PVT____Vcp_wb_cover.addArrayNamer(VlCovBinKind::KIND_NORMAL, 8, "saved_temps", "rtl/covergroups.sv", 52, 14);
    this->__PVT____Vcp_wb_cover.addArrayNamer(VlCovBinKind::KIND_NORMAL, 2, "k", "rtl/covergroups.sv", 53, 14);
    this->__PVT____Vcp_wb_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "global_ptr", "rtl/covergroups.sv", 54, 14);
    this->__PVT____Vcp_wb_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "stack_ptr", "rtl/covergroups.sv", 55, 14);
    this->__PVT____Vcp_wb_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "frame_ptr", "rtl/covergroups.sv", 56, 14);
    this->__PVT____Vcp_wb_cover.addSingleNamer(VlCovBinKind::KIND_NORMAL, "return_addr", "rtl/covergroups.sv", 57, 14);
    this->__PVT____Vcp_wb_cover.addArrayNamer(VlCovBinKind::KIND_NORMAL, 32, "register_file_usage", "rtl/covergroups.sv", 58, 14);
    this->__PVT____Vcp_wb_cover.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_ex_ctrl0.init("cover_top.ex_ctrl0", 1, 1);
    this->__PVT____Vcp_ex_ctrl0.addSingleNamer(VlCovBinKind::KIND_NORMAL, "ex_idx_0", "rtl/covergroups.sv", 61, 79);
    this->__PVT____Vcp_ex_ctrl0.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_ex_ctrl1.init("cover_top.ex_ctrl1", 1, 1);
    this->__PVT____Vcp_ex_ctrl1.addSingleNamer(VlCovBinKind::KIND_NORMAL, "ex_idx_1", "rtl/covergroups.sv", 62, 79);
    this->__PVT____Vcp_ex_ctrl1.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_ex_ctrl2.init("cover_top.ex_ctrl2", 1, 1);
    this->__PVT____Vcp_ex_ctrl2.addSingleNamer(VlCovBinKind::KIND_NORMAL, "ex_idx_2", "rtl/covergroups.sv", 63, 79);
    this->__PVT____Vcp_ex_ctrl2.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_ex_ctrl3.init("cover_top.ex_ctrl3", 1, 1);
    this->__PVT____Vcp_ex_ctrl3.addSingleNamer(VlCovBinKind::KIND_NORMAL, "ex_idx_3", "rtl/covergroups.sv", 64, 79);
    this->__PVT____Vcp_ex_ctrl3.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_ex_ctrl4.init("cover_top.ex_ctrl4", 1, 1);
    this->__PVT____Vcp_ex_ctrl4.addSingleNamer(VlCovBinKind::KIND_NORMAL, "ex_idx_4", "rtl/covergroups.sv", 65, 79);
    this->__PVT____Vcp_ex_ctrl4.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_mem_ctrl0.init("cover_top.mem_ctrl0", 1, 1);
    this->__PVT____Vcp_mem_ctrl0.addSingleNamer(VlCovBinKind::KIND_NORMAL, "mem_idx_0", "rtl/covergroups.sv", 66, 81);
    this->__PVT____Vcp_mem_ctrl0.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_mem_ctrl1.init("cover_top.mem_ctrl1", 1, 1);
    this->__PVT____Vcp_mem_ctrl1.addSingleNamer(VlCovBinKind::KIND_NORMAL, "mem_idx_1", "rtl/covergroups.sv", 67, 81);
    this->__PVT____Vcp_mem_ctrl1.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_mem_ctrl2.init("cover_top.mem_ctrl2", 1, 1);
    this->__PVT____Vcp_mem_ctrl2.addSingleNamer(VlCovBinKind::KIND_NORMAL, "mem_idx_2", "rtl/covergroups.sv", 68, 81);
    this->__PVT____Vcp_mem_ctrl2.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_mem_ctrl3.init("cover_top.mem_ctrl3", 1, 1);
    this->__PVT____Vcp_mem_ctrl3.addSingleNamer(VlCovBinKind::KIND_NORMAL, "mem_idx_3", "rtl/covergroups.sv", 69, 81);
    this->__PVT____Vcp_mem_ctrl3.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_wb_ctrl.init("cover_top.wb_ctrl", 1, 1);
    this->__PVT____Vcp_wb_ctrl.addSingleNamer(VlCovBinKind::KIND_NORMAL, "wb_idx_0", "rtl/covergroups.sv", 70, 78);
    this->__PVT____Vcp_wb_ctrl.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_wb_ctrl1.init("cover_top.wb_ctrl1", 1, 1);
    this->__PVT____Vcp_wb_ctrl1.addSingleNamer(VlCovBinKind::KIND_NORMAL, "wb_idx_1", "rtl/covergroups.sv", 71, 79);
    this->__PVT____Vcp_wb_ctrl1.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_wb_ctrl2.init("cover_top.wb_ctrl2", 1, 1);
    this->__PVT____Vcp_wb_ctrl2.addSingleNamer(VlCovBinKind::KIND_NORMAL, "wb_idx_2", "rtl/covergroups.sv", 72, 79);
    this->__PVT____Vcp_wb_ctrl2.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
    this->__PVT____Vcp_wb_ctrl3.init("cover_top.wb_ctrl3", 1, 1);
    this->__PVT____Vcp_wb_ctrl3.addSingleNamer(VlCovBinKind::KIND_NORMAL, "wb_idx_3", "rtl/covergroups.sv", 73, 79);
    this->__PVT____Vcp_wb_ctrl3.registerBins(vlSymsp->_vm_contextp__->coveragep(), "v_covergroup/cover_top");
}

void VtbCover_top___024unit__03a__03acover_top::__VnoInFunc_sample(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VtbCover_top___024unit__03a__03acover_top::__VnoInFunc_sample\n"); );
    // Body
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                   >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(0);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (8U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                   >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(1);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (9U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                   >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(2);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0cU == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(3);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (4U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                   >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(4);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (5U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                   >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(5);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (2U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                   >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(6);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (3U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                   >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(7);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x24U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(8);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x25U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(9);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x30U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(10);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0fU == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(11);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x23U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(12);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0dU == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(13);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0aU == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(14);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0bU == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(15);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x28U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(16);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x38U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(17);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x29U == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(18);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x2bU == (vlSymsp->TOP.tbCover_top__DOT__if_inst 
                      >> 0x1aU)))) {
        this->__PVT____Vcp_opcode_cover.incrementBin(19);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x20U == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(0);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x21U == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(1);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x24U == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(2);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (8U == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(3);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x27U == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(4);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x25U == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(5);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x2aU == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(6);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x2bU == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(7);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0U == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(8);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (2U == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(9);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x22U == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(10);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x23U == (0x0000003fU & vlSymsp->TOP.tbCover_top__DOT__if_inst)))) {
        this->__PVT____Vcp_funct_cover.incrementBin(11);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(0);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (1U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(1);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (2U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(2);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (3U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(3);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (4U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(4);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (5U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(5);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (6U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(6);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (7U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(7);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (8U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(8);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (9U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(9);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0aU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(10);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0bU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(11);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0cU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(12);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0dU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(13);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0eU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(14);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0fU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(15);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x18U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(16);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x19U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(17);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x10U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(18);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x11U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(19);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x12U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(20);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x13U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(21);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x14U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(22);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x15U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(23);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x16U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(24);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x17U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(25);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x1aU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(26);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x1bU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(27);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0000001cU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(28);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0000001dU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(29);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0000001eU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(30);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0000001fU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(31);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(32);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (1U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(33);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (2U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(34);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (3U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(35);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (4U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(36);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (5U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(37);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (6U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(38);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (7U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(39);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (8U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(40);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (9U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(41);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0aU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(42);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0bU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(43);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0cU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(44);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0dU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(45);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0eU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(46);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x0fU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(47);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x10U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(48);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x11U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(49);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x12U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(50);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x13U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(51);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x14U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(52);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x15U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(53);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x16U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(54);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x17U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(55);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x18U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(56);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x19U == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(57);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x1aU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(58);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x1bU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(59);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x1cU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(60);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x1dU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(61);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x1eU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(62);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & (0x1fU == (IData)(vlSymsp->TOP.tbCover_top__DOT__mem_wb_regDst)))) {
        this->__PVT____Vcp_wb_cover.incrementBin(63);
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
               & (IData)(vlSymsp->TOP.tbCover_top__DOT__id_exCtrl)))) {
        this->__PVT____Vcp_ex_ctrl0.incrementBin(0);
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
               & ((IData)(vlSymsp->TOP.tbCover_top__DOT__id_exCtrl) 
                  >> 1U)))) {
        this->__PVT____Vcp_ex_ctrl1.incrementBin(0);
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
               & ((IData)(vlSymsp->TOP.tbCover_top__DOT__id_exCtrl) 
                  >> 2U)))) {
        this->__PVT____Vcp_ex_ctrl2.incrementBin(0);
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
               & ((IData)(vlSymsp->TOP.tbCover_top__DOT__id_exCtrl) 
                  >> 3U)))) {
        this->__PVT____Vcp_ex_ctrl3.incrementBin(0);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & ((IData)(vlSymsp->TOP.tbCover_top__DOT__id_exCtrl) 
            >> 4U))) {
        this->__PVT____Vcp_ex_ctrl4.incrementBin(0);
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
               & (IData)(vlSymsp->TOP.tbCover_top__DOT__id_memCtrl)))) {
        this->__PVT____Vcp_mem_ctrl0.incrementBin(0);
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
               & ((IData)(vlSymsp->TOP.tbCover_top__DOT__id_memCtrl) 
                  >> 1U)))) {
        this->__PVT____Vcp_mem_ctrl1.incrementBin(0);
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
               & ((IData)(vlSymsp->TOP.tbCover_top__DOT__id_memCtrl) 
                  >> 2U)))) {
        this->__PVT____Vcp_mem_ctrl2.incrementBin(0);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & ((IData)(vlSymsp->TOP.tbCover_top__DOT__id_memCtrl) 
            >> 3U))) {
        this->__PVT____Vcp_mem_ctrl3.incrementBin(0);
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
               & (IData)(vlSymsp->TOP.tbCover_top__DOT__id_wbCtrl)))) {
        this->__PVT____Vcp_wb_ctrl.incrementBin(0);
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
               & ((IData)(vlSymsp->TOP.tbCover_top__DOT__id_wbCtrl) 
                  >> 1U)))) {
        this->__PVT____Vcp_wb_ctrl1.incrementBin(0);
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
               & ((IData)(vlSymsp->TOP.tbCover_top__DOT__id_wbCtrl) 
                  >> 2U)))) {
        this->__PVT____Vcp_wb_ctrl2.incrementBin(0);
    }
    if (((~ (IData)(vlSymsp->TOP.tbCover_top__DOT__rst)) 
         & ((IData)(vlSymsp->TOP.tbCover_top__DOT__id_wbCtrl) 
            >> 3U))) {
        this->__PVT____Vcp_wb_ctrl3.incrementBin(0);
    }
}

void VtbCover_top___024unit__03a__03acover_top::__VnoInFunc_get_inst_coverage(VtbCover_top__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_inst_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VtbCover_top___024unit__03a__03acover_top::__VnoInFunc_get_inst_coverage\n"); );
    // Body
    get_inst_coverage__Vfuncrtn = 0.0;
    double __Vcov = 0.0; double __Vtot = 0.0;
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_opcode_cover.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_funct_cover.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_wb_cover.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_ex_ctrl0.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_ex_ctrl1.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_ex_ctrl2.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_ex_ctrl3.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_ex_ctrl4.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_mem_ctrl0.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_mem_ctrl1.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_mem_ctrl2.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_mem_ctrl3.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_wb_ctrl.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_wb_ctrl1.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_wb_ctrl2.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    { double __Vc = 0.0; double __Vt = 0.0; this->__PVT____Vcp_wb_ctrl3.coverageParts(__Vc, __Vt); __Vcov += __Vc; __Vtot += __Vt; }
    get_inst_coverage__Vfuncrtn = (__Vtot != 0.0) ? (100.0 * __Vcov / __Vtot) : 100.0;
}

void VtbCover_top___024unit__03a__03acover_top::__VnoInFunc_set_inst_name(VtbCover_top__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VtbCover_top___024unit__03a__03acover_top::__VnoInFunc_set_inst_name\n"); );
}

void VtbCover_top___024unit__03a__03acover_top::_ctor_var_reset(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VtbCover_top___024unit__03a__03acover_top::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__option.__PVT__weight = 0;
    __PVT__option.__PVT__goal = 0;
    __PVT__option.__PVT__at_least = 0;
    __PVT__option.__PVT__auto_bin_max = 0;
    __PVT__option.__PVT__cross_num_print_missing = 0;
    __PVT__option.__PVT__cross_retain_auto_bins = 0;
    __PVT__option.__PVT__detect_overlap = 0;
    __PVT__option.__PVT__per_instance = 0;
    __PVT__option.__PVT__get_inst_coverage = 0;
    __PVT__type_option.__PVT__weight = 0;
    __PVT__type_option.__PVT__goal = 0;
    __PVT__type_option.__PVT__strobe = 0;
    __PVT__type_option.__PVT__merge_instances = 0;
    __PVT__type_option.__PVT__distribute_first = 0;
    __PVT__type_option.__PVT__real_interval = 0;
}
