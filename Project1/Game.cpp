#include "Game.h"

int Game::count = 0;

int Game::getCount() {
	return count;
}

Game::Game() : Game("no_name", 0, 0, 0) {
}

Game::Game(string name, int price, double rating, int releaseDate)
	: name(name), price(price), rating(rating), releaseDate(releaseDate) {
	count++;
}

Game::~Game() {
	count--;
}

string Game::getName() {
	return name;
};

void Game::setName(string name) {
	this->name = name;
};

int Game::getPrice() {
	return price;
};

void Game::setPrice(int price) {
	if (price > 0)
	{
		this->price = price;
	}
};

double Game::getRating() {
	return rating;
};

void Game::setRating(double rating) {
	if (rating >= MIN_RATING && rating <= MAX_RATING)
	{
		this->rating = rating;
	}
};

int Game::getReleaseDate() {
	return releaseDate;
};

void Game::setReleaseDate(int releaseDate) {
	if (releaseDate >= MIN_RELEASE_DATE && releaseDate <= MAX_RELEASE_DATE)
	{
		this->releaseDate = releaseDate;
	}
};

string Game::getInfo() {
	string s = "Name: " + name;
	s += ", price: " + to_string(price) + "$";
	s += ", rating:" + to_string(rating) + "/10";
	s += ", release date: " + to_string(releaseDate);
	return s;
}