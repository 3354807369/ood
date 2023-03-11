#include <iostream>
#include <string>
#include "Computer.h"
#include "Referee.h"
#include "Human.h"
#include "Move.h"
using namespace std;

int main(){
  Computer *Player1;
  string name="Kenny";
  Human *Player2=new Human("Steve");
  Referee Ref1;
  Ref1.refGame(Player1, Player2);
}