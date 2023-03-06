#pragma once
#include <string>
using namespace std;
 class Player
{
public:
	virtual char makeMove()=0;
	virtual string getName() = 0;
	char move = 'R';
	string name;
};

