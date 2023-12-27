`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/15 16:05:21
// Design Name: 
// Module Name: test1_tb
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


module test1_tb();

reg CLK;
reg I3,I2,I1,I0;
reg N_Reset;
wire  [7:0]SEG_COM;
wire [6:0]SEG_DATA;
wire [3:0]t;

assign t={I3,I2,I1,I0};

sevensegment s1
(
CLK,
I3,I2,I1,I0,
N_Reset,
SEG_COM, SEG_DATA
);

initial
begin
CLK<=0;I3=0;I2=0;I1=0;I0=0;N_Reset=0;
CLK<=1;I3=0;I2=1;I1=1;I0=0;N_Reset=0;
end

always #10 CLK<=~CLK;




endmodule
