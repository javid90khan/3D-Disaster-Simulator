// Suggestions.cpp : implementation file
//

#include "stdafx.h"
#include "SceneEditor.h"
#include "Suggestions.h"
#include "afxdialogex.h"


// CSuggestions dialog

IMPLEMENT_DYNAMIC(CSuggestions, CDialogEx)

CSuggestions::CSuggestions(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSuggestions::IDD, pParent)
{

}

CSuggestions::~CSuggestions()
{
}

void CSuggestions::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_SUG, sug_edit);
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSuggestions, CDialogEx)
END_MESSAGE_MAP()


// CSuggestions message handlers
