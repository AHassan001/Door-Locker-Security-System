/******************************************************************************
 *
 * Module: Timer1 Driver
 *
 * File Name: Timer.h
 *
 * Description: header file for timer1 driver
 *
 * Author: Abdelrahman Maher
 *
 *******************************************************************************/

#ifndef TIMER_H_
#define TIMER_H_

#include "std_types.h"
/*******************************************************************************
 *                         Types Declaration                                   *
 *******************************************************************************/
typedef enum
{
	Timer_stop, clock_1,clock_8,clock_64,clock_256,clock_1024,external_clock_faliing,external_clock_rising
}Timer1_Prescaler;

typedef enum
{
	normal, compare,PWM
}Timer1_Mode;

typedef struct
{
	uint16 initial_value;
	uint16 compare_value;
	Timer1_Prescaler prescaler;
	Timer1_Mode mode;
} Timer1_ConfigType;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

void PWM_Timer0_Start (uint8 duty_cycle);
void Timer1_init(const Timer1_ConfigType *Config_Ptr);
void Timer1_deInit(void);
void Timer1_setCallBack(void(*a_ptr)(void));

#endif /* TIMER_H_ */
