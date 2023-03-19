#ifndef PLAYER_H
#define PLAYER_H
#include "Move.h"
using namespace std;
#include<string>
class Player: public Move{
   public:
   Player();
   virtual Move * makeMove()=0;  
   string getName();
   protected:
   string name;
   string move;
};
#endif