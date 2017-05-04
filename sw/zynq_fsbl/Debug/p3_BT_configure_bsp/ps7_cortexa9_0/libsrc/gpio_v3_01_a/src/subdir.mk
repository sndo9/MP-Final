################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_extra.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_g.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_intr.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_selftest.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_sinit.c 

OBJS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_extra.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_g.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_intr.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_selftest.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_sinit.o 

C_DEPS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_extra.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_g.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_intr.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_selftest.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/xgpio_sinit.d 


# Each subdirectory must supply rules for building sources it contributes
p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/%.o: ../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/gpio_v3_01_a/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM gcc compiler'
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../standalone_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


