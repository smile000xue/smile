`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/23 17:55:53
// Design Name: 
// Module Name: key
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


module key(
input [7:0]key,led,
output reg [9:0]counter
    );
    
 initial
 begin
 counter<=0;
 end
 
 always @(key)
 begin
 
 case (key)
                            8'b0000_0001:if(led==key)counter=counter+10;
                            8'b0000_0010:if(led==key)counter=counter+10;
                            8'b0000_0100:if(led==key)counter=counter+10;
                            8'b0000_1000:if(led==key)counter=counter+10;
                            8'b0001_0000:if(led==key)counter=counter+10;
                            8'b0010_0000:if(led==key)counter=counter+10;
                            8'b0100_0000:if(led==key)counter=counter+10;
                            8'b1000_0000:if(led==key)counter=counter+10;
                            default:;
 endcase
 end
 
endmodule
