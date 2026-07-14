`timescale 1ns/1ns

// TODO: MODIFY THIS FILE SO THAT IT COLLECTS COVERAGE DATA BASED ON CONSTRAINED RANDOMIZATION

/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSEDSIGNAL */

class rand_inst;
  rand logic [5:0] opcode;
  rand logic [4:0] rs, rt, rd, shamt;
  rand logic [5:0] funct;
  rand logic [15:0] immediate;
  rand logic [25:0] addr;

  function string get_instruction_name(input logic [2:0] actual_format);
      case (actual_format[2:0])
          3'd0: return get_r_type_name();
          3'd1: return get_i_type_name();
          3'd2: return get_j_type_name();
          default: return "UNKNOWN";
      endcase
  endfunction

  function string get_r_type_name();
    case (funct)
      6'h20: return "ADD";
      6'h21: return "ADDU";
      6'h24: return "AND";
      6'h08: return "JR";
      6'h27: return "NOR";
      6'h25: return "OR";
      6'h2a: return "SLT";
      6'h2b: return "SLTU";
      6'h00: return "SLL";
      6'h02: return "SRL";
      6'h22: return "SUB";
      6'h23: return "SUBU";
      default: return "R_UNKNOWN";
    endcase
  endfunction

  function string get_i_type_name();
    case (opcode)
      6'd8:  return "ADDI";
      6'd9:  return "ADDIU";
      6'hc:  return "ANDI";
      6'h4:  return "BEQ";
      6'h5:  return "BNE";
      6'h24: return "LBU";
      6'h25: return "LHU";
      6'h30: return "LL";
      6'hf:  return "LUI";
      6'h23: return "LW";
      6'hd:  return "ORI";
      6'ha:  return "SLTI";
      6'hb:  return "SLTIU";
      6'h28: return "SB";
      6'h38: return "SC";
      6'h29: return "SH";
      6'h2b: return "SW";   
      default: return "I_UNKNOWN";
    endcase
  endfunction

  function string get_j_type_name();
    case (opcode)
      6'h2: return "J";
      6'h3: return "JAL";
      default: return "J_UNKNOWN";
    endcase
  endfunction

    // Constraints
    constraint opcode_valid {
      opcode inside {6'd0, 6'd0, 6'd0, 6'd0, 6'd0,
        6'd0, 6'd0, 6'd0, 6'd0, 6'd0,
        6'd8, 6'd9, 6'hc, 6'h4, 6'h5, 
        6'h2, 6'h3, 6'h24, 6'h25, 6'hf, 
        6'h23, 6'hd, 6'ha, 6'hb, 
        6'h28, 6'h38, 6'h29, 6'h2b};
      }
    constraint valid_reg{
      rs inside {[0:31]};
      rt inside {[1:31]};
      rd inside {[1:31]};
    }
    constraint shamt_range {
      shamt inside {[0:2]};
    }
    constraint addr_range{
      addr inside {[0:200-1]};
    }
    constraint funct_valid {
      funct inside {6'h20, 6'h21, 6'h24, 6'h08, 6'h27, 6'h25, 6'h2a, 6'h2b, 6'h00, 6'h02, 6'h22, 6'h23};
    }
endclass



module tbCover_top();

  // R-type: op=0, rs, rt, rd, shamt, funct
  // write_r_type(.mem_idx(), .rs(), .rt(), .rd(), .shamt(), .funct());
  task automatic write_r_type(
      input int  mem_idx,
      input logic [4:0] rs, rt, rd, shamt,
      input logic [5:0] funct
  );
    instruction_memory[mem_idx] = {6'd0, rs, rt, rd, shamt, funct};
  endtask

  // I-type: opcode, rs, rt, imm
  // write_i_type(.mem_idx(), .opcode(), .rs(), .rt(), .imm());
  task automatic write_i_type(
      input int  mem_idx,
      input logic [5:0] opcode,
      input logic [4:0] rs, rt,
      input logic [15:0] imm
  );
    instruction_memory[mem_idx] = {opcode, rs, rt, imm};
  endtask

  // J-type: opcode, target address
  // write_j_type(.mem_idx(), .opcode(), .addr());
  task automatic write_j_type(
      input int  mem_idx,
      input logic [5:0] opcode,
      input logic [25:0] addr
  );
    instruction_memory[mem_idx] = {opcode, addr};
  endtask
  
// inputs
  reg clk, rst;

// parameters
  parameter WIDTH = 32;
  parameter CLK_PERIOD = 10;
  parameter MAX_INSTRUCTIONS = 200;
  integer NUM_INSTRUCTIONS;

// instruction memory declaration (passed into IF)
  logic [WIDTH-1:0] instruction_memory [MAX_INSTRUCTIONS-1:0]; 
  integer i = 0;

  rand_inst instr;

initial begin // START of insruction memory initialization
  NUM_INSTRUCTIONS = 0;
  instr = new();
    
  repeat(MAX_INSTRUCTIONS) begin
    logic [2:0] actual_format;
    instr.randomize();
    

    case (instr.opcode)
      6'd0: actual_format = 0;  // R-type
      6'd2, 6'd3: actual_format = 2;  // J-type (J, JAL)
      default: actual_format = 1;  // I-type (everything else)
    endcase

    $write("[%d] %s \t", NUM_INSTRUCTIONS, instr.get_instruction_name(actual_format[2:0]));
    case (actual_format)
      0: begin // R-type
        $display("R%d = R%d %s R%d (funct=%h)", instr.rd, instr.rs, instr.get_r_type_name(), instr.rt, instr.funct);
        write_r_type(.mem_idx(NUM_INSTRUCTIONS), 
          .rs(instr.rs), .rt(instr.rt), 
          .rd(instr.rd), .shamt(instr.shamt), 
          .funct(instr.funct));
      end
      1: begin // I-type
        $display("R%d = R%d %s (%h) 0x%h", instr.rt, instr.rs, instr.get_i_type_name(), instr.opcode, instr.immediate);
        write_i_type(.mem_idx(NUM_INSTRUCTIONS), 
          .opcode(instr.opcode), 
          .rs(instr.rs), .rt(instr.rt), 
          .imm(instr.immediate));
      end
      2: begin // J-type
        $display("PC = 0x%h (%s)", instr.addr, instr.get_j_type_name());
        write_j_type(.mem_idx(NUM_INSTRUCTIONS), 
          .opcode(instr.opcode), 
          .addr(instr.addr));
      end
    endcase
    NUM_INSTRUCTIONS += 1;
  end
  $display("Total instructions written: %d", NUM_INSTRUCTIONS);
end // END of insruction memory initialization

/* TOP MODULE PORT INSTANTIATION
  /* verilator lint_off UNUSEDSIGNAL */
// IF outputs
  wire [WIDTH-1:0] if_pc_pp, if_inst;
// IF/ID pipeline registers
  wire [WIDTH-1:0] if_id_pcIncr, if_id_inst;
// ID outputs
  wire [4:0] id_regT, id_regD, id_regS;
  wire [4:0] id_exCtrl;
  wire [3:0] id_memCtrl;
  wire [3:0] id_wbCtrl;
  wire [WIDTH-1:0] id_pcIncr, id_sgnExt, id_rdDataOne, id_rdDataTwo;
  wire [WIDTH-1:0] reg_file_debug [0:32-1];
  wire id_stallIF;
  wire id_PCJmp;
  wire [WIDTH-1:0] id_jump_addr;
  wire [4:0] id_shamt_out;
  wire if_id_write, PCWrite;
// ID/EX pipeline registers
  wire [4:0] id_ex_regT, id_ex_regD, id_ex_regS, id_ex_shamt_out;
  wire [4:0] id_ex_exCtrl;
  wire [3:0] id_ex_memCtrl;
  wire [3:0] id_ex_wbCtrl;
  wire [WIDTH-1:0] id_ex_pcIncr, id_ex_sgnExt, id_ex_rdDataOne, id_ex_rdDataTwo;
// EX outputs
  wire [4:0] ex_regDst;
  wire [3:0] ex_memCtrl;
  wire [3:0] ex_wbCtrl;
  wire ex_zeroFlag;
  wire ex_overflowFlag;
  wire [WIDTH-1:0] ex_aluResult, ex_rdDataTwo, ex_pcAdd;
// EX/MEM pipeline registers
  wire [4:0] ex_mem_regDst;
  wire [3:0] ex_mem_memCtrl;
  wire [3:0] ex_mem_wbCtrl;
  wire ex_mem_zeroFlag;
  wire [WIDTH-1:0] ex_mem_aluResult, ex_mem_rdDataTwo, ex_mem_pcAdd;
// MEM outputs
  wire mem_branchFlag;
  wire [WIDTH-1:0] mem_branchAddr;
  wire [3:0] mem_wbCtrl;
  wire [4:0] mem_regDst;
  wire [WIDTH-1:0] mem_memReadData, mem_aluResult;
// MEM/WB pipeline registers
  wire [3:0] mem_wb_wbCtrl;
  wire [4:0] mem_wb_regDst;
  wire [WIDTH-1:0] mem_wb_memReadData, mem_wb_aluResult;
// WB outputs 
  wire wb_regWrite;
  wire [4:0] wb_regDst;
  wire [WIDTH-1:0] wb_regData;
  /* verilator lint_on UNUSEDSIGNAL */

// module instantiation 
  top #(.WIDTH(WIDTH), .MAX_INSTRUCTIONS(MAX_INSTRUCTIONS)) top_00 (
    .clk(clk), .rst(rst),
    .if_pc_pp(if_pc_pp), .if_inst(if_inst), .if_instruction_memory(instruction_memory),
    .if_id_pcIncr(if_id_pcIncr), .if_id_inst(if_id_inst),
    .id_regT(id_regT), .id_regD(id_regD), .id_regS(id_regS),
    .id_exCtrl(id_exCtrl), .id_memCtrl(id_memCtrl), .id_wbCtrl(id_wbCtrl),
    .id_pcIncr(id_pcIncr), .id_sgnExt(id_sgnExt), .id_PCJmp(id_PCJmp),
    .id_rdDataOne(id_rdDataOne), .id_rdDataTwo(id_rdDataTwo), .jump_addr(id_jump_addr),
    .id_stallIF(id_stallIF), .id_shamt_out(id_shamt_out),
    .id_ex_regT(id_ex_regT), .id_ex_regD(id_ex_regD), .id_ex_regS(id_ex_regS),
    .id_ex_exCtrl(id_ex_exCtrl), .id_ex_memCtrl(id_ex_memCtrl), .id_ex_wbCtrl(id_ex_wbCtrl),
    .id_ex_pcIncr(id_ex_pcIncr), .id_ex_sgnExt(id_ex_sgnExt),
    .id_ex_rdDataOne(id_ex_rdDataOne), .id_ex_rdDataTwo(id_ex_rdDataTwo),
    .if_id_write(if_id_write), .PCWrite(PCWrite),
    .reg_file_debug(reg_file_debug), .id_ex_shamt_out(id_ex_shamt_out),
    .ex_regDst(ex_regDst), .ex_memCtrl(ex_memCtrl), .ex_wbCtrl(ex_wbCtrl),
    .ex_zeroFlag(ex_zeroFlag), .ex_overflowFlag(ex_overflowFlag),
    .ex_aluResult(ex_aluResult), .ex_rdDataTwo(ex_rdDataTwo), .ex_pcAdd(ex_pcAdd),
    .ex_mem_regDst(ex_mem_regDst), .ex_mem_memCtrl(ex_mem_memCtrl), .ex_mem_wbCtrl(ex_mem_wbCtrl),
    .ex_mem_zeroFlag(ex_mem_zeroFlag),
    .ex_mem_aluResult(ex_mem_aluResult), .ex_mem_rdDataTwo(ex_mem_rdDataTwo), .ex_mem_pcAdd(ex_mem_pcAdd),
    .mem_branchFlag(mem_branchFlag), .mem_branchAddr(mem_branchAddr), .mem_wbCtrl(mem_wbCtrl), .mem_regDst(mem_regDst),
    .mem_memReadData(mem_memReadData), .mem_aluResult(mem_aluResult),
    .mem_wb_wbCtrl(mem_wb_wbCtrl), .mem_wb_regDst(mem_wb_regDst),
    .mem_wb_memReadData(mem_wb_memReadData), .mem_wb_aluResult(mem_wb_aluResult),
    .wb_regWrite(wb_regWrite), .wb_regDst(wb_regDst), .wb_regData(wb_regData)
  );

// clock 
  always #(CLK_PERIOD/2) clk = ~clk;

// stimulus
  initial begin
    clk = 0; rst = 1;
    #(CLK_PERIOD) rst = 0;

    #(MAX_INSTRUCTIONS*CLK_PERIOD); // cycle through 
    #(7*MAX_INSTRUCTIONS) $finish; // to allow pipeline to fully flush out previous instructions
  end


// waveform
  initial begin
    $dumpfile("./vcd/tbCover_top.vcd");
    $dumpvars(0, tbCover_top);
    for (i = 0; i < 32; i++)
      $dumpvars(0, reg_file_debug[i]);
  end

endmodule: tbCover_top

/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on DECLFILENAME */
