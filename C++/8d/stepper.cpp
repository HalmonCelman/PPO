#include "stepper.h"

void Stepper::SetMode(unsigned char ucMode){
	ucInversion = ucMode;
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
	}
	else if(eStep == RIGHT){
		LedCtr++;
	}else{
		return;
	}

	LedCtr = LedCtr % 4;
	if(1 == ucInversion){
		MyLedInv.On(LedCtr);
	} else{
		MyLed.On(LedCtr);
	}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
