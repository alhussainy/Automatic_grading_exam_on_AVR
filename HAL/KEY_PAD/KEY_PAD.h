/*
 * KEY_PAD.h
 *
 * Created: 09/01/2022 11:46:09 ص
 *  Author: dell
 */ 


#ifndef KEY_PAD_H_
#define KEY_PAD_H_

#include "STD_TYPES.h"

void KEY_PAD_INIT(void);
u8   KEY_PAD_READ(void);

#define MODE_1		1
#define MODE_2		2
void KEY_PAD_INIT(void);
u8	KEY_PAD_READ(void);

#endif /* KEY_PAD_H_ */