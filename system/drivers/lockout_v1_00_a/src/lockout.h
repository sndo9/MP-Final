/*****************************************************************************
* Filename:          C:\tmp\MP-Final\system/drivers/lockout_v1_00_a/src/lockout.h
* Version:           1.00.a
* Description:       lockout Driver Header File
* Date:              Thu May 04 03:32:21 2017 (by Create and Import Peripheral Wizard)
*****************************************************************************/

#ifndef LOCKOUT_H
#define LOCKOUT_H

/***************************** Include Files *******************************/

#include "xbasic_types.h"
#include "xstatus.h"
#include "xil_io.h"

/************************** Constant Definitions ***************************/


/**
 * User Logic Slave Space Offsets
 * -- SLV_REG0 : user logic slave module register 0
 * -- SLV_REG1 : user logic slave module register 1
 * -- SLV_REG2 : user logic slave module register 2
 * -- SLV_REG3 : user logic slave module register 3
 * -- SLV_REG4 : user logic slave module register 4
 * -- SLV_REG5 : user logic slave module register 5
 * -- SLV_REG6 : user logic slave module register 6
 * -- SLV_REG7 : user logic slave module register 7
 * -- SLV_REG8 : user logic slave module register 8
 * -- SLV_REG9 : user logic slave module register 9
 * -- SLV_REG10 : user logic slave module register 10
 * -- SLV_REG11 : user logic slave module register 11
 * -- SLV_REG12 : user logic slave module register 12
 * -- SLV_REG13 : user logic slave module register 13
 * -- SLV_REG14 : user logic slave module register 14
 * -- SLV_REG15 : user logic slave module register 15
 * -- SLV_REG16 : user logic slave module register 16
 * -- SLV_REG17 : user logic slave module register 17
 * -- SLV_REG18 : user logic slave module register 18
 * -- SLV_REG19 : user logic slave module register 19
 * -- SLV_REG20 : user logic slave module register 20
 * -- SLV_REG21 : user logic slave module register 21
 * -- SLV_REG22 : user logic slave module register 22
 */
#define LOCKOUT_USER_SLV_SPACE_OFFSET (0x00000000)
#define LOCKOUT_SLV_REG0_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000000)
#define LOCKOUT_SLV_REG1_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000004)
#define LOCKOUT_SLV_REG2_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000008)
#define LOCKOUT_SLV_REG3_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x0000000C)
#define LOCKOUT_SLV_REG4_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000010)
#define LOCKOUT_SLV_REG5_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000014)
#define LOCKOUT_SLV_REG6_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000018)
#define LOCKOUT_SLV_REG7_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x0000001C)
#define LOCKOUT_SLV_REG8_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000020)
#define LOCKOUT_SLV_REG9_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000024)
#define LOCKOUT_SLV_REG10_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000028)
#define LOCKOUT_SLV_REG11_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x0000002C)
#define LOCKOUT_SLV_REG12_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000030)
#define LOCKOUT_SLV_REG13_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000034)
#define LOCKOUT_SLV_REG14_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000038)
#define LOCKOUT_SLV_REG15_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x0000003C)
#define LOCKOUT_SLV_REG16_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000040)
#define LOCKOUT_SLV_REG17_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000044)
#define LOCKOUT_SLV_REG18_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000048)
#define LOCKOUT_SLV_REG19_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x0000004C)
#define LOCKOUT_SLV_REG20_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000050)
#define LOCKOUT_SLV_REG21_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000054)
#define LOCKOUT_SLV_REG22_OFFSET (LOCKOUT_USER_SLV_SPACE_OFFSET + 0x00000058)

/**
 * Software Reset Space Register Offsets
 * -- RST : software reset register
 */
#define LOCKOUT_SOFT_RST_SPACE_OFFSET (0x00000100)
#define LOCKOUT_RST_REG_OFFSET (LOCKOUT_SOFT_RST_SPACE_OFFSET + 0x00000000)

/**
 * Software Reset Masks
 * -- SOFT_RESET : software reset
 */
#define SOFT_RESET (0x0000000A)

/**************************** Type Definitions *****************************/


/***************** Macros (Inline Functions) Definitions *******************/

/**
 *
 * Write a value to a LOCKOUT register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the LOCKOUT device.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void LOCKOUT_mWriteReg(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Data)
 *
 */
#define LOCKOUT_mWriteReg(BaseAddress, RegOffset, Data) \
 	Xil_Out32((BaseAddress) + (RegOffset), (Xuint32)(Data))

/**
 *
 * Read a value from a LOCKOUT register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the LOCKOUT device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	Xuint32 LOCKOUT_mReadReg(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define LOCKOUT_mReadReg(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (RegOffset))


/**
 *
 * Write/Read 32 bit value to/from LOCKOUT user logic slave registers.
 *
 * @param   BaseAddress is the base address of the LOCKOUT device.
 * @param   RegOffset is the offset from the slave register to write to or read from.
 * @param   Value is the data written to the register.
 *
 * @return  Data is the data from the user logic slave register.
 *
 * @note
 * C-style signature:
 * 	void LOCKOUT_mWriteSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Value)
 * 	Xuint32 LOCKOUT_mReadSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define LOCKOUT_mWriteSlaveReg0(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG0_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg1(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG1_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg2(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG2_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg3(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG3_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg4(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG4_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg5(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG5_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg6(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG6_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg7(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG7_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg8(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG8_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg9(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG9_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg10(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG10_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg11(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG11_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg12(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG12_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg13(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG13_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg14(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG14_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg15(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG15_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg16(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG16_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg17(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG17_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg18(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG18_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg19(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG19_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg20(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG20_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg21(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG21_OFFSET) + (RegOffset), (Xuint32)(Value))
#define LOCKOUT_mWriteSlaveReg22(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (LOCKOUT_SLV_REG22_OFFSET) + (RegOffset), (Xuint32)(Value))

#define LOCKOUT_mReadSlaveReg0(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG0_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg1(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG1_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg2(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG2_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg3(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG3_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg4(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG4_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg5(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG5_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg6(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG6_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg7(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG7_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg8(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG8_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg9(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG9_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg10(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG10_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg11(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG11_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg12(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG12_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg13(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG13_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg14(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG14_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg15(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG15_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg16(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG16_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg17(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG17_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg18(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG18_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg19(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG19_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg20(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG20_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg21(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG21_OFFSET) + (RegOffset))
#define LOCKOUT_mReadSlaveReg22(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (LOCKOUT_SLV_REG22_OFFSET) + (RegOffset))

/**
 *
 * Reset LOCKOUT via software.
 *
 * @param   BaseAddress is the base address of the LOCKOUT device.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void LOCKOUT_mReset(Xuint32 BaseAddress)
 *
 */
#define LOCKOUT_mReset(BaseAddress) \
 	Xil_Out32((BaseAddress)+(LOCKOUT_RST_REG_OFFSET), SOFT_RESET)

/************************** Function Prototypes ****************************/


/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the LOCKOUT instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus LOCKOUT_SelfTest(void * baseaddr_p);
/**
*  Defines the number of registers available for read and write*/
#define TEST_AXI_LITE_USER_NUM_REG 23


#endif /** LOCKOUT_H */
