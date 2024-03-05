
// CalCulatorDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "CalCulator.h"
#include "CalCulatorDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include <stdexcept>

// CCalCulatorDlg dialog



CCalCulatorDlg::CCalCulatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATOR_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalCulatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, ID_EB_RESULT_DISPLAY, m_eb_ResultDisplay);
	DDX_Text(pDX, ID_EB_RESULT_DISPLAY, m_StrResultDisplay);

	DDX_Control(pDX, ID_BT_0, m_Bt_0);
	DDX_Control(pDX, ID_BT_1, m_Bt_1);
	DDX_Control(pDX, ID_BT_2, m_Bt_2);
	DDX_Control(pDX, ID_BT_3, m_Bt_3);
	DDX_Control(pDX, ID_BT_4, m_Bt_4);
	DDX_Control(pDX, ID_BT_5, m_Bt_5);
	DDX_Control(pDX, ID_BT_6, m_Bt_6);
	DDX_Control(pDX, ID_BT_7, m_Bt_7);
	DDX_Control(pDX, ID_BT_8, m_Bt_8);
	DDX_Control(pDX, ID_BT_9, m_Bt_9);

	DDX_Control(pDX, ID_BT_DOT, m_Bt_Dot);
	DDX_Control(pDX, ID_BT_RESULT, m_Bt_Result);
	DDX_Control(pDX, ID_BT_ADD, m_Bt_Add);
	DDX_Control(pDX, ID_BT_SUBSTRACT, m_Bt_Sub);
	DDX_Control(pDX, ID_BT_MULTIPLY, m_Bt_Mul);
	DDX_Control(pDX, ID_BT_DIVIDE, m_Bt_Div);

	DDX_Control(pDX, ID_BT_CLEAR, m_Bt_Clear);
}

BEGIN_MESSAGE_MAP(CCalCulatorDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(ID_BT_1, &CCalCulatorDlg::OnBnClickedBt1)
	ON_BN_CLICKED(ID_BT_2, &CCalCulatorDlg::OnBnClickedBt2)
	ON_BN_CLICKED(ID_BT_3, &CCalCulatorDlg::OnBnClickedBt3)
	ON_BN_CLICKED(ID_BT_4, &CCalCulatorDlg::OnBnClickedBt4)
	ON_BN_CLICKED(ID_BT_5, &CCalCulatorDlg::OnBnClickedBt5)
	ON_BN_CLICKED(ID_BT_6, &CCalCulatorDlg::OnBnClickedBt6)
	ON_BN_CLICKED(ID_BT_7, &CCalCulatorDlg::OnBnClickedBt7)
	ON_BN_CLICKED(ID_BT_8, &CCalCulatorDlg::OnBnClickedBt8)
	ON_BN_CLICKED(ID_BT_9, &CCalCulatorDlg::OnBnClickedBt9)
	ON_BN_CLICKED(ID_BT_0, &CCalCulatorDlg::OnBnClickedBt0)
	ON_BN_CLICKED(ID_BT_DOT, &CCalCulatorDlg::OnBnClickedBtDot)
	ON_BN_CLICKED(ID_BT_RESULT, &CCalCulatorDlg::OnBnClickedBtResult)
	ON_BN_CLICKED(ID_BT_ADD, &CCalCulatorDlg::OnBnClickedBtAdd)
	ON_BN_CLICKED(ID_BT_SUBSTRACT, &CCalCulatorDlg::OnBnClickedBtSubstract)
	ON_BN_CLICKED(ID_BT_MULTIPLY, &CCalCulatorDlg::OnBnClickedBtMultiply)
	ON_BN_CLICKED(ID_BT_DIVIDE, &CCalCulatorDlg::OnBnClickedBtDivide)
	ON_BN_CLICKED(ID_BT_CLEAR, &CCalCulatorDlg::OnBnClickedBtClear)
END_MESSAGE_MAP()


// CCalCulatorDlg message handlers

BOOL CCalCulatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	ShowWindow(SW_MAXIMIZE);

	ShowWindow(SW_MINIMIZE);

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalCulatorDlg::OnPaint()
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
HCURSOR CCalCulatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCalCulatorDlg::OnBnClickedBt1()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("1");
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBt2()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("2");
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBt3()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("3");
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBt4()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("4");
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBt5()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("5");
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBt6()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("6");
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBt7()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("7");
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBt8()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("8");
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBt9()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("9");
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBt0()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("0");
	UpdateData(FALSE);
}

void CCalCulatorDlg::OnBnClickedBtDot()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("")) == 0)
	{
		m_StrResultDisplay = _T("0");
	}
	m_StrResultDisplay = m_StrResultDisplay /*+ _T(" ") */ + _T(".");
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBtResult()
{
	// TODO: Add your control notification handler code here
	//m_StrResultDisplay = m_StrResultDisplay + _T(" ") + _T("");
	CheckCalculation();
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBtAdd()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("")) == 0)
	{
		m_StrResultDisplay = _T("0");
	}
	CheckCalculation();
	m_StrResultDisplay = m_StrResultDisplay/* + _T(" ")*/ + _T("+")/* + _T(" ")*/;
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBtSubstract()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("")) == 0)
	{
		m_StrResultDisplay = _T("0");
	}
	CheckCalculation();
	m_StrResultDisplay = m_StrResultDisplay /*+ _T(" ") */ + _T("-")/* + _T(" ")*/;
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBtMultiply()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("")) == 0)
	{
		m_StrResultDisplay = _T("0");
	}
	CheckCalculation();
	m_StrResultDisplay = m_StrResultDisplay /*+ _T(" ")*/ + _T("*")/* + _T(" ")*/;
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBtDivide()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("")) == 0)
	{
		m_StrResultDisplay = _T("0");
	}
	CheckCalculation();
	m_StrResultDisplay = m_StrResultDisplay /*+ _T(" ") */ + _T("/")/* + _T(" ")*/;
	UpdateData(FALSE);
}


void CCalCulatorDlg::OnBnClickedBtClear()
{
	// TODO: Add your control notification handler code here
	m_StrResultDisplay = _T("0");
	UpdateData(FALSE);
}

void CCalCulatorDlg::CheckCalculation()
{
	m_StrResultDisplay.Trim();

	// Find the position of the '*' character
	int nOperatorIndex = -1, OperationType = 0;
	if (m_StrResultDisplay.Find(_T('+')) != -1) {
		nOperatorIndex = m_StrResultDisplay.Find(_T('+'));
		OperationType = 1;
	}
	else if (m_StrResultDisplay.Find(_T('-')) != -1) {
		nOperatorIndex = m_StrResultDisplay.Find(_T('-'));
		OperationType = 2;
	}
	else if (m_StrResultDisplay.Find(_T('*')) != -1) {
		nOperatorIndex = m_StrResultDisplay.Find(_T('*'));
		OperationType = 3;
	}
	else if (m_StrResultDisplay.Find(_T('/')) != -1) {
		nOperatorIndex = m_StrResultDisplay.Find(_T('/'));
		OperationType = 4;
	}

	double dbResult = 0.0;

	if (nOperatorIndex != -1)
	{
		// Extract the numbers before and after the '*'
		CString strNumber1 = m_StrResultDisplay.Left(nOperatorIndex);
		CString strNumber2 = m_StrResultDisplay.Mid(nOperatorIndex + 1);

		strNumber1.Trim();
		strNumber2.Trim();

		// Convert the extracted strings to integers
		double dbnumber1 = _ttof(strNumber1);
		double dbnumber2 = _ttof(strNumber2);

		if (OperationType == 1)
		{
			dbResult = Addition(dbnumber1, dbnumber2);
		}
		else if (OperationType == 2)
		{
			dbResult = SubStract(dbnumber1, dbnumber2);
		}
		else if (OperationType == 3)
		{
			dbResult = Multiply(dbnumber1, dbnumber2);
		}
		else if (OperationType == 4)
		{
			dbResult = Division(dbnumber1, dbnumber2);
		}

		m_StrResultDisplay.Format(_T("%.4f"), dbResult);
		UpdateData(false);
	}
}

double CCalCulatorDlg::Addition(double dbVal1, double dbVal2)
{
	return dbVal1 + dbVal2;
}

double CCalCulatorDlg::SubStract(double dbVal1, double dbVal2)
{
	return dbVal1 - dbVal2;
}

double CCalCulatorDlg::Multiply(double dbVal1, double dbVal2)
{
	return  dbVal1 * dbVal2;
}
double CCalCulatorDlg::Division(double dbVal1, double dbVal2)
{
	double dbResult = 0.0;

	try
	{
		if (dbVal2 == 0) {
			throw std::exception("Division by zero exception");
		}
		return dbVal1 / dbVal2;
	}
	catch (const std::exception& e)
	{
		AfxMessageBox(CA2T(e.what())); // Display error message using AfxMessageBox

		return 0.0;
	}
}

BOOL CCalCulatorDlg::PreTranslateMessage(MSG* pMsg)
{
	// Handle WM_KEYDOWN messages
	if (pMsg->message == WM_KEYDOWN)
	{
		// Get the virtual key code
		int nVirtKey = (int)pMsg->wParam;


		// Check for digit keys (0-9)
		if ((nVirtKey >= '0' && nVirtKey <= '9') || (nVirtKey >= VK_NUMPAD0 && nVirtKey <= VK_NUMPAD9))
		{
			// Handle digit input
			int nDigit = (nVirtKey >= '0' && nVirtKey <= '9') ? (nVirtKey - '0') : (nVirtKey - VK_NUMPAD0);
			HandleDigitInput(nDigit); // Implement your logic for digit input
			return TRUE; // Message handled
		}

		//// Check for digit keys (0-9)
		//if (nVirtKey >= '0' && nVirtKey <= '9')
		//{
		//	// Handle digit input
		//	int nDigit = nVirtKey - '0'; // Convert ASCII to digit value
		//	HandleDigitInput(nDigit); // Implement your logic for digit input

		//	return TRUE; // Message handled
		//}

		// Check for arithmetic operator keys (+, -, *, /, =)
		switch (nVirtKey)
		{
		case VK_DECIMAL:
			OnBnClickedBtDot();
			break;
		case VK_ADD:
			OnBnClickedBtAdd();
			break;
		case VK_SUBTRACT:
			OnBnClickedBtSubstract();
			break;
		case VK_MULTIPLY:
			OnBnClickedBtMultiply();
			break;
		case VK_DIVIDE:
			OnBnClickedBtDivide();
			break;
		case VK_RETURN:
			OnBnClickedBtResult();
			break;

		}
		return TRUE; // Message handled
	}

	return CDialogEx::PreTranslateMessage(pMsg);
}
void CCalCulatorDlg::HandleDigitInput(int iDigit)
{
	if (iDigit == 0)
	{
		OnBnClickedBt0();
	}
	if (iDigit == 1)
	{
		OnBnClickedBt1();
	}
	if (iDigit == 2)
	{
		OnBnClickedBt2();
	}
	if (iDigit == 3)
	{
		OnBnClickedBt3();
	}
	if (iDigit == 4)
	{
		OnBnClickedBt4();
	}
	if (iDigit == 5)
	{
		OnBnClickedBt5();
	}
	if (iDigit == 6)
	{
		OnBnClickedBt6();
	}
	if (iDigit == 7)
	{
		OnBnClickedBt7();
	}
	if (iDigit == 8)
	{
		OnBnClickedBt8();
	}
	if (iDigit == 9)
	{
		OnBnClickedBt9();
	}

}

