#pragma once
#include "Utilities.h"

class Monster
{
	std::string myMon;
	int myMonDmg;
	int myMonDef;
	int myMonHp;

public:
	Monster();

	void CreateASecondMonster();

	void SetMonHp(int aMonHp);
	const int GetMonHp() const;

	const int GetMonDmg() const;
	const int GetMonDef() const;
};

