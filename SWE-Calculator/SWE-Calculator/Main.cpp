#include "Main.h"
#include "ButtonFactory.h"

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

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(800, 500), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)) {
	ButtonFactory* factory = new ButtonFactory;
	//Number Buttons
	wxButton* btnposneg = factory->CreateButton(this, 98, "+/-", wxPoint(25, 350), wxSize(100, 50));
	wxButton* btn0 = factory->CreateButton(this, 100, "0", wxPoint(125, 350), wxSize(100, 50));
	wxButton* btnpoint = factory->CreateButton(this, 99, ".", wxPoint(225, 350), wxSize(100, 50));
	wxButton* btn1 = factory->CreateButton(this, 101, "1", wxPoint(25, 300), wxSize(100, 50));
	wxButton* btn2 = factory->CreateButton(this, 102, "2", wxPoint(125, 300), wxSize(100, 50));
	wxButton* btn3 = factory->CreateButton(this, 103, "3", wxPoint(225, 300), wxSize(100, 50));
	wxButton* btn4 = factory->CreateButton(this, 104, "4", wxPoint(25, 250), wxSize(100, 50));
	wxButton* btn5 = factory->CreateButton(this, 105, "5", wxPoint(125, 250), wxSize(100, 50));
	wxButton* btn6 = factory->CreateButton(this, 106, "6", wxPoint(225, 250), wxSize(100, 50));
	wxButton* btn7 = factory->CreateButton(this, 107, "7", wxPoint(25, 200), wxSize(100, 50));
	wxButton* btn8 = factory->CreateButton(this, 108, "8", wxPoint(125, 200), wxSize(100, 50));
	wxButton* btn9 = factory->CreateButton(this, 109, "9", wxPoint(225, 200), wxSize(100, 50));

	//Math Buttons
	wxButton* btnplus = factory->CreateButton(this, 201, "+", wxPoint(350, 325), wxSize(100, 50));
	wxButton* btnminus = factory->CreateButton(this, 202, "-", wxPoint(450, 325), wxSize(100, 50));
	wxButton* btnmult = factory->CreateButton(this, 203, "*", wxPoint(350, 275), wxSize(100, 50));
	wxButton* btndiv = factory->CreateButton(this, 204, "/", wxPoint(450, 275), wxSize(100, 50));
	wxButton* btnmod = factory->CreateButton(this, 205, "mod", wxPoint(350, 225), wxSize(100, 50));
	wxButton* btneq = factory->CreateButton(this, 200, "=", wxPoint(450, 225), wxSize(100, 50));

	//binary and stuff buttons
	wxButton* btnbin = factory->CreateButton(this, 301, "BIN", wxPoint(575, 325), wxSize(100, 50));
	wxButton* btndec = factory->CreateButton(this, 302, "DEC", wxPoint(575, 275), wxSize(100, 50));
	wxButton* btnhex = factory->CreateButton(this, 303, "HEX", wxPoint(575, 225), wxSize(100, 50));
	
	wxButton* btnC = factory->CreateButton(this, 300, "C", wxPoint(675, 175), wxSize(100, 50));

	//Textbox
	numdisplay = new wxTextCtrl(this, wxID_ANY, "", wxPoint(75, 50), wxSize(600, 100), wxTE_READONLY | wxTE_RIGHT);
	wxFont display(36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
	numdisplay->SetFont(display);
	delete factory;
}

Main::~Main() {
	delete factory;
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
	else if (id == 99) {
		if (!decimalpoint)
		numdisplay->SetLabel(numdisplay->GetLabel() + '.');
		decimalpoint = true;
	}
	//Numbers
	else if (id >= 100 && id <= 109) {

		wxButton* btn = dynamic_cast<wxButton*>(evt.GetEventObject());

		numdisplay->SetLabel(numdisplay->GetLabel() + btn->GetLabel());
	}
	else if (id == 200) {
		//Do math here
		numdisplay->SetLabel(numdisplay->GetLabel() + '=');
	}
	//Operators
	else if (id >= 201 && id <= 205) {
		decimalpoint = false;

		wxButton* btn = dynamic_cast<wxButton*>(evt.GetEventObject());
		numdisplay->SetLabel(numdisplay->GetLabel() + btn->GetLabel());
	}
	//Binary
	else if (id == 301) {
		wxButton* btn = dynamic_cast<wxButton*>(evt.GetEventObject());
		numdisplay->SetLabel(numdisplay->GetLabel() + btn->GetLabel());
	}
	//Dec
	else if (id == 302) {
		wxButton* btn = dynamic_cast<wxButton*>(evt.GetEventObject());
		numdisplay->SetLabel(numdisplay->GetLabel() + btn->GetLabel());
	}
	//Hex
	else if (id == 303) {
		wxButton* btn = dynamic_cast<wxButton*>(evt.GetEventObject());
		numdisplay->SetLabel(numdisplay->GetLabel() + btn->GetLabel());
	}
	//C
	else if (id == 300) {
		numdisplay->SetLabel("");
	}
	evt.Skip();
}
