`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/16 11:45:16
// Design Name: 
// Module Name: mux2_1_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module mux2_1_tb();

reg a;
reg b;
reg sel;

wire out;



initial
    begin
        a<=1'b0;
        b<=1'b0;
        sel=1'b0;
    end

always #10 a<= {$random}%2;

always #10 b<= {$random}%2;

always #10 sel<= {$random}%2;

mux2_1  mux2_1_inst

(
        .a(a),
        .b(b),
        .sel(sel),
        
        .out(out)
        
);



endmodule
