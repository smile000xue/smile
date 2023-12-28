`timescale 10ns/1ps
module BCD_to_7segment_tb;
reg a,b,c,d;
wire e,f,g,h,i,j,k;
BCD_to_7segment U1(a,b,c,d,e,f,g,h,i,j,k);
initial begin
a<=0; b<=0; c<=0; d<=0;
#10 a<=0; b<=1; c<=0; d<=0;
#10 a<=1; b<=0; c<=0; d<=0;
#10 a<=1; b<=0; c<=0; d<=1;
end
endmodule
