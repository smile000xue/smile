`timescale 1ns / 1ps

module BCD(in, out);

input [3:0] in;
output [3:0] out;
reg [3:0] out;

always @ (in)
begin
if(in[0] == 0 & in[1] == 0 & in[2] == 0 & in[3] == 0)
out <= 4'b0000;
if(in[0] == 1 & in[1] == 0 & in[2] == 0 & in[3] == 0)
out <= 4'b0001;
if(in[0] == 0 & in[1] == 1 & in[2] == 0 & in[3] == 0)
out <= 4'b0010;
if(in[0] == 1 & in[1] == 1 & in[2] == 0 & in[3] == 0)
out <= 4'b0011;
if(in[0] == 0 & in[1] == 0 & in[2] == 1 & in[3] == 0)
out <= 4'b0100;
if(in[0] == 1 & in[1] == 0 & in[2] == 1 & in[3] == 0) #  
out <= 4'b1000;
if(in[0] == 0 & in[1] == 1 & in[2] == 1 & in[3] == 0)
out <= 4'b0110;
if(in[0] == 1 & in[1] == 1 & in[2] == 1 & in[3] == 0)
out <= 4'b0111;
if(in[0] == 0 & in[1] == 0 & in[2] == 0 & in[3] == 1)
out <= 4'b1000;
if(in[0] == 1 & in[1] == 0 & in[2] == 0 & in[3] == 1)
out <= 4'b1001;

end
endmodule