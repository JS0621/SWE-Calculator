#include "CalculatorProcessor.h"
#include "wx/wx.h"
#include <cmath>
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "SubtractCommand.h"
#include "MultiplyCommand.h"
#include "DivideCommand.h"
#include "Helper.h"
#include <bitset>
#include <sstream>

CalculatorProcessor::CalculatorProcessor() {
	Add = new AddCommand;
	commands.push_back(Add);
	Sub = new SubtractCommand;
	commands.push_back(Sub);
	Mult = new MultiplyCommand;
	commands.push_back(Mult);
	Div = new DivideCommand;
	commands.push_back(Div);

}
CalculatorProcessor* CalculatorProcessor::calcprocessor = nullptr;

CalculatorProcessor::~CalculatorProcessor()
{
	delete calcprocessor;
	delete Add;
	delete Sub;
	delete Mult;
	delete Div;
}

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (calcprocessor == nullptr) {
		calcprocessor = new CalculatorProcessor;
	}
	return calcprocessor;
}

float CalculatorProcessor::InputManager(wxString input, float num1, float num2)
{
	float result = -1.0f;
	if (input.Contains("+")) {
		result = commands[0]->Execute(num1, num2);
	}
	else if (input.Contains("-")) {
		result = commands[1]->Execute(num1, num2);
	}
	else if (input.Contains("*")) {
		result = commands[2]->Execute(num1, num2);
	}
	else if (input.Contains("/")) {
		result = commands[3]->Execute(num1, num2);
	}
	else if (input.Contains("%")) {
		result = Modulo(round(num1), round(num2));
	}
	return result;
}

int CalculatorProcessor::Modulo(int num1, int num2)
{
	return num1%num2;
}



std::string CalculatorProcessor::DecimalToBinary(int input)
{
	std::string binary = std::bitset<32>(input).to_string();
	return binary;
}

int CalculatorProcessor::BinaryToDecimal(int input)
{
	return Helper::BinaryToDecimal(input);
}

std::string CalculatorProcessor::DecimalToHex(int input)
{
	std::ostringstream convert;
	convert << std::hex << input;
	std::string result = convert.str();
	return result;
}

int CalculatorProcessor::HextoDecimal(std::string input)
{
	int dec;
	std::stringstream convert;
	convert << std::hex << input;
	convert >> dec;
	return dec;
}
