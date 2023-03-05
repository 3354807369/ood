#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
using namespace std;
class Player{
public:
Player();
char move='R';
virtual char makeMove();
virtual string getName();
};
#endif