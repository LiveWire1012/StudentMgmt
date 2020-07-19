
// Mark16Dlg.h : header file
//

#pragma once
#include "BTree.h"
#include "BTreeNode.h"
#include <string>

// CMark16Dlg dialog
class CMark16Dlg : public CDialogEx
{

// Construction
public:
	CMark16Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MARK16_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtncreate();
	CString fname, lname;
	CString section,branch;
	long usn;
	double cgpa;
	int semester;
	afx_msg void OnBnClickedbtnspecific2();
	CString result; 
	afx_msg void OnBnClickedbtnspecific();
	afx_msg void OnBnClickedbtndelete();
//	afx_msg void OnBnClickedbtnmodify();
	afx_msg void OnBnClickedbtnmodify();
	void pre();
};
