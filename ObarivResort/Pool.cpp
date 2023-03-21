#include "Pool.h"

Price Pool::goToPool(int count, int time, Time startTime) const
{
	Time tTime = startTime;
	tTime.addMinutes(time);
	Price tmp(startTime.toStr() + " - Go to pool.\n", count * rentTowel(count, time) + rentSwimmingCap(count, time), tTime);
	return tmp;
}
