// covergroups for top-level testing of microprocessor
/* verilator lint_off UNUSEDSIGNAL */
covergroup cover_top @(posedge tbCover_top.clk);

    opcode_cover: coverpoint tbCover_top.if_inst[31:26] iff (!tbCover_top.rst){
        bins r_type = {0};
        bins addi_op = {6'd8};
        bins addiu_op = {6'd9};
        bins andi_op = {6'hc};
        bins beq_op = {6'h4};
        bins bne_op = {6'h5};

        bins j_op = {6'h2};
        bins jal_op = {6'h3};
        bins lbu_op = {6'h24};
        bins lhu_op = {6'h25};
        bins ll_op = {6'h30};
        bins lui_op = {6'hf};

        bins lw_op = {6'h23};
        bins ori_op = {6'hd};
        bins slti_op = {6'ha};
        bins sltiu_op = {6'hb};

        bins sb_op = {6'h28};
        bins sc_op = {6'h38};
        bins sh_op = {6'h29};
        bins sw_op = {6'h2b};
    }

    funct_cover: coverpoint tbCover_top.if_inst[5:0] iff (!tbCover_top.rst){
        bins add_funct = {6'h20};
        bins addu_funct = {6'h21};
        bins and_funct = {6'h24};
        bins jr_funct = {6'h08};
        bins nor_funct = {6'h27};
        bins or_funct = {6'h25};
        bins slt_funct = {6'h2a};
        bins sltu_funct = {6'h2b};
        bins sll_funct = {6'h00};
        bins srl_funct = {6'h02};
        bins sub_funct = {6'h22};
        bins subu_funct = {6'h23};
    }

    wb_cover: coverpoint tbCover_top.wb_regDst iff (!tbCover_top.rst){
        bins zero = {0};
        bins at = {1};
        bins vals[] = {[2:3]};
        bins args[] = {[4:7]};
        bins temps[] = {[8:15], [24:25]};
        bins saved_temps[] = {[16:23]};
        bins k[] = {[26:27]};
        bins global_ptr = {28};
        bins stack_ptr = {29};
        bins frame_ptr = {30};
        bins return_addr = {31};
        bins register_file_usage[] = {[0:31]};
    }

    ex_ctrl0: coverpoint tbCover_top.id_exCtrl[0] iff (~tbCover_top.rst){bins ex_idx_0 = {1};}
    ex_ctrl1: coverpoint tbCover_top.id_exCtrl[1] iff (~tbCover_top.rst){bins ex_idx_1 = {1};}
    ex_ctrl2: coverpoint tbCover_top.id_exCtrl[2] iff (~tbCover_top.rst){bins ex_idx_2 = {1};}
    ex_ctrl3: coverpoint tbCover_top.id_exCtrl[3] iff (~tbCover_top.rst){bins ex_idx_3 = {1};}
    ex_ctrl4: coverpoint tbCover_top.id_exCtrl[4] iff (~tbCover_top.rst){bins ex_idx_4 = {1};}
    mem_ctrl0: coverpoint tbCover_top.id_memCtrl[0] iff (~tbCover_top.rst){bins mem_idx_0 = {1};}
    mem_ctrl1: coverpoint tbCover_top.id_memCtrl[1] iff (~tbCover_top.rst){bins mem_idx_1 = {1};}
    mem_ctrl2: coverpoint tbCover_top.id_memCtrl[2] iff (~tbCover_top.rst){bins mem_idx_2 = {1};}
    mem_ctrl3: coverpoint tbCover_top.id_memCtrl[3] iff (~tbCover_top.rst){bins mem_idx_3 = {1};}
    wb_ctrl: coverpoint tbCover_top.id_wbCtrl[0] iff (~tbCover_top.rst){bins wb_idx_0 = {1};}
    wb_ctrl1: coverpoint tbCover_top.id_wbCtrl[1] iff (~tbCover_top.rst){bins wb_idx_1 = {1};}
    wb_ctrl2: coverpoint tbCover_top.id_wbCtrl[2] iff (~tbCover_top.rst){bins wb_idx_2 = {1};}
    wb_ctrl3: coverpoint tbCover_top.id_wbCtrl[3] iff (~tbCover_top.rst){bins wb_idx_3 = {1};}

endgroup: cover_top

/* verilator lint_on UNUSEDSIGNAL */
