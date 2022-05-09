#include "Main.h"

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 500)) {
	//Rigid buttons until I learn Sizer
	//Number Buttons
	wxButton* btnposneg = new wxButton(this, wxID_ANY, "+/-", wxPoint(25, 350), wxSize(100, 50));
	wxButton* btn0 = new wxButton(this, wxID_ANY, "0", wxPoint(125, 350), wxSize(100, 50));
	wxButton* btnpoint = new wxButton(this, wxID_ANY, "0", wxPoint(225, 350), wxSize(100, 50));
	wxButton* btn1 = new wxButton(this, wxID_ANY, "1", wxPoint(25, 300), wxSize(100, 50));
	wxButton* btn2 = new wxButton(this, wxID_ANY, "2", wxPoint(125, 300), wxSize(100, 50));
	wxButton* btn3 = new wxButton(this, wxID_ANY, "3", wxPoint(225, 300), wxSize(100, 50));
	wxButton* btn4 = new wxButton(this, wxID_ANY, "4", wxPoint(25, 250), wxSize(100, 50));
	wxButton* btn5 = new wxButton(this, wxID_ANY, "5", wxPoint(125, 250), wxSize(100, 50));
	wxButton* btn6 = new wxButton(this, wxID_ANY, "6", wxPoint(225, 250), wxSize(100, 50));
	wxButton* btn7 = new wxButton(this, wxID_ANY, "7", wxPoint(25, 200), wxSize(100, 50));
	wxButton* btn8 = new wxButton(this, wxID_ANY, "8", wxPoint(125, 200), wxSize(100, 50));
	wxButton* btn9 = new wxButton(this, wxID_ANY, "9", wxPoint(225, 200), wxSize(100, 50));

	//Math Buttons
	wxButton* btnplus = new wxButton(this, wxID_ANY, "+", wxPoint(350, 325), wxSize(100, 50));
	wxButton* btnminus = new wxButton(this, wxID_ANY, "-", wxPoint(450, 325), wxSize(100, 50));
	wxButton* btnmult = new wxButton(this, wxID_ANY, "*", wxPoint(350, 275), wxSize(100, 50));
	wxButton* btndiv = new wxButton(this, wxID_ANY, "/", wxPoint(450, 275), wxSize(100, 50));
	wxButton* btnmod = new wxButton(this, wxID_ANY, "mod", wxPoint(350, 225), wxSize(100, 50));
	wxButton* btneq = new wxButton(this, wxID_ANY, "=", wxPoint(450, 225), wxSize(100, 50));

	//binary and stuff buttons
	wxButton* btnbin = new wxButton(this, wxID_ANY, "BIN", wxPoint(575, 325), wxSize(100, 50));
	wxButton* btndec = new wxButton(this, wxID_ANY, "DEC", wxPoint(575, 275), wxSize(100, 50));
	wxButton* btnhex = new wxButton(this, wxID_ANY, "HEX", wxPoint(575, 225), wxSize(100, 50));
	
	wxButton* btnC = new wxButton(this, wxID_ANY, "C", wxPoint(675, 175), wxSize(100, 50));

	//Textbox
	wxTextCtrl* numdisplay = new wxTextCtrl(this, wxID_ANY, "", wxPoint(75, 50), wxSize(600, 100));
}

Main::~Main() {

}