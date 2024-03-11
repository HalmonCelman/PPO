#include <LPC21xx.H>
#include "Keyboard.h"

Keyboard::Keyboard(void){
	IO0DIR = IO0DIR & BUTTON1_bm & BUTTON2_bm & BUTTON3_bm & BUTTON4_bm;
}

enum KeyboardState Keyboard::eRead(void){
	if(!(IO0PIN & BUTTON1_bm)){
		return BUTTON_1;
	}
	else if(!(IO0PIN & BUTTON2_bm)){
		return BUTTON_2;
	}
	else if(!(IO0PIN & BUTTON3_bm)){
		return BUTTON_3;
	}
	else if(!(IO0PIN & BUTTON4_bm)){
		return BUTTON_4;
	}
	else{
		return RELASED;
	}
}
