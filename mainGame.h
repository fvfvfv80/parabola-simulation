#pragma once
#include "gameNode.h"
#include "loadingScene.h"


#include "P_Engin.h"

//==================================================================
//		## mainGame ## (���ΰ��� - �Ѱ� ������ ����)
//==================================================================

class mainGame : public gameNode
{
public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	mainGame();
	~mainGame();
};

