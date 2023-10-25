`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 00:59:18
// Design Name: 
// Module Name: fourbitsub_tb
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


module fourbitsub_tb();

reg [3:0]in1;
reg [3:0]in2;
wire [3:0]s;
wire c;

fourbitsub f1(in1,in2,s,c);

initial begin
in1<=4'b0000;in2<=4'b0000;
#10 in1<=4'b0100;in2<=4'b0000;
#10 in1<=4'b0000;in2<=4'b0010;
end

always #10 in1<={$random}%16;
always #10 in2<={$random}%16;

endmodule
