/*
 * ADC.c
 *
 * Created: 10/01/2022 12:48:16 م
 *  Author: dell
 */ 
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "REG.h"

void ADC_INIT(void)
{
	/*to select AVCC as ref */
	SET_BIT(ADMUX,6);
	CLR_BIT(ADMUX,7);
	/*to select right adjust*/
	CLR_BIT(ADMUX,5);
	/*to select PA0 channel*/
	CLR_BIT(ADMUX,0);
	CLR_BIT(ADMUX,1);
	CLR_BIT(ADMUX,2);
	CLR_BIT(ADMUX,3);
	CLR_BIT(ADMUX,4);
	/*to enable auto trigger*/
	SET_BIT(ADCSRA,5);
	/*to select 128 division factor to get 125 kHz frequency*/
	SET_BIT(ADCSRA,0);
	SET_BIT(ADCSRA,1);
	SET_BIT(ADCSRA,2);
	/* to enable ADC*/
	SET_BIT(ADCSRA,7);
}
u16  ADC_READ(void)
{
	/*to start conversion*/
	SET_BIT(ADCSRA,6);
	while((ADCSRA,4) == 0);    //to know the conversion is complete
	return ADCVALUE;
}