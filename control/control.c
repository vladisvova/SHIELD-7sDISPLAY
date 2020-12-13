/*
 * control.c
 *
 *  Created on: Dec 10, 2020
 *      Author: vladisvova
 */

#include "control.h"

bool state_changed = false;
char  *text;

enum move {LEFT,RIGHT};
enum move moving = RIGHT;


uint8_t state_init(){

	button_state = MAG;

	return 1;
}


void change_state(void){//tuto funkciu pouzi v interapte na tlacidlo


	if(button_state==MAG){
		button_state=TEMP;
	}else if(button_state==TEMP){
		button_state=HUM;
	}else if(button_state==HUM){
		button_state=BAR;
	}else if(button_state==BAR){
		button_state=ALT;
	}else if(button_state==ALT){
		button_state=MAG;
	}


}



void processToDisplay(void){


	static bool start = true;
	int len;


	static uint8_t position1 = -1;
	static uint8_t position2 = 0;
	static uint8_t position3 = 1;
	static uint8_t position4 = 2;


	if(start){

		size_t needed = snprintf(NULL, 0, "MAG_%2.2f",lis3mdl_get_azimut());
		text = (char*)malloc((needed+1)*sizeof(char));
		sprintf(text, "MAG_%2.2f",lis3mdl_get_azimut());
		len = needed+1;

	}




	if(state_changed){

		if(button_state == ALT){

			size_t needed = snprintf(NULL, 0, "ALT_%4.2f",LBS25HB_calculate_altitude(LBS25HB_get_pres()));
			text = (char*)malloc((needed+1)*sizeof(char));
			sprintf(text, "ALT_%4.2f",LBS25HB_calculate_altitude(LBS25HB_get_pres()));
			len = needed+1;

		} else if(button_state == BAR){

			size_t needed = snprintf(NULL, 0, "BAR_%4.2f",LBS25HB_get_pres());
			text = (char*)malloc((needed+1)*sizeof(char));
			sprintf(text, "BAR_%4.2f",LBS25HB_get_pres());
			len = needed+1;

		} else if(button_state == TEMP){


			size_t needed = snprintf(NULL, 0, "TEMP_%2.1f",HTS221_get_temp());
			text = (char*)malloc((needed+1)*sizeof(char));
			sprintf(text, "TEMP_%2.1f",HTS221_get_temp());
			len = needed+1;

		} else if(button_state == HUM){


			size_t needed = snprintf(NULL, 0, "HUM_%2d",HTS221_get_relhum());
			text = (char*)malloc((needed+1)*sizeof(char));
			sprintf(text, "HUM_%2d",HTS221_get_relhum());
			len = needed+1;

		}else if(button_state == MAG){

			size_t needed = snprintf(NULL, 0, "MAG_%2.2f",lis3mdl_get_azimut());
			text = (char*)malloc((needed+1)*sizeof(char));
			sprintf(text, "MAG_%2.2f",lis3mdl_get_azimut());
			len = needed+1;

		}

		state_changed = false;

		position1 = -1;
		position2 = 0;
		position3 = 1;
		position4 = 2;

		moving = RIGHT;
	}






	bool activeDP[] = {false,false,false,false};

	if(moving == RIGHT && start == false){

		position1+=1;
		position2+=1;
		position3+=1;
		position4+=1;

		if(position4 < len-1){

			if(text[position4+1]=='.'){

				activeDP[3]=true;
			}

			if(text[position3+1]=='.'){

				activeDP[2]=true;

			}

			if(text[position2+1]=='.'){

				activeDP[1]=true;

			}

			if(text[position1+1]=='.'){

				activeDP[0]=true;

			}

		}




		if(text[position1]=='.'){

			position1+=1;
			position2+=1;
			position3+=1;
			position4+=1;

		}

		if(text[position2]=='.'){

			position2+=1;
			position3+=1;
			position4+=1;
		}

		if(text[position3]=='.'){


			position3+=1;
			position4+=1;
		}


		if(text[position4]=='.'){

			position4+=1;
		}


	}

	if(moving == LEFT && start == false){



		if(position1 > 0){

			if(text[position4-1]=='.'){

				activeDP[3]=true;
			}

			if(text[position3-1]=='.'){

				activeDP[2]=true;

			}

			if(text[position2-1]=='.'){

				activeDP[1]=true;

			}

			if(text[position1-1]=='.'){

				activeDP[0]=true;

			}

		}

		position1-=1;
		position2-=1;
		position3-=1;
		position4-=1;

		if(text[position1]=='.'){

			position1-=1;
			position2-=1;
			position3-=1;
			position4-=1;

		}

		if(text[position2]=='.'){

			position2-=1;
			position3-=1;
			position4-=1;
		}

		if(text[position3]=='.'){


			position3-=1;
			position4-=1;
		}


		if(text[position4]=='.'){

			position4-=1;
		}



	}



	if(position1 == 0)
		moving = RIGHT;


	if(position4 == len-1 || position4 == len-2)
		moving = LEFT;

	uint8_t i = 0;

	while(i<65){

		setDigitOne();
		lightTheChar(text[position1],activeDP[0]);
		LL_mDelay(1);
		setDigitTwo();
		lightTheChar(text[position2],activeDP[1]);
		LL_mDelay(1);
		setDigitThree();
		lightTheChar(text[position3],activeDP[2]);
		LL_mDelay(1);
		setDigitFour();
		lightTheChar(text[position4],activeDP[3]);
		LL_mDelay(1);

		i++;

	}






	start = false;

}



void lightTheChar(uint8_t ch, bool active_DP){

	LL_GPIO_SetOutputPin(segment_DP_GPIO_Port, segment_DP_Pin);

	if(ch=='V')
		V(active_DP);

	if(ch=='l' || ch=='L')
		L(active_DP);

	if(ch=='a' || ch=='A' )
		A(active_DP);

	if(ch=='d')
		D(active_DP);

	if(ch=='i')
		I(active_DP);

	if(ch=='m'|| ch=='M')
		M(active_DP);

	if(ch=='r'|| ch=='R')
		R(active_DP);

	if(ch=='B')
		B(active_DP);

	if(ch=='e' || ch=='E')
		E(active_DP);

	if(ch=='n')
		N(active_DP);

	if(ch=='k')
		K(active_DP);

	if(ch=='8')
		eight(active_DP);

	if(ch =='6')
		six(active_DP);

	if(ch=='4')
		four(active_DP);

	if(ch =='2')
		two(active_DP);

	if(ch =='_')
		_(active_DP);
	///

	if(ch=='G')
		G(active_DP);

	if(ch=='T'|| ch=='t')
		T(active_DP);

	if(ch=='P'|| ch=='p')
		P(active_DP);

	if(ch=='H')
		H(active_DP);

	if(ch =='U')
		U(active_DP);

	if(ch=='1')
		one(active_DP);

	if(ch =='3')
		three(active_DP);

	if(ch =='-')
		dash(active_DP);

	if(ch =='5')
		five(active_DP);

	if(ch =='7')
		seven(active_DP);

	if(ch =='9')
		nine(active_DP);

	if(ch =='0')
		zero(active_DP);


}














