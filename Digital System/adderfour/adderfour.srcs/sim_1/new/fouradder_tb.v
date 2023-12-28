`timescale 1ns / 1ps

module fouradder_tb();
reg [3:0]x;
reg [3:0]y;
reg cin;
wire [3:0]s;
wire cout;

fouradder fa(x,y,cin,s,cout);

initial begin
x<=4'b0000; y<=4'b0000; cin<=0;
#10 x<=4'b0010; y<=4'b0110; cin<=0;
#10 x<=4'b1010; y<=4'b0010; cin<=1;
#10 x<=4'b0110; y<=4'b0100; cin<=0;
#10 x<=4'b1110; y<=4'b0001; cin<=1;
end

endmodule
