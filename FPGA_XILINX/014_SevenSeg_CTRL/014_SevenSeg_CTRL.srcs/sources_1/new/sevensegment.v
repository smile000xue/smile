`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/10/26 03:33:13
// Design Name: 
// Module Name: sevensegment
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


module sevensegment
(
CLK,
I3,I2,I1,I0,
N_Reset,
SEG_COM, SEG_DATA
);

input CLK,I3,I2,I1,I0,N_Reset; // 6 inputs
output [7:0] SEG_COM, SEG_DATA; // Two 8-bit-outputs
wire T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
wire A1,B1,C1,D1,E1,F1,G1,A2,B2,C2,D2,E2,F2,G2;

// calling out 'binary_to_BCD' module
binary_to_bcd_2 u1(I3,I2,I1,I0, T9,T8,T7,T6,T5,T4,T3,T2,T1,T0);

// calling out 'BCD_to_7segment' module
BCD_to_7segment u2(T3,T2,T1,T0, A1,B1,C1,D1,E1,F1,G1);
BCD_to_7segment u3(T7,T6,T5,T4, A2,B2,C2,D2,E2,F2,G2);

// calling out 'SevenSeg_CTRL' module

SevenSeg_CTRL u4(CLK, N_Reset, {A1,B1,C1,D1,E1,F1,G1},{A2,B2,C2,D2,E2,F2,G2},0,0,0,0,0,0,
SEG_COM, SEG_DATA);

endmodule
