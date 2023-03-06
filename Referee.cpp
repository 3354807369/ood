#include "Referee.h"
#include"Human.h"
#include <iostream>

Referee::Referee(){

}

Player* Referee::refGame(Player* player1, Player* player2)
{
    
	player1->makeMove();
	if (player1->move == 'P') {
		return player1;
	}
	else if (player1->move== 'R') {
		return nullptr;
	}
	else if (player1->move== 'S') {
		return player2;
	}
	
		return 0;
}
