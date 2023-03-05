#ifndef REFEREE_H
#define REFEREE_H
#include"Player.h"
#include"Human.h"
using namespace std;
class Referee:Player{
    public:
Referee( ); // constructor
Player * refGame(Player * player1, Player * player2);
};
#endif