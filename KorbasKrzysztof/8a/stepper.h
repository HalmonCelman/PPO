#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

class Stepper{
	public:
		void StepRight(void);
		void StepLeft(void);
	private:
		enum Step{LEFT,RIGHT};
		void Step(enum Step eStep);

		unsigned char LedCtr;
		Led MyLed;
};

#endif
