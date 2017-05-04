################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_g.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_hw.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_intr.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_selftest.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_sinit.c 

OBJS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_g.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_hw.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_intr.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_selftest.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_sinit.o 

C_DEPS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_g.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_hw.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_intr.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_selftest.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/xgpiops_sinit.d 


# Each subdirectory must supply rules for building sources it contributes
p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/%.o: ../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpiops_v1_02_a/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM gcc compiler'
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../standalone_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


