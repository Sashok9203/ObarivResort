#pragma once
#include <string>
#include <iostream>
#include "Time.h"
class Price
{
private:
	std::string events;
	float price ;
	Time endTime;
public:
	Price() :Price("",0,{ 0,0 }) {}
	Price(const std::string& events, float price, Time endTime) :events(events), price(price), endTime(endTime) {}
	Price operator + (const Price& other);
	const Time& getEndTime() const { return endTime; }
	void show() const;
	
};

