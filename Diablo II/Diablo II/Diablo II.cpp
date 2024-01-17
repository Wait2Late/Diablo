#include "Utilities.h"
#include "Player.h"
#include "Combat.h"
#include "Monster.h"
/// <summary>
/// Färdig! 7/4-21 13:45
/// </summary>
/// <returns></returns>
int main()
{
	int userIn;
	bool sann = true;
	Combat combat;

	combat.room.Tutorial();
	combat.Fight();
	combat.room.NextRoom();
	combat.room.setNextRoom(1);
	while (sann)
	{
		std::cout << "\nThere are two doors in front of you. Which door do you pick?\n1. Right\n2. Middle\n3. Left\n: ";
		std::cin >> userIn;
		if (userIn == 1)
		{
			combat.Fight2();
			combat.room.NextRoom();
			sann = false;
		}
		else if (userIn == 2)
		{
			combat.room.EmptyRoom();
			sann = false;
		}
		else if (userIn == 3)
		{
			combat.room.ChestRoom();
			sann = false;
		}
		else
			std::cout << "Do over!\n";
	}
	combat.room.setNextRoom(1);
	combat.room.TreasureRoom();
}