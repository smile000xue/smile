`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 00:41:52
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

reg cin;
reg [3:0]in1;
reg [3:0]in2;
wire [3:0]s;
wire co;

fourbitadder f1(cin,in1,in2,s,co);

initial begin

in1<=4'b0000;in2<=4'b0000;cin<=1;
#10 in1<=4'b0001;in2<=4'b0100;cin<=1;
#10 in1<=4'b0101;in2<=4'b0100;cin<=1;
#10 in1<=4'b0101;in2<=4'b0100;cin<=0;

end

always #10 in1<={$random}%16;
always #10 in2<={$random}%16;


endmodule
