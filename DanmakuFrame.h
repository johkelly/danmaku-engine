/*
 * danmakuMain.h
 *
 *  Created on: Feb 2, 2013
 *      Author: Jack
 */

#include <wx/frame.h>
#include <wx/wxhtml.h>

#ifndef DANMAKUMAIN_H_
#define DANMAKUMAIN_H_

class DanmakuFrame : public wxFrame{
public:
	DanmakuFrame(const wxString& title);
private:
	wxHtmlWindow* htmlPanel;
};


#endif /* DANMAKUMAIN_H_ */
