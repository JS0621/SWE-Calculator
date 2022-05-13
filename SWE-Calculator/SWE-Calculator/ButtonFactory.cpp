#include "ButtonFactory.h"

ButtonFactory::ButtonFactory() {

}

wxButton* ButtonFactory::CreateButton(wxWindow* window, int id, 
	std::string label, wxPoint point, wxSize size)
{
	wxButton* btn = new wxButton(window, id, label, point, size);
	return btn;
}
