#include "../SWE-Calculator/CalculatorProcessor.h"
#include "../SWE-Calculator/CalculatorProcessor.cpp"

//Singleton

//Creation
CalculatorProcessor* calcprocessor = CalculatorProcessor::GetInstance();//Should create new processor

//Renaming
CalculatorProcessor* newprocessor = CalculatorProcessor::GetInstance();//Should have same mem address as above


//Addition
float addresult = calcprocessor->InputManager("+20", 1, 20);//should give 21

//Subtraction
float subresult = calcprocessor->InputManager("-20", 15, 5);//should give 10

//Mult
float multresult = calcprocessor->InputManager("*5", 5,5);//should give 25

//Div
float divresult = calcprocessor->InputManager("/3", 18, 3);//should give 6

//Mod
int modresult = calcprocessor->InputManager("%5", 5, 3);//should give 2


//Dec -> Binary
std::string binary = calcprocessor->DecimalToBinary(3);//Should give ...011

//Bin -> Dec
int bindec = calcprocessor->BinaryToDecimal(11);//Should give 3

//Dec-> Hex
std::string hex = calcprocessor->DecimalToHex(255);//should give ff

//Hex -> Dec
int hexdec = calcprocessor->HextoDecimal("ff");//should give 255