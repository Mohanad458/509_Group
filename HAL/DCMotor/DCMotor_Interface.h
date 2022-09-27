/*
 * DCMotor_Interface.h
 *
 *  Created on: Sep 20, 2022
 *      Author: Mohanad
 */

#ifndef HAL_DCMOTOR_DCMOTOR_INTERFACE_H_
#define HAL_DCMOTOR_DCMOTOR_INTERFACE_H_

#include "DCMotor_Config.h"
#include "Timer_Interface.h"
#include "DIO_Interface.h"

void H_DCMotor_Void_DCMotorInit(void);
void H_DCMotor_Void_DCMotorSetSpeed(u32);
void H_DCMotor_Void_DCMotorSetDirection(u8);
void H_DCMotor_Void_DCMotorStart(void);
void H_DCMotor_Void_DCMotorStop(void);

#define ACW    0
#define CW     1





#endif /* HAL_DCMOTOR_DCMOTOR_INTERFACE_H_ */
