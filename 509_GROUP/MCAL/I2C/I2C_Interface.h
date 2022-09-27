/*
 * I2C_Interface.h
 *
 *  Created on: Sep 23, 2022
 *      Author: Mohanad
 */

#ifndef MCAL_I2C_I2C_INTERFACE_H_
#define MCAL_I2C_I2C_INTERFACE_H_
#include "BitMath.h"
#include "STD.h"
#include <util/delay.h>


void M_I2C_Void_I2CInit(void);
void M_I2C_Void_StartCondition(void);
void M_I2C_Void_StopCondition(void);
void M_I2C_Void_RepeatedStart(void);
void M_I2C_Void_SendSlaveAddressWrite(u8);
void M_I2C_Void_SendSlaveAddressRead(u8);
void M_I2C_Void_SendByte(u8);
u8 M_I2C_Void_ReadByte(void);






#endif /* MCAL_I2C_I2C_INTERFACE_H_ */
