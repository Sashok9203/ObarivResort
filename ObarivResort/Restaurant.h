#pragma once
#include "Time.h"
#include "Price.h"
#include <string>
class Restaurant 
{
	const float dish—hefPrice = 110;
	const float vinePrice = 110;
	float dish—hef(int count) const {return count * dish—hefPrice;};
	float drinkVine(int count) const { return count * vinePrice; }
public:
	Price resMenu(int count, bool alcohol, Time startTime);
};

