#pragma once


// CSetPositionDlg dialog

class CSetPositionDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSetPositionDlg)

public:
	CSetPositionDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSetPositionDlg();

// Dialog Data
	enum { IDD = IDD_SET_POSITION };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public :
	int x,y,z;
};
