################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/payment_screen/PAYMENTPresenter.cpp \
../TouchGFX/gui/src/payment_screen/PAYMENTView.cpp 

OBJS += \
./TouchGFX/gui/src/payment_screen/PAYMENTPresenter.o \
./TouchGFX/gui/src/payment_screen/PAYMENTView.o 

CPP_DEPS += \
./TouchGFX/gui/src/payment_screen/PAYMENTPresenter.d \
./TouchGFX/gui/src/payment_screen/PAYMENTView.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/payment_screen/%.o TouchGFX/gui/src/payment_screen/%.su TouchGFX/gui/src/payment_screen/%.cyclo: ../TouchGFX/gui/src/payment_screen/%.cpp TouchGFX/gui/src/payment_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../FATFS/Target -I../FATFS/App -I../USB_HOST/App -I../USB_HOST/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_2/Drivers/BSP/Components/Common" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_2/Drivers/BSP/Components/ft5336" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_2/Drivers/BSP/Components/n25q128a" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_2/Drivers/BSP/Components/rk043fn48h" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_2/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I../LWIP/App -I../LWIP/Target -I../Middlewares/Third_Party/LwIP/src/include -I../Middlewares/Third_Party/LwIP/system -I../Drivers/BSP/Components/lan8742 -I../Middlewares/Third_Party/LwIP/src/include/netif/ppp -I../Middlewares/Third_Party/LwIP/src/include/lwip -I../Middlewares/Third_Party/LwIP/src/include/lwip/apps -I../Middlewares/Third_Party/LwIP/src/include/lwip/priv -I../Middlewares/Third_Party/LwIP/src/include/lwip/prot -I../Middlewares/Third_Party/LwIP/src/include/netif -I../Middlewares/Third_Party/LwIP/src/include/compat/posix -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/arpa -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/net -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/sys -I../Middlewares/Third_Party/LwIP/src/include/compat/stdc -I../Middlewares/Third_Party/LwIP/system/arch -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-gui-2f-src-2f-payment_screen

clean-TouchGFX-2f-gui-2f-src-2f-payment_screen:
	-$(RM) ./TouchGFX/gui/src/payment_screen/PAYMENTPresenter.cyclo ./TouchGFX/gui/src/payment_screen/PAYMENTPresenter.d ./TouchGFX/gui/src/payment_screen/PAYMENTPresenter.o ./TouchGFX/gui/src/payment_screen/PAYMENTPresenter.su ./TouchGFX/gui/src/payment_screen/PAYMENTView.cyclo ./TouchGFX/gui/src/payment_screen/PAYMENTView.d ./TouchGFX/gui/src/payment_screen/PAYMENTView.o ./TouchGFX/gui/src/payment_screen/PAYMENTView.su

.PHONY: clean-TouchGFX-2f-gui-2f-src-2f-payment_screen
