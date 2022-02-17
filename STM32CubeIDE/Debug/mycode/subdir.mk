################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../mycode/motor.c 

OBJS += \
./mycode/motor.o 

C_DEPS += \
./mycode/motor.d 


# Each subdirectory must supply rules for building sources it contributes
mycode/motor.o: ../mycode/motor.c mycode/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../../Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../../Drivers/CMSIS/Include -I../../STM32CubeIDE/mycode/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"mycode/motor.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

