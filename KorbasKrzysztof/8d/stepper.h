#ifndef STEPPER_H
#define STEPPER_H

#include "ledinv.h"

class Stepper{
	public:
		void SetMode(unsigned char ucMode);
		void StepRight(void);
		void StepLeft(void);
	private:
		enum Step{LEFT,RIGHT};
		void Step(enum Step eStep);

		unsigned char LedCtr;
		unsigned char ucInversion;
		Led MyLed;
		LedInv MyLedInv;
};

#endif
