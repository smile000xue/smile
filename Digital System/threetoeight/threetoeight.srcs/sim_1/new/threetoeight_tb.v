`timescale 1ns / 1ps

module threetoeight_tb();
reg [2:0]in;
wire [7:0]out;

threetoeight threetoeight_tb(in,out);

initial
begin

#10 in<=3'b000;
#10 in<=3'b001;
#10 in<=3'b010;
#10 in<=3'b011;
#10 in<=3'b100;
#10 in<=3'b101;
#10 in<=3'b110;
end
endmodule
