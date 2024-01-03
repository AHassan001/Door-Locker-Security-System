/******************************************************************************
 *
 * Module: control ECU
 *
 * File Name: Control_ECU.h
 *
 * Description: Header file for the control ECU
 *
 * Author: Abdelrahman Maher
 *
 *******************************************************************************/


#ifndef CONTROL_ECU_H_
#define CONTROL_ECU_H_

#include <avr/io.h>
#include "uart.h"
#include "dc_motor.h"
#include <util/delay.h>
#include "Timer.h"
#include "Buzzer.h"
#include "twi.h"
#include "external_eeprom.h"


/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
#define no_of_Password        5
#define ECU_READY             0x11
#define SEND_PASSWORD         0x12
#define CONFIRM_SEND_PASSWORD 0x13
#define correct_password      1
#define wrong_password        0
#define max_wrong_pass        2
#define maximum_speed         100
#define first_option          0x28
#define second_option         0x32


/*******************************************************************************
 *                         global variables                                   *
 *******************************************************************************/
static  uint16 g_secondsCount = 0;
static  uint8  g_wrong_entery = 0;


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
uint8 check_password_first_time(void);
void save_in_eeprom (uint8 *password);
void check_state (uint8 state);
void option_one (void);
uint8 ComparePassword(uint8 *first_pass,uint8 *second_pass);
void correct_option_one (void);
void wrong_option_one (void);
void read_Password_eeprom (uint8 *check_pass_eeprom);
void option_two(void);
void wrong_option_two (void);
void timer1ControlCallBack(void);



#endif /* CONTROL_ECU_H_ */
