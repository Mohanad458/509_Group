/*
 * Timer_Interface.h
 *
 *  Created on: Sep 15, 2022
 *      Author: Mohanad
 */

#ifndef MCAL_TIMER_TIMER_INTERFACE_H_
#define MCAL_TIMER_TIMER_INTERFACE_H_
#include "STD.h"
#include "BitMath.h"
#include <avr/interrupt.h>
#include "Timer_Config.h"
#include "DIO_Interface.h"



#define TIMER0_CHANNEL      0
#define TIMER1_CHANNEL      1
#define TIMER2_CHANNEL      2

void M_Timer_Void_TimerInit(u8);
void M_Timer_Void_TimerSetTime(u8,u32);
void M_Timer_Void_TimerSart(u8);
void M_Timer_Void_TimerStop(u8);
void M_Timer_Void_PWMInit(u8);
void M_Timer_Void_PWMSetDutyCycle(u8,f32);
void M_Timer_Void_PWMStart(u8);
void M_Timer_Void_PWMStop(u8);
void M_Timer_Void_PWMSetFrequency(u8);

void M_TIMER_Void_SetCallBack(u8,void(*)(void));


#endif /* MCAL_TIMER_TIMER_INTERFACE_H_ */
