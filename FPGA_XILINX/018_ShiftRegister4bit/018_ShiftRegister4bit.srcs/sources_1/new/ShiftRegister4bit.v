`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/02 19:53:43
// Design Name: 
// Module Name: ShiftRegister4bit
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


module ShiftRegister4bit(
input clk,SI,
output S0
    );  
wire t1,t2,t3;
    
Dflipflop d1(clk,SI,t1,);
Dflipflop d2(clk,t1,t2,);
Dflipflop d3(clk,t2,t3,);
Dflipflop d4(clk,t3,S0,);    

endmodule
