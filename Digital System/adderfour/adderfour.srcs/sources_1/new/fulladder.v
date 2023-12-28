`timescale 1ns / 1ps

module fulladder(
input x,y,c_in,
output s,c_out
);

wire s1,c1,c2;

halfadder ha1(x,y,s1,c1);
halfadder ha2(c_in,s1,s,c2);
assign c_out=c2|c1;

endmodule
