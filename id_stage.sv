// Instruction Decode
// register file read, sign-extension

module if_stage(input [WIDTH-1:0] if_in,
                input [XXX:0] pc_incr_in,
                output wb_ctrl
                output [2:0] mem_ctrl, ex_ctrl,
                output [XXX:0] pc_incr_out,
                output wire [32-1:0] s_extend_out,
                output wire [4:0] rd_out, rt_out
                );

    reg [WIDTH-1:0] register_file [32-1:0]; // 32 registers, each are 32(DEPTH)-bits wide

    assign s_extend_out = {16'b0, if_in[15:0]};
    assign rd_out = if_in[15:11];
    assign rt_out = if_in[20:16];


endmodule: if_stage
