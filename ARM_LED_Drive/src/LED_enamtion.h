/*
 * LED_enamtion.h
 *
 *  Created on: Aug 25, 2020
 *      Author: shafek
 */

#ifndef LED_ENAMTION_H_
#define LED_ENAMTION_H_
#include "STD_TYPES.h"
#include "DIO_interface.h"
typedef struct{
	u8 port;
	u8 pin;
}LED_enamtion;



void LED_voidLEDEnable(LED_enamtion  copy_structarry[],u8 copy_u8NumberOfLed);

void LED_voidPingPong(LED_enamtion  copy_structarry[],u8 copy_u8NumberOfLed);

void LED_voidOpenFlowerClosFlower(LED_enamtion  copy_structarry[],u8 copy_u8NumberOfLed);

void LED_voidLEDFladher(LED_enamtion  copy_structarry[],u8 copy_u8NumberOfLed);


#endif /* LED_ENAMTION_H_ */
