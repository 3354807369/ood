#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
using namespace std;

class Computer:public Player{
    public:
    char moveC;
    string name;
Computer();
char makeMove( );
string getName( ); 
};
#endif