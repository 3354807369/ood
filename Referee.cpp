#include "Referee.h"
#include"Human.h"
#include <iostream>

Referee::Referee(){

}

Player* Referee::refGame(Player* player1, Player* player2)
{
    
	
	if (player1->makeMove() == 'P') {
		return player1;
	}
	else if (player1->makeMove()== 'R') {
		return nullptr;
	}
	else if (player1->makeMove()== 'S') {
		return player2;
	}
	
		return 0;
}
