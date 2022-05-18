#pragma once
class wxString;
class CalculatorProcessor
{
private:
	CalculatorProcessor();

	static CalculatorProcessor* calcprocessor;
public:
	//Destructor
	~CalculatorProcessor();
	//Assignment Constructor
	CalculatorProcessor& operator=(const CalculatorProcessor& _other) = delete;
	//Copy Constructor
	CalculatorProcessor(const CalculatorProcessor& _other) = delete;

	static CalculatorProcessor* GetInstance();

	float InputManager(wxString input, float num1, float num2);
	//Math functions
	float Addition(float num1, float num2);
	float Subtraction(float num1, float num2);
	float Multiplication(float num1, float num2);
	float Division(float num1, float num2);
	int Modulo(int num1, int num2);
};

