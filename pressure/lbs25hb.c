/*
 * lbs25hb.c
 *
 *  Created on: Dec 10, 2020
 *      Author: vladisvova
 */


#include "lbs25hb.h"

uint8_t addres1 = LBS25HB_DEVICE_ADDRESS_0;



uint8_t LBS25HB_read_byte(uint8_t reg_addr)
{
	uint8_t data = 0;
	return *(i2c_master_read(&data, 1, reg_addr, addres1, 0));
}


void LBS25HB_write_byte(uint8_t reg_addr, uint8_t value)
{
	i2c_master_write(value, reg_addr, addres1, 0);
}


void LBS25HB_readArray(uint8_t * data, uint8_t reg, uint8_t length)
{
	i2c_master_read(data, length, reg, addres1, 1);
}


uint8_t LBS25HB_init(void)
{

	uint8_t status = 1;

	//LIS3MDL_ACC_ON;

	LL_mDelay(100);

	uint8_t val = LBS25HB_read_byte(LBS25HB_WHO_AM_I_ADDRES);

	if(val == LBS25HB_WHO_AM_I_VALUE)
	{
		status = 1;
	}
	else			//if the device is not found on one address, try another one
	{
		addres1 = LBS25HB_DEVICE_ADDRESS_1;
		val = LBS25HB_read_byte(LBS25HB_WHO_AM_I_ADDRES);
		if(val == LBS25HB_WHO_AM_I_VALUE)
		{
			status = 1;
		}
		else
		{
			status = 0;
			//return status;
		}
	}



	uint8_t ctrl1 = 0xC0;
	LBS25HB_write_byte(LBS25HB_ADDRESS_CTRL1, ctrl1);



	return status;
}



float LBS25HB_get_pres(){


	uint8_t press[3];
	float pressure;

	LBS25HB_readArray( press, LBS25HB_ADDRESS_PRES_XL, 3);

	pressure = ((uint32_t)press[2]) << 16 | ((uint16_t)press[1]) << 8 | press[0];
	pressure/=4096;



	return pressure*1.00;


}


float LBS25HB_calculate_altitude(float pressure)
{
	return (pow((pressure/1013.25), 1.0/5.2559)-1)/(-0.0000225577);
}
