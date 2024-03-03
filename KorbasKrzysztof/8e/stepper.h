#ifndef STEPPER_H
#define STEPPER_H

#include "ledinv.h"

class Stepper{ 
	private:
		enum Step{LEFT,RIGHT};
		unsigned char LedCtr;
		Led * pMyLed;
	public:
		void SetLed(Led *pLedObject);
		void StepRight(void);
		void StepLeft(void);
	private:
		void Step(enum Step eStep);
};

#endif
