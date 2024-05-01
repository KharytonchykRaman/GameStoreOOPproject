#include "Library.h"

void Library::add(Game game) {
	if (size == 0) {
		list = new Game[1];
		list[0] = game;
	}
	else {
		Game* temp = new Game[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = game;

		delete[] list;
		list = temp;
	}

	size++;
}

void Library::remove(int index) {
	if (index >= 0 && index < size) {
		Game* temp = new Game[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j++] = list[i];
			}
		}

		delete[] list;
		list = temp;
		size--;
	}
}

void Library::remove(Game game) {
	int index = getFirstIndex(game);

	if (index != -1) {

		Game* temp = new Game[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j++] = list[i];
			}
		}
		size--;
		delete[] list;
		list = temp;
	}
}

int Library::getFirstIndex(Game game) {
	for (int i = 0; i < size; i++)
	{
		if (game.getName() == list[i].getName()
			&& game.getPrice() == list[i].getPrice()
			&& game.getRating() == list[i].getRating()
			&& game.getReleaseDate() == list[i].getReleaseDate()) {
			return i;
		}
	}

	return -1;
}

int Library::getLastIndex(Game game) {
	for (int i = size - 1; i >= 0; i--)
	{
		if (game.getName() == list[i].getName()
			&& game.getPrice() == list[i].getPrice()
			&& game.getRating() == list[i].getRating()
			&& game.getReleaseDate() == list[i].getReleaseDate()) {
			return i;
		}
	}

	return -1;
}

bool Library::contain(Game game) {
	for (int i = 0; i < size; i++)
	{
		if (game.getName() == list[i].getName()
			&& game.getPrice() == list[i].getPrice()
			&& game.getRating() == list[i].getRating()
			&& game.getReleaseDate() == list[i].getReleaseDate()) {
			return true;
		}
	}

	return false;
}


int Library::getSize() {
	return size;
}

Game Library::get(int index) {
	if (index >= 0 && index < size) {
		return list[index];
	}

	return Game();
}

string Library::convertToString() {
	string s = "List of games:\n";

	for (int i = 0; i < size; i++)
	{
		s += list[i].getInfo() + "\n";
	}

	return s;
}