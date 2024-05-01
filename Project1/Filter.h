#pragma once
#include "Library.h"

class Filter {
public:
	static double getMaxPrice(Library library);
	static double getMinPrice(Library library);
	static double calcTotalPrice(Library library);
	static Game getBestGame(Library library);
	static Game getWorstGame(Library library);
};