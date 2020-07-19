
// Mark16.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMark16App:
// See Mark16.cpp for the implementation of this class
//

class CMark16App : public CWinApp
{
public:
	CMark16App();

// Overrides
public:
	virtual BOOL InitInstance();
	long usn;

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMark16App theApp;