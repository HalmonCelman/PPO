#ifndef LED_H
#define LED_H

class Led{
	public:
		void Init(void);
		void StepLeft(void);
		void StepRight(void);
	private:
		enum Step{LEFT,RIGHT};
		void Step(enum Step eStep);
		void On(unsigned char ucLedIndex);	
		
		unsigned char LedCtr;
};

#endif
