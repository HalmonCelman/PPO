#include "stepper.h"
#include "keyboard.h"

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

unsigned char ucInversion;

int main(void)
{
	Keyboard MyKeyboard;
	if( MyKeyboard.eRead() == BUTTON_4 ){
		ucInversion = 1;
	}else{
		ucInversion = 0;
	}
	
	Stepper MyStepper;
	
	while(1){
		Delay(500);
		switch(MyKeyboard.eRead()){
			case BUTTON_1:
				MyStepper.StepRight();
				break;
			case BUTTON_2:
				MyStepper.StepLeft();
				break;
			default:
				break;
		}
	}
}
