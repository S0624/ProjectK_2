#pragma once

#include "../Base/MoveTypeBase.h"

class KinnikuIdle : public MoveTypeBase
{
public:
	KinnikuIdle();
	virtual ~KinnikuIdle();

	void Init();// ������
	void End();// �I��
	void Update(int imagePosX, int imagePosY);// �X�V

private:
};

