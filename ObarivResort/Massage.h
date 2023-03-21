#pragma once
#include "Time.h"
#include "Price.h"
#include <string>
class Massage
{
	const float massagePrice = 320;
	
public:
	Price doMassage(int count,Time startTime) const;
	
};

