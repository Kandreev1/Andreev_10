
// MiniDraw.h : main header file for the MiniDraw application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMiniDrawApp:
// See MiniDraw.cpp for the implementation of this class
//

class CMiniDrawApp : public CWinApp
{
public:
	int m_CurrentThickness;
	UINT m_CurrentTool;

public:
	CMiniDrawApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	UINT  m_nAppLook;
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnLineDouble();
	afx_msg void OnUpdateLineDouble(CCmdUI* pCmdUI);
	afx_msg void OnToolsCircle();
	afx_msg void OnUpdateToolsCircle(CCmdUI* pCmdUI);
};

extern CMiniDrawApp theApp;
