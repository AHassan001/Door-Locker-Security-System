 /******************************************************************************
 *
 * Module: DC-Motor
 *
 * File Name: dc_motor.h
 *
 * Description: header file for the Dc Motor driver
 *
 * Author: Abdelrahman Maher
 *
 *******************************************************************************/


#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "std_types.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

#define DC_MOTOR_PORT_ID_S1               PORTB_ID
#define DC_MOTOR_PIN_ID_S1                PIN0_ID

#define DC_MOTOR_PORT_ID_S2               PORTB_ID
#define DC_MOTOR_PIN_ID_S2                PIN1_ID

/*******************************************************************************
 *                         Types Declaration                                   *
 *******************************************************************************/
extern uint8 g_speed;

typedef enum
{
	stop, clockwise,anticlockwise
}DcMotor_state;


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/


void DcMotor_init(void);

void DcMotor_Rotate( DcMotor_state state , uint8 g_speed);

#endif /* DC_MOTOR_H_ */
