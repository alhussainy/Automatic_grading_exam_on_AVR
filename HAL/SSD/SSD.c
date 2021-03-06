/*
 * SSD.c
 *
 * Created: 05/01/2022 09:44:02 ص
 *  Author: dell
 */ 
#include "SSD_CFG.h"
#include "STD_TYPES.h"
#include "DIO.h"
#define F_CPU    16000000UL
#include <util/delay.h>

void SSD_INIT(void)
{
	PIN_MODE(SSD_PIN_A,OUTPUT);
	PIN_MODE(SSD_PIN_B,OUTPUT);
	PIN_MODE(SSD_PIN_C,OUTPUT);
	PIN_MODE(SSD_PIN_D,OUTPUT);
	PIN_MODE(SSD_PIN_E,OUTPUT);
	PIN_MODE(SSD_PIN_F,OUTPUT);
	PIN_MODE(SSD_PIN_G,OUTPUT);
	PIN_MODE(SSD_EN_PIN_1,OUTPUT);
	PIN_MODE(SSD_EN_PIN_2,OUTPUT);
}
void SSD_DISPLAY(u8 number)
{
	u8 i = 0;
	for (i=0;i<50;i++)
	{
		u8 right_number = number % 10;
		u8 left_number  = number / 10;
		PIN_WRITE(SSD_EN_PIN_1,HIGH);
		PIN_WRITE(SSD_EN_PIN_2,LOW);
		switch(right_number)
		{
			case 0:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,HIGH);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,LOW);
			break;
			case 1:
			PIN_WRITE(SSD_PIN_A,LOW);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,LOW);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,LOW);
			PIN_WRITE(SSD_PIN_G,LOW);	
			break;
			case 2:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,LOW);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,HIGH);
			PIN_WRITE(SSD_PIN_F,LOW);
			PIN_WRITE(SSD_PIN_G,HIGH);		
			break;
			case 3:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,LOW);
			PIN_WRITE(SSD_PIN_G,HIGH);		
			break;
			case 4:
			PIN_WRITE(SSD_PIN_A,LOW);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,LOW);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,HIGH);		
			break;
			case 5:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,LOW);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,HIGH);		
			break;
			case 6:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,LOW);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,HIGH);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,HIGH);		
			break;
			case 7:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,LOW);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,LOW);
			PIN_WRITE(SSD_PIN_G,LOW);		
			break;
			case 8:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,HIGH);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,HIGH);		
			break;
			case 9:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,HIGH);		
			break;
			default:
			break;
		}
		_delay_ms(5);
		PIN_WRITE(SSD_EN_PIN_1,LOW);
		PIN_WRITE(SSD_EN_PIN_2,HIGH);
		switch(left_number)
		{
			case 0:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,HIGH);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,LOW);
			break;
			case 1:
			PIN_WRITE(SSD_PIN_A,LOW);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,LOW);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,LOW);
			PIN_WRITE(SSD_PIN_G,LOW);
			break;
			case 2:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,LOW);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,HIGH);
			PIN_WRITE(SSD_PIN_F,LOW);
			PIN_WRITE(SSD_PIN_G,HIGH);
			break;
			case 3:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,LOW);
			PIN_WRITE(SSD_PIN_G,HIGH);
			break;
			case 4:
			PIN_WRITE(SSD_PIN_A,LOW);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,LOW);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,HIGH);
			break;
			case 5:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,LOW);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,HIGH);
			break;
			case 6:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,LOW);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,HIGH);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,HIGH);
			break;
			case 7:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,LOW);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,LOW);
			PIN_WRITE(SSD_PIN_G,LOW);
			break;
			case 8:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,HIGH);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,HIGH);
			break;
			case 9:
			PIN_WRITE(SSD_PIN_A,HIGH);
			PIN_WRITE(SSD_PIN_B,HIGH);
			PIN_WRITE(SSD_PIN_C,HIGH);
			PIN_WRITE(SSD_PIN_D,HIGH);
			PIN_WRITE(SSD_PIN_E,LOW);
			PIN_WRITE(SSD_PIN_F,HIGH);
			PIN_WRITE(SSD_PIN_G,HIGH);
			break;
			default:
			break;
		}
		_delay_ms(5);
		PIN_WRITE(SSD_EN_PIN_1,LOW);
		PIN_WRITE(SSD_EN_PIN_2,LOW);
	}
}