#pragma once


// CAddBuilding dialog

class CAddBuilding : public CDialogEx
{
	DECLARE_DYNAMIC(CAddBuilding)

public:
	CAddBuilding(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAddBuilding();

// Dialog Data
	enum { IDD = IDD_B_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString name;
	int num;
	CString x,y,z;
};
