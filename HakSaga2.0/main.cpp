
#include "DungeonClass.h"
#include <iostream>
int main()
{
	DungeonClass dungeon;
	dungeon.loadDungeon();
	dungeon.outputDungeon();
	char response;
	std::cin >> response;
	return 0;
}