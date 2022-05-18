#include "CalculatorProcessor.h"
#include "wx/wx.h"

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (calcprocessor == nullptr) {
		calcprocessor = new CalculatorProcessor;
	}
	return calcprocessor;
}

float CalculatorProcessor::InputManager(wxString input, float num1, float num2)
{
	float result;
	if (input.Contains("+")) {
		result = Addition(num1, num2);
	}
	else if (input.Contains("-")) {
		result = Subtraction(num1, num2);
	}
	else if (input.Contains("*")) {
		result = Multiplication(num1, num2);
	}
	else if (input.Contains("/")) {
		result = Division(num1, num2);
	}
	else if (input.Contains("mod")) {
		result = (float)Modulo(num1, num2);
	}
	return result;
}

float CalculatorProcessor::Addition(float num1, float num2)
{
	return num1 + num2;
}

float CalculatorProcessor::Subtraction(float num1, float num2)
{
	return num1 - num2;
}

float CalculatorProcessor::Multiplication(float num1, float num2)
{
	return num1 * num2;
}

float CalculatorProcessor::Division(float num1, float num2)
{
	return num1/num2;
}

int CalculatorProcessor::Modulo(int num1, int num2)
{
	return num1%num2;
}
