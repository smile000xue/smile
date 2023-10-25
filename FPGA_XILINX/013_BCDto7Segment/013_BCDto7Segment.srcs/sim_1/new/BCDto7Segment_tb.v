`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 03:17:33
// Design Name: 
// Module Name: BCDto7Segment_tb
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


module BCDto7Segment_tb();
reg [3:0]in;
wire [6:0]out;

BCDto7Segment b1(in,out);

initial begin

in<=4'b0001;
#10 in<=4'b0101;

end

always #10 in<={$random}%16;


endmodule
