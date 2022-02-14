/*
 * APP.h
 *
 * Created: 16/01/2022 09:44:00
 *  Author: Ahmed
 */ 


#ifndef APP_H_
#define APP_H_
#define DISPLAY_DELAY  1000
#include "PUSH_BUTTON.h"
#include "LCD.h"
#include "BUZZER.h"

#define NO_ANSWER	 0
#define RIGHT_ANSWER 2
#define WRONG_ANSWER 1
u8 ASKING(u8);
u8 CHECK_ANSWER(u8);
void Right_Answer(void);
void Wrong_Answer(void);
void Display_Question(u8);
#endif /* APP_H_ */