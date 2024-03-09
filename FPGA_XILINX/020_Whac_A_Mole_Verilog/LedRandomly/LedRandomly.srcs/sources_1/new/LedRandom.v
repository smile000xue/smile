module LedRandom(

  input      wire               clk,
  input      wire               rst_n,
  output     reg       [31:0]   data
);

initial data <= 1928374650;

  always @ (posedge clk,negedge rst_n) begin
    if (rst_n == 1'b0)
      data <= 32'd0;
    else 
    begin
      data[0] <= data[31];
      data[1] <= data[0] ^ data[31];
      data[2] <= data[1] ^ data[31];
      data[3] <= data[2] ^ data[31];
      data[4] <= data[3];
      data[5] <= data[4] ^ data[31];
      data[6] <= data[5];
      data[7] <= data[6] ^ data[31];
      data[8] <= data[7];
      data[9] <= data[8];
      data[10] <= data[9];
      data[11] <= data[10];
      data[12] <= data[11];
      data[13] <= data[12];
      data[14] <= data[13];
      data[15] <= data[14];
      data[16] <= data[15];
      data[17] <= data[16];
      data[18] <= data[17];
      data[19] <= data[18];
      data[20] <= data[19];
      data[21] <= data[20];
      data[22] <= data[21];
      data[23] <= data[22];
      data[24] <= data[23];
      data[25] <= data[24];
      data[26] <= data[25];
      data[27] <= data[26];
      data[28] <= data[27];
      data[29] <= data[28];
      data[30] <= data[29];
      data[31] <= data[30];
    end
  end

endmodule