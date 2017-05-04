################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_bdring.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_control.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_g.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_hw.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_intr.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_sinit.c 

OBJS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_bdring.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_control.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_g.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_hw.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_intr.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_sinit.o 

C_DEPS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_bdring.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_control.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_g.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_hw.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_intr.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/xemacps_sinit.d 


# Each subdirectory must supply rules for building sources it contributes
p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/%.o: ../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/emacps_v1_05_a/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM gcc compiler'
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../standalone_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


