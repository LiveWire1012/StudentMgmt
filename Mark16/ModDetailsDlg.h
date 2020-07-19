#pragma once


// CModDetailsDlg dialog
#include "resource.h"
class CModDetailsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CModDetailsDlg)

public:
	CModDetailsDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CModDetailsDlg();

// Dialog Data
	enum { IDD = DldModDetails };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	
	CString section;
	CString lname;
	CString fname;
	double cgpa;
	CString branch;
	int sem;
};
