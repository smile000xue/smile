module segment_controller(
input clk, reset,
input [8-1:0] seg0, seg1,
output reg [8-1:0] seg_COM, seg_DATA
);
reg [3-1:0] counter = 3'd0;
always @ (posedge clk) begin
if (reset) begin
seg_COM  <= 8'b0000_0000;
seg_DATA <= 8'b0000_0000;
counter <= 3'd0;
end
else begin
if (counter >= 3 'd1) counter <= 3'd0;
else counter <= counter + 3'd1;
case (counter)
3'd0: begin
seg_COM <= 8'b0111_1111;
seg_DATA <= seg0;
end
3'd1: begin
seg_COM <= 8'b1011_1111;
seg_DATA <= seg1;
end
default: begin
seg_COM <= 8'b1111_1111;
seg_DATA <= seg1;
end
endcase
end
end
endmodule