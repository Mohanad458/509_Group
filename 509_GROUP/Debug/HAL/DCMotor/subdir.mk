################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/DCMotor/DCMotor_prog.c 

OBJS += \
./HAL/DCMotor/DCMotor_prog.o 

C_DEPS += \
./HAL/DCMotor/DCMotor_prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/DCMotor/DCMotor_prog.o: ../HAL/DCMotor/DCMotor_prog.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\Embedded system course\tooling\eclipse\509_GROUP\APP" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\DCMotor" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL\ADC" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL\Timer" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL\EXT_INT" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL\GIE" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL\WDT" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\LM35" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\KeyPad" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL\ADC" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\LCD" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\APP\Projects" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\SSD" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\PB" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\Buzzer" -I"D:\Embedded system course\tooling\eclipse\509_GROUP" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\MCAL\DIO" -I"D:\Embedded system course\tooling\eclipse\509_GROUP\HAL\LED" -Wall -g2 -gstabs -O1 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"HAL/DCMotor/DCMotor_prog.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


