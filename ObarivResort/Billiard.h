#pragma once
#include "Time.h"
#include "Price.h"
#include <string>
class Billiard
{
	const float billiardPrice = 100;
public:
	Price playBilliard(int time, int rentTables,Time startTime) const;
};

