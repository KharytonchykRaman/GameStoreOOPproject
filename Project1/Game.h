#pragma once
#include <string>

using namespace std;

class Game {
public:
	string name;
	int price;
	double rating;
	string genre;
	int releaseDate;

	string getInfo() {
		string info = "Name: " + name;
		info += ", price: " + to_string(price) + "$";
		info += ", rating:" + to_string(rating) + "/10";
		info += ", genre: " + genre;
		info += ", release date: " + to_string(releaseDate);
		return info;
	}

	//default constructor

	Game() {
		name = "no name";
		price = 0;
		rating = 0;
		genre = "no genre";
		releaseDate = 0;
	}
};
