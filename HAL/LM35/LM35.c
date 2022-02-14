/*
 * LM35.c
 *
 * Created: 10/01/2022 02:36:07 م
 *  Author: dell
 */ 

#include "STD_TYPES.h"
#include "ADC.h"

void LM35_INIT(void)
{
	ADC_INIT();
}
u16  LM35_READ(void)
{
	u32 adc_value = ADC_READ();
	u16 temp = (adc_value * 500) / 1023;
	return temp;
}