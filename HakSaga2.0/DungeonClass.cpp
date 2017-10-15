#include "DungeonClass.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
//construct
DungeonClass::DungeonClass()
{
}

//destruct
DungeonClass::~DungeonClass()
{
}

//file in/out. for reading the dungeon from file(may break into its own class depending on how development goes
void DungeonClass::loadLayout()
{
	//format: vector<datatype> Name of vector
	vector<string> line;
	ifstream myfile("testdungeon.txt");
	for (int i = 0; i < line.size(); i++)
	{
		
	}
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}

	else cout << "Unable to open file";


}
/*
std::vector<std::string> words;
std::ifstream file("input.txt");

std::string word;
while (file >> word) {
words.push_back(word);
}




std::vector<std::string> my_arr;
std::ifstream dict_file("enable1.txt");
std::string line;

while(std::getline(dict_file, line))
{
    std::string new_line;
    new_line = line + "\n";
    std::cout<<new_line;
    my_arr.push_back(new_line);
}*/
void DungeonClass::defineTiles()
{

}