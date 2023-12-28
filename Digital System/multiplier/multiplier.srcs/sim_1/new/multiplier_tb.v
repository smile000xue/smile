`timescale 10ns/1ps
module multiplier_tb;
reg [2:0]A;
reg [3:0]B;
wire [6:0]C;
wire c;

multiplier s0(A,B,C);

initial begin
A<=3'b111; B<=4'b1010;
#10 A<=3'b110; B<=4'b1001;
#10 A<=3'b111; B<=4'b1000;
#10 A<=3'b110; B<=4'b0011;
end

endmodule
