#include <vector>
#include<string>
using namespace std;
class Node
{
public:
	Node();
	Node(int xPos, int yPos, Node *pN);

	~Node();
	int x;
	int y;
	Node * previousNode;

};
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
	const char Start = 's';
	Node node;
	vector<string> dungeonArray;
	vector<Node*>nodesToCheck;
	//file in/out. for reading the dungeon from file
	void markPath(Node* node);
	void loadDungeon();
	void outputDungeon();
	void BFS();

	int check(Node* node);
};
