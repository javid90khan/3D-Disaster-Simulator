
// SceneEditorView.h : interface of the CSceneEditorView class
//

#pragma once
#include "scenemanagerdlg.h"
#include "Suggestions.h"
#include <Terrain/OgreTerrain.h>
#include <Terrain/OgreTerrainGroup.h>


class CSceneEditorView : public CView, public Ogre::FrameListener
{
protected: // create from serialization only
	CSceneEditorView();
	DECLARE_DYNCREATE(CSceneEditorView)

// Attributes
public:
	CSceneEditorDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CSceneEditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	bool m_First;
	Ogre::Camera*			m_Camera;
	
    Ogre::RenderWindow*		m_RenderWindow;
	void EngineSetup(void);
	
	afx_msg void OnEditSceneManager();
	CSceneManagerDlg *m_SceneManagerDlg;
	Ogre::SceneManager *m_SceneManager;
	Ogre::Root *m_Root;

	afx_msg void OnSceneDestroyscenenode();
	afx_msg void OnSceneSetscenenodepostion();

	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnSysKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnSysKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	UINT_PTR m_WorkingTimer;

	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseHover(UINT nFlags, CPoint point);
	afx_msg void OnMouseHWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	bool m_MouseNavigation;
	CPoint m_MousePosition;

private:
    Ogre::TerrainGlobalOptions* mTerrainGlobals;
    Ogre::TerrainGroup* mTerrainGroup;
    bool mTerrainsImported;
 
    void defineTerrain(long x, long y);
    void initBlendMaps(Ogre::Terrain* terrain);
	void configureTerrainDefaults(Ogre::Light *light);

public:
	int counter;
	int floorCounter;
	void createPillarMesh();
	void createSlabMesh();
	void createFloorMesh();
	void createBuilding(Ogre::String name,int numOfFloors, long x, long y, long z);
	
	afx_msg void OnSceneAddbuilding();
	
	//Water Functions

public:
	Ogre::SceneNode*	  mWaterNode;
	Ogre::Entity*         mWaterSurfaceEnt;

	void createWater();
	void additionWater();
	void createRain();
	float tick;

	float prevAbsorptionRate;
	float prevTime;
	float prevRainIntensity;
	float prevWaterHeight;

	float currAbsorptionRate;
	float currTime;
	float currRainIntensity;
	float currWaterHeight;

	int run;
	
	void showLabel();

protected:
	void createFrameListener(void);
	// Ogre::FrameListener
    bool frameRenderingQueued(const Ogre::FrameEvent& evt);
public:
	afx_msg void OnRunEsim();
	afx_msg void OnFloodsimulationStartflood();
	afx_msg void OnFloodsimulationResetScene();
	CSuggestions *m_suggestionDlg;
};

#ifndef _DEBUG  // debug version in SceneEditorView.cpp
inline CSceneEditorDoc* CSceneEditorView::GetDocument() const
   { return reinterpret_cast<CSceneEditorDoc*>(m_pDocument); }
#endif