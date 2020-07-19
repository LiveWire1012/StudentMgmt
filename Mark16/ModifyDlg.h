#pragma once


// CModifyDlg dialog
#include "resource.h"
class CModifyDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CModifyDlg)

public:
	CModifyDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CModifyDlg();

// Dialog Data
	enum { IDD = DlgModify };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
//	CString output;
//	long usn;
//	int sem;
//	CString section;
//	CString lname;
//	CString fname;
//	double cgpa;
//	CString branch;
//	int usn;
	long usn;
};
