#pragma once


// CSuggestions dialog

class CSuggestions : public CDialogEx
{
	DECLARE_DYNAMIC(CSuggestions)

public:
	CSuggestions(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSuggestions();

// Dialog Data
	enum { IDD = IDD_S_D };
	CEdit sug_edit;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
