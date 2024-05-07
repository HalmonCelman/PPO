#include "stepper.h"

void Stepper::SetLed(Led *pLedObject){
	pLed = pLedObject;
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
	pLed->On(LedCtr);
	
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
