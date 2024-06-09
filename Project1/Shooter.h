#pragma once
#include "Game.h"
class Shooter :
    public Game
{
private:
    int amountMap;
public:
    Shooter() : amountMap(0) {};
    Shooter(int amountMap, string name, int price, double rating, int releaseDate)
        : amountMap(amountMap), Game(name, price, rating, releaseDate) {};

    int getAmountMap();
    void setAmountMap(int amountMap);
};

