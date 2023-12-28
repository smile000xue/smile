`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/02 15:28:09
// Design Name: 
// Module Name: Register4bit
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


module Register4bit(
input D0,D1,D2,D3,clk,
output Q0,Q1,Q2,Q3
    );

Dflipflop d1(clk,D0,Q0,);
Dflipflop d2(clk,D1,Q1,);
Dflipflop d3(clk,D2,Q2,);
Dflipflop d4(clk,D3,Q3,);
      


endmodule
