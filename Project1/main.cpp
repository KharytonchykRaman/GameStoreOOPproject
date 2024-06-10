#include "User.h"
#include "Filter.h"

int main() {

	Game game1("Game1", 50, 5.5, 2017, 34.2);
	Horror game2(12, "Game2", 20, 8.2, 2023, 9.9);
	Shooter game3(3, "Game3", 0, 7.7, 2013, 25);
	BattleRoyale game4(100, "Game4", 0, 7, 2015, 50);
	Adventure game5(false, "Game5", 100, 9, 2023, 45);

	Library library1;

	library1.add(game1);
	library1.add(game2);
	library1.add(game3);
	library1.add(game4);
	library1.add(game5);

	Filter filter1;

	cout << "Total price of these games is " << filter1.calcTotalPrice(library1);
	cout << "Total price of these games is " << filter1.calcTotalPrice(library1);

	return 0;
}