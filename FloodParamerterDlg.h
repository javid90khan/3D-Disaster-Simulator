#pragma once
#include "afxwin.h"


// CFloodParamerterDlg dialog

class CFloodParamerterDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CFloodParamerterDlg)

public:
	CFloodParamerterDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CFloodParamerterDlg();

// Dialog Data
	enum { IDD = IDD_FP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()

public:
	float time;
	CComboBox mRainIntensity;
	int mRainIntensity_val;
	CComboBox mSoilType;
	int mSoilType_val;
};
