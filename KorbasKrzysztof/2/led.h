#ifndef LED_H
#define LED_H

class Led{
	private:
		enum Step{LEFT,RIGHT};
		unsigned char LedCtr;
	public:
		void Init(void);
		void StepLeft(void);
		void StepRight(void);
	private:
		void Step(enum Step eStep);
		void On(unsigned char ucLedIndex);	
};

#endif
