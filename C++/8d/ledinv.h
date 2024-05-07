#ifndef LEDINV_H
#define LEDINV_H

#include "led.h"

class LedInv: private Led{
	public:
	void On(unsigned char ucLedIndex);
};

#endif
