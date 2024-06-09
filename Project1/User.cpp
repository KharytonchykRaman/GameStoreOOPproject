#include "User.h"

string User::getNickname() {
	return nickname;
};

void User::setNickname(string nickname) {
	this->nickname = nickname;
};

double User::getBalance() {
	return balance;
};

void User::setBalance(double balance) {
	if (balance > 0)
	{
		this->balance = balance;
	}
};

string User::getInfo() {
	string s = "Nickname: " + nickname;
	s += ", balance: " + to_string(balance) + "$";
	return s;
};

void User::operator++() {
	++balance;
}

void User::operator++(int) {
	balance++;
}

void User::operator--() {
	if (balance >= 1) {
		--balance;
	}
}

void User::operator--(int) {
	if (balance >= 1) {
		balance--;
	}
}

void User::operator+(double price) {
	this->balance += price;
}

void User::operator-(double price) {
	if (this->balance - balance >= 0) {
		this->balance -= price;
	}
}

void User::operator*(double price) {
	this->balance *= price;
}

void User::operator/(double price) {
	this->balance /= price;
}