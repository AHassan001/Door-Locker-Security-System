/******************************************************************************
 *
 * Module: Buzzer
 *
 * File Name: Buzzer.h
 *
 * Description: header file for Buzzer Driver
 *
 * Author: Abdelrahman Maher
 *
 *******************************************************************************/

#ifndef BUZZER_H_
#define BUZZER_H_

#include "std_types.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
#define BUZZER_PORT               PORTD_ID
#define BUZZER_PIN                PIN6_ID


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

void Buzzer_init(void);
void Buzzer_on(void);
void Buzzer_off(void);




#endif /* BUZZER_H_ */
