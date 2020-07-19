// ViewDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Mark16.h"
#include "ViewDlg.h"
#include "afxdialogex.h"


// CViewDlg dialog

IMPLEMENT_DYNAMIC(CViewDlg, CDialogEx)

CViewDlg::CViewDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CViewDlg::IDD, pParent)

	, usn(0)
	, output(_T(""))
{

}

CViewDlg::~CViewDlg()
{
}

void CViewDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, viewusn, usn);
	//  DDV_MinMaxLong(pDX, usn, 100001, 999999);
	//  DDX_Text(pDX, viewsem, sem);
	//  DDX_Text(pDX, viewsec, section);
	//  DDX_Text(pDX, viewlname, lname);
	//  DDX_Text(pDX, viewfname, fname);
	//  DDX_Text(pDX, viewcgpa, cgpa);
	//  DDX_Text(pDX, viewbranch, branch);
	//  DDX_Text(pDX, viewusn, usn);
	//  DDX_Text(pDX, viewsem, sem);
	//  DDX_Text(pDX, viewsec, section);
	//  DDX_Text(pDX, viewlname, lname);
	//  DDX_Text(pDX, viewfname, fname);
	//  DDX_Text(pDX, viewcgpa, cgpa);
	//  DDX_Text(pDX, viewbranch, branch);
	DDX_Text(pDX, viewusn, usn);
	DDV_MinMaxLong(pDX, usn, 100001, 999999);
	DDX_Text(pDX, txtoutput, output);
}


BEGIN_MESSAGE_MAP(CViewDlg, CDialogEx)
END_MESSAGE_MAP()


// CViewDlg message handlers
