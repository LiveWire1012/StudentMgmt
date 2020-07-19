// DeleteDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Mark16.h"
#include "DeleteDlg.h"
#include "afxdialogex.h"


// CDeleteDlg dialog

IMPLEMENT_DYNAMIC(CDeleteDlg, CDialogEx)

CDeleteDlg::CDeleteDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDeleteDlg::IDD, pParent)
	, usn(0)
{

}

CDeleteDlg::~CDeleteDlg()
{
}

void CDeleteDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, delusn, usn);
	DDV_MinMaxLong(pDX, usn, 100001, 999999);
}


BEGIN_MESSAGE_MAP(CDeleteDlg, CDialogEx)
END_MESSAGE_MAP()


// CDeleteDlg message handlers
