#include "Billiard.h"

Price Billiard::playBilliard(int time, int rentTables,Time startTime) const
{
	Time tTime = startTime;
	tTime.addMinutes(time);
	Price tmp(startTime.toStr() + " - Play billiard.\n", billiardPrice * time / 60 * rentTables,tTime);
	return tmp;
}
