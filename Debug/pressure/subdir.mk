################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../pressure/lbs25hb.c 

OBJS += \
./pressure/lbs25hb.o 

C_DEPS += \
./pressure/lbs25hb.d 


# Each subdirectory must supply rules for building sources it contributes
pressure/lbs25hb.o: ../pressure/lbs25hb.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 '-DEXTERNAL_CLOCK_VALUE=8000000' '-DHSE_VALUE=8000000' '-DHSE_STARTUP_TIMEOUT=100' -DDEBUG '-DLSE_STARTUP_TIMEOUT=5000' '-DLSE_VALUE=32768' '-DVDD_VALUE=3300' '-DLSI_VALUE=40000' '-DHSI_VALUE=8000000' -DSTM32F303x8 -DUSE_FULL_LL_DRIVER '-DPREFETCH_ENABLE=1' -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I../pressure -I../control -I../meteo -I../compass -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"pressure/lbs25hb.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

