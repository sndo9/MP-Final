#include <stdio.h>
#include <stdlib.h>
#include "platform.h"
#include "xuartps.h"

void send_recieve(XUartPs *uart0, char *message, unsigned int length);
void send(XUartPs *uart0, char *message, unsigned int lenght);
void recieve(XUartPs *uart0);
void configure(XUartPs *uart0);

//yaw, pitch, throtel, side to side

char *mac_address = "SR,81EBADE7A8CE\r";



int main()
{
	int REG_BASE_ADDRESS = 0x7DE00000;

	int *reg10 = REG_BASE_ADDRESS + (10*4);
	int *reg11 = REG_BASE_ADDRESS + (11*4);
	int *reg12 = REG_BASE_ADDRESS + (12*4);
	int *reg13 = REG_BASE_ADDRESS + (13*4);
	int *reg14 = REG_BASE_ADDRESS + (14*4);
	int *reg15 = REG_BASE_ADDRESS + (15*4);

	u16 reg10a;



	//char *mac_address = "SR,";
	XUartPs *uart0;
	XUartPs_Config *config;
	u8 *rx;
	u32 clear;
    init_platform();

    xil_printf("Hello World\n\r");

    uart0 = (XUartPs *)malloc(sizeof(XUartPs));
    config = XUartPs_LookupConfig(XPAR_PS7_UART_0_DEVICE_ID);
    XUartPs_CfgInitialize(uart0, config, XPAR_PS7_UART_0_BASEADDR);
    XUartPs_SetBaudRate(uart0, 115200);
    XUartPs_SetOptions(uart0, XUARTPS_OPTION_RESET_RX);
    XUartPs_SetOptions(uart0, XUARTPS_OPTION_RESET_TX);
    XUartPs_EnableUart(uart0);

    // Clear FIFOs
    clear = XUartPs_ReadReg(uart0->Config.BaseAddress, 0x00000000) | 0x00000001;
    XUartPs_WriteReg(uart0->Config.BaseAddress, 0x00000000, clear);

    int x;

    //configure(uart0);
    test_connection(uart0);

    while(1){
    	//xil_printf("%d, %d, %d, %d, %d, %d\n\r", *reg10, *reg11, *reg12, *reg13, *reg14, *reg15);
    	reg10a = *reg10;
    	//xil_printf("%d, %d\n\r", *reg10, reg10a);

    	//xil_printf("%d, %d, %d, %d, %d, %d\n\r", scale_val(*reg10), scale_val(*reg11), scale_val(*reg13), scale_val(*reg12), scale_val(*reg14), scale_val(*reg15));
    }

    xil_printf("\n\r");

    xil_printf("Im all done!!!!\n\r");



    return 0;
}

int scale_val(int value){
	int retval = value / 75;
	if(retval > 2000) retval = 2000;
	if(retval < 1000) retval = 1000;

	return retval;
}

void send_recieve(XUartPs *uart0, char *message, unsigned int length){
	send(uart0, message, length);
	recieve(uart0);
}

void clear(XUartPs *uart0){
	XUartPs_WriteReg(uart0->Config.BaseAddress, 0x00000000, clear);
}

void send(XUartPs *uart0, char *message, unsigned int length){
	xil_printf("Sending: %s\n\r", message);
	int i;
	for(i = 0; i < length; i++){
		XUartPs_SendByte(uart0->Config.BaseAddress, message[i]);
	}
}

void recieve(XUartPs *uart0){
	int time = 0;
	xil_printf("Waiting for data\n\r");
	while(time < 5000000){
		if(XUartPs_IsReceiveData(uart0->Config.BaseAddress)){
			xil_printf("Data found\n\r");
			break;
		}
		time++;
	}
	int no_data = 0;
	while(no_data < 5000000){
		if(XUartPs_IsReceiveData(uart0->Config.BaseAddress)){
			xil_printf("0x%x, ", XUartPs_RecvByte(uart0->Config.BaseAddress));
			no_data = 0;
		}else {
			no_data++;
		}
	}
}

void configure(XUartPs *uart0){
	send_recieve(uart0, "$$$", 3);
    send_recieve(uart0, "D\r", 2);
	send_recieve(uart0, "E\r", 2);
	send_recieve(uart0, "O\r", 2);
	send_recieve(uart0, "SM,3\r", 5);
	send_recieve(uart0, "SN,A3\r", 6);
	send_recieve(uart0, mac_address, 16);
	send_recieve(uart0, "SP,0000\r", 8);
	send_recieve(uart0, "---\r", 4);
}

void test_connection(XUartPs *uart0){
	//send_recieve(uart0, "0x24 0x4d 0x3c 0x00 0x6c 0x6c", 6);
	u8 to_send[5];
	to_send[0] = 0x24;
	to_send[1] = 0x4d;
	to_send[2] = 0x3c;
	to_send[3] = 0x00;
	to_send[4] = 0x6c;
	to_send[5] = 0x6c;
	send_recieve(uart0, to_send, 6);
	//send(uart0, 0x4d, 1);
	//send(uart0, 0x3c, 1);
	//send(uart0, 0x00, 1);
	//send(uart0, 0x6c, 1);
	//send(uart0, 0x6c, 1);
	//recieve(uart0);
}
