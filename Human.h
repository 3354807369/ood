#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include<iostream>
#include<string>
class Human:public Player
{
    Human();
    Human(string name);
Move* makeMove();
string getName();
};
#endif
