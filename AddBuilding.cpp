// AddBuilding.cpp : implementation file
//

#include "stdafx.h"
#include "SceneEditor.h"
#include "AddBuilding.h"
#include "afxdialogex.h"


// CAddBuilding dialog

IMPLEMENT_DYNAMIC(CAddBuilding, CDialogEx)

CAddBuilding::CAddBuilding(CWnd* pParent /*=NULL*/)
	: CDialogEx(CAddBuilding::IDD, pParent)
{
	name = _T("");
	num = 0;
	x = _T("");
	y = _T("");
	z = _T("");
}

CAddBuilding::~CAddBuilding()
{
}

void CAddBuilding::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_B_NAME, name);
	DDX_Text(pDX, IDC_NUM_FLOORS, num);
	DDX_Text(pDX, IDC_X, x);
	DDX_Text(pDX, IDC_Y, y);
	DDX_Text(pDX, IDC_Z, z);

}


BEGIN_MESSAGE_MAP(CAddBuilding, CDialogEx)
END_MESSAGE_MAP()


// CAddBuilding message handlers
