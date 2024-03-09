`timescale 10ns/1ps

module halfadder(A,B,S,C);

input A,B;
output S,C;

assign S=A ^ B;
assign C=A & B;

endmodule

