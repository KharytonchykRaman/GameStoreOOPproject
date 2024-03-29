#include <iostream>
#include "Game.h"

int main() {

	Game game1;

	cout << "Input game name: ";
	cin >> game1.name;
	cout << "Input game price: ";
	cin >> game1.price;
	cout << "Input game rating: ";
	cin >> game1.rating;
	cout << "Input game genre: ";
	cin >> game1.genre;
	cout << "Input game's release date: ";
	cin >> game1.releaseDate;

	cout << game1.getInfo() << endl;

	Game game2;

	game2.name = "Dead by Daylight";
	game2.price = 15;
	game2.rating = 9;
	game2.genre = "survival horror";
	game2.releaseDate = 2016;

	cout << game2.getInfo() << endl;

	return 0;
}