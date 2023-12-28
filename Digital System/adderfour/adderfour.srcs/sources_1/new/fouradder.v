`timescale 1ns / 1ps

module fouradder(
input [3:0]x,
input [3:0]y,
input cin,
output[3:0]sum,
output c_out
);
wire c1,c2,c3;

fulladder f0(x[0],y[0],cin,sum[0],c1);
fulladder f1(x[1],y[1],c1,sum[1],c2);
fulladder f2(x[2],y[2],c2,sum[2],c3);
fulladder f3(x[3],y[3],c3,sum[3],c_out);

endmodule
