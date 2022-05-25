#pragma once
#include "../SWE-Calculator/ButtonFactory.h"
class ButtonFactoryTests
{
private:
	ButtonFactory* factory;
public:
	wxButton* CreateButtonID100(wxWindow* window, int id, std::string label, wxPoint point,
		wxSize size);

	wxButton* CreateButtonID150(wxWindow* window, int id, std::string label, wxPoint point,
		wxSize size);

	wxButton* CreateButtonID200(wxWindow* window, int id, std::string label, wxPoint point,
		wxSize size);

	wxButton* CreateButtonID250(wxWindow* window, int id, std::string label, wxPoint point,
		wxSize size);

	wxButton* CreateButtonID300(wxWindow* window, int id, std::string label, wxPoint point,
		wxSize size);

	wxButton* CreateButtonLabel1000(wxWindow * window, int id, std::string label, wxPoint point,
		wxSize size);

	wxButton* CreateButtonLabel2000(wxWindow* window, int id, std::string label, wxPoint point,
		wxSize size);

	wxButton* CreateButtonLabel3000(wxWindow* window, int id, std::string label, wxPoint point,
		wxSize size);


	wxButton* CreateButtonLabel4000 (wxWindow* window, int id, std::string label, wxPoint point,
		wxSize size);

	wxButton* CreateButtonLabel5000(wxWindow* window, int id, std::string label, wxPoint point,
		wxSize size);
};

