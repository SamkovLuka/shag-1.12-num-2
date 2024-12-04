#pragma once
#include <iostream>
using namespace std;


class Overcoat
{
	string type;
	int price;
public:
	Overcoat(const type& other) : type(type) {};
	GetPrice{
		return price;
	}
	bool operator==(const Overcoat& other)
	{
		return this->type == other.type;
	}
	bool operator=(const Overcoat& other)
	{
		if (this == &other) {
			cout << "Самоприсвоєння, нічого не змінено" << endl;
			return *this;
		}
		this->type = other.type;
		return *this;
	}
	bool operator>(const Overcoat& other)
	{
		return this->price > other.price;
	}
	void Show() const {
		cout << "Тип одягу: " << type << ", Ціна: " << price << " грн" << endl;
	}
};