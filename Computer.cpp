#include"Computer.h"
#include<iostream>
#include"Rock.h"
using namespace std;
Computer::Computer(){
 this->name="Computer";
} 
Move* Computer::makeMove(){
    
   Move* CM=new Rock();
   return CM;
}
string Computer::getName(){
    string name="Computer";
    return name;
}