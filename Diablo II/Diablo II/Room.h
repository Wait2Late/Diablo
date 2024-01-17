#pragma once
#include "Utilities.h"
#include "DropItems.h"

class Room
{
	int myRoomNumber;
public:
	Room();

	DropItems dropitems;
	void Tutorial();
	void InsideRoom();

	void setNextRoom(int aSet);
	void NextRoom();

	void EmptyRoom();
	void ChestRoom();
	void TreasureRoom();

};
