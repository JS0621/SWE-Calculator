#pragma once
#include "wx/wx.h"
class ButtonFactory
{

public:
	ButtonFactory();
	wxButton* CreateButton(wxWindow* window, int id, std::string label, wxPoint point,
		wxSize size);
};

