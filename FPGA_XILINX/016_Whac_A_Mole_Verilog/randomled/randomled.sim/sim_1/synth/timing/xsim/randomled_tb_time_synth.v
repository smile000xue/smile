// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2022.2 (win64) Build 3671981 Fri Oct 14 05:00:03 MDT 2022
// Date        : Thu Nov 30 17:55:44 2023
// Host        : Smile running 64-bit major release  (build 9200)
// Command     : write_verilog -mode timesim -nolib -sdf_anno true -force -file
//               D:/Project/FPGA/randomled/randomled.sim/sim_1/synth/timing/xsim/randomled_tb_time_synth.v
// Design      : randomled
// Purpose     : This verilog netlist is a timing simulation representation of the design and should not be modified or
//               synthesized. Please ensure that this netlist is used with the corresponding SDF file.
// Device      : xc7s75fgga484-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps
`define XIL_TIMING

(* Counter = "1000000" *) 
(* NotValidForBitStream *)
module randomled
   (clk,
    rst,
    out_data);
  input clk;
  input rst;
  output [7:0]out_data;

  wire [7:0]out_data;

initial begin
 $sdf_annotate("randomled_tb_time_synth.sdf",,,,"tool_control");
end
  OBUFT \out_data_OBUF[0]_inst 
       (.I(1'b0),
        .O(out_data[0]),
        .T(1'b1));
  OBUFT \out_data_OBUF[1]_inst 
       (.I(1'b0),
        .O(out_data[1]),
        .T(1'b1));
  OBUFT \out_data_OBUF[2]_inst 
       (.I(1'b0),
        .O(out_data[2]),
        .T(1'b1));
  OBUFT \out_data_OBUF[3]_inst 
       (.I(1'b0),
        .O(out_data[3]),
        .T(1'b1));
  OBUFT \out_data_OBUF[4]_inst 
       (.I(1'b0),
        .O(out_data[4]),
        .T(1'b1));
  OBUFT \out_data_OBUF[5]_inst 
       (.I(1'b0),
        .O(out_data[5]),
        .T(1'b1));
  OBUFT \out_data_OBUF[6]_inst 
       (.I(1'b0),
        .O(out_data[6]),
        .T(1'b1));
  OBUFT \out_data_OBUF[7]_inst 
       (.I(1'b0),
        .O(out_data[7]),
        .T(1'b1));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
