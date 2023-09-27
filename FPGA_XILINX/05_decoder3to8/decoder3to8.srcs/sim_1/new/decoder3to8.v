`timescale 1ns / 1ps

module decoder3to8(

input wire[2:0] in ,
output  reg[7:0] out

);

always @(in)
begin

    if(in==0)
    out= 8'b0000_0001;
    if(in==1)
    out= 8'b0000_0010;
    if(in==2)
    out= 8'b0000_0100;
    if(in==3)
    out= 8'b0000_1000;
    if(in==4)
    out= 8'b0001_0000;
    if(in==5)
    out= 8'b0010_0000;
    if(in==6)
    out= 8'b0100_0000;
    if(in==7)
    out= 8'b1000_0001;
    
end
endmodule

