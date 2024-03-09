`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/31 18:38:55
// Design Name: 
// Module Name: DR_LUT
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module DR_LUT(
input [2:0]band_set,
input clk,rst,
output reg[15:0]bps_DR
    );
    
always @(*)
    case(band_set)
       3'd0:bps_DR=16'd41665;
       3'd1:bps_DR=16'd20832;
       3'd2:bps_DR=16'd10415;
       3'd3:bps_DR=16'd5207;
       3'd4:bps_DR=16'd2603;
       3'd5:bps_DR=16'd1301;
       3'd6:bps_DR=16'd867;
       3'd7:bps_DR=16'd433;
        default: bps_DR=16'd5207;
    endcase

    
endmodule
