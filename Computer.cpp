#include"Computer.h"
#include<iostream>
using namespace std;
Computer::Computer(){
 this->name="Computer";
} 
Move* Computer::makeMove(){
    
   Move* CM=new Move(move);
   return CM;
}
string Computer::getName(){
    string name="Computer";
    return name;
}