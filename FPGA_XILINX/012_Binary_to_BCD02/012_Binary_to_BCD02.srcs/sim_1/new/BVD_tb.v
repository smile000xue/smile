`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 02:44:23
// Design Name: 
// Module Name: BVD_tb
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


module BVD_tb();

reg [3:0]in1;
wire [9:0]out;

BCDfourbit b1(in1,out);

initial begin
in1<=4'b0000;
#10 in1<=4'b1010;

end

always #10 in1<={$random}%16;

endmodule
