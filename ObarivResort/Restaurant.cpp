#include "Restaurant.h"



Price Restaurant::resMenu(int count, bool alcohol, Time startTime)
{
    Time tTime = startTime;
    tTime.addHours(3);
    Price tmp(startTime.toStr() + " - Go to restourant.\n", dish—hef(count) + alcohol ? drinkVine(count) : 0, tTime);
    return tmp;
}
