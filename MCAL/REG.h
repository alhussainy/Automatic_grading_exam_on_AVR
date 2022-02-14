/*
 * REG.h
 *
 * Created: 04/01/2022 09:48:51 ص
 *  Author: dell
 */ 


#ifndef REG_H_
#define REG_H_

#include "STD_TYPES.h"

#define PORTA      (*((volatile u8*)0x3B))
#define DDRA       (*((volatile u8*)0x3A))
#define PINA       (*((volatile u8*)0x39))

#define PORTB      (*((volatile u8*)0x38))
#define DDRB       (*((volatile u8*)0x37))
#define PINB       (*((volatile u8*)0x36))

#define PORTC      (*((volatile u8*)0x35))
#define DDRC       (*((volatile u8*)0x34))
#define PINC       (*((volatile u8*)0x33))

#define PORTD      (*((volatile u8*)0x32))
#define DDRD       (*((volatile u8*)0x31))
#define PIND       (*((volatile u8*)0x30))
/******************************************************_ADC_REGISTERS************************/
#define ADCSRA     (*((volatile u8*)0x26))
#define ADMUX      (*((volatile u8*)0x27))
#define ADCL       (*((volatile u8*)0x24))
#define ADCH       (*((volatile u8*)0x25))
#define ADCVALUE   (*((volatile u16*)0x24))

/******************************************************_SREG_REGISTER************************/
#define SREG       (*((volatile u8*)0x5F))

/******************************************************_EXT_INT_REGISTERS************************/
#define GICR       (*((volatile u8*)0x5B))
#define MCUCR      (*((volatile u8*)0x55))

/******************************************************_TIMER_0_REGISTERS************************/
#define TCCR0      (*((volatile u8*)0x53))
#define TIMSK      (*((volatile u8*)0x59))
#define TCNT0      (*((volatile u8*)0x52))
#define OCR0       (*((volatile u8*)0x5C))
#endif /* REG_H_ */