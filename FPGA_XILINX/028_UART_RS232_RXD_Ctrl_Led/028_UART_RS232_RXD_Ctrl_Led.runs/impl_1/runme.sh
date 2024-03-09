#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
# 

echo "This script was generated under a different operating system."
echo "Please update the PATH and LD_LIBRARY_PATH variables below, before executing this script"
exit

if [ -z "$PATH" ]; then
  PATH=D:/App/Xilinx_Unified_2022.2_1014_8888_Win64.exe/Vivado/2022.2/ids_lite/ISE/bin/nt64;D:/App/Xilinx_Unified_2022.2_1014_8888_Win64.exe/Vivado/2022.2/ids_lite/ISE/lib/nt64:D:/App/Xilinx_Unified_2022.2_1014_8888_Win64.exe/Vivado/2022.2/bin
else
  PATH=D:/App/Xilinx_Unified_2022.2_1014_8888_Win64.exe/Vivado/2022.2/ids_lite/ISE/bin/nt64;D:/App/Xilinx_Unified_2022.2_1014_8888_Win64.exe/Vivado/2022.2/ids_lite/ISE/lib/nt64:D:/App/Xilinx_Unified_2022.2_1014_8888_Win64.exe/Vivado/2022.2/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=
else
  LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='D:/Project/FPGA/028_UART_RS232_RXD_Ctrl_Led/028_UART_RS232_RXD_Ctrl_Led.runs/impl_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

# pre-commands:
/bin/touch .write_bitstream.begin.rst
EAStep vivado -log UART_RXD_Ctrl_Led.vdi -applog -m64 -product Vivado -messageDb vivado.pb -mode batch -source UART_RXD_Ctrl_Led.tcl -notrace


