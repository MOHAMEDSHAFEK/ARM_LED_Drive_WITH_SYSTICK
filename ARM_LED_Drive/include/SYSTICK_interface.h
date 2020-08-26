/*************************************************************/
/* SYSTICK_interface.h
*creat on August 25,2020
*	Auther : Mohamed Shafek
*	version: V01
*
*
*/
/************************************************************/
#ifndef SYSTICK_interface_c_
#define SYSTICK_interface_c_


#define  AHB_8 					0
#define  PROCESSOR_CLOCK_AHB	1


void MSYSTICK_voidEnabled(void);
void MSYSTICK_voidDisabled(void);
void _delay_ms(u32 copy_u32SysticTime);

#endif  /*SYSTICK_interface_c_*/