#include"Computer.h"
#include<iostream>
using namespace std;
Computer::Computer(){
 this->name="Computer";
} 
Move* Computer::makeMove(){
    move="Rock";
   Move* CM=new Move(move);
   return CM;
}
string Computer::getName(){
    string name="Computer";
    return name;
}