#pragma once
#include <iostream>
#include <string>
using namespace std;

class Laptop
{
public:
	string make;
	double price;
	int hdSize;
	double processorSpeed;

	 
	// add constructor here
	Laptop(string s, double p, int hdSize, double ps);
	// add operator << here
	friend ostream& operator<<(ostream& out, Laptop& lt);
	// add operator <= here
	bool operator<=(Laptop & other);
};
