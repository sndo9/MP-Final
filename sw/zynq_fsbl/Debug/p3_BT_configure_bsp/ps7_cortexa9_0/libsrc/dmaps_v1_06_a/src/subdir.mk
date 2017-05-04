################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_g.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_hw.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_selftest.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_sinit.c 

OBJS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_g.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_hw.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_selftest.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_sinit.o 

C_DEPS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_g.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_hw.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_selftest.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/xdmaps_sinit.d 


# Each subdirectory must supply rules for building sources it contributes
p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/%.o: ../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/dmaps_v1_06_a/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM gcc compiler'
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../standalone_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


