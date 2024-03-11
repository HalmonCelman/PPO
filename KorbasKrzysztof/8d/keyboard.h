#ifndef KEYBOARD_H
#define KEYBOARD_H

#define BUTTON1_bm (1<<4)
#define BUTTON2_bm (1<<5)
#define BUTTON3_bm (1<<6)
#define BUTTON4_bm (1<<7)

enum KeyboardState{
	RELASED,
	BUTTON_1,
	BUTTON_2,
	BUTTON_3,
	BUTTON_4};

class Keyboard{
	public:
		Keyboard(void);
		enum KeyboardState eRead(void);
};

#endif
