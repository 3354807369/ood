#pragma once
#include <string>
using namespace std;
 class Player
{
public:
	virtual char makeMove();
	string getName();
	char move = 'R';
	string name;
};

