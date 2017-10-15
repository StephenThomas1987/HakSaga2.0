#include "DungeonClass.h"

int main()
{
	DungeonClass dungeon;
	dungeon.loadDungeon();
	dungeon.outputDungeon();
	dungeon.BFS();

	return 0;
}
