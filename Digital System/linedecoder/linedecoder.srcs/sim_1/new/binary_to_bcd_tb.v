`timescale 10ns/1ps
module binary_to_bcd_tb;
reg a,b,c,d;
wire e,f,g,h,i,j,k,l,m,n;
binary_to_bcd U1(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
initial begin
a<=0; b<=0; c<=0; d<=0;
#10 a<=1; b<=0; c<=0; d<=1;
#10 a<=0; b<=1; c<=1; d<=1;
#10 a<=0; b<=1; c<=0; d<=1;
end
endmodule
