#pragma once
#include "Time.h"
#include "Price.h"
#include <string>
class NightClub
{
	const float ticketPrice = 400;
public:
	Price goDisco(int count, Time startTime) const;
};

