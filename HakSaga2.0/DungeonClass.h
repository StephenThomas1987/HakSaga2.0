#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <unistd.h>
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

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
	void colourChar(char c);
};
