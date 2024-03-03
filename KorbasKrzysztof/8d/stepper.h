#ifndef STEPPER_H
#define STEPPER_H

#include "ledinv.h"

class Stepper{ 
	private:
		enum Step{LEFT,RIGHT};
		unsigned char LedCtr;
		unsigned char ucInversion;
		Led MyLed;
		LedInv MyLedInv;
	public:
		void SetMode(unsigned char ucMode);
		void StepRight(void);
		void StepLeft(void);
	private:
		void Step(enum Step eStep);
};

#endif
