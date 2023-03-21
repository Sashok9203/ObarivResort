#include "Massage.h"

Price Massage::doMassage(int count, Time startTime) const
{
    Time tTime = startTime;
    tTime.addMinutes(40);
    Price tmp(startTime.toStr() + " - Go to massage.\n", count * massagePrice, tTime);
    return tmp;
}
