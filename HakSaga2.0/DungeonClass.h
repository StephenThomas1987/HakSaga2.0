#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Node
{
public:
	Node(int xPos, int yPos, Node *pN);
	int x;
	int y;
	Node * previousNode;

};
class DungeonClass
{
public:
	const char Wall = '#';
	const char ExploredFloor = '_';
	const char UnexploredFloor = '.';
	const char Item = '<';
	const char Player = '&';
	const char Start = 's';
	vector<string> dungeonArray;
	vector<Node*> nodesToCheck;
	void markPath(Node* node);
	void loadDungeon();
	void outputDungeon();
	void BFS();
	int check(Node* node);
};
