#pragma once

#include "../Base/MoveTypeBase.h"

class KinnikuIdle : public MoveTypeBase
{
public:
	KinnikuIdle();
	virtual ~KinnikuIdle();

	void Init();// 初期化
	void End();// 終了
	void Update(int imagePosX, int imagePosY);// 更新

private:
};

