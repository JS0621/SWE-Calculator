#pragma once
#include "wx/wx.h"

class ButtonFactory;
class wxButton;
class Main : public wxFrame
{
private:
	ButtonFactory* factory;
public:
	Main();
	~Main();
	wxTextCtrl* numdisplay;
private:
	bool pos = true;
	bool decimalpoint = false;
	bool isoperator = false;
	float num1;
	float num2;
	wxButton* btnmod;

public:
	DECLARE_EVENT_TABLE();
	void OnClick(wxCommandEvent& evt);
};

