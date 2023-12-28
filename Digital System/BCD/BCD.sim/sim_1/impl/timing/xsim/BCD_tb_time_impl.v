// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2022.2 (win64) Build 3671981 Fri Oct 14 05:00:03 MDT 2022
// Date        : Thu Sep 21 16:43:51 2023
// Host        : DESKTOP-GDBJFI1 running 64-bit major release  (build 9200)
// Command     : write_verilog -mode timesim -nolib -sdf_anno true -force -file
//               C:/Users/PC/Desktop/BCD/BCD.sim/sim_1/impl/timing/xsim/BCD_tb_time_impl.v
// Design      : BCD
// Purpose     : This verilog netlist is a timing simulation representation of the design and should not be modified or
//               synthesized. Please ensure that this netlist is used with the corresponding SDF file.
// Device      : xc7s75fgga484-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps
`define XIL_TIMING

(* ECO_CHECKSUM = "6925ae7e" *) 
(* NotValidForBitStream *)
module BCD
   (in,
    out);
  input [3:0]in;
  output [3:0]out;

  wire [3:0]in;
  wire [3:0]in_IBUF;
  wire [3:0]out;
  wire [3:0]out_OBUF;
  wire \out_reg[0]_i_1_n_0 ;
  wire \out_reg[1]_i_1_n_0 ;
  wire \out_reg[2]_i_1_n_0 ;
  wire \out_reg[3]_i_1_n_0 ;
  wire \out_reg[3]_i_2_n_0 ;

initial begin
 $sdf_annotate("BCD_tb_time_impl.sdf",,,,"tool_control");
end
  IBUF #(
    .CCIO_EN("TRUE")) 
    \in_IBUF[0]_inst 
       (.I(in[0]),
        .O(in_IBUF[0]));
  IBUF #(
    .CCIO_EN("TRUE")) 
    \in_IBUF[1]_inst 
       (.I(in[1]),
        .O(in_IBUF[1]));
  IBUF #(
    .CCIO_EN("TRUE")) 
    \in_IBUF[2]_inst 
       (.I(in[2]),
        .O(in_IBUF[2]));
  IBUF #(
    .CCIO_EN("TRUE")) 
    \in_IBUF[3]_inst 
       (.I(in[3]),
        .O(in_IBUF[3]));
  OBUF \out_OBUF[0]_inst 
       (.I(out_OBUF[0]),
        .O(out[0]));
  OBUF \out_OBUF[1]_inst 
       (.I(out_OBUF[1]),
        .O(out[1]));
  OBUF \out_OBUF[2]_inst 
       (.I(out_OBUF[2]),
        .O(out[2]));
  OBUF \out_OBUF[3]_inst 
       (.I(out_OBUF[3]),
        .O(out[3]));
  (* XILINX_LEGACY_PRIM = "LD" *) 
  (* XILINX_TRANSFORM_PINMAP = "VCC:GE GND:CLR" *) 
  LDCE #(
    .INIT(1'b0)) 
    \out_reg[0] 
       (.CLR(1'b0),
        .D(\out_reg[0]_i_1_n_0 ),
        .G(\out_reg[3]_i_2_n_0 ),
        .GE(1'b1),
        .Q(out_OBUF[0]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h012C)) 
    \out_reg[0]_i_1 
       (.I0(in_IBUF[1]),
        .I1(in_IBUF[0]),
        .I2(in_IBUF[2]),
        .I3(in_IBUF[3]),
        .O(\out_reg[0]_i_1_n_0 ));
  (* XILINX_LEGACY_PRIM = "LD" *) 
  (* XILINX_TRANSFORM_PINMAP = "VCC:GE GND:CLR" *) 
  LDCE #(
    .INIT(1'b0)) 
    \out_reg[1] 
       (.CLR(1'b0),
        .D(\out_reg[1]_i_1_n_0 ),
        .G(\out_reg[3]_i_2_n_0 ),
        .GE(1'b1),
        .Q(out_OBUF[1]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h018A)) 
    \out_reg[1]_i_1 
       (.I0(in_IBUF[1]),
        .I1(in_IBUF[0]),
        .I2(in_IBUF[2]),
        .I3(in_IBUF[3]),
        .O(\out_reg[1]_i_1_n_0 ));
  (* XILINX_LEGACY_PRIM = "LD" *) 
  (* XILINX_TRANSFORM_PINMAP = "VCC:GE GND:CLR" *) 
  LDCE #(
    .INIT(1'b0)) 
    \out_reg[2] 
       (.CLR(1'b0),
        .D(\out_reg[2]_i_1_n_0 ),
        .G(\out_reg[3]_i_2_n_0 ),
        .GE(1'b1),
        .Q(out_OBUF[2]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'h0204)) 
    \out_reg[2]_i_1 
       (.I0(in_IBUF[3]),
        .I1(in_IBUF[2]),
        .I2(in_IBUF[1]),
        .I3(in_IBUF[0]),
        .O(\out_reg[2]_i_1_n_0 ));
  (* XILINX_LEGACY_PRIM = "LD" *) 
  (* XILINX_TRANSFORM_PINMAP = "VCC:GE GND:CLR" *) 
  LDCE #(
    .INIT(1'b0)) 
    \out_reg[3] 
       (.CLR(1'b0),
        .D(\out_reg[3]_i_1_n_0 ),
        .G(\out_reg[3]_i_2_n_0 ),
        .GE(1'b1),
        .Q(out_OBUF[3]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'h03E0)) 
    \out_reg[3]_i_1 
       (.I0(in_IBUF[0]),
        .I1(in_IBUF[1]),
        .I2(in_IBUF[2]),
        .I3(in_IBUF[3]),
        .O(\out_reg[3]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'h1F)) 
    \out_reg[3]_i_2 
       (.I0(in_IBUF[2]),
        .I1(in_IBUF[1]),
        .I2(in_IBUF[3]),
        .O(\out_reg[3]_i_2_n_0 ));
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
