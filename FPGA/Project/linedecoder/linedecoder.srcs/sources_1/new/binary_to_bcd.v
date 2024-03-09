`timescale 1ns / 1ps
module binary_to_bcd (B3,B2,B1,B0,P9,P8,P7,P6,P5,P4,P3,P2,P1,P0);

input B3,B2,B1,B0;
output P9,P8,P7,P6,P5,P4,P3,P2,P1,P0;

wire [10:0]T;

supply0 gnd;
assign P0=B0;

linedecoder C1({gnd,gnd,gnd,B3},T[3:0]);
linedecoder C2({T[2:0],B2},T[7:4]);
linedecoder C3({gnd,gnd,gnd,T[3]},{P9,T[10:8]});
linedecoder C4({T[6:4],B1},{P4,P3,P2,P1});
linedecoder C5(T[10:7],{P8,P7,P6,P5});
endmodule
