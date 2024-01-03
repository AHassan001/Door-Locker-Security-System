/******************************************************************************
 *
 * Module: Human Machine interface
 *
 * File Name: HMI_ECU.h
 *
 * Description: Header file for the Human interface
 *
 * Author: Abdelrahman Maher
 *
 *******************************************************************************/


#ifndef HMI_ECU_H_
#define HMI_ECU_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "std_types.h"
#include "lcd.h"
#include "keypad.h"
#include "uart.h"
#include "Timer.h"
#include <util/delay.h>

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
#define ECU_READY 				0x11
#define SEND_PASSWORD 			0x12
#define CONFIRM_SEND_PASSWORD 	0x13
#define no_of_Password 			5
#define correct_password 		1
#define wrong_password 			0
#define max_wrong_pass 			2
#define first_option 			0x28
#define second_option 			0x32


/*******************************************************************************
 *                         global variables                                   *
 *******************************************************************************/
static  uint16 g_secondsCount=0;


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

uint8 display_enter_lcd_first_time(void);
void enter_password(uint8 *pass);
void what_is_the_state(uint8 state);
uint8 enter_option(void);
void option_one (void);
void option_two (void);
void timer1_HMI_CallBack(void);



#endif /* HMI_ECU_H_ */
