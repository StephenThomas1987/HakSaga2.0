
#include "DungeonClass.h"
#include <iostream>
int main()
{
	DungeonClass dungeon;
	dungeon.loadLayout();
	char response;
	std::cin >> response;
	return 0;
}