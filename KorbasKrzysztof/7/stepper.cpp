#include "stepper.h"

Stepper::Stepper(unsigned char initialLedPosition){
	LedCtr = initialLedPosition;
	MyLed.On(initialLedPosition);
}

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
		LedCtr = LedCtr % 4;
		MyLed.On(LedCtr);
	}
	else if(eStep == RIGHT){
		LedCtr++;
		LedCtr = LedCtr % 4;
		MyLed.On(LedCtr);
	}else{
	}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
