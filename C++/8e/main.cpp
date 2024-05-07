#include "stepper.h"
#include "keyboard.h"
#include "ledinv.h"

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	Keyboard MyKeyboard;
	Stepper MyStepper;
	
	Led *pLed;
	
	if(MyKeyboard.eRead() == BUTTON_4){
		pLed = new LedInv;
	} else {
		pLed = new Led;
	}
	
	MyStepper.SetLed(pLed);
	
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
