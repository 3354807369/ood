#include "Human.h"
#include <iostream>

char Human::makeMove()
{
	cout << "Enter move:" << endl;
	cin >> move;
	return move;
}

string Human::getName()
{
	name = "human";
	return name;
}
