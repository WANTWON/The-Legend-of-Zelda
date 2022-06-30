#pragma once
#include "Scene.h"
class CEditMenu :
	public CScene
{
public:
	CEditMenu();
	virtual ~CEditMenu();

public:
	virtual void Initialize(void) override;
	virtual int Update(void) override;
	virtual void Late_Update(void) override;
	virtual void Render(HDC hDC) override;
	virtual void Release(void) override;

private:
	DWORD	m_dwDrawTime;
	int		m_iDrawID;
	int		Temp = 1;
};
