#include"Move.h"

Move::Move(){
  cout << "Enter move ";
  cin >> name;}
Move::Move(string moveName){
  this->name = moveName;
}
string Move::getName(){
 
  return name;}
