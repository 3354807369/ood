#include"Referee.h"
#include<iostream>
Referee::Referee(){

}
Player* Referee::refGame(Player* player1,Player* player2){
  
  Move* p1_move=player1->makeMove();
  Move* p2_move=player2->makeMove();
  string move1=p1_move->getName();
  string move2=p2_move->getName();
  if((move1=="Paper"&&move2=="Rock")||(move1=="Rock"&&move2=="Scissors")||(move1=="Scissors"&&move2=="Paper")){
    cout<<player1->getName()<<endl;
    return player1;
  }else if(move1==move2){
     cout<<"Tie";
  }
  else if((move2=="Paper"&&move1=="Rock")||(move2=="Rock"&&move1=="Scissors")||(move2=="Scissors"&&move1=="Paper")){
    cout<<player2->getName()<<endl;
    return player2;
  }
  
}