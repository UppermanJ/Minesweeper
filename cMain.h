#pragma once
#include "wx/wx.h"


class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	int nFieldWidth = 20;
	int nFieldHeight = 20;
	wxButton** btn;
	int* nField = nullptr;
	bool bFirstClick = true;


	//wxButton *m_btn1 = nullptr;
	//wxTextCtrl *m_txt1 = nullptr;
	//wxListBox *m_list1 = nullptr;

	void OnButtonClicked(wxCommandEvent &evt);

	wxDECLARE_EVENT_TABLE();
};

