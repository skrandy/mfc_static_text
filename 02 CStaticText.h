
// 02 CStaticText.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy02CStaticTextApp: 
// �йش����ʵ�֣������ 02 CStaticText.cpp
//

class CMy02CStaticTextApp : public CWinApp
{
public:
	CMy02CStaticTextApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy02CStaticTextApp theApp;