#include "stepper.h"

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 10000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

Stepper My_Stepper;

int main(void)
{
	while(1){
		Delay(100);
		My_Stepper.StepLeft();
	}
}
