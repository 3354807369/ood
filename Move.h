#ifndef MOVE_H
#define MOVE_H
#include<iostream>
#include<string>
using namespace std;
class Move{
    private:
   string name;
  public:
  Move();
  Move(string name){
    this->name=name;
  }
string getName();

};
#endif