#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include<iostream>
#include<string>
using namespace std;
class Human:public Player
{
    Human();
    Human(string name);
Move* makeMove();
string getName();
};
#endif
