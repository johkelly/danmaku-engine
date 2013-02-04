/*
 * DanmakuFrame.cpp
 *
 *  Created on: Feb 2, 2013
 *      Author: Jack
 */

#include "DanmakuFrame.h"

DanmakuFrame::DanmakuFrame(const wxString& title)
: wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(640, 480), wxDEFAULT_FRAME_STYLE & ~ (wxRESIZE_BORDER | wxRESIZE_BORDER | wxMAXIMIZE_BOX)) {
	htmlPanel = new wxHtmlWindow(this, wxID_ANY, wxPoint(0,0), wxSize(640, 480), wxHW_SCROLLBAR_NEVER | wxHW_NO_SELECTION);
	htmlPanel->LoadPage("test.htm");
	htmlPanel->SetRelatedFrame(this, "HTML : %%s");
	Center();
}


