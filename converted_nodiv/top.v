module top (
	clk,
	rst,
	if_instruction_memory,
	if_pc_pp,
	if_inst,
	if_id_pcIncr,
	if_id_inst,
	id_regT,
	id_regD,
	id_shamt_out,
	id_exCtrl,
	id_memCtrl,
	id_wbCtrl,
	id_pcIncr,
	id_sgnExt,
	id_rdDataOne,
	id_rdDataTwo,
	jump_addr,
	reg_file_debug,
	id_stallIF,
	id_PCJmp,
	id_ex_regT,
	id_ex_regD,
	id_ex_shamt_out,
	id_ex_exCtrl,
	id_ex_memCtrl,
	id_ex_wbCtrl,
	id_ex_pcIncr,
	id_ex_sgnExt,
	id_ex_rdDataOne,
	id_ex_rdDataTwo,
	ex_regDst,
	ex_memCtrl,
	ex_wbCtrl,
	ex_zeroFlag,
	ex_overflowFlag,
	ex_aluResult,
	ex_rdDataTwo,
	ex_pcAdd,
	ex_mem_regDst,
	ex_mem_memCtrl,
	ex_mem_wbCtrl,
	ex_mem_zeroFlag,
	ex_mem_aluResult,
	ex_mem_rdDataTwo,
	ex_mem_pcAdd,
	mem_branchFlag,
	mem_branchAddr,
	mem_wbCtrl,
	mem_regDst,
	mem_memReadData,
	mem_aluResult,
	mem_wb_wbCtrl,
	mem_wb_regDst,
	mem_wb_memReadData,
	mem_wb_aluResult,
	wb_regWrite,
	wb_regDst,
	wb_regData
);
	parameter WIDTH = 32;
	input wire clk;
	input wire rst;
	input [(32 * WIDTH) - 1:0] if_instruction_memory;
	output wire [WIDTH - 1:0] if_pc_pp;
	output wire [WIDTH - 1:0] if_inst;
	output reg [WIDTH - 1:0] if_id_pcIncr;
	output reg [WIDTH - 1:0] if_id_inst;
	output wire [4:0] id_regT;
	output wire [4:0] id_regD;
	output wire [4:0] id_shamt_out;
	output wire [4:0] id_exCtrl;
	output wire [3:0] id_memCtrl;
	output wire [3:0] id_wbCtrl;
	output wire [WIDTH - 1:0] id_pcIncr;
	output wire [WIDTH - 1:0] id_sgnExt;
	output wire [WIDTH - 1:0] id_rdDataOne;
	output wire [WIDTH - 1:0] id_rdDataTwo;
	output wire [WIDTH - 1:0] jump_addr;
	output wire [(32 * WIDTH) - 1:0] reg_file_debug;
	output wire id_stallIF;
	output wire id_PCJmp;
	output reg [4:0] id_ex_regT;
	output reg [4:0] id_ex_regD;
	output reg [4:0] id_ex_shamt_out;
	output reg [4:0] id_ex_exCtrl;
	output reg [3:0] id_ex_memCtrl;
	output reg [3:0] id_ex_wbCtrl;
	output reg [WIDTH - 1:0] id_ex_pcIncr;
	output reg [WIDTH - 1:0] id_ex_sgnExt;
	output reg [WIDTH - 1:0] id_ex_rdDataOne;
	output reg [WIDTH - 1:0] id_ex_rdDataTwo;
	output wire [4:0] ex_regDst;
	output wire [3:0] ex_memCtrl;
	output wire [3:0] ex_wbCtrl;
	output wire ex_zeroFlag;
	output wire ex_overflowFlag;
	output wire [WIDTH - 1:0] ex_aluResult;
	output wire [WIDTH - 1:0] ex_rdDataTwo;
	output wire [WIDTH - 1:0] ex_pcAdd;
	output reg [4:0] ex_mem_regDst;
	output reg [3:0] ex_mem_memCtrl;
	output reg [3:0] ex_mem_wbCtrl;
	output reg ex_mem_zeroFlag;
	output reg [WIDTH - 1:0] ex_mem_aluResult;
	output reg [WIDTH - 1:0] ex_mem_rdDataTwo;
	output reg [WIDTH - 1:0] ex_mem_pcAdd;
	output wire mem_branchFlag;
	output wire [WIDTH - 1:0] mem_branchAddr;
	output wire [3:0] mem_wbCtrl;
	output wire [4:0] mem_regDst;
	output wire [WIDTH - 1:0] mem_memReadData;
	output wire [WIDTH - 1:0] mem_aluResult;
	output reg [3:0] mem_wb_wbCtrl;
	output reg [4:0] mem_wb_regDst;
	output reg [WIDTH - 1:0] mem_wb_memReadData;
	output reg [WIDTH - 1:0] mem_wb_aluResult;
	output wire wb_regWrite;
	output wire [4:0] wb_regDst;
	output wire [WIDTH - 1:0] wb_regData;
	always @(posedge clk or posedge rst)
		if (rst) begin
			if_id_pcIncr <= 1'sb0;
			if_id_inst <= 1'sbx;
		end
		else begin
			if_id_pcIncr <= if_pc_pp;
			if_id_inst <= if_inst;
		end
	always @(posedge clk or posedge rst)
		if (rst) begin
			id_ex_regT <= 1'sb0;
			id_ex_regD <= 1'sb0;
			id_ex_exCtrl <= 1'sb0;
			id_ex_memCtrl <= 1'sb0;
			id_ex_wbCtrl <= 1'sb0;
			id_ex_pcIncr <= 1'sb0;
			id_ex_sgnExt <= 1'sb0;
			id_ex_rdDataOne <= 1'sb0;
			id_ex_rdDataTwo <= 1'sb0;
			id_ex_shamt_out <= 1'sb0;
		end
		else begin
			id_ex_regT <= id_regT;
			id_ex_regD <= id_regD;
			id_ex_exCtrl <= id_exCtrl;
			id_ex_memCtrl <= id_memCtrl;
			id_ex_wbCtrl <= id_wbCtrl;
			id_ex_pcIncr <= id_pcIncr;
			id_ex_sgnExt <= id_sgnExt;
			id_ex_rdDataOne <= id_rdDataOne;
			id_ex_rdDataTwo <= id_rdDataTwo;
			id_ex_shamt_out <= id_shamt_out;
		end
	always @(posedge clk or posedge rst)
		if (rst) begin
			ex_mem_regDst <= 1'sb0;
			ex_mem_memCtrl <= 1'sb0;
			ex_mem_wbCtrl <= 1'sb0;
			ex_mem_zeroFlag <= 1'sb0;
			ex_mem_aluResult <= 1'sb0;
			ex_mem_rdDataTwo <= 1'sb0;
			ex_mem_pcAdd <= 1'sb0;
		end
		else begin
			ex_mem_regDst <= ex_regDst;
			ex_mem_memCtrl <= ex_memCtrl;
			ex_mem_wbCtrl <= ex_wbCtrl;
			ex_mem_zeroFlag <= ex_zeroFlag;
			ex_mem_aluResult <= ex_aluResult;
			ex_mem_rdDataTwo <= ex_rdDataTwo;
			ex_mem_pcAdd <= ex_pcAdd;
		end
	always @(posedge clk or posedge rst)
		if (rst) begin
			mem_wb_wbCtrl <= 1'sb0;
			mem_wb_regDst <= 1'sb0;
			mem_wb_memReadData <= 1'sb0;
			mem_wb_aluResult <= 1'sb0;
		end
		else begin
			mem_wb_wbCtrl <= mem_wbCtrl;
			mem_wb_regDst <= mem_regDst;
			mem_wb_memReadData <= mem_memReadData;
			mem_wb_aluResult <= mem_aluResult;
		end
	if_stage #(.WIDTH(WIDTH)) if_top(
		.clk(clk),
		.rst(rst),
		.instruction_memory(if_instruction_memory),
		.PCSrc(mem_branchFlag),
		.pc_br(mem_branchAddr),
		.jump_addr(jump_addr),
		.pc_pp(if_pc_pp),
		.inst_mem_out(if_inst),
		.PCJmp(id_PCJmp)
	);
	id_stage #(.WIDTH(WIDTH)) id_top(
		.clk(clk),
		.rst(rst),
		.if_out(if_id_inst),
		.pc_incr_in(if_id_pcIncr),
		.wr_reg(wb_regDst),
		.wr_data(wb_regData),
		.RegWrite(wb_regWrite),
		.ex_ctrl(id_exCtrl),
		.mem_ctrl(id_memCtrl),
		.wb_ctrl(id_wbCtrl),
		.pc_incr_out(id_pcIncr),
		.sgn_extend_out(id_sgnExt),
		.jump_addr(jump_addr),
		.rd_data_one(id_rdDataOne),
		.rd_data_two(id_rdDataTwo),
		.rd_out(id_regD),
		.rt_out(id_regT),
		.register_file(reg_file_debug),
		.stallIF(id_stallIF),
		.PCJmp(id_PCJmp),
		.shamt_out(id_shamt_out)
	);
	ex_stage #(.WIDTH(WIDTH)) ex_top(
		.ex_ctrl(id_ex_exCtrl),
		.mem_ctrl_in(id_ex_memCtrl),
		.wb_ctrl_in(id_ex_wbCtrl),
		.pc_incr_in(id_ex_pcIncr),
		.sgn_extend_out(id_ex_sgnExt),
		.rd_data_one(id_ex_rdDataOne),
		.rd_data_two_in(id_ex_rdDataTwo),
		.rd_out(id_ex_regD),
		.rt_out(id_ex_regT),
		.mem_ctrl_out(ex_memCtrl),
		.wb_ctrl_out(ex_wbCtrl),
		.pc_slt_add(ex_pcAdd),
		.alu_result(ex_aluResult),
		.rd_data_two_out(ex_rdDataTwo),
		.zero_flag(ex_zeroFlag),
		.overflow_flag(ex_overflowFlag),
		.reg_dst_mux(ex_regDst),
		.shamt_out(id_ex_shamt_out)
	);
	mem_stage #(.WIDTH(WIDTH)) mem_top(
		.clk(clk),
		.rst(rst),
		.zero_flag(ex_mem_zeroFlag),
		.mem_ctrl(ex_mem_memCtrl),
		.wb_ctrl_in(ex_mem_wbCtrl),
		.alu_result(ex_mem_aluResult),
		.rd_data_two_out(ex_mem_rdDataTwo),
		.pc_slt_add(ex_mem_pcAdd),
		.reg_dst_mux(ex_mem_regDst),
		.branch_flag(mem_branchFlag),
		.mem_read_data(mem_memReadData),
		.branch_addr(mem_branchAddr),
		.alu_result_out(mem_aluResult),
		.wb_ctrl_out(mem_wbCtrl),
		.wr_reg_dest_out(mem_regDst)
	);
	wb_stage #(.WIDTH(WIDTH)) wb_top(
		.mem_read_data(mem_wb_memReadData),
		.alu_result_out(mem_wb_aluResult),
		.wb_ctrl(mem_wb_wbCtrl),
		.wr_reg_dest_in(mem_wb_regDst),
		.wr_reg_dest_out(wb_regDst),
		.wr_data(wb_regData),
		.RegWrite(wb_regWrite)
	);
endmodule
