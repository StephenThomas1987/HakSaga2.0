
class DungeonClass
{
public:
	DungeonClass();
	~DungeonClass();
	const char Wall = '#';
	const char ExploredFloor = '_';
	const char UnexploredFloor = '.';
	const char Item = '<';
	const char Player = '&';

	//file in/out. for reading the dungeon from file
	void loadLayout();
	void defineTiles();


};
