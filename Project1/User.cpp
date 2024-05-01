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