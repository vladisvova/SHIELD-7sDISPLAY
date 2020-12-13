/*
 * hts221.h
 *
 *  Created on: Dec 5, 2020
 *      Author: vladisvova
 */

#ifndef HTS221_H_
#define HTS221_H_

#include "main.h"
#include "i2c.h"


#define 	HTS221_DEVICE_ADDRESS_0				0xBE//dopln zo SAD
#define 	HTS221_DEVICE_ADDRESS_1				0xBF

#define 	HTS221_WHO_AM_I_VALUE				0xBC
#define 	HTS221_WHO_AM_I_ADDRES				0x0F

#define 	HTS221_ADDRESS_CTRL1				0x20

#define 	HTS221_HUM							0x28
#define 	HTS221_TEMP							0x2A


#define 	HTS221_ADDRESS_TEMP_L				0x2A

#define 	HTS221_ADDRESS_TEMP_H				0x2B

uint8_t HTS221_init(void);
uint8_t HTS221_read_byte(uint8_t reg_addr);
void HTS221_write_byte(uint8_t reg_addr, uint8_t value);
float HTS221_get_temp();
int HTS221_get_relhum();

#endif /* HTS221_H_ */
