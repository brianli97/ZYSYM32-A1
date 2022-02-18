################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../mycode/IRAvoid.c \
../mycode/IRSEARCH.c \
../mycode/keyscan.c \
../mycode/motor.c 

OBJS += \
./mycode/IRAvoid.o \
./mycode/IRSEARCH.o \
./mycode/keyscan.o \
./mycode/motor.o 

C_DEPS += \
./mycode/IRAvoid.d \
./mycode/IRSEARCH.d \
./mycode/keyscan.d \
./mycode/motor.d 


# Each subdirectory must supply rules for building sources it contributes
mycode/IRAvoid.o: ../mycode/IRAvoid.c mycode/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../../Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../../Drivers/CMSIS/Include -I../../STM32CubeIDE/mycode/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"mycode/IRAvoid.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
mycode/IRSEARCH.o: ../mycode/IRSEARCH.c mycode/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../../Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../../Drivers/CMSIS/Include -I../../STM32CubeIDE/mycode/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"mycode/IRSEARCH.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
mycode/keyscan.o: ../mycode/keyscan.c mycode/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../../Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../../Drivers/CMSIS/Include -I../../STM32CubeIDE/mycode/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"mycode/keyscan.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
mycode/motor.o: ../mycode/motor.c mycode/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../../Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../../Drivers/CMSIS/Include -I../../STM32CubeIDE/mycode/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"mycode/motor.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

