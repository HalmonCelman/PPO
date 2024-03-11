#include <LPC213X.H>
#include "stepper.h"
#include "keyboard.h"

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	Stepper MyStepper;
	Led * pLed;

	if(!(IO0PIN & BUTTON4_bm)){
		pLed = new Led;
	}else{
		pLed = new LedInv;
	}
	MyStepper.SetLed(pLed);
	
	Keyboard MyKeyboard;

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
