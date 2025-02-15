#pragma once
#include "DinosaurStateBase.h"
class DinosaurAttackBite : public DinosaurStateBase
{
public:
	DinosaurAttackBite(Vec2 pos, Vec2 vec)
	{
		m_Pos = pos;
		m_Vec = vec;
	}
	virtual ~DinosaurAttackBite();

	virtual DinosaurStateBase* Update() override;
};

