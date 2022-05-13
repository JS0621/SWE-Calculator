#pragma once
#include "wx/wx.h"

class ButtonFactory;

class Main : public wxFrame
{
private:
	ButtonFactory* factory;
public:
	Main();
	~Main();
	wxTextCtrl* numdisplay;
	bool pos = true;
	bool decimalpoint = false;

public:
	DECLARE_EVENT_TABLE();
	void OnClick(wxCommandEvent& evt);
};

