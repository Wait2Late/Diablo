#include "Room.h"

Room::Room()
{
	myRoomNumber = 1;
}

void Room::Tutorial()
{
	std::cout << "Your duty is to defeat the monsters and obtain the treasure inside this Dungeon!\n";
	std::cout << "In this installment you are able to obtain magic items to make this Dungeon more accessible!\n";
	system("pause");
	system("cls");
}

void Room::InsideRoom()
{
	std::cout << "Room Number " << myRoomNumber << "\n\n";
}

void Room::setNextRoom(int aSet) { myRoomNumber = myRoomNumber + aSet; }

void Room::NextRoom()
{
	std::cout << "You defended yourself and goes to the next room\n";
	system("pause");
	system("cls");
}

void Room::EmptyRoom()
{
	InsideRoom();
	std::cout << "This room is empty\n";
	std::cout << "Proceeds to the next room\n";
	system("pause");
	system("cls");
}

void Room::ChestRoom()
{
	int userIn;
	InsideRoom();
	std::cout << "You enter a room with a chest front of you\n";
	std::cout << "Do you want to open it?\n";
	std::cin >> userIn;
	if (userIn == 1)
	{
		dropitems.Drop(Item::eStr);
		dropitems.Drop(Item::eDef);
		dropitems.Drop(Item::eHP);
	}
	else
	{
		std::cout << "You choose to not open it.\n";
	}

	system("pause");
	system("cls");
}


void Room::TreasureRoom()
{
	InsideRoom();
	std::cout << "\nYou finally found the treasure chest! \nYou journey is over\nThe End\n";
}

