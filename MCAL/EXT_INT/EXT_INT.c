/*
 * EXT_INT.c
 *
 * Created: 11/01/2022 10:44:24 ص
 *  Author: dell
 */ 
#include "BIT_MATH.h"
#include "REG.h"
#include "DIO.h"

void EXT_INT_INIT(void)
{
	/*to make PD2 input pin*/
	PIN_MODE(PD2,INPUT);
	/*to select interrupt on falling edge*/
	CLR_BIT(MCUCR,0);
	SET_BIT(MCUCR,1);
	/*to enable GLOBAL INTERRUPT*/
	SET_BIT(SREG,7);
	/*to enable EXTTERNAL INTERRUPT 0*/
	SET_BIT(GICR,6);
}