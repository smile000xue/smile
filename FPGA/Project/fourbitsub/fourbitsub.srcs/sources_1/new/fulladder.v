`timescale 10ns/1ps

module fulladder(X,Y,Z,S,C);

input X,Y,Z;
output S,C;
wire C0,C1,S0;

halfadder H0(X,Y,S0,C0);
halfadder H1(S0,Z,S,C1);

assign C=C0 | C1;

endmodule
