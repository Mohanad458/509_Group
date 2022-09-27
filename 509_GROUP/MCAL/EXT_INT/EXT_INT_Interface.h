/*
 * EXT_INT_Interface.h
 *
 *  Created on: Sep 8, 2022
 *      Author: Mohanad
 */

#ifndef MCAL_EXT_INT_EXT_INT_INTERFACE_H_
#define MCAL_EXT_INT_EXT_INT_INTERFACE_H_
#include "EXT_INT_Config.h"
#include "BitMath.h"
#include "STD.h"
#include <avr/interrupt.h>


#define EXT_INT_0      0
#define EXT_INT_1      1
#define EXT_INT_2      2

void M_EXT_INT_Void_EXTInInit(u8);
void M_EXT_INT_Void_SetCallBack(void(*)(void));



#endif /* MCAL_EXT_INT_EXT_INT_INTERFACE_H_ */
