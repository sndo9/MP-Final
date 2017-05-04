##############################################################################
## Filename:          C:\tmp\MP-Final\system/drivers/lockout_v1_00_a/data/lockout_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Thu May 04 03:32:21 2017 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "lockout" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
