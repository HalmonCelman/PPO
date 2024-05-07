#include "stepper.h"


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
	MyLed.On(LedCtr);
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
