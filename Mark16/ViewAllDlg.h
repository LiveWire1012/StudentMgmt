#pragma once


// CViewAllDlg dialog
#include "resource.h"
class CViewAllDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CViewAllDlg)

public:
	CViewAllDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CViewAllDlg();

// Dialog Data
	enum { IDD = DlgAllShow };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString output;
};
