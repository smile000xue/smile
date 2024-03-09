`timescale 10ns/1ps

module fourbitsub(X,Y,S,C);

input [3:0]X;
input [3:0]Y;
output [3:0]S;
output C;

wire C0, C1, C2;
wire W0, W1, W2, W3;

assign W0=Y[0]^1;
assign W1=Y[1]^1;
assign W2=Y[2]^1;
assign W3=Y[3]^1;

fulladder F0(X[0],W0,1,S[0],C0);
fulladder F1(X[1],W1,C0,S[1],C1);
fulladder F2(X[2],W2,C1,S[2],C2);
fulladder F3(X[3],W3,C2,S[3],C);

endmodule
