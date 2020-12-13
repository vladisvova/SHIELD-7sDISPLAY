/*
 * lbs25hb.h
 *
 *  Created on: Dec 10, 2020
 *      Author: vladisvova
 */

#ifndef LBS25HB_H_
#define LBS25HB_H_

#include "main.h"
#include "i2c.h"


#define 	LBS25HB_DEVICE_ADDRESS_0				0xBA
#define 	LBS25HB_DEVICE_ADDRESS_1				0xB8

#define 	LBS25HB_WHO_AM_I_VALUE					0xBD
#define 	LBS25HB_WHO_AM_I_ADDRES					0x0F

#define 	LBS25HB_ADDRESS_CTRL1					0x20
#define 	LBS25HB_ADDRESS_CTRL2					0x21

#define 	LBS25HB_ADDRESS_PRES_XL					0x28
#define 	LBS25HB_ADDRESS_PRES_L					0x29
#define 	LBS25HB_ADDRESS_PRES_H					0x2A



uint8_t LBS25HB_init(void);
uint8_t LBS25HB_read_byte(uint8_t reg_addr);
void LBS25HB_write_byte(uint8_t reg_addr, uint8_t value);
float LBS25HB_get_pres();
float LBS25HB_calculate_altitude(float pressure);

#endif /* LBS25HB_H_ */
