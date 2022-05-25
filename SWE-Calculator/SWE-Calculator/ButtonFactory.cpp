#include "ButtonFactory.h"

ButtonFactory::ButtonFactory() {

}

wxButton* ButtonFactory::CreateButton(wxWindow* window, int id, 
	wxString label, wxPoint point, wxSize size)
{
	wxButton* btn = new wxButton(window, id, label, point, size);
	return btn;
}
