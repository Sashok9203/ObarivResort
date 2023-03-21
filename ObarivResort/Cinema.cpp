#include "Cinema.h"

Price Cinema::watchMovie(int count, Time startTime) const
{
    Time tTime = startTime;
    tTime.addHours(3);
    Price tmp(startTime.toStr() + " - Go to the cinema.\n", count * ticketPrice, tTime);
    return tmp;
}
