// Instruction Decode
// register file read, sign-extension

module if_stage(input [WIDTH-1:0] if_in,
                input [WIDTH-1:0] pc_incr_in,
                input [WIDTH-1:0] wr_reg, wr_data,
                input RegWrite,

                output wb_ctrl,
                output [2:0] mem_ctrl, ex_ctrl,
                output wire [WIDTH-1:0] pc_incr_out,
                output wire [WIDTH-1:0] sgn_extend_out,
                output wire [WIDTH-1:0] rd_data_one, rd_data_two
                );
// 32 general purpose registers, each are 32(WIDTH-bits wide
    reg [WIDTH-1:0] register_file [32-1:0]; 

// instruction [15:0] extended to be 32 bits
    assign sgn_extend_out = {16'b0, if_in[15:0]};

// instruction [20:16] shifted into EX stage
    assign rd_out = if_in[15:11];

// instruction [15:11] shifted into EX stage
    assign rt_out = if_in[20:16];

    always_comb begin
        if(RegWrite) begin
            register_file[wr_reg] = wr_data;
        end
        assign rd_data_one = register_file[if_in[25:21]];
        assign rd_data_two = register_file[if_in[20:16]];
    end


endmodule: if_stage
