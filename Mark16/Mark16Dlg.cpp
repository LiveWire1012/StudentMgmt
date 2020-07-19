
// Mark16Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Btree.h"
#include "BTreeNode.h"
#include "ModDetailsDlg.h"
#include "ModifyDlg.h"
#include "DeleteDlg.h"
#include "ViewAllDlg.h"
#include "ViewDlg.h"
#include "DlgCreate.h"
#include "Mark16.h"
#include "Mark16Dlg.h"
#include "afxdialogex.h"


#include<fstream>
#include<string>
#include<sstream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMark16Dlg dialog



CMark16Dlg::CMark16Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMark16Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMark16Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMark16Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(btnCreate, &CMark16Dlg::OnBnClickedbtncreate)
//	ON_BN_CLICKED(btnspecific, &CMark16Dlg::OnBnClickedbtnspecific)
	ON_BN_CLICKED(btnspecific2, &CMark16Dlg::OnBnClickedbtnspecific2)
	ON_BN_CLICKED(btnspecific, &CMark16Dlg::OnBnClickedbtnspecific)
//	ON_BN_CLICKED(btntest, &CMark16Dlg::OnClickedBtntest)
ON_BN_CLICKED(btndelete, &CMark16Dlg::OnBnClickedbtndelete)
//ON_BN_CLICKED(btnmodify, &CMark16Dlg::OnBnClickedbtnmodify)
ON_BN_CLICKED(btnmodify, &CMark16Dlg::OnBnClickedbtnmodify)
END_MESSAGE_MAP()


// CMark16Dlg message handlers

BOOL CMark16Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMark16Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMark16Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMark16Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

BTree t(3);

void CMark16Dlg::pre() {
	fstream fs;
	fs.open("usn.txt", ios::in);
    string word;
	while(fs >> word) {
        stringstream test(word);
        int x = 0;
        test >> x;
        t.insert(x);
    }
	fs.close();
}

void CMark16Dlg::OnBnClickedbtncreate()
{
	//Student Creation
	CDlgCreate dlg;
	if(dlg.DoModal() == IDOK) {
		usn = dlg.usn;
		if(t.search(usn) == NULL) {
			t.insert(usn);
			fname = dlg.fname;
			lname = dlg.lname;
			semester = dlg.sem;
			branch = dlg.branch;
			section = dlg.sec;
			cgpa = dlg.cgpa;

			CT2CA fnamepszConvertedAnsiString (fname);
			string strfname (fnamepszConvertedAnsiString);

			CT2CA lnamepszConvertedAnsiString (lname);
			string strlname (lnamepszConvertedAnsiString);

			CT2CA branchpszConvertedAnsiString (branch);
			string strbranch (branchpszConvertedAnsiString);

			CT2CA secpszConvertedAnsiString (section);
			string strsec (secpszConvertedAnsiString);

			fstream fs, fs1;
			fs.open("data.txt", ios::out|ios::app);
			fs1.open("usn.txt", ios::out|ios::app);
			fs<<usn<<"\t\t"<<strfname<<"\t\t"<<strlname<<"\t\t"<<strbranch<<"\t\t"<<semester<<"\t\t"<<strsec<<"\t\t"<<cgpa<<"\n";
			fs1<<usn<<endl;
			fs1.close();
			fs.close();
			string message = "Student with the following details created:\r\nUSN:"+ to_string(usn) + "\r\nFirst Name:  " + strfname + "\r\nLast Name:    " +  
				strlname + "\r\nSemester:      " + to_string(semester) + "\r\nBranch:         " + strbranch + "\r\nSection:         " + strsec + "\r\nCGPA:            " + to_string(cgpa);
			CString msg (message.c_str());
			AfxMessageBox(msg);
		}
		else {
			AfxMessageBox(L"USN already exists");
		}
	}
}


void CMark16Dlg::OnBnClickedbtnspecific2()
{
	//Filling the tree
	pre();
	//Filled
	// TODO: View all records
	CViewAllDlg v;
		string res;
		fstream fs;
		fs.open("data.txt", ios::in);
		string line;
		while(getline(fs, line)){
			res = res + "\r\n" + line;
		}
		CString output(res.c_str());
		v.output = output;
		v.DoModal();
		//AfxMessageBox(output);
		fs.close();
	
}


void CMark16Dlg::OnBnClickedbtnspecific()
{
	pre();
	CViewDlg dlg;
	if(dlg.DoModal() == IDOK) {
		if(t.search(dlg.usn) != NULL) {
			usn = dlg.usn;
			string strusn = to_string(usn);
			fstream fs;
			fs.open("data.txt", ios::in);
			string line, res;
			while(getline(fs, line)) {
				if(line.find(strusn) != string::npos) {
					res = line;
			}
			
			CString output (res.c_str());
			dlg.output = output;
			dlg.DoModal();
			fs.close();
		}
		else {
			AfxMessageBox(L"USN not found");
		}
	}
}
	

void CMark16Dlg::OnBnClickedbtndelete()
{
	//Delete a student
	pre();
	CDeleteDlg dlg;
	//temp = dlg.usn;
	if(dlg.DoModal() == IDOK) {
		if(t.search(dlg.usn) != NULL) {
			fstream file, file1;
			file.open("data.txt", ios::in);
			file1.open("usn.txt", ios::in);
			fstream temp, temp1;
			temp.open("temp.txt", ios::out);
			temp1.open("temp1.txt", ios::out);
			string line;
			string line1;
			usn = dlg.usn;
			string strusn = to_string(usn);
			while(getline(file, line)) {
				if(line.find(strusn) != string::npos) {
					continue;
				}
				else {
					temp << line << endl;
				}
			}
			while(getline(file1, line1)) {
				if(line1.find(strusn) != string::npos) {
					continue;
				}
				else {
					temp1<< line1 << endl;
				}
			}

			temp.close();
			temp1.close();
			file1.close();
			file.close();
			remove("usn.txt");
			rename("temp1.txt", "usn.txt");
			remove("data.txt");
			rename("temp.txt", "data.txt");
			string message = "Student Record with USN "+strusn+ " deleted succesfully.";
			CString msg (message.c_str());
			AfxMessageBox(msg);
		}
		else {
			AfxMessageBox(L"USN not found");
		}
	}
	t.remove(dlg.usn);
}


void CMark16Dlg::OnBnClickedbtnmodify()
{
	pre();
	CModifyDlg dlg;
	CModDetailsDlg dets;
	if(dlg.DoModal() == IDOK) {
		if(t.search(dlg.usn) != NULL) {
			if(dets.DoModal() == IDOK) {
				string usnstr = to_string(dlg.usn);
				string line;
				fstream file("data.txt", ios::in);
				fstream temp("temp.txt", ios::out | ios::app);
				while(getline(file, line)) {
					if(line.find(usnstr) != string::npos) {
						continue;
					}
					else {
						temp << line << endl;
					}
				}
				fname = dets.fname;
				lname = dets.lname;
				semester = dets.sem;
				branch = dets.branch;
				section = dets.section;
				cgpa = dets.cgpa;

				CT2CA fnamepszConvertedAnsiString (fname);
				string strfname (fnamepszConvertedAnsiString);

				CT2CA lnamepszConvertedAnsiString (lname);
				string strlname (lnamepszConvertedAnsiString);

				CT2CA branchpszConvertedAnsiString (branch);
				string strbranch (branchpszConvertedAnsiString);

				CT2CA secpszConvertedAnsiString (section);
				string strsec (secpszConvertedAnsiString);

				temp<<usnstr<<"\t\t"<<strfname<<"\t\t"<<strlname<<"\t\t"<<strbranch<<"\t\t"<<semester<<"\t\t"<<strsec<<"\t\t"<<cgpa<<"\n";
				temp.close();
				file.close();    
				remove("data.txt");
				rename("temp.txt", "data.txt");
			}
		}
		else {
			AfxMessageBox(L"USN doesn't Exist.");
		}
	}
	// TODO: Add your control notification handler code here
}

