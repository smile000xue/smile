`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/12/07 17:59:46
// Design Name: 
// Module Name: test_tb
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


module test_tb();

//reg B3,B2,B1,B0;
//wire P9,P8,P7,P6,P5,P4,P3,P2,P1,P0;

//binary_to_bcd b1(B3,B2,B1,B0,P9,P8,P7,P6,P5,P4,P3,P2,P1,P0);

//initial
//begin
//B3<=0;B2=0;B1=0;B0=0;
//#10 B3<=0;B2=0;B1=0;B0=1;
//#10 B3<=0;B2=0;B1=1;B0=0;
//#10 B3<=0;B2=0;B1=1;B0=1;
//#10 B3<=0;B2=1;B1=1;B0=0;
//#10 B3<=0;B2=0;B1=0;B0=0;
//end


reg CLK;
reg I3,I2,I1,I0;
reg N_Reset;
wire SEG_COM, SEG_DATA;

sevensegment s1(CLK,
I3,I2,I1,I0,
N_Reset,
SEG_COM, SEG_DATA);

initial
begin
CLK<=0;N_Reset<=0;I3<=0;I2<=0;I1<0;I0<=0;
#10  CLK<=0;N_Reset<=1;I3<=0;I2<=0;I1<0;I0<=0;
end

always #10 clk<=~clk;



endmodule
