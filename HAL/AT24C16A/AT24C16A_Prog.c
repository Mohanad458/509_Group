/*
 * AT24C16A_Prog.c
 *
 *  Created on: Sep 24, 2022
 *      Author: Mohanad
 */
#include "AT24C16A_Interface.h"


void H_AT24C16A_Void_EEPROMInit(void)
{
    M_I2C_Void_I2CInit();
    _delay_ms(1000);
}
void H_AT24C16A_Void_EEPROMWrite(u8 Copy_U8_Page,u8 Copy_U8_Byte,u8 Copy_U8_Data)
{
	M_I2C_Void_StartCondition();
	M_I2C_Void_SendSlaveAddressWrite(0x50 |Copy_U8_Page);
	M_I2C_Void_SendByte(Copy_U8_Byte);
	M_I2C_Void_SendByte(Copy_U8_Data);
	M_I2C_Void_StopCondition();
	_delay_ms(10);
}
u8 H_AT24C16A_Void_EEPROMRead(u8 Copy_U8_Page,u8 Copy_U8_Byte)
{
	u8 Local_U8_Reading=0;
	M_I2C_Void_StartCondition();
	M_I2C_Void_SendSlaveAddressWrite(0x50 |Copy_U8_Page);
	M_I2C_Void_SendByte(Copy_U8_Byte);
	M_I2C_Void_RepeatedStart();
	M_I2C_Void_SendSlaveAddressRead(0x50 |Copy_U8_Page);
	Local_U8_Reading=M_I2C_Void_ReadByte();
	M_I2C_Void_StopCondition();
	return Local_U8_Reading;
}

