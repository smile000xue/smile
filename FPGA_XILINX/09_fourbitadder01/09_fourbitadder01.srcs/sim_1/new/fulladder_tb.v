`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/19 19:59:28
// Design Name: 
// Module Name: fulladder_tb
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


module fulladder_tb();

reg in1;
reg in2;
reg in0;
wire sum;
wire c;

fulladder f_tb1(in1,in2,in0,sum,c);

initial 
begin

in1<=0;in2<=1;in0<=0;
#10 in1<=0;in2<=1;in0<=0;
#10 in1<=1;in2<=1;in0<=0;
#10 in1<=1;in2<=1;in0<=1;

end


always     #10 in2<={$random}%2;
always     #10 in1<={$random}%2;
always     #10 in0<={$random}%2;
    

endmodule
