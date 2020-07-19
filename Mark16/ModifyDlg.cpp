// ModifyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Mark16.h"
#include "ModifyDlg.h"
#include "afxdialogex.h"


// CModifyDlg dialog

IMPLEMENT_DYNAMIC(CModifyDlg, CDialogEx)

CModifyDlg::CModifyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CModifyDlg::IDD, pParent)
	, usn(0)
{

}

CModifyDlg::~CModifyDlg()
{
}

void CModifyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, txtoutput, output);
	//  DDX_Text(pDX, modifyusn, usn);
	//  DDX_Text(pDX, inputsem, sem);
	//  D//  DV_MinMaxInt(p//  DX, sem, 1, 8);
	//  DDX_Text(pDX, inputsec, section);
	//  DDX_Text(pDX, inputlname, lname);
	//  DDX_Text(pDX, inputfname, fname);
	//  DDX_Text(pDX, inputcgpa, cgpa);
	//  DDX_Text(pDX, inputbranch, branch);
	//  DDX_Text(pDX, modusn, usn);
	//  DDV_MinMaxInt(pDX, usn, 1000001, INT_MAX);
	DDX_Text(pDX, modusn, usn);
	DDV_MinMaxLong(pDX, usn, 100001, 999999);
}


BEGIN_MESSAGE_MAP(CModifyDlg, CDialogEx)
END_MESSAGE_MAP()


// CModifyDlg message handlers
