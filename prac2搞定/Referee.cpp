#include"Referee.h"
#include<iostream>
Referee::Referee(){

}
Player* Referee::refGame(Player* player1,Player* player2){
  
  string move1=player1->makeMove()->getName();
  string move2=player2->makeMove()->getName();
  
  if((move1=="Paper"&&move2=="Rock")||(move1=="Rock"&&move2=="Scissors")||(move1=="Scissors"&&move2=="Paper")){
    cout<<player1->getName()<<endl;
    return player1;
  }else if(move1==move2){
     return nullptr;
  }
  else if((move2=="Paper"&&move1=="Rock")||(move2=="Rock"&&move1=="Scissors")||(move2=="Scissors"&&move1=="Paper")){
    cout<<player2->getName()<<endl;
    return player2;
  }
   else if((move1 == "Monkey" && move2 == "Ninja")||
          (move1 == "Monkey" && move2 == "Robot")||
          (move1 == "Robot" && move2 == "Ninja")||
          (move1 == "Robot" && move2 == "Zombie")||
          (move1 == "Pirate" && move2 == "Robot")||
          (move1 == "Pirate" && move2 == "Monkey")||
          (move1 == "Ninja" && move2 == "Pirate")||
          (move1 == "Ninja" && move2 == "Zombie")||
          (move1 == "Zombie" && move2 == "Pirate")||
          (move1 == "Zombie" && move2 == "Monkey")){
            cout << player1->getName() << endl;
            return player1;
          }

          else if((move2 == "Monkey" && move1 == "Ninja")||
          (move2 == "Monkey" && move1 == "Robot")||
          (move2 == "Robot" && move1 == "Ninja")||
          (move2 == "Robot" && move1 == "Zombie")||
          (move2 == "Pirate" && move1 == "Robot")||
          (move2 == "Pirate" && move1 == "Monkey")||
          (move2 == "Ninja" && move1 == "Pirate")||
          (move2 == "Ninja" && move1 == "Zombie")||
          (move2 == "Zombie" && move1 == "Pirate")||
          (move2 == "Zombie" && move1 == "Monkey")){
            cout << player2->getName() << endl;
            return player2;
          }
  return 0;
}