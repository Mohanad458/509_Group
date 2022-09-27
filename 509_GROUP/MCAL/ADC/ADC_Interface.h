/*
 * ADC_Interface.h
 *
 *  Created on: Sep 13, 2022
 *      Author: Mohanad
 */

#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_
#include "STD.h"
#include "BitMath.h"
#include "ADC_Private.h"


#define ADC_CHANNEL_0             0
#define ADC_CHANNEL_1             1
#define ADC_CHANNEL_2             2
#define ADC_CHANNEL_3             3
#define ADC_CHANNEL_4             4
#define ADC_CHANNEL_5             5
#define ADC_CHANNEL_6             6
#define ADC_CHANNEL_7             7





void M_ADC_Void_ADCInit(void);
u16 M_ADC_Void_ADCRead(u8);

#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
