/*
 * KEY_PAD.c
 *
 * Created: 09/01/2022 11:45:55 ص
 *  Author: dell
 */ 
#include "KEY_PAD_CFG.h"
#include "DIO.h"
#define F_CPU    16000000UL
#include <util/delay.h>

#if   KEY_PAD_MODE       ==    MODE_1
u8 arr [4][4] = {{'1' , '2' , '3' , '+'},
				 {'4' , '5' , '6' , '-'},
				 {'7' , '8' , '9' , '*'},
				 {'c' , '0' , '=' , '/'}};
#elif KEY_PAD_MODE       ==    MODE_2
u8 arr [4][4] = {{'1' , '2' , '3' , 'A'},
				 {'4' , '5' , '6' , 'B'},
				 {'7' , '8' , '9' , 'C'},
				 {'#' , '0' , '*' , 'D'}};
#endif

void KEY_PAD_INIT(void)
{
	/*to select keypad raws as output*/
	PIN_MODE(KEY_PAD_R_0,OUTPUT);
	PIN_MODE(KEY_PAD_R_1,OUTPUT);
	PIN_MODE(KEY_PAD_R_2,OUTPUT);
	PIN_MODE(KEY_PAD_R_3,OUTPUT);
	/*to select keypad columns as input*/
	PIN_MODE(KEY_PAD_C_0,INPUT);
	PIN_MODE(KEY_PAD_C_1,INPUT);
	PIN_MODE(KEY_PAD_C_2,INPUT);
	PIN_MODE(KEY_PAD_C_3,INPUT);
	/*to make all output high*/
	PIN_WRITE(KEY_PAD_R_0,HIGH);
	PIN_WRITE(KEY_PAD_R_1,HIGH);
	PIN_WRITE(KEY_PAD_R_2,HIGH);
	PIN_WRITE(KEY_PAD_R_3,HIGH);
	/*to activate pull res for all input pins*/
	PIN_PULL_UP_RES(KEY_PAD_C_0,ENABLE);
	PIN_PULL_UP_RES(KEY_PAD_C_1,ENABLE);
	PIN_PULL_UP_RES(KEY_PAD_C_2,ENABLE);
	PIN_PULL_UP_RES(KEY_PAD_C_3,ENABLE);
}
u8   KEY_PAD_READ(void)
{
	u8 reading = 0;
	u8 value = 1;
	u8 c = 0;
	u8 r = 0;
	for (r=KEY_PAD_R_0;r<=KEY_PAD_R_3;r++)
	{
		PIN_WRITE(r,LOW);
		for (c=KEY_PAD_C_0;c<=KEY_PAD_C_3;c++)
		{
			value = PIN_READ(c);
			if(value == 0)
			{
				_delay_ms(100);
				if(value == 0)
				{
					while(PIN_READ(c) == 0);
					reading =  arr[r - KEY_PAD_R_0][c - KEY_PAD_C_0];
				}
			}
		}
		PIN_WRITE(r,HIGH);
	}
	return reading;
}