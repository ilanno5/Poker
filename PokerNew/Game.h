#pragma once

#include <iostream>
#include "PokerTable.h"
#include "StateGame.h"

class Game
{
public:
	Game();
	void run();


private:
	PokerTable _pokerTable;
	StateGame _stateGame;
};

