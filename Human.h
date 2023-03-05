#ifndef HUMAN_H
#define HUMAN_H
#include<iostream>
#include"Player.h"
using namespace std;
class Human:public Player{
     public:
     char moveH;
    string name;
     Human();
    
     
char makeMove( );
string getName( );
};
#endif