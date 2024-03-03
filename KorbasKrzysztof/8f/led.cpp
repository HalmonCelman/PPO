#include <LPC21xx.H>
#include "led.h"

Led::Led(void)
{
	IO1DIR = IO1DIR | LED0_bm | LED1_bm | LED2_bm | LED3_bm;
	IO1SET = LED0_bm;
}
