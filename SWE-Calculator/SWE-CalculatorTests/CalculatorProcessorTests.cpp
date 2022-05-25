#include "CalculatorProcessorTests.h"
#include "../SWE-Calculator/CalculatorProcessor.h"
#include "wx/wx.h"



float CalculatorProcessorTests::Add1Plus20(std::string str, float num1, float num2)
{
	return calcprocessor->InputManager(str, num1, num2);
}

float CalculatorProcessorTests::Subtract15Minus5(std::string str, float num1, float num2)
{
	return calcprocessor->InputManager(str, num1, num2);
}

float CalculatorProcessorTests::Multiply5Times5(std::string str, float num1, float num2)
{
	return calcprocessor->InputManager(str, num1, num2);
}

float CalculatorProcessorTests::Divide18By3(std::string str, float num1, float num2)
{
	return calcprocessor->InputManager(str, num1, num2);
}

int CalculatorProcessorTests::Mod5By3(std::string str, int num1, int num2)
{
	return calcprocessor->InputManager(str, num1, num2);
}

std::string CalculatorProcessorTests::Decimal3ToBinary11(int input)
{
	return calcprocessor->DecimalToBinary(input);
}

int CalculatorProcessorTests::Binary11ToDecimal3(int input)
{
	return calcprocessor->BinaryToDecimal(input);
}

std::string CalculatorProcessorTests::Decimal255ToHexff(int input)
{
	return calcprocessor->DecimalToHex(input);
}

int CalculatorProcessorTests::HexffToDecimal255(std::string input)
{
	return calcprocessor->HextoDecimal(input);
}

std::string CalculatorProcessorTests::Decimal15ToBinary1111(int input)
{
	return calcprocessor->DecimalToBinary(input);
}

std::string CalculatorProcessorTests::Decimal21ToHex15(int input)
{
	return calcprocessor->DecimalToHex(input);
}
