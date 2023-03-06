#pragma once
#include "Player.h"
class Computer:public Player
{
public:
	char makeMove();
	string getName();
};

