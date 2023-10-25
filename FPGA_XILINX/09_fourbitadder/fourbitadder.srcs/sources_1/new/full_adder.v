`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/09/22 01:26:58
// Design Name: 
// Module Name: full_adder
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


module full_adder(

input wire in1,
input wire in2,
input wire cin,

output wire cout,
output wire sum


);
    
wire h0_count;
wire h1_count;
wire h0_sum;

half_adder half_adder_inst0
(
    .in1(in1),
    .in2(in2),
    .s(h0_sum),
    .c(h0_count)
);

half_adder half_adder_inst1
(
    .in1(h0_sum),
    .in2(cin),
    .s(sum),
    .c(h1_count)
);

assign cout= h0_count | h1_count;
    
endmodule
