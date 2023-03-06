#pragma once
#include <string>
using namespace std;
 class Player
{
public:
	virtual char makeMove()=0;
	string getName();
	char move = 'R';
	string name;
};

