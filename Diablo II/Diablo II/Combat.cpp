#include "Combat.h"

Combat::Combat() {}

void Combat::MonsterIsAlive() { monster.SetMonHp(20); }

void Combat::Fight()
{
	const int playerDMG = player.GetDmg() - monster.GetMonDef();
	const int monsterDMG = monster.GetMonDmg() - player.GetDef();
	bool sword = false;
	room.InsideRoom();

	bool sann = true;
	MonsterIsAlive();
	std::cout << "Monster is ahead\n";
	while (sann)
	{
		std::cout << "\nDo you want to attack? \n1. Yes\n2. Stats\n: ";
		std::cin >> myInput;
		if (myInput == 1) //yes
		{
			std::cout << "You attacked for " << playerDMG << " damage."; //Player attacks
			monster.SetMonHp(monster.GetMonHp() - (player.GetDmg() - monster.GetMonDef())); //Caluclates dammage dealt to monster 
			std::cout << "\nMonster has " << monster.GetMonHp() << " HP left.\n";

			if (monster.GetMonHp() <= 0)
			{
				std::cout << "Monster is dead\n";
				std::cout << "Monster dropped something\n";
				dropitems.Drop(Item::eStr);
				sword = true;
				player.SetMyDmg(player.GetDmg() + 2);
				player.SetSecStr(player.GetSecStr() + 1);
				sann = false;
			}
		}
		else if (myInput == 2)
		{
			player.viewPlayerStats(sword, false);
			system("pause");
			std::cout << "\nWhile you looked at your stats...";
		}
		else
		{
			std::cout << "\nYou were caught off guard and";
		}
		if (monster.GetMonHp() > 0)
		{
			std::cout << "\nMonster attacks for " << monsterDMG << " damage.\n"; //Monster attacks
			player.SetMyHp(player.GetMyHp() - (monster.GetMonDmg() - player.GetDef())); //Caluclates dammage dealt to player
			std::cout << "You have " << player.GetMyHp() << " HP left.\n";

			if (player.GetMyHp() <= 0)
			{
				std::cout << "You died from a random mob\n";
				exit(EXIT_FAILURE);
			}
		}
	}
}

void Combat::Fight2()
{
	int playerDMG = player.GetDmg() - monster.GetMonDef();
	int monsterDMG = monster.GetMonDmg() - player.GetDef();

	int playerDMG2 = player.GetDmg() - monster2.GetMonDef();
	int monsterDMG2 = monster2.GetMonDmg() - player.GetDef();
	monster.SetMonHp(20);
	monster2.SetMonHp(20);

	room.InsideRoom();
	std::cout << "Two Monsters are ahead\n";
	bool sword = true;
	bool shield = false;

	bool sann = true;
	bool sann2 = true;
	while (sann2)
	{
		sann = true;
		while (sann)
		{
			std::cout << "\nWhich one do you want to attack?\n";
			if (monster.GetMonHp() > 0) //Monster 1
				std::cout << "1. Monster_1\n";
			if (monster2.GetMonHp() > 0) //Monster 2
				std::cout << "2. Monster_2\n";
			std::cout << "3. stats\n: ";
			std::cin >> myInput;

			if (myInput == 1) //Attack Monster 1
			{
				std::cout << "You attacked Monster_1 for " << playerDMG << " damage."; //Player attacks
				monster.SetMonHp(monster.GetMonHp() - (player.GetDmg() - monster.GetMonDef())); //Caluclates dammage dealt to monster 
				std::cout << "\nMonster_1 has " << monster.GetMonHp() << " HP left.\n";

				if (monster.GetMonHp() <= 0)
				{
					std::cout << "Monster_1 is dead\n";
					std::cout << "Monster_1 dropped something\n";
					dropitems.Drop(Item::eDef);
					shield = true;
					player.SetMyDef(player.GetDef() + 1);
					player.SetSecWei(player.GetSecDex() + 2);
					sann = false; 
				}
				if (monster.GetMonHp() <= -10)
					std::cout << "You are killing a dead corpse, move on!\n";
			}
			else if (myInput == 2) //Attack Monster 2
			{
				std::cout << "You attacked Monster_2 for " << playerDMG2 << " damage."; //Player attacks
				monster2.SetMonHp(monster2.GetMonHp() - (player.GetDmg() - monster2.GetMonDef())); //Caluclates dammage dealt to monster 
				std::cout << "\nMonster_2 has " << monster2.GetMonHp() << " HP left.\n";

				if (monster2.GetMonHp() <= 0)
				{
					std::cout << "Monster_2 is dead\n";
					std::cout << "Monster_2 dropped something\n";
					dropitems.Drop(Item::eHP);
					player.SetMyHp(player.GetMyHp() + 6);
					sann2 = false; 
				}
				if (monster2.GetMonHp() <= -10)
					std::cout << "You are killing a dead corpse, move on!\n";
			}
			else if (myInput == 3)
			{
				player.viewPlayerStats(sword, shield);
				system("pause");
				std::cout << "\nWhile you looked at your stats...";
			}
			else
			{
				std::cout << "\nYou were caught off guard and";
			}
			if (monster.GetMonHp() > 0)
			{
				int monsterDMG = monster.GetMonDmg() - player.GetDef();
				std::cout << "\nMonster_1 attacks for " << monsterDMG << " damage.\n"; //Monster 1 attacks
				player.SetMyHp(player.GetMyHp() - (monster.GetMonDmg() - player.GetDef())); //Caluclates dammage dealt to player
				std::cout << "You have " << player.GetMyHp() << " HP left.\n";
				if (player.GetMyHp() <= 0)
				{
					std::cout << "You died from two random mobs\n";
					exit(EXIT_FAILURE);
				}
			}
			if (monster2.GetMonHp() > 0)
			{
				int monsterDMG2 = monster2.GetMonDmg() - player.GetDef();
				std::cout << "\nMonster_2 attacks for " << monsterDMG2 << " damage.\n"; //Monster 2 attacks
				player.SetMyHp(player.GetMyHp() - (monster2.GetMonDmg() - player.GetDef())); //Caluclates dammage dealt to player
				std::cout << "You have " << player.GetMyHp() << " HP left.\n";
				if (player.GetMyHp() <= 0)
				{
					std::cout << "You died from two random mobs\n";
					exit(EXIT_FAILURE);
				}
			}
			if (monster.GetMonHp() <= 0) //Monster 1 dead
				sann = false;
			if (monster2.GetMonHp() <= 0) //Monster 2 dead
				sann2 = false;
		}
	}
}
