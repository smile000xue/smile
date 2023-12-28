`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/02 15:09:15
// Design Name: 
// Module Name: SRlatch
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


module SRlatch(
input S,R,
output Q,NQ
    );
    
assign Q=~(NQ&S);
assign NQ=~(R&Q);


endmodule
