#include "Referee.h"
#include <iostream>

Referee::Referee(){

}

Player* Referee::refGame(Player* player1, Player* player2)
{
	Human h;
    h.makeMove();
	if (h.move == 'P') {
		return player1;
	}
	else if (h.move == 'R') {
		return nullptr;
	}
	else if (h.move == 'S') {
		return player2;
	}
	
		return 0;
}
