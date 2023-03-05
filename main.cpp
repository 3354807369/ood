#include<iostream>
#include"Player.cpp"
#include"Computer.cpp"
#include"Human.cpp"
#include"Referee.cpp"
using namespace std;
int main(){
  Player p;
   Referee r;
   Computer c;
   Human h;
   Player * H;
   Player * C;
   h.makeMove();
   c.makeMove();
   h.getName();
   c.getName();
   r.refGame(H,C);
}