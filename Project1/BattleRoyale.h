#pragma once
#include "Game.h"
class BattleRoyale :
    public Game
{
private:
	int numPlayerInGame;
public:
	BattleRoyale() : numPlayerInGame(0) {};
	BattleRoyale(int ageLimit, string name, int price, double rating, int releaseDate)
		: numPlayerInGame(numPlayerInGame), Game(name, price, rating, releaseDate) {};

	int getNumPlayerInGame();
	void setNumPlayerInGame(int numPlayerInGame);
};

