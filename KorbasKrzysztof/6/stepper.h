#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

class Stepper: private Led{ 
	private:
		enum Step{LEFT,RIGHT};
		unsigned char LedCtr;
	public:
		Stepper(unsigned char initialLedPosition = 0);
		void StepRight(void);
		void StepLeft(void);
	private:
		void Step(enum Step eStep);
};

#endif
