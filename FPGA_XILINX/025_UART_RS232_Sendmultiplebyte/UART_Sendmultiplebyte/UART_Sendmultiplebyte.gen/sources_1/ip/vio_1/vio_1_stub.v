// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2022.2 (win64) Build 3671981 Fri Oct 14 05:00:03 MDT 2022
// Date        : Tue Jan  2 19:03:46 2024
// Host        : Smile running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               d:/Project/FPGA/025_UART_RS232_Sendmultiplebyte/UART_Sendmultiplebyte/UART_Sendmultiplebyte.gen/sources_1/ip/vio_1/vio_1_stub.v
// Design      : vio_1
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a35tfgg484-2
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "vio,Vivado 2022.2" *)
module vio_1(clk, probe_out0, probe_out1)
/* synthesis syn_black_box black_box_pad_pin="clk,probe_out0[0:0],probe_out1[79:0]" */;
  input clk;
  output [0:0]probe_out0;
  output [79:0]probe_out1;
endmodule
