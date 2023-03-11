#ifndef MOVE_H
#define MOVE_H
#include"Move.h"
#include<string>

using namespace std;
class Move{
    private:
   string name;
  
 public:
 Move();
  Move(string name);
string getName();

};
#endif