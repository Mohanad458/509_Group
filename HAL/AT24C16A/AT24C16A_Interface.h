/*
 * AT24C16A_Interface.h
 *
 *  Created on: Sep 24, 2022
 *      Author: Mohanad
 */

#ifndef HAL_AT24C16A_AT24C16A_INTERFACE_H_
#define HAL_AT24C16A_AT24C16A_INTERFACE_H_
#include "DIO_Interface.h"
#include "STD.h"
#include "BitMath.h"
#include "I2C_interface.h"

void H_AT24C16A_Void_EEPROMInit(void);
void H_AT24C16A_Void_EEPROMWrite(u8,u8,u8);
u8 H_AT24C16A_Void_EEPROMRead(u8,u8);




#endif /* HAL_AT24C16A_AT24C16A_INTERFACE_H_ */
