#pragma once
#include "Utilities.h"

class Player
{
	std::string myName;
	//Primary stats
	int myHp;
	int myDmg;
	int myDef;
	//Secondary stats
	int myStr;
	int myVit;
	int myWei;
	int myDex;
public:
	Player();

	const int GetMyHp() const;
	void SetMyHp(int aSetHp);

	const int GetDmg() const;
	void SetMyDmg(int aSet);

	const int GetDef() const;
	void SetMyDef(int aSet);

	//GetSecondary stats
	void SetSecStr(int aSet);
	void SetSecVit(int aSet);
	void SetSecWei(int aSet);
	void SetSecDex(int aSet);
	const int GetSecStr() const;
	const int GetSecVit() const;
	const int GetSecWei() const;
	const int GetSecDex() const;

	void viewPlayerStats(bool aItem, bool aItem2);
};

