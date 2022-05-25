#pragma once
#include "../SWE-Calculator/CalculatorProcessor.h"
class CalculatorProcessorTests
{
private:
	CalculatorProcessor* calcprocessor = CalculatorProcessor::GetInstance();//Should create new processor
public:
	//Operations

	//Addition
	float Add1Plus20(std::string str, float num1, float num2);//Should give 21

	//Subtraction
	float Subtract15Minus5(std::string str, float num1, float num2);//should give 10

	//Mult
	float Multiply5Times5(std::string str, float num1, float num2);//Shoulde give 25

	//Div
	float Divide18By3(std::string str, float num1, float num2);//Should give 6

	//Mod
	int Mod5By3(std::string str, int num1, int num2);//should give 2

	//Binary and stuff

	//Dec -> Binary
	
	std::string Decimal3ToBinary11(int input);//should give 11

	//Bin -> Dec
	int Binary11ToDecimal3(int input);//should give 3

	//Dec-> Hex
	std::string Decimal255ToHexff(int input);//should give ff

	//Hex -> Dec
	int HexffToDecimal255(std::string input);//Should give 255

	//Bin -> Dec
	std::string Decimal15ToBinary1111(int input);//Should give 10101

	//Dec -> Hex
	std::string Decimal21ToHex15(int input);

};

