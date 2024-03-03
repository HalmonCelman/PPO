class Led{
	private:
		enum Step{LEFT,RIGHT};
		unsigned char LedCtr;
	public:
		void Init(void);
		void StepRight(void);
		void StepLeft(void);
	private:
		void Step(enum Step eStep);
		void On(unsigned char ucLedIndex);
};
