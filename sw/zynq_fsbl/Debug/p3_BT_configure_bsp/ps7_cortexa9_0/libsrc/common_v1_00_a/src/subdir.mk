################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/xbasic_types.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/xutil_memtest.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/xversion.c 

OBJS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/xbasic_types.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/xutil_memtest.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/xversion.o 

C_DEPS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/xbasic_types.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/xutil_memtest.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/xversion.d 


# Each subdirectory must supply rules for building sources it contributes
p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/%.o: ../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/common_v1_00_a/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM gcc compiler'
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../standalone_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


