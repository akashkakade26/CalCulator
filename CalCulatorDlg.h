
// CalCulatorDlg.h : header file
//

#pragma once


// CCalCulatorDlg dialog
class CCalCulatorDlg : public CDialogEx
{
// Construction
public:
	CCalCulatorDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit m_eb_ResultDisplay;
	CString m_StrResultDisplay;
	CButton m_Bt_0;
	CButton m_Bt_1;
	CButton m_Bt_2;
	CButton m_Bt_3;
	CButton m_Bt_4;
	CButton m_Bt_5;
	CButton m_Bt_6;
	CButton m_Bt_7;
	CButton m_Bt_8;
	CButton m_Bt_9;
	CButton m_Bt_Dot;
	CButton m_Bt_Result;
	CButton m_Bt_Add;
	CButton m_Bt_Sub;
	CButton m_Bt_Mul;
	CButton m_Bt_Div;
	CButton m_Bt_Clear;
	CMFCButton m_Mfc_bt_0;
	CMFCButton m_Mfc_bt_1;
	CMFCButton m_Mfc_bt_2;
	CMFCButton m_Mfc_bt_3;
	CMFCButton m_Mfc_bt_4;
	CMFCButton m_Mfc_bt_5;
	CMFCButton m_Mfc_bt_6;
	CMFCButton m_Mfc_bt_7;
	CMFCButton m_Mfc_bt_8;
	CMFCButton m_Mfc_bt_9;
	CMFCButton m_Mfc_bt_Dot;
	CMFCButton m_Mfc_bt_Result;
	CMFCButton m_Mfc_bt_Add;
	CMFCButton m_Mfc_bt_Sub;
	CMFCButton m_Mfc_bt_Mul;
	CMFCButton m_Mfc_bt_Div;
	CMFCButton m_Mfc_bt_Clear;
	afx_msg void OnBnClickedBt1();
	afx_msg void OnBnClickedBt2();
	afx_msg void OnBnClickedBt3();
	afx_msg void OnBnClickedBt4();
	afx_msg void OnBnClickedBt5();
	afx_msg void OnBnClickedBt6();
	afx_msg void OnBnClickedBt7();
	afx_msg void OnBnClickedBt8();
	afx_msg void OnBnClickedBt9();
	afx_msg void OnBnClickedBt0();
	afx_msg void OnBnClickedBtDot();
	afx_msg void OnBnClickedBtResult();
	afx_msg void OnBnClickedBtAdd();
	afx_msg void OnBnClickedBtSubstract();
	afx_msg void OnBnClickedBtMultiply();
	afx_msg void OnBnClickedBtDivide();
	afx_msg void OnBnClickedBtClear();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	void CheckCalculation();
	double Addition(double, double);
	double SubStract(double, double);
	double Multiply(double, double);
	double Division(double, double);
	//void AddNumON_EditBox(char ch);
	void HandleDigitInput(int idigit);
	void ReadRegistry();
	void HideButtons(BOOL );
	void OnBnClickedBackspaceButton();
private:
	float m_fResult;
	CString m_result;
	CFont m_Font_EditBox;
	CFont m_Font_CButton;
	CFont m_Font_MFCButton;
	DWORD m_dwRegValue;
	BOOL m_bDotClicked;
	BOOL m_binitVal;
	HINSTANCE hdll;
};
