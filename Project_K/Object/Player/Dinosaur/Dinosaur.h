#pragma once
#include "../Base/PlayerBase.h"

class DinosaurStateManager;
class Dinosaur : public PlayerBase
{
public:
	Dinosaur();
	~Dinosaur();

	void Init();// ������
	void End();// �I������
	void Update();// �X�V
	void Draw();// �`��
private:
	int m_Handle;
	DinosaurStateManager* m_StateManager;
};

