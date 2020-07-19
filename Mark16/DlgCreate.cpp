// DlgCreate.cpp : implementation file
//

#include "stdafx.h"
#include "Mark16.h"
#include "DlgCreate.h"
#include "afxdialogex.h"


// CDlgCreate dialog

IMPLEMENT_DYNAMIC(CDlgCreate, CDialogEx)

CDlgCreate::CDlgCreate(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgCreate::IDD, pParent)
	, usn(0)
	, sem(0)
	, sec(_T(""))
	, fname(_T(""))
	, lname(_T(""))
	, cgpa(0)
	, branch(_T(""))
{

}

CDlgCreate::~CDlgCreate()
{
}

void CDlgCreate::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, inputusn, usn);
	DDV_MinMaxLong(pDX, usn, 100001, 999999);
	DDX_Text(pDX, inputsem, sem);
	DDV_MinMaxInt(pDX, sem, 1, 8);
	DDX_Text(pDX, inputsec, sec);
	DDX_Text(pDX, inputlname, lname);
	DDX_Text(pDX, inputfname, fname);
	DDX_Text(pDX, inputcgpa, cgpa);
	DDX_Text(pDX, inputbranch, branch);
}


BEGIN_MESSAGE_MAP(CDlgCreate, CDialogEx)
END_MESSAGE_MAP()


// CDlgCreate message handlers
