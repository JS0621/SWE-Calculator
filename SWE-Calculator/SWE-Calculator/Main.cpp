#include "Main.h"

BEGIN_EVENT_TABLE(Main, wxFrame)
//Number buttons
EVT_BUTTON(98, Main::OnClick)
EVT_BUTTON(100, Main::OnClick)
EVT_BUTTON(99, Main::OnClick)
EVT_BUTTON(101, Main::OnClick)
EVT_BUTTON(102, Main::OnClick)
EVT_BUTTON(103, Main::OnClick)
EVT_BUTTON(104, Main::OnClick)
EVT_BUTTON(105, Main::OnClick)
EVT_BUTTON(106, Main::OnClick)
EVT_BUTTON(107, Main::OnClick)
EVT_BUTTON(108, Main::OnClick)
EVT_BUTTON(109, Main::OnClick)

//Math Buttons
EVT_BUTTON(201, Main::OnClick)
EVT_BUTTON(202, Main::OnClick)
EVT_BUTTON(203, Main::OnClick)
EVT_BUTTON(204, Main::OnClick)
EVT_BUTTON(205, Main::OnClick)
EVT_BUTTON(200, Main::OnClick)

//Binary, Dec, Hex
EVT_BUTTON(301, Main::OnClick)
EVT_BUTTON(302, Main::OnClick)
EVT_BUTTON(303, Main::OnClick)

//C
EVT_BUTTON(300, Main::OnClick)
END_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 500), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)
) {
	//Number Buttons
	wxButton* btnposneg = new wxButton(this, 98, "+/-", wxPoint(25, 350), wxSize(100, 50));
	wxButton* btn0 = new wxButton(this, 100, "0", wxPoint(125, 350), wxSize(100, 50));
	wxButton* btnpoint = new wxButton(this, 99, "0", wxPoint(225, 350), wxSize(100, 50));
	wxButton* btn1 = new wxButton(this, 101, "1", wxPoint(25, 300), wxSize(100, 50));
	wxButton* btn2 = new wxButton(this, 102, "2", wxPoint(125, 300), wxSize(100, 50));
	wxButton* btn3 = new wxButton(this, 103, "3", wxPoint(225, 300), wxSize(100, 50));
	wxButton* btn4 = new wxButton(this, 104, "4", wxPoint(25, 250), wxSize(100, 50));
	wxButton* btn5 = new wxButton(this, 105, "5", wxPoint(125, 250), wxSize(100, 50));
	wxButton* btn6 = new wxButton(this, 106, "6", wxPoint(225, 250), wxSize(100, 50));
	wxButton* btn7 = new wxButton(this, 107, "7", wxPoint(25, 200), wxSize(100, 50));
	wxButton* btn8 = new wxButton(this, 108, "8", wxPoint(125, 200), wxSize(100, 50));
	wxButton* btn9 = new wxButton(this, 109, "9", wxPoint(225, 200), wxSize(100, 50));

	//Math Buttons
	wxButton* btnplus = new wxButton(this, 201, "+", wxPoint(350, 325), wxSize(100, 50));
	wxButton* btnminus = new wxButton(this, 202, "-", wxPoint(450, 325), wxSize(100, 50));
	wxButton* btnmult = new wxButton(this, 203, "*", wxPoint(350, 275), wxSize(100, 50));
	wxButton* btndiv = new wxButton(this, 204, "/", wxPoint(450, 275), wxSize(100, 50));
	wxButton* btnmod = new wxButton(this, 205, "mod", wxPoint(350, 225), wxSize(100, 50));
	wxButton* btneq = new wxButton(this, 200, "=", wxPoint(450, 225), wxSize(100, 50));

	//binary and stuff buttons
	wxButton* btnbin = new wxButton(this, 301, "BIN", wxPoint(575, 325), wxSize(100, 50));
	wxButton* btndec = new wxButton(this, 302, "DEC", wxPoint(575, 275), wxSize(100, 50));
	wxButton* btnhex = new wxButton(this, 303, "HEX", wxPoint(575, 225), wxSize(100, 50));
	
	wxButton* btnC = new wxButton(this, 300, "C", wxPoint(675, 175), wxSize(100, 50));

	//Textbox
	numdisplay = new wxTextCtrl(this, wxID_ANY, "", wxPoint(75, 50), wxSize(600, 100), wxTE_READONLY | wxTE_RIGHT);
	wxFont display(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
	numdisplay->SetFont(display);
}

Main::~Main() {

}

void Main::OnClick(wxCommandEvent& evt) {
	int id = evt.GetId();
	if (id == 98) {
		if (pos) {
			numdisplay->SetLabel("-" + numdisplay->GetLabel());
			pos = false;
		}
		else {
			wxString str = numdisplay->GetLabel();
			str.erase(0, 1);
			numdisplay->SetLabel(str);
			pos = true;
		}
	}
	else if (id >= 100 && id <= 109) {

	}
	else if (id >= 200 && id <= 205) {

	}
	else if (id == 301) {

	}
	else if (id == 302) {

	}
	else if (id == 303) {

	}
	else if (id == 300) {
		numdisplay->SetLabel("");
	}

	numdisplay->SetLabel(numdisplay->GetLabel());
}
