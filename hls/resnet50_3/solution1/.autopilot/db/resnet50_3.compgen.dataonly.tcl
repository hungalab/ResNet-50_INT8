# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_AXILiteS {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
output_r { 
	dir O
	width 32
	depth 1000
	mode ap_memory
	offset 4096
	offset_end 8191
}
}
dict set axilite_register_dict AXILiteS $port_AXILiteS


