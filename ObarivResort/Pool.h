#pragma once
#include "Time.h"
#include "Price.h"
#include <string>
class Pool
{
	const float towelPrice = 50;
	const float swimmingCap = 20;
	float rentTowel(int count, int time)	const {return count * towelPrice * time/60;}
	float rentSwimmingCap(int count, int time) const{return count * swimmingCap * time/60;}

public:
	
	Price goToPool(int count, int time, Time startTime) const;
	
};

