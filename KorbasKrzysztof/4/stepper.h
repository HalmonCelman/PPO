class Stepper{
	private:
		enum Step{LEFT,RIGHT};
		unsigned char LedCtr;
	public:
		void StepRight(void);
		void StepLeft(void);
	private:
		void Step(enum Step eStep);
};