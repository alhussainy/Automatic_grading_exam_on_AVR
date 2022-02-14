


#include "LCD.h"

#include "PUSH_BUTTON.h"
#include "TIMER_0.h"
#include "APP.h"
#include "BUZZER.h"
#include <avr/interrupt.h>
#define F_CPU    16000000UL
#include <util/delay.h>
extern u32 num_of_ov;
extern u32 rem_ticks;
unsigned char seconds=0;
unsigned char minutes=0;
unsigned char hours=0;

int main(void)
{
	TIMER_0_INIT();
	TIMER_0_SET_TIME(1000);
	TIMER_0_START();
	LCD_INIT();
	PUSH_BUTTON_INIT(PUSH_BUTTON_A);
	PUSH_BUTTON_INIT(PUSH_BUTTON_B);
	PUSH_BUTTON_INIT(PUSH_BUTTON_C);
	PUSH_BUTTON_INIT(PUSH_BUTTON_D);
	BUZZER_INIT();
	u8 answerResult =NO_ANSWER;
	u8 questionNumber=1;
	BUZZER_TWICE();
	while(1)
	{
		if(questionNumber <=30){
			LCD_STOP_WATCH_DISPLAY(hours,minutes,seconds);
			answerResult =ASKING(questionNumber);
			switch(answerResult){
				case RIGHT_ANSWER:
				questionNumber++;
				answerResult =NO_ANSWER;
				break;
				case WRONG_ANSWER:
				minutes++;
				answerResult =NO_ANSWER;
				break;
				default:
				break;
			}
			
			}else{
			LCD_GO_TO(1,0);
			TIMER_0_STOP();
			LCD_WRITE_STR("Excellent");
		}
		
		
	}
}

ISR(TIMER0_OVF_vect)
{
	static u8 counter = 0;
	counter++;
	if(counter == num_of_ov)
	{
		seconds++;
		if(seconds == 60){
			seconds=0;
			minutes++;
			if(minutes == 60){
				minutes=0;
				hours++;
			}
		}
		
		counter = 0;
		TCNT0 = 256 - rem_ticks;
	}
}