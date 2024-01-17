#include "Player.h"



Player::Player()
{
	myName = "das";
	//Secondary stats
	myStr = 5;
	myVit = 6;
	myWei = 4;
	myDex = 2;
	//Primary stats
	myHp  = myDex * myVit; //12
	myDmg = myStr * myDex; //10
	myDef = myWei * myDex; //8
}
//primary stats
const int Player::GetMyHp() const { return myHp;  }
const int Player::GetDmg () const { return myDmg; }
const int Player::GetDef () const { return myDef; }

void Player::SetMyHp (int aSet) { myHp  = aSet; }
void Player::SetMyDmg(int aSet) { myDmg = aSet; }
void Player::SetMyDef(int aSet) { myDef = aSet; }



//GetSecondary stats
const int Player::GetSecStr() const { return myStr; }
const int Player::GetSecVit() const { return myVit; }
const int Player::GetSecWei() const { return myWei; }
const int Player::GetSecDex() const { return myDex; }

void Player::SetSecStr(int aSet) { myStr = aSet; }
void Player::SetSecVit(int aSet) { myVit = aSet; }
void Player::SetSecWei(int aSet) { myWei = aSet; }
void Player::SetSecDex(int aSet) { myDex = aSet; }




void Player::viewPlayerStats(bool aSword, bool aShield)
{
	std::cout << "\nCurrent Health: " << GetMyHp();
	std::cout << "\nStrength: " << GetSecStr();
	std::cout << "\nVitality: " << GetSecVit();
	std::cout << "\nWeight: " << GetSecWei();
	std::cout << "\nDextirity: " << GetSecDex() << "\n";

	std::cout << "Obtained Items: ";
	if (aSword == true)
		std::cout << "Sword, ";
	if (aShield == true)
		std::cout << "Shield" << "\n";
	if (aShield == true && aSword == true)
		std::cout << "No more room for any items!" << "\n";
}
