#include "Game.h"

int Game::count = 0;

int Game::getCount() {
	return count;
}

Game::Game() : Game("no_name", 0, 0, 0, 0) {
}

Game::Game(double price) : price(price) {
	count++;
};

Game::Game(string name, double price, double rating, int releaseDate, double sizeGB)
	: name(name), price(price), rating(rating), releaseDate(releaseDate), sizeGB(sizeGB) {
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

double Game::getPrice() {
	return price;
};

void Game::setPrice(double price) {
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
}

double Game::getSizeGB() {
	return sizeGB;
}

void Game::setSizeGB(double sizeGB) {
	if (sizeGB > 0)
	{
		this->sizeGB = sizeGB;
	}
}

string Game::getInfo() {
	string s = "Name: " + name;
	s += ", price: " + to_string(price) + "$";
	s += ", rating:" + to_string(rating) + "/10";
	s += ", release date: " + to_string(releaseDate);
	return s;
}

void Game::operator++() {
	++price;
}

void Game::operator++(int) {
	price++;
}

void Game::operator--() {
	if (price >= 1)
	{
		--price;
	}
}

void Game::operator--(int) {
	if (price >= 1)
	{
		price--;
	}
}

void Game::operator+(double price) {
	this->price += price;
}

void Game::operator-(double price) {
	if (this->price - price >= 0)
	{
		this->price -= price;
	}
}

void Game::operator*(double price) {
	this->price *= price;
}

void Game::operator/(double price) {
	this->price /= price;
}