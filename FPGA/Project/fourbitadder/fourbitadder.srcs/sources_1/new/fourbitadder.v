`timescale 1ns / 1ps


module fourbitadder(X,Y,Cin,S,Cout);

input [3:0] X;
input [3:0] Y;
input Cin;
output [3:0] S;
output Cout;
wire C1, C2, C3;

fulladder f0(X[0],Y[0],Cin,S[0],C1);
fulladder f1(X[1],Y[1],C1,S[1],C2);
fulladder f2(X[2],Y[2],C2,S[2],C3);
fulladder f3(X[3],Y[3],C3,S[3],Cout);

endmodule
