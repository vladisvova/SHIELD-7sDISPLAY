/*
 * control.h
 *
 *  Created on: Dec 10, 2020
 *      Author: vladisvova
 */

#ifndef CONTROL_H_
#define CONTROL_H_


#include "main.h"

enum state  {MAG,TEMP, HUM, BAR, ALT};
enum  state button_state;




uint8_t state_init();
void change_state(void);

void processToDisplay(void);
void lightTheChar(uint8_t ch, bool active_DP);
#endif /* CONTROL_H_ */
