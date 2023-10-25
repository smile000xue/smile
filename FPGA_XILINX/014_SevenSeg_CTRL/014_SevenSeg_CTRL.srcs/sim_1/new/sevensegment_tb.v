`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 03:33:38
// Design Name: 
// Module Name: sevensegment_tb
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


module sevensegment_tb;
reg CLK, I3, I2, I1, I0, N_RESET;
wire [7:0] SEG_COM;
wire [6:0] SEG_DATA;
always #0.05 CLK = ~CLK;

sevensegment a(CLK, I3, I2, I1, I0,
N_RESET, SEG_COM, SEG_DATA);
initial begin
CLK = 0;
I3<=0; I2<=0; I1<=0; I0<=1;
N_RESET<=1;
#5
N_RESET<=0;
#5
I3<=0; I2<=0; I1<=1; I0<=0;
#10
I3<=0; I2<=1; I1<=0; I0<=0;
#10
I3<=1; I2<=0; I1<=0; I0<=0;
#10
I3<=1; I2<=1; I1<=0; I0<=0;
#10
I3<=1; I2<=1; I1<=1; I0<=1;
end
endmodule