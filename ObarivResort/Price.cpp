#include "Price.h"
Price Price::operator + (const Price& other)
{
	this->events += other.events;
	this->price += other.price;
	this->endTime = other.endTime;
	return *this;
}
void Price::show() const
{
	std::cout << events;
	std::cout << "Price : " << price << " gr\n\n";
}