#include "BattleRoyale.h"

int BattleRoyale::getNumPlayerInGame() {
	return numPlayerInGame;
}

void BattleRoyale::setNumPlayerInGame(int numPlayerInGame) {
	if (numPlayerInGame > 0)
	{
		this->numPlayerInGame = numPlayerInGame;
	}
}