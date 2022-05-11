#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
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

