#include "stepper.h"

extern unsigned char ucInversion;

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
		LedCtr = LedCtr % 4;
		if(1 == ucInversion){
			MyLedInv.On(LedCtr);
		} else{
			MyLed.On(LedCtr);
		}
	}
	else if(eStep == RIGHT){
		LedCtr++;
		LedCtr = LedCtr % 4;
		if(1 == ucInversion){
			MyLedInv.On(LedCtr);
		} else{
			MyLed.On(LedCtr);
		}
		}else{
	}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
