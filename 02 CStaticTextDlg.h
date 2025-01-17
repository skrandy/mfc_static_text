
// 02 CStaticTextDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMy02CStaticTextDlg 对话框
class CMy02CStaticTextDlg : public CDialogEx
{
// 构造
public:
	CMy02CStaticTextDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MY02CSTATICTEXT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
private:
	CStatic m_text;
public:
	afx_msg void OnBnClickedButton2();
private:
	CStatic m_pic;
public:
	afx_msg void OnBnClickedButton3();
private:
	CButton m_btn;
};
