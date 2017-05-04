################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../p3_BT_configure/src/bt_configure.c \
../p3_BT_configure/src/platform.c 

LD_SRCS += \
../p3_BT_configure/src/lscript.ld 

OBJS += \
./p3_BT_configure/src/bt_configure.o \
./p3_BT_configure/src/platform.o 

C_DEPS += \
./p3_BT_configure/src/bt_configure.d \
./p3_BT_configure/src/platform.d 


# Each subdirectory must supply rules for building sources it contributes
p3_BT_configure/src/%.o: ../p3_BT_configure/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM gcc compiler'
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../standalone_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


