#include<iostream>
#include"Human.h"
#include"Computer.h"
#include"Referee.h"
using namespace std;
Referee::Referee(){}
Human h;
Computer c;
Player p;
Player * refGame(Player * player1, Player * player2){
  
  char HumanMove = h.makeMove();
  char ComputerMove = c.makeMove();
  if(HumanMove=='R'&&ComputerMove=='S'||HumanMove=='P'&&ComputerMove=='R'||HumanMove=='S'&&ComputerMove=='P'){
    return player1;
  };
 if(ComputerMove=='R'&&HumanMove=='S'||ComputerMove=='P'&&HumanMove=='R'||ComputerMove=='S'&&HumanMove=='P'){
    return player2;
  };
};
