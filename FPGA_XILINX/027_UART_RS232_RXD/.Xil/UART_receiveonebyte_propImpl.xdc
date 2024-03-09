set_property SRC_FILE_INFO {cfile:d:/Project/FPGA/027_UART_RS232_RXD/027_UART_RS232_RXD.gen/sources_1/ip/vio_0/vio_0.xdc rfile:../027_UART_RS232_RXD.gen/sources_1/ip/vio_0/vio_0.xdc id:1 order:EARLY scoped_inst:your_instance_nameUART_receiveonebyte} [current_design]
set_property SRC_FILE_INFO {cfile:D:/Project/FPGA/027_UART_RS232_RXD/027_UART_RS232_RXD.srcs/constrs_1/new/UART_receiveonebyte.xdc rfile:../027_UART_RS232_RXD.srcs/constrs_1/new/UART_receiveonebyte.xdc id:2} [current_design]
current_instance your_instance_nameUART_receiveonebyte
set_property src_info {type:SCOPED_XDC file:1 line:66 export:INPUT save:INPUT read:READ} [current_design]
create_waiver -type CDC -id CDC-4 -from [get_pins -filter {REF_PIN_NAME=~C} -of_objects [get_cells -hierarchical -filter {NAME =~ "*probe_in_reg_reg*"}]]  -to [get_pins -filter {REF_PIN_NAME=~D} -of_objects [get_cells -hierarchical -filter {NAME =~ "*data_int_sync1_reg*"}]]  -user "vio" -description {The path has combinational circuit. But from hardware prospective the design works perfectly and the signals crossing happen after a very long time from the source has the value.} -tags "1050886" -scope -internal
set_property src_info {type:SCOPED_XDC file:1 line:67 export:INPUT save:INPUT read:READ} [current_design]
create_waiver -type CDC -id CDC-1 -from [get_pins -filter {REF_PIN_NAME=~C} -of_objects [get_cells -hierarchical -filter { NAME =~  "*Hold_probe_in*" &&  IS_SEQUENTIAL } ]]  -to [get_pins -filter {REF_PIN_NAME=~CE} -of_objects [get_cells -hierarchical -filter { NAME =~  "*PROBE_IN_INST/probe_in_reg*" && IS_SEQUENTIAL} ]]  -user "vio" -description {The path has combinational circuit. But from hardware prospective the design works perfectly and the signals crossing happen after a very long time from the source has the value.} -tags "1050886" -scope -internal
current_instance
set_property src_info {type:XDC file:2 line:3 export:INPUT save:INPUT read:READ} [current_design]
set_property IOSTANDARD LVCMOS33 [get_ports tx_done]
set_property src_info {type:XDC file:2 line:7 export:INPUT save:INPUT read:READ} [current_design]
set_property PACKAGE_PIN M22 [get_ports tx_done]
