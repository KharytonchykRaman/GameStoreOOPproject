#pragma once
#include <iostream>
#include <string>
using namespace std;

class Game {
private:
	string name;
	int price;
	double rating;
	int releaseDate;

	static int count;
public:

	static const int MIN_RELEASE_DATE = 1900;
	static const int MAX_RELEASE_DATE = 2024;

	static const int MIN_RATING = 0;
	static const int MAX_RATING = 10;

	Game();
	Game(string, int, double, int);

	~Game();

	string getName();
	void setName(string name);

	int getPrice();
	void setPrice(int price);

	double getRating();
	void setRating(double rating);

	int getReleaseDate();
	void setReleaseDate(int releaseDate);

	static int getCount();

	string getInfo();
};