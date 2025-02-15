#pragma once
#include "../Base/PlayerBase.h"

class DinosaurStateManager;
class Dinosaur : public PlayerBase
{
public:
	Dinosaur();
	~Dinosaur();

	void Init();// 初期化
	void End();// 終了処理
	void Update();// 更新
	void Draw();// 描画
private:
	int m_Handle;
	DinosaurStateManager* m_StateManager;
};

