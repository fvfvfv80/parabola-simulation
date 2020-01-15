#pragma once
#include "gameNode.h"
#include "loadingScene.h"


#include "P_Engin.h"

//==================================================================
//		## mainGame ## (메인게임 - 총괄 관리자 역할)
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

