/*
 * PUSH_BUTTON.h
 *
 * Created: 11/01/2022 11:08:29 ص
 *  Author: dell
 */ 


#ifndef PUSH_BUTTON_H_
#define PUSH_BUTTON_H_

#include "PUSH_BUTTON_CFG.h"
#include "STD_TYPES.h"
#define F_CPU    16000000UL
#include <util/delay.h>
#define PUSH_BUTTON_A		1
#define PUSH_BUTTON_B		2
#define PUSH_BUTTON_C		3
#define PUSH_BUTTON_D		4

void PUSH_BUTTON_INT_INIT(void);

void PUSH_BUTTON_INIT(u8);
u8 PUSH_BUTTON_READ(u8);
#endif /* PUSH_BUTTON_H_ */