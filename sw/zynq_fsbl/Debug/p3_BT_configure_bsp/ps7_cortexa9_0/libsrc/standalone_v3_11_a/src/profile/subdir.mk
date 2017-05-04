################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/_profile_clean.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/_profile_init.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/_profile_timer_hw.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_cg.c \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_hist.c 

S_UPPER_SRCS += \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/dummy.S \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_mcount_arm.S \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_mcount_mb.S \
../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_mcount_ppc.S 

OBJS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/_profile_clean.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/_profile_init.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/_profile_timer_hw.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/dummy.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_cg.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_hist.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_mcount_arm.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_mcount_mb.o \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_mcount_ppc.o 

C_DEPS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/_profile_clean.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/_profile_init.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/_profile_timer_hw.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_cg.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_hist.d 

S_UPPER_DEPS += \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/dummy.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_mcount_arm.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_mcount_mb.d \
./p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/profile_mcount_ppc.d 


# Each subdirectory must supply rules for building sources it contributes
p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/%.o: ../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM gcc compiler'
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../standalone_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/%.o: ../p3_BT_configure_bsp/ps7_cortexa9_0/libsrc/standalone_v3_11_a/src/profile/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: ARM gcc compiler'
	arm-xilinx-eabi-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../standalone_bsp_0/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


