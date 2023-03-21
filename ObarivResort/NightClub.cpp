#include "NightClub.h"

Price NightClub::goDisco(int count, Time startTime) const
{

	Time tTime = startTime;
	tTime.addHours(3);
	Price tmp(startTime.toStr() + " - Go to the Night Club\n", count * ticketPrice, tTime);
	return tmp;
}
