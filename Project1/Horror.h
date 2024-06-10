#pragma once
#include "Game.h"
class Horror :
	public Game
{
private:
	int ageLimit;
public:
	Horror() : ageLimit(0) {};
	Horror(int ageLimit, string name, int price, double rating, int releaseDate, double sizeGB) 
		: ageLimit(ageLimit), Game(name, price, rating, releaseDate, sizeGB) {};

	int getAgeLimit();
	void setAgeLimit(int age);
};