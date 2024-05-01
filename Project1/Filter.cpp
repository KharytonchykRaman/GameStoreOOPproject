#include "Filter.h"

double Filter::getMaxPrice(Library library) {
	double max = library.get(0).getPrice();

	for (int i = 1; i < library.getSize(); i++)
	{
		if (library.get(i).getPrice() > max) {
			max = library.get(i).getPrice();
		}
	}

	return max;
}

double Filter::getMinPrice(Library library) {
	double min = library.get(0).getPrice();

	for (int i = 1; i < library.getSize(); i++)
	{
		if (library.get(i).getPrice() < min) {
			min = library.get(i).getPrice();
		}
	}

	return min;
}

double Filter::calcTotalPrice(Library library) {
	double price = library.get(0).getPrice();

	for (int i = 1; i < library.getSize(); i++)
	{
		price += library.get(i).getPrice();
	}

	return price;
}

Game Filter::getBestGame(Library library) {
	double price = getMaxPrice(library);
	Game game;

	for (int i = 0; i < library.getSize(); i++)
	{
		if (library.get(i).getPrice() == price) {
			game = library.get(i);
			break;
		}
	}

	return game;
}

Game Filter::getWorstGame(Library library) {
	double price = getMinPrice(library);
	Game game;

	for (int i = 0; i < library.getSize(); i++)
	{
		if (library.get(i).getPrice() == price) {
			game = library.get(i);
			break;
		}
	}

	return game;
}