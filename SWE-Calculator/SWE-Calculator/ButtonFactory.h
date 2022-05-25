#pragma once
#include "wx/wx.h"
class ButtonFactory
{

public:
	ButtonFactory();
	wxButton* CreateButton(wxWindow* window, int id, wxString label, wxPoint point,
		wxSize size);
};

