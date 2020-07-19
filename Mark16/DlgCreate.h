#pragma once


// CDlgCreate dialog
#include "resource.h"
class CDlgCreate : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgCreate)

public:
	CDlgCreate(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDlgCreate();

// Dialog Data
	enum { IDD = DlgCreate };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	long usn;
	int sem;
	CString sec;
	CString lname;
	CString fname;
	double cgpa;
	CString branch;
};
