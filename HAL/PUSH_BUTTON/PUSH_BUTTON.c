/*
 * PUSH_BUTTON.c
 *
 * Created: 11/01/2022 11:08:17 ص
 *  Author: dell
 */ 
#include "PUSH_BUTTON.h"
//
//void PUSH_BUTTON_INT_INIT(void){
//
	///***to activate pull up resistance**/
	//PIN_PULL_UP_RES(PD2,ENABLE);
	//PIN_MODE(PB7,OUTPUT);
	//PIN_WRITE(PB7,LOW);
	//EXT_INT_INIT();
//}


void PUSH_BUTTON_INIT(u8 button){
	PIN_MODE(PUSH_BUTTON_OUTPUT,OUTPUT);
	PIN_WRITE(PUSH_BUTTON_OUTPUT,LOW);
	switch(button){
		case PUSH_BUTTON_A:
		PIN_MODE(PUSH_BUTTON_A_PIN,INPUT);
		PIN_PULL_UP_RES(PUSH_BUTTON_A_PIN,ENABLE);
		break;
		case PUSH_BUTTON_B:
		PIN_MODE(PUSH_BUTTON_B_PIN,INPUT);
		PIN_PULL_UP_RES(PUSH_BUTTON_B_PIN,ENABLE);
		break;
		case PUSH_BUTTON_C:
		PIN_MODE(PUSH_BUTTON_C_PIN,INPUT);
		PIN_PULL_UP_RES(PUSH_BUTTON_C_PIN,ENABLE);
		break;
		case PUSH_BUTTON_D:
		PIN_MODE(PUSH_BUTTON_D_PIN,INPUT);
		PIN_PULL_UP_RES(PUSH_BUTTON_D_PIN,ENABLE);
		break;
		default:
		break;
	}

}
u8 PUSH_BUTTON_READ(u8 button){
	u8 value =1;
	switch(button){
		case PUSH_BUTTON_A:
		
		value = PIN_READ(PUSH_BUTTON_A_PIN);
		if(value ==0){
			_delay_ms(50);
			value = PIN_READ(PUSH_BUTTON_A_PIN);
			if(value==0){
				while(PIN_READ(PUSH_BUTTON_A_PIN) ==0);
				
			}
		}
		break;

		case PUSH_BUTTON_B:
		value = PIN_READ(PUSH_BUTTON_B_PIN);
		if(value ==0){
			_delay_ms(50);
			value = PIN_READ(PUSH_BUTTON_B_PIN);
			if(value==0){
				while(PIN_READ(PUSH_BUTTON_B_PIN) ==0);
			}
		}
		break;

		case PUSH_BUTTON_C:
		value = PIN_READ(PUSH_BUTTON_C_PIN);
		if(value ==0){
			_delay_ms(50);
			value = PIN_READ(PUSH_BUTTON_C_PIN);
			if(value==0){
				while(PIN_READ(PUSH_BUTTON_C_PIN) ==0);
			}
		}
		break;

		case PUSH_BUTTON_D:
		value = PIN_READ(PUSH_BUTTON_D_PIN);
		if(value ==0){
			_delay_ms(50);
			value = PIN_READ(PUSH_BUTTON_D_PIN);
			if(value==0){
				while(PIN_READ(PUSH_BUTTON_D_PIN) ==0);
			}
		}
		break;
		default:
		break;
	}
	return value;
}
