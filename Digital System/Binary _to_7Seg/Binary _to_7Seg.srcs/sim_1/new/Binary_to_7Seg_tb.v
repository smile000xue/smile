`timescale 1ns / 1ps
module Binary_to_7Seg_tb();
reg clk, reset;
reg [4-1:0] binary;
wire [8-1:0] seg_COM, seg_DATA;
Binary_to_7Seg fqwe(
reset, binary,clk,
 seg_COM, seg_DATA
    );
integer i=0;
initial begin
clk <= 1'b1; reset <= 1'b1; binary <= 4'd0;
#20 reset <= 1'b0;
for (i=0; i<16; i=i+1) begin
#80 binary <= binary + 4'd1;
end
end
always #5 clk <= ~clk;
endmodule