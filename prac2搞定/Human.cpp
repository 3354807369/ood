#include "Human.h"
#include"Player.h"
#include<iostream>
using namespace std;
using std::cout;
Human::Human():Human("Human"){}
Human::Human(string name){
   this->name=name;
}
Move* Human::makeMove(){
    string move;
    cout<<"Enter Move: ";
    cin>>move;
    Move* HM = new Move(move);
    return HM;
};
string Human::getName(){
    return name;
}
