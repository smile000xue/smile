module alu(input [4-1:0] A,  input rreset,  input clock,
            input [4-1:0] B, 
            input [3-1:0] opcode, 
            output [8-1:0] segcom,output [8-1:0] segdata);  
  reg [4-1:0] result;
  wire [8-1:0 ]segcom, segdata;
 
   
 Binary_to_7Seg wqee(
rreset, result,clock,
 segcom, segdata
    );

  always @* begin 
    case(opcode)
      3'b000: result = A + B;   
      3'b001: result = A - B;   
      3'b010: result = A * B;   
      3'b011: result = {A[3] & B[3],A[2] & B[2],A[1] & B[1],A[0] & B[0]};   
      3'b100: result = {A[3] | B[3],A[2] | B[2],A[1] | B[1],A[0] | B[0]};   
      3'b101: result = {A[3] ^ B[3],A[2] ^ B[2],A[1] ^ B[1],A[0] ^ B[0]}; 
      default: result = 4'b0;   
    endcase
    
    
  end

  assign outputA = result;
endmodule




