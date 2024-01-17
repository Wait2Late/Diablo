#pragma once
#include "Utilities.h"
#include "Monster.h"
#include "Player.h"
#include "Room.h"
#include "DropItems.h"


class Combat
{
	int myInput = 0;
public:
	Combat();
	class Player player;
	class Monster monster;
	class Monster monster2;
	class Room room;
	class DropItems dropitems;

	void MonsterIsAlive();
	void Fight();
	void Fight2();
	
};
