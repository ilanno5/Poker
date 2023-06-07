#pragma once

#include <vector>
#include "Player.h"


class PokerTable
{



private:
	std::vector<Player> _players;
	int _pot;
	int _bigBlind;
};

