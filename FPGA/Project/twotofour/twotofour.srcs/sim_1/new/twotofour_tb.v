`timescale 1ns / 1ps

module twotofour_tb();
reg [1:0]a;
wire [3:0]y;

twotofour twotofour_tb(a,y);

initial
begin

#10 a<=2'b00;
#10 a<=2'b01;
#10 a<=2'b10;
#10 a<=2'b11;

end
endmodule
