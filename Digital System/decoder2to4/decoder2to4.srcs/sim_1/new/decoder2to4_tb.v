`timescale 1ns / 1ps

module decoder2to4_tb;

reg a, b;
wire w, x, y, z;

decoder2to4 decoder2to4_tb(a, b, w, x, y, z);
initial begin
     #10 a=0; b=0;
     #10 a=0; b=1;
     #10 a=1; b=0;
     #10 a=1; b=1;
     
end
endmodule
