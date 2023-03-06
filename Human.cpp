#include "Human.h"
#include <iostream>

char Human::makeMove()
{
	cin >> move;
	return move;
}

string Human::getName()
{
	name = "human";
	return name;
}
Human::Human(std::string name){
    this->name = name;
}

Human::Human(){
    name = "Human";
}