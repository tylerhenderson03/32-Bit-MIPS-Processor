`timescale 1ns/1ns
//top module for 5-stage microprocessor
module top #(parameter WIDTH = 32) (input clk, rst,

);
    
// 1. instruction fetch module + wire declaration

// 2. instruction decode module + wire declaration

// 3. execute module + wire declaration

// 4. memory access module + wire declaration

// 5. register writeback module + wire declaration

// if/id pipeline registers
    always @(posedge clk or posedge rst) begin

    end

// id/ex pipeline registers
    always @(posedge clk or posedge rst) begin

    end

// ex/mem pipeline registers
    always @(posedge clk or posedge rst) begin

    end
    
// mem/wb pipeline registers
    always @(posedge clk or posedge rst) begin

    end
    


endmodule: top
