/*
 * hts221.c
 *
 *  Created on: Dec 5, 2020
 *      Author: vladisvova
 */


#include "HTS221.h"

uint8_t addres_hts221 = HTS221_DEVICE_ADDRESS_0;

uint8_t HTS221_read_byte(uint8_t reg_addr)
{
	uint8_t data = 0;
	return *(i2c_master_read(&data, 1, reg_addr, addres_hts221, 0));
}


void HTS221_write_byte(uint8_t reg_addr, uint8_t value)
{
	i2c_master_write(value, reg_addr, addres_hts221, 0);
}


void HTS221_readArray(uint8_t * data, uint8_t reg, uint8_t length)
{
	i2c_master_read(data, length, reg, addres_hts221, 1);
}


float HTS221_get_temp()
{


	int16_t T0_out, T1_out, T_out, T0_degC_x8_u16, T1_degC_x8_u16;
	int16_t T0_degC, T1_degC;
	uint8_t data[4], tmp;
	int32_t tmp1;

	HTS221_readArray(data, 0x32, 2);
    HTS221_readArray(&tmp, 0x35, 1);

    T0_degC_x8_u16 = (((uint16_t)(tmp & 0x03)) << 8) | ((uint16_t)data[0]);
    T1_degC_x8_u16 = (((uint16_t)(tmp & 0x0C)) << 6) | ((uint16_t)data[1]);
    T0_degC = T0_degC_x8_u16>>3;
    T1_degC = T1_degC_x8_u16>>3;


    HTS221_readArray(data, 0x3C, 4);

    T0_out = (((uint16_t)data[1])<<8) | (uint16_t)data[0];
    T1_out = (((uint16_t)data[3])<<8) | (uint16_t)data[2];

    HTS221_readArray(data, 0x2A, 2);

    T_out = (((uint16_t)data[1])<<8) | (uint16_t)data[0];


    tmp1 = ((T_out - T0_out)) * ((int32_t)(T1_degC - T0_degC)*10);


    if(((tmp1 /(T1_out - T0_out) + T0_degC*10) / 10.0f) >= 100)
		return 99.9;


	if(((tmp1 /(T1_out - T0_out) + T0_degC*10) / 10.0f) <= -100)
		return -99.9;


	return (tmp1 /(T1_out - T0_out) + T0_degC*10) / 10.0f;

}


int HTS221_get_relhum()
{

	int16_t H0_T0_out, H1_T0_out, H_T_out;
	int16_t H0_rh, H1_rh;
	uint8_t data[2];
	int32_t tmp;
	float value;


	HTS221_readArray(data, 0x30, 2);
	H0_rh = data[0]>>1;
	H1_rh = data[1]>>1;


	HTS221_readArray(data, 0x36, 2);
	H0_T0_out = (((uint16_t)data[1])<<8) | (uint16_t)data[0];

	HTS221_readArray(data, 0x3A, 2);
	H1_T0_out = (((uint16_t)data[1])<<8) | (uint16_t)data[0];


	HTS221_readArray(data, 0x28, 2);
	H_T_out = (((uint16_t)data[1])<<8) | (uint16_t)data[0];



	tmp = ((int32_t)(H_T_out - H0_T0_out)) * ((int32_t)(H1_rh - H0_rh)*10);
	value = (tmp/(H1_T0_out - H0_T0_out) + H0_rh*10);


	 if(value>1000)
		 value = 1000;


	return (int)(value/10);


}




uint8_t HTS221_init(void)
{

	uint8_t status = 1;

	LL_mDelay(100);

	uint8_t val = HTS221_read_byte(HTS221_WHO_AM_I_ADDRES);

	if(val == HTS221_WHO_AM_I_VALUE)
	{
		status = 1;
	}
	else			//if the device is not found on one address, try another one
	{
		addres_hts221 = HTS221_DEVICE_ADDRESS_1;
		val = HTS221_read_byte(HTS221_WHO_AM_I_ADDRES);
		if(val == HTS221_WHO_AM_I_VALUE)
		{
			status = 1;
		}
		else
		{
			status = 0;
		}
	}


	uint8_t ctrl1 = 0x83;
	HTS221_write_byte(HTS221_ADDRESS_CTRL1, ctrl1);

	return status;
}
