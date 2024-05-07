#include "stepper.h"

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	Stepper MyStepper(2);
	
	while(1){
		Delay(500);
		MyStepper.StepLeft();
	}
}
