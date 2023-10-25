`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/19 20:45:02
// Design Name: 
// Module Name: fourbitadder_tb
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


module fourbitadder_tb();
reg [3:0]in1;
reg [3:0]in2;
reg in0;
wire [3:0]out;
wire[3:0]c;

fourbitadder fb1(in1,in2,in0,out,c);

initial begin

in1<=4'b0000;in2<=4'b0000;in0<=0;
#10 in1<=4'b0000;in2<=4'b0000;in0<=0;
#10 in1<=4'b0100;in2<=4'b1000;in0<=0;
#10 in1<=4'b0010;in2<=4'b00100;in0<=0;

end

always #10 in1<={$random}%16;
always #10 in2<={$random}%16;
always #10 in0<={$random}%2;

endmodule
