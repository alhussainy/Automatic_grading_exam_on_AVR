#include "APP.h"


u8 currentAnswer;

u8 ASKING(u8 questionNumber){
	Display_Question(questionNumber);
	u8 reading =1;
	u8 value=0;
	reading = PUSH_BUTTON_READ(PUSH_BUTTON_A);
	if(reading==0){
		currentAnswer ='A';
		value = CHECK_ANSWER(questionNumber);
	}
	reading = PUSH_BUTTON_READ(PUSH_BUTTON_B);
	if(reading==0){
		currentAnswer ='B';
		value = CHECK_ANSWER(questionNumber);
	}
	reading = PUSH_BUTTON_READ(PUSH_BUTTON_C);
	if(reading==0){
		currentAnswer ='C';
		value = CHECK_ANSWER(questionNumber);
	}
	reading = PUSH_BUTTON_READ(PUSH_BUTTON_D);
	if(reading==0){
		currentAnswer ='D';
		value = CHECK_ANSWER(questionNumber);
	}
	return value;
}

void Right_Answer(void){
	BUZZER_ONCE();
	LCD_GO_TO(1,0);
	LCD_WRITE_STR("   -> GREAT <- ");
	_delay_ms(DISPLAY_DELAY);
	
}
void Wrong_Answer(void){
	BUZZER_ONCE();
	LCD_GO_TO(1,0);
	LCD_WRITE_STR("1 MINUTE PENALTY");
	_delay_ms(DISPLAY_DELAY);
	LCD_GO_TO(1,0);
	LCD_WRITE_STR("      LOSER     ");
	_delay_ms(DISPLAY_DELAY);
}
u8 CHECK_ANSWER(u8 questionNumber){
	u8 returnValue = WRONG_ANSWER;
	switch(questionNumber){
		case 1:
			switch(currentAnswer){
				case 'D':
				Right_Answer();
				returnValue=RIGHT_ANSWER;
				break;
				default:
				Wrong_Answer();
				break;
			}
		break;
		case 2:
		switch(currentAnswer){
			case 'D':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 3:
		switch(currentAnswer){
			case 'C':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 4:
		switch(currentAnswer){
			case 'C':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 5:
		switch(currentAnswer){
			case 'D':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 6:
		switch(currentAnswer){
			case 'C':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 7:
		switch(currentAnswer){
			case 'B':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 8:
		switch(currentAnswer){
			case 'B':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 9:
		switch(currentAnswer){
			case 'D':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 10:
		switch(currentAnswer){
			case 'C':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 11:
		switch(currentAnswer){
			case 'C':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 12:
		switch(currentAnswer){
			case 'C':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 13:
		switch(currentAnswer){
			case 'A':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 14:
		switch(currentAnswer){
			case 'B':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 15:
		switch(currentAnswer){
			case 'A':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 16:
		switch(currentAnswer){
			case 'B':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 17:
		switch(currentAnswer){
			case 'A':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 18:
		switch(currentAnswer){
			case 'A':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 19:
		switch(currentAnswer){
			case 'A':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 20:
		switch(currentAnswer){
			case 'D':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 21:
		switch(currentAnswer){
			case 'D':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 22:
		switch(currentAnswer){
			case 'C':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 23:
		switch(currentAnswer){
			case 'D':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 24:
		switch(currentAnswer){
			case 'C':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 25:
		switch(currentAnswer){
			case 'D':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 26:
		switch(currentAnswer){
			case 'B':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 27:
		switch(currentAnswer){
			case 'B':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 28:
		switch(currentAnswer){
			case 'C':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 29:
		switch(currentAnswer){
			case 'D':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
		case 30:
		switch(currentAnswer){
			case 'C':
			Right_Answer();
			returnValue=RIGHT_ANSWER;
			break;
			default:
			Wrong_Answer();
			break;
		}
		break;
	}

	return returnValue;
}

void Display_Question(u8 questionNumber){
	LCD_GO_TO(1,0);
	LCD_WRITE_CHR('Q');
	LCD_WRITE_CHR('-');
	LCD_WRITE_CHR(questionNumber/10+'0');
	LCD_WRITE_CHR(questionNumber%10+'0');
	LCD_WRITE_STR("    A B C D ");
}
