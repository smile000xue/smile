`timescale 1ns / 1ps

module twotofour(
input [1:0] a,
output reg [3:0] y
);

always@(a)
    case(a)
    2'b00:y<=4'b0001;
    2'b01:y<=4'b0010;
    2'b10:y<=4'b0100;
    2'b11:y<=4'b1000;
    default:y<=4'b0000;
    endcase
    
endmodule
