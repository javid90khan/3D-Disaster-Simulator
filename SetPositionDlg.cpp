// SetPositionDlg.cpp : implementation file
//

#include "stdafx.h"
#include "SceneEditor.h"
#include "SetPositionDlg.h"
#include "afxdialogex.h"


// CSetPositionDlg dialog

IMPLEMENT_DYNAMIC(CSetPositionDlg, CDialogEx)

CSetPositionDlg::CSetPositionDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSetPositionDlg::IDD, pParent)
{
	x=0;
	y=0;
	z=0;
}

CSetPositionDlg::~CSetPositionDlg()
{
}

void CSetPositionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_SET_X, x);
	DDX_Text(pDX, IDC_SET_Y, y);
	DDX_Text(pDX, IDC_SET_Z, z);
}


BEGIN_MESSAGE_MAP(CSetPositionDlg, CDialogEx)
END_MESSAGE_MAP()


// CSetPositionDlg message handlers
