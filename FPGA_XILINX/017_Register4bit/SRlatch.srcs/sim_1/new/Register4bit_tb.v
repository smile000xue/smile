`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/02 15:32:06
// Design Name: 
// Module Name: Register4bit_tb
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


module Register4bit_tb();

reg D0,D1,D2,D3,clk;
wire Q0,Q1,Q2,Q3;

Register4bit r1(D0,D1,D2,D3,clk,Q0,Q1,Q2,Q3);

initial
begin

D0=0;D1=0;D2=0;D3=0;clk=0;

end

always 
begin
#10 D0<={$random}%2;
#10 D1<={$random}%2;
#10 D2<={$random}%2;
#10 D3<={$random}%2;
#5 clk=~clk;

end
endmodule
