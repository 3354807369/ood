#include"Computer.h"
#include<iostream>
using namespace std;
Computer::Computer(){
    moveC='R';
}
char Computer:: makeMove(){
    
     return moveC;
};
string Computer::getName(){
    name='Computer';
    return name;
};