#include "App.h"
#include "Main.h"

wxIMPLEMENT_APP(App);

App::App()
{
}

App::~App()
{
}

bool App::OnInit()
{
	Window = new Main();
	Window->Show();
	return true;
}
