#pragma once
#include "Game.h"

class Library
{
private:
	Game* list;
	int size;

public:
	Library() : size(0) {}

	void add(Game game);
	void remove(int index);
	void remove(Game game);

	bool contain(Game game);
	int getFirstIndex(Game game);
	int getLastIndex(Game game);

	int getSize();
	Game get(int index);

	string convertToString();
};