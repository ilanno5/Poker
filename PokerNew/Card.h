#pragma once
class Card
{
public:
	enum Suit { UndefinedSuit, Spade, Club, Diamond, Heart };
	enum Rank { UndefinedRank, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };

private:
	Suit suit;
	Rank rank;
};

