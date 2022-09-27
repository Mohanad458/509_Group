/*
 * Timer_Config.h
 *
 *  Created on: Sep 15, 2022
 *      Author: Mohanad
 */

#ifndef MCAL_TIMER_TIMER_CONFIG_H_
#define MCAL_TIMER_TIMER_CONFIG_H_
/*
 * TIMER_PRECALER_DV  OPTIONS : [1024 ,256]
 */

#define TIMER_PRESCALER_DV       1024
/*
 * SELECT F_OSC IN MHZ
 */
#define F_OSC                   16
/*
 * TIMER_MODE OPTIONS :[NORMAL_MODE,CTC_MODE]
 */
#define TIMER0_MODE       CTC_MODE
/*
 * SLECT PWM_MODE OPTIONS: [FAST_PWM, PHASE_CORRECT_PWM]
 */
#define PWM0_MODE        PHASE_CORRECT_PWM
/*
 * SLECT FAST_PWM_MODE OPTIONS: [INVERTED, NON_INVERTED]
 */
#define PWM0_MODE2        NON_INVERTED
#endif /* MCAL_TIMER_TIMER_CONFIG_H_ */

