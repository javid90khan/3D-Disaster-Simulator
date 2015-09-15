// FloodParamerterDlg.cpp : implementation file
//

#include "stdafx.h"
#include "SceneEditor.h"
#include "FloodParamerterDlg.h"
#include "afxdialogex.h"


// CFloodParamerterDlg dialog

IMPLEMENT_DYNAMIC(CFloodParamerterDlg, CDialogEx)

CFloodParamerterDlg::CFloodParamerterDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CFloodParamerterDlg::IDD, pParent)
{
	time = 0.0;
}

CFloodParamerterDlg::~CFloodParamerterDlg()
{
}

void CFloodParamerterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RAIN_I, mRainIntensity);
	DDX_Control(pDX, IDC_S_TYPE, mSoilType);
	DDX_CBIndex(pDX, IDC_RAIN_I,mRainIntensity_val);
	DDX_CBIndex(pDX, IDC_S_TYPE, mSoilType_val);
	DDX_Text(pDX, IDC_RAIN_T, time);
}

BOOL CFloodParamerterDlg::OnInitDialog()
{
	__super::OnInitDialog();
	mRainIntensity.SetCurSel(0);
	mSoilType.SetCurSel(0);
	return true;
}

BEGIN_MESSAGE_MAP(CFloodParamerterDlg, CDialogEx)
END_MESSAGE_MAP()


// CFloodParamerterDlg message handlers
