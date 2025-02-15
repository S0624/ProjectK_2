#pragma once

#include "../Base/PlayerBase.h"

class ElfIdol;
class Elf : public PlayerBase
{
public:
	Elf();
	~Elf();

	void Init  ();// 初期化
	void End   ();// 終了処理
	void Update();// 更新
	void Draw  ();// 描画

private:
	int m_handle;

	int m_imageX, m_imageY;

	ElfIdol* m_pIdle;
};

