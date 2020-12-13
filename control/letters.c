/*
 * letters.c
 *
 *  Created on: Nov 25, 2020
 *      Author: vladisvova
 */


#include <letters.h>
#include "main.h"

//letters:


void V(bool activeDP){


	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	//LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	//LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

if(activeDP)
	LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
else
	LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);


}

void L(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	//LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}


void A(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}


void D(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	//LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}


void I(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	//LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}

void M(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	//LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	//LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}

void R(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	//LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}



void _(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	//LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	//LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	//LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}
///// potialto si dal actiDP
void dash(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	//LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	//LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);



}






void B(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}
void E(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}
void N(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	//LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}
void K(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}


void G(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	//LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}


void T(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}


void P(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}



void H(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}


void U(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	//LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}




//numbers:




void one(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	//LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	//LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	//LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}

void three(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	//LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	//LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}

void eight(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}
void six(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}


void four(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	//LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	//LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}

void two(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	//LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	//LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}

void five(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	//LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	//LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}


void seven(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	//LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	//LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	//LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}



void nine(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	//LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	//LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}


void zero(bool activeDP){

	LL_GPIO_SetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_SetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_SetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_SetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_SetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_SetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	LL_GPIO_SetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	LL_GPIO_ResetOutputPin(segment_A_GPIO_Port, segment_A_Pin);
	LL_GPIO_ResetOutputPin(segment_B_GPIO_Port, segment_B_Pin);
	LL_GPIO_ResetOutputPin(segment_C_GPIO_Port, segment_C_Pin);
	LL_GPIO_ResetOutputPin(segment_D_GPIO_Port, segment_D_Pin);
	LL_GPIO_ResetOutputPin(segment_E_GPIO_Port, segment_E_Pin);
	LL_GPIO_ResetOutputPin(segment_F_GPIO_Port, segment_F_Pin);
	//LL_GPIO_ResetOutputPin(segment_G_GPIO_Port, segment_G_Pin);

	if(activeDP)
		LL_GPIO_ResetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);
	else
		LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

}
