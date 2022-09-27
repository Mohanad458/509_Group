/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#include "Projects.h"
#include "EXT_INT_Interface.h"
#include "KeyPad_Interface.h"
#include "LCD_Interface.h"
#include "LM35_Interface.h"
#include "Timer_Interface.h"
#include "GIE_Interface.h"
#include "ADC_Interface.h"
#include "WDT_Interface.h"
#include "DCMotor_Interface.h"
#include "Servo_Interface.h"
#include "UART_Interface.h"
#include "LED_Interface.h"
#include "SPI_Interface.h"
#include "AT24C16A_Interface.h"

void A_EXT_INT0_Execution(void);
void A_Timer0_Execution(void);

/*MASTER MC*/
int main()
{u8 x=0;
//H_LED_Void_LedInit(LED0);
H_AT24C16A_Void_EEPROMInit();
H_LCD_Void_LCDInit();
x=H_AT24C16A_Void_EEPROMRead(1,1);


while(1)
{
H_AT24C16A_Void_EEPROMWrite(1,1,x);
H_LCD_Void_LCDWriteNumber(x);
_delay_ms(1000);
x++;
H_LCD_Void_LCDClear();
}
}

void A_EXT_INT0_Execution(void)
{
	H_Buzzer_Void_BuzzerOnce();
	H_LED_Void_LedSetOn(LED0);
/*	H_LCD_Void_LCDWriteString("hhhh");*/
}
void A_Timer0_Execution(void)
{
	//H_Buzzer_Void_BuzzerOnce();
	H_LED_Void_LedTog(LED0);
}
void A_Timer1_Execution(void)
{
	//H_Buzzer_Void_BuzzerOnce();
	H_LED_Void_LedTog(LED0);
}
