#include "Laptop.h"

Laptop::Laptop(string s, double p, int hdSize, double ps)
{
	this->make = s;
	this->price = p;
	this->hdSize = hdSize;
	this->processorSpeed = ps;
}
// add operator << here
ostream& operator<<(ostream& out, Laptop& lt)
{
	out << "Laptop[make: " << lt.make << "; price: " << lt.price <<
		"; hdSize:" << lt.hdSize << "; processorSpeed: " << lt.processorSpeed << "]" << endl;
	return out;
}
// add operator <= here
bool Laptop::operator<=(Laptop& other)
{
	if (this->processorSpeed == other.processorSpeed)
	{
		return this->hdSize <= other.hdSize;
	}
	return this->processorSpeed <= other.processorSpeed;
}
