#pragma once
#include "Time.h"
#include "Price.h"
#include <string>
class Cinema
{
	const float ticketPrice = 110;
public:
	Price watchMovie(int count, Time startTime) const;
};

