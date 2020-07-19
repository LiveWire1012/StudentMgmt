// ModDetailsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Mark16.h"
#include "ModDetailsDlg.h"
#include "afxdialogex.h"


// CModDetailsDlg dialog

IMPLEMENT_DYNAMIC(CModDetailsDlg, CDialogEx)

CModDetailsDlg::CModDetailsDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CModDetailsDlg::IDD, pParent)
	, section(_T(""))
	, lname(_T(""))
	, fname(_T(""))
	, cgpa(0)
	, branch(_T(""))
	, sem(0)
{

}

CModDetailsDlg::~CModDetailsDlg()
{
}

void CModDetailsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, inputsem, sem);
	DDX_Text(pDX, inputsec, section);
	DDX_Text(pDX, inputlname, lname);
	DDX_Text(pDX, inputfname, fname);
	DDX_Text(pDX, inputcgpa, cgpa);
	DDX_Text(pDX, inputbranch, branch);
	DDX_Text(pDX, inputsem, sem);
	DDV_MinMaxInt(pDX, sem, 1, 8);
}


BEGIN_MESSAGE_MAP(CModDetailsDlg, CDialogEx)
END_MESSAGE_MAP()


// CModDetailsDlg message handlers
