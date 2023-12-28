`timescale 1ns / 1ps


module Binary_to_7Seg(
reset, inA,clk,
 seg_COM, seg_DATA
    );
    input reset;
     input [4-1:0] inA;
     input clk;
     output [8-1:0] seg_COM, seg_DATA ;
     
      reg[8-1:0] outseg1;
      reg[8-1:0] outseg2;
      wire[4-1:0] bcd1,bcd0;
     
     binary_to_BCD_converter2 qwqw(inA, {bcd1,bcd0});
     
     segment_controller iio(
 clk, reset,
  outseg1, outseg2,
  seg_COM, seg_DATA
);
     
     always @(posedge clk) begin
     
     case (bcd1)
            4'b0000 : outseg1 = 8'b1111_1100; 
            4'b0001 : outseg1 = 8'b0110_0000; 
            4'b0010 : outseg1 = 8'b1101_1010; 
            4'b0011 : outseg1 = 8'b1111_0010; 
            4'b0100 : outseg1 = 8'b0110_0110; 
            4'b0101 : outseg1 = 8'b1011_0110; 
            4'b0110 : outseg1 = 8'b1011_1110; 
            4'b0111 : outseg1 = 8'b1110_0000; 
            4'b1000 : outseg1 = 8'b1111_1110; 
            4'b1001 : outseg1 = 8'b1111_0110; 
            endcase
            
        case (bcd0)
            4'b0000 : outseg2 = 8'b1111_1100; 
            4'b0001 : outseg2 = 8'b0110_0000; 
            4'b0010 : outseg2 = 8'b1101_1010; 
            4'b0011 : outseg2 = 8'b1111_0010; 
            4'b0100 : outseg2 = 8'b0110_0110; 
            4'b0101 : outseg2 = 8'b1011_0110; 
            4'b0110 : outseg2 = 8'b1011_1110; 
            4'b0111 : outseg2 = 8'b1110_0000; 
            4'b1000 : outseg2 = 8'b1111_1110; 
            4'b1001 : outseg2 = 8'b1111_0110; 
            endcase
     
     
    end
endmodule

