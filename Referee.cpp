#include "Referee.h"
#include <iostream>

Referee::Referee(){

}

Player* Referee::refGame(Player* player1, Player* player2)
{
    char a=player1->makeMove();
	if (a == 'P') {
		return player1;
	}
	else if (a == 'R') {
		return nullptr;
	}
	else if (a == 'S') {
		return player2;
	}
	
		return 0;
}
