#include "Bar.h"

Price Bar::drink—ocktail(int count, Time startTime) const
{
	Time tTime = startTime;
	tTime.addHours(1);
	Price tmp (startTime.toStr() + " - Drink cocktail in the bar\n", (count * drinkPrice), tTime);
	return tmp;
}
