#pragma once

#include "../Base/PlayerBase.h"

class ElfIdol;
class Elf : public PlayerBase
{
public:
	Elf();
	~Elf();

	void Init  ();// ������
	void End   ();// �I������
	void Update();// �X�V
	void Draw  ();// �`��

private:
	int m_handle;

	int m_imageX, m_imageY;

	ElfIdol* m_pIdle;
};

