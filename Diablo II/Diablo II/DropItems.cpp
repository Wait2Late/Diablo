#include "DropItems.h"




void DropItems::Drop(const Item& anItem)
{
	switch (anItem)
	{
	case Item::eStr:std::cout << "\nYou obtained a weapon that grants Strength boost!"; break;
	case Item::eDef:std::cout << "\nYou obtained a shield that grants Defense boost!"; break;
	case Item::eHP:std::cout <<  "\nYou gained a big Health boost!"; break;
	default:
		break;
	}
	std::cout << std::endl;
}





