#pragma once
#include <iostream>
#include <string>
using namespace std;

class Game {
protected:
	string name;
	double price;
	double rating;
	int releaseDate;
	double sizeGB;

	static int count;
public:

	static const int MIN_RELEASE_DATE = 1900;
	static const int MAX_RELEASE_DATE = 2024;

	static const int MIN_RATING = 0;
	static const int MAX_RATING = 10;

	Game();
	Game(double);
	Game(string , double, double, int);

	~Game();

	string getName();
	void setName(string name);

	double getPrice();
	void setPrice(double price);

	double getRating();
	void setRating(double rating);

	int getReleaseDate();
	void setReleaseDate(int releaseDate);

	double getSizeGB();
	void setSizeGB(double sizeGB);

	static int getCount();

	string getInfo();

	void operator++();
	void operator++(int);
	void operator--();
	void operator--(int);
	void operator+(double price);
	void operator-(double price);
	void operator*(double price);
	void operator/(double price);
};