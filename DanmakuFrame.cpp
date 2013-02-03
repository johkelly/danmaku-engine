/*
 * DanmakuFrame.cpp
 *
 *  Created on: Feb 2, 2013
 *      Author: Jack
 */

#include "DanmakuFrame.h"

DanmakuFrame::DanmakuFrame(const wxString& title)
: wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(290, 150)) {
	Center();
}


