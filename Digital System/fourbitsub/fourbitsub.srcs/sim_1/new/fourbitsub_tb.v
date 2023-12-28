`timescale 10ns/1ps
module fourbitsub_tb;
reg [3:0]x;
reg [3:0]y;
wire [3:0]s;
wire c;

fourbitsub s0(x,y,s,c);

initial begin
x<=4'b1111; y<=4'b1010;
#10 x<=4'b1100; y<=4'b1001;
#10 x<=4'b1101; y<=4'b1000;
#10 x<=4'b1100; y<=4'b0011;
end
endmodule
