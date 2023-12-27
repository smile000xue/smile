`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/14 23:52:25
// Design Name: 
// Module Name: piezo
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


module piezo(
input clk, rst,
input [7:0] key,

output reg piezo
);



parameter do = 12'd3830 ;// 261 Hz
parameter rae = 12'd3400; // 294 Hz
parameter mi = 12'd3038 ;// 329 Hz
parameter fa = 12'd2864 ;// 349 Hz
parameter sol = 12'd2550; // 392 Hz
parameter ra = 12'd2272; // 440 Hz
parameter si = 12'd2027 ;// 493 Hz
parameter high_do = 12'd1912; // 523 Hz

reg [11:0] cnt;
reg[11:0] cnt_limit;

always @(posedge key)
begin

If (rst) 
cnt_limit <= 0;
    
else
	case (key)

	  8'h80 : cnt_limit <= do ;// DO
	  8'h40 : cnt_limit <= rae;  // RAE
	  8'h20 : cnt_limit <= mi ;// M
	  8'h10 : cnt_limit <= fa;  // FA
	  8'h08 : cnt_limit <= sol ; // SOL
	  8'h04 : cnt_limit <= ra ; // RA
	  8'h02 : cnt_limit <= si ; // SI
	  8'h01 : cnt_limit <= high_do;  // High DO
	  default : cnt_limit <= 0;

	endcase
end
always @(posedge clk)
If (rst) cnt <= 0;
else if(cnt>=cnt_limit/2)
	begin
	piezo = !piezo;
	cnt <= 0;
	end
	
else
	cnt <= cnt + 1;

endmodule  
