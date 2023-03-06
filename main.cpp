#include "Player.h"
#include"Referee.h"
#include <iostream>
int main() {
	Referee b;
	Player* human = new Human;
	Player* computer = new Computer;
	
	if (b.refGame(human, computer) != nullptr) {
		cout << b.refGame(human, computer)->getName() << "Wins!" << endl;
	}
	else {
		cout << "It's a tie!" << endl;
	}
	
}
