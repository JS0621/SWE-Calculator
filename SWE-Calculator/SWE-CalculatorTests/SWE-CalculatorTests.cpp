#include <iostream>
#include "CalculatorProcessorTests.h"
#include "ButtonFactoryTests.h"

int main()
{
#if 1
	std::cout << "Calculator Processor Tests:\n\n";
	CalculatorProcessorTests cTest;

	float addresult = cTest.Add1Plus20("+20", 1, 20);
	std::cout << "Add1Plus20: ";
	if (21 == addresult)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";

	float subresult = cTest.Subtract15Minus5("-5", 15, 5);
	std::cout << "Subtract15Minus5: ";
	if (10 == subresult)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";


	float multresult = cTest.Multiply5Times5("*5", 5, 5);
	std::cout << "Multiply5Times5: ";
	if (25 == multresult)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";

	float divresult = cTest.Divide18By3("/3", 18, 3);
	std::cout << "Divide18By3: ";
	if (6 == divresult)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";

	int modresult = cTest.Mod5By3("%3", 5, 3);
	std::cout << "Mod5By3: ";
	if (2 == modresult)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";

	std::string bin = cTest.Decimal3ToBinary11(3);
	std::cout << "Decimal3ToBinary11: ";
	if ("11" == bin)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";

	std::string bin2 = cTest.Decimal15ToBinary1111(15);
	std::cout << "Decimal15ToBinary1111: ";
	if ("1111" == bin2)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";

	int bintodec = cTest.Binary11ToDecimal3(11);
	std::cout << "Binary11ToDecimal3: ";
	if (3 == bintodec)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";

	std::string hex = cTest.Decimal255ToHexff(255);
	std::cout << "Decimal255ToHexff: ";
	if ("ff" == hex)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";

	std::string hex2 = cTest.Decimal21ToHex15(21);
	std::cout << "Decimal21ToHex15: ";
	if ("15" == hex2)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";

	int hextodec = cTest.HexffToDecimal255("ff");
	std::cout << "HexffToDecimal255: ";
	if (255 == hextodec)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
#endif

#if 1
	std::cout << "Button Factory Tests\n\n";

	ButtonFactoryTests bTest;
	wxFrame DummyFrame;

	wxButton* btn1 = bTest.CreateButtonID100(&DummyFrame, 100, "100", wxPoint(100, 100), wxSize(100, 100));
	std::cout << "CreateButtonID100: ";
	if (btn1->GetId() == 100)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
	delete btn1;

	wxButton* btn2 = bTest.CreateButtonID150(&DummyFrame, 150, "150", wxPoint(100, 100), wxSize(100, 100));
	std::cout << "CreateButtonID150: ";
	if (btn2->GetId() == 150)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
	delete btn2;

	wxButton* btn3 = bTest.CreateButtonID200(&DummyFrame, 200, "200", wxPoint(100, 100), wxSize(100, 100));
	std::cout << "CreateButtonID200: ";
	if (btn3->GetId() == 200)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
	delete btn3;

	wxButton* btn4 = bTest.CreateButtonID250(&DummyFrame, 250, "250", wxPoint(100, 100), wxSize(100, 100));
	std::cout << "CreateButtonID250: ";
	if (btn4->GetId() == 250)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
	delete btn4;

	wxButton* btn5 = bTest.CreateButtonID300(&DummyFrame, 300, "300", wxPoint(100, 100), wxSize(100, 100));
	std::cout << "CreateButtonID300: ";
	if (btn5->GetId() == 300)
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
	delete btn5;

	wxButton* btn6 = bTest.CreateButtonLabel1000(&DummyFrame, 1000, "1000", wxPoint(100, 100), wxSize(100, 100));
	std::cout << "CreateButtonLabel1000: ";
	if (btn6->GetLabel().CompareTo((wxString)"1000"))
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
	delete btn6;

	wxButton* btn7 = bTest.CreateButtonLabel1000(&DummyFrame, 2000, "2000", wxPoint(100, 100), wxSize(100, 100));
	std::cout << "CreateButtonLabel2000: ";
	if (btn7->GetLabel().CompareTo((wxString)"2000"))
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
	delete btn7;

	wxButton* btn8 = bTest.CreateButtonLabel3000(&DummyFrame, 3000, "3000", wxPoint(100, 100), wxSize(100, 100));
	std::cout << "CreateButtonLabel3000: ";
	if (btn8->GetLabel().CompareTo((wxString)"3000"))
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
	delete btn8;

	wxButton* btn9 = bTest.CreateButtonLabel4000(&DummyFrame, 4000, "4000", wxPoint(100, 100), wxSize(100, 100));
	std::cout << "CreateButtonLabel4000: ";
	if (btn9->GetLabel().CompareTo((wxString)"4000"))
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
	delete btn9;

	wxButton* btn10 = bTest.CreateButtonLabel5000(&DummyFrame, 5000, "5000", wxPoint(100, 100), wxSize(100, 100));
	std::cout << "CreateButtonLabel5000: ";
	if (btn10->GetLabel().CompareTo((wxString)"5000"))
		std::cout << "PASS\n";
	else
		std::cout << "FAIL\n";
	delete btn10;
#endif

}

