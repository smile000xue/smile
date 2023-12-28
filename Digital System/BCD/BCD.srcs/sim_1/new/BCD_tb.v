`timescale 1ns / 1ps

module BCD_tb;

reg [3:0] in;
wire [3:0] out;

BCD BCD_tb(.in(in), .out(out));

initial
begin
$monitor(in, out);
in = 4'b0000;
end

always #10 in = in + 4'b0001;

endmodule
