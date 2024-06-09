#pragma once
#include "Library.h"

class User
{
private:
	string nickname;
	double balance;

public:

	User() {
		//cout << "User default constructor" << endl;
	}

	User(string nickname, double balance) : nickname(nickname), balance(balance) {}

	~User() {
		//cout << "User destructor" << endl;
	}

	string getNickname();
	void setNickname(string nickname);

	double getBalance();
	void setBalance(double balance);

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