/*
 * main.cpp
 *
 *  Created on: Feb 2, 2013
 *      Author: Jack
 */

#include <wx/setup.h>
#include <wx/app.h>
#include "DanmakuFrame.h"
#include <cstdio>

class DanmakuApp : public wxApp{
public:
	virtual bool OnInit();
};

IMPLEMENT_APP(DanmakuApp);

bool DanmakuApp::OnInit(){
	DanmakuFrame* dframe = new DanmakuFrame(_("Unnamed Danmaku Engine"));
	dframe->Show(true);
	return true;
}
