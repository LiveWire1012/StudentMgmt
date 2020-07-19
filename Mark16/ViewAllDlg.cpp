// ViewAllDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Mark16.h"
#include "ViewAllDlg.h"
#include "afxdialogex.h"


// CViewAllDlg dialog

IMPLEMENT_DYNAMIC(CViewAllDlg, CDialogEx)

CViewAllDlg::CViewAllDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CViewAllDlg::IDD, pParent)
	, output(_T(""))
{

}

CViewAllDlg::~CViewAllDlg()
{
}

void CViewAllDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, txtoutput, output);
}


BEGIN_MESSAGE_MAP(CViewAllDlg, CDialogEx)
END_MESSAGE_MAP()


// CViewAllDlg message handlers
