`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 01:47:08
// Design Name: 
// Module Name: multiplier_tb
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


module multiplier_tb();

reg [3:0]in1;
reg [2:0]in2;
wire [6:0]s;

multiplier m1(in1,in2,s);

initial begin

in1<=4'b0000;in2<=3'b000;
#10 in1<=4'b0010;in2<=3'b100;
end

always #10 in1<={$random}%16;
always #10 in2<={$random}%8;

endmodule
