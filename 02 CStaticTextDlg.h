
// 02 CStaticTextDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CMy02CStaticTextDlg �Ի���
class CMy02CStaticTextDlg : public CDialogEx
{
// ����
public:
	CMy02CStaticTextDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY02CSTATICTEXT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
