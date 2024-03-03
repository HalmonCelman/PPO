#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

class Stepper{ 
	private:
		enum Step{LEFT,RIGHT};
		unsigned char LedCtr;
		Led MyLed;
	public:
		void StepRight(void);
		void StepLeft(void);
	private:
		void Step(enum Step eStep);
};

#endif
