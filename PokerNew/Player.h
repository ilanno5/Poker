#pragma once
#include <string>
#include <vector>
#include "CardHolder.h"
class Player
{
public:
	enum Action { UndefinedAction, Fold, Call, Bet };
private:
	std::string _name;
	CardHolder _cardHolder;
	Action _action;
};

