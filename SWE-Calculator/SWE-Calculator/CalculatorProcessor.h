#pragma once
#include <vector>
#include <iostream>

class IBaseCommand;
class AddCommand;
class SubtractCommand;
class MultiplyCommand;
class DivideCommand;
class wxString;

class CalculatorProcessor
{
private:
	CalculatorProcessor();

	static CalculatorProcessor* calcprocessor;

	std::vector<IBaseCommand*> commands;
	AddCommand* Add;
	SubtractCommand* Sub;
	MultiplyCommand* Mult;
	DivideCommand* Div;

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
	int Modulo(int num1, int num2);

	std::string DecimalToBinary(int input);

	int BinaryToDecimal(int input);

	std::string DecimalToHex(int input);
	
	int HextoDecimal(std::string input);
};

