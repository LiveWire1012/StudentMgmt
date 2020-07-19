#pragma once


// CDeleteDlg dialog
#include "resource.h"
class CDeleteDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDeleteDlg)

public:
	CDeleteDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDeleteDlg();

// Dialog Data
	enum { IDD = DlgDelete };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	long usn;
};
