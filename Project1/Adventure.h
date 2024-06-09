#pragma once
#include "Game.h"
class Adventure :
    public Game
{
private:
	bool online;
public:
	Adventure() : online(false) {};
	Adventure(bool online, string name, int price, double rating, int releaseDate)
		: online(online), Game(name, price, rating, releaseDate) {};

	bool isOnline();
	void setOnlineStatus(bool online);
};

