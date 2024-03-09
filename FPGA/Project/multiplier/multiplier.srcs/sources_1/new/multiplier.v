`timescale 1ns / 1ps
module multiplier(A,B,C);
input [2:0]A;
input [3:0]B;
output[6:0]C;
wire [3:0]W1;
wire [3:0]W2;
wire [3:0]W3;
wire [4:0]S;
wire [4:0]P;

and a0(C[0],A[0],B[0]);
and a1(W1[0],A[0],B[1]);
and a2(W1[1],A[0],B[2]);
and a3(W1[2],A[0],B[3]);

assign W1[3]=1'b0;

and a4(W2[0],A[1],B[0]);
and a5(W2[1],A[1],B[1]);
and a6(W2[2],A[1],B[2]);
and a7(W2[3],A[1],B[3]);

fourbitadder a8(W1,W2,0,P[3:0],P[4]);

assign C[1]=P[0];
assign S[3:0]=P[4:1];

and a9(W3[0],A[2],B[0]);
and a10(W3[1],A[2],B[1]);
and a11(W3[2],A[2],B[2]);
and a12(W3[3],A[2],B[3]);

fourbitadder a13(S[3:0],W3[3:0],0,C[5:2],C[6]);

endmodule
