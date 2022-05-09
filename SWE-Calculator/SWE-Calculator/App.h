#pragma once
#include "wx/wx.h"

class Main;

class App : public wxApp
{
public:
	App();
	~App();

private:
	Main* Window;

public:
	virtual bool OnInit();
};