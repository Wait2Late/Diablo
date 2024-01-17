#include "Monster.h"


Monster::Monster()
{
	myMon = "Monster";
	myMonHp = 20;
	myMonDmg = 10;
	myMonDef = 2;
}

void Monster::SetMonHp(int aMonHp) { myMonHp = aMonHp; }
const int Monster::GetMonHp() const { return myMonHp; }

const int Monster::GetMonDmg() const { return myMonDmg; }
const int Monster::GetMonDef() const { return myMonDef; }

void CreateASecondMonster()
{

}



