#pragma once


// CViewDlg dialog
#include "resource.h"
class CViewDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CViewDlg)

public:
	CViewDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CViewDlg();

// Dialog Data
	enum { IDD = DlgView };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:
	long usn;
	CString output;
};
