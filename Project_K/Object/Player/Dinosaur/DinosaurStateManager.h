#pragma once

#include"DinosaurStateBase.h"

class DinosaurStateManager
{
public:
	DinosaurStateManager(int Handle);
	virtual ~DinosaurStateManager() {}
	// ������
	void Init();
	// �I��
	void End();
	// ���t���[���̏���
	void Update();
	// �`��
	void Draw();

private:
	int m_Handle;
	// �V�[���x�[�X�|�C���^
	DinosaurStateBase* m_pState;
};

