################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/LED/LED_Prog.c 

OBJS += \
./HAL/LED/LED_Prog.o 

C_DEPS += \
./HAL/LED/LED_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/LED/%.o: ../HAL/LED/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\Embedded system course\tooling\eclipse\509_GROUP\APP" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\LM35" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\KeyPad" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL\ADC" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\LCD" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\APP\Projects" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\SSD" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\PB" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\Buzzer" -I"D:\Embedded system course\tooling\eclipse\509_GROUP" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL\DIO" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\LED" -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


