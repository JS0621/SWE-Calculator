#include "Main.h"

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 500)) {
	//Temporary rigid buttons, mainly here for coords
	wxButton* btnposneg = new wxButton(this, wxID_ANY, "+/-", wxPoint(50, 350), wxSize(100, 50));
	wxButton* btn0 = new wxButton(this, wxID_ANY, "0", wxPoint(150, 350), wxSize(100, 50));
	wxButton* btnpoint = new wxButton(this, wxID_ANY, "0", wxPoint(250, 350), wxSize(100, 50));
	wxButton* btn1 = new wxButton(this, wxID_ANY, "1", wxPoint(50, 300), wxSize(100, 50));
	wxButton* btn2 = new wxButton(this, wxID_ANY, "2", wxPoint(150, 300), wxSize(100, 50));
	wxButton* btn3 = new wxButton(this, wxID_ANY, "3", wxPoint(250, 300), wxSize(100, 50));
	wxButton* btn4 = new wxButton(this, wxID_ANY, "4", wxPoint(50, 250), wxSize(100, 50));
	wxButton* btn5 = new wxButton(this, wxID_ANY, "5", wxPoint(150, 250), wxSize(100, 50));
	wxButton* btn6 = new wxButton(this, wxID_ANY, "6", wxPoint(250, 250), wxSize(100, 50));
	wxButton* btn7 = new wxButton(this, wxID_ANY, "7", wxPoint(50, 200), wxSize(100, 50));
	wxButton* btn8 = new wxButton(this, wxID_ANY, "8", wxPoint(150, 200), wxSize(100, 50));
	wxButton* btn9 = new wxButton(this, wxID_ANY, "9", wxPoint(250, 200), wxSize(100, 50));


	
}

Main::~Main() {

}