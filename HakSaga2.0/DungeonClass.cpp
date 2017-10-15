#include "DungeonClass.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//construct
DungeonClass::DungeonClass()
{
}

//destruct
DungeonClass::~DungeonClass()
{
}

//file in/out. for reading the dungeon from file(may break into its own class depending on how development goes
void DungeonClass::loadDungeon()
{

	ifstream myfile("testdungeon.txt");

	if (myfile.is_open())
	{
		for (std::string line; getline(myfile, line); )
		{
			dungeonArray.push_back(line.c_str());
		}
	}
	else cout << "Unable to open file";
}

void DungeonClass::outputDungeon()
{
	system("cls");
	for (int i = 0; i < dungeonArray.size(); i++)
	{
		for (int j = 0; j < dungeonArray[i].size(); j++)
		{
			cout << dungeonArray[i][j];
		}
		cout << endl;
	}
}
void DungeonClass::BFS()
{
	Node* node = new Node(1, 1, NULL);

	nodesToCheck.push_back(node);
	dungeonArray[node->x][node->y] = UnexploredFloor;
	while (nodesToCheck.size() != 0)
	{

		Node* nextCheck = nodesToCheck.front();
		nodesToCheck.erase(nodesToCheck.begin());
		check(nextCheck);
		outputDungeon();
	}
}

int DungeonClass::check(Node* node)
{
	int tileType = dungeonArray[node->x][node->y];
	if (tileType == UnexploredFloor)
	{

		dungeonArray[node->x][node->y] = ExploredFloor;
		nodesToCheck.push_back(new Node(node->x + 1, node->y, node));
		nodesToCheck.push_back(new Node(node->x - 1, node->y, node));
		nodesToCheck.push_back(new Node(node->x, node->y + 1, node));
		nodesToCheck.push_back(new Node(node->x, node->y - 1, node));

	}
	else if (tileType == Item)
	{
		markPath(node);
		return 1;
	}
	return 0;
}

void DungeonClass::markPath(Node* node)
{
	//cout << 1 << endl;//debugstuff
	while (node != NULL)
	{
		//cout << 2 << endl;//debugstuff
		//cout << node->x << ", " << node->y << endl;//debugstuff
		dungeonArray[node->x][node->y] = 'X';

		//cout << 3 << endl;//debugstuff
		node = node->previousNode;
		//cout << 4 << endl;//debugstuff
	}
}


//construct
Node::Node()
{
}
Node::Node(int xPos, int yPos, Node *pN)
{

	x = xPos;
	y = yPos;
	previousNode = pN;
}

//destruct
Node::~Node()
{
}
