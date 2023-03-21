
#include <iostream>
#include "ObarivResort.h"

int main()
{
	ObarivResort ObRes;
	Price price = ObRes.oneHourPleasure(4, 22, Male, false);
	price.show();

	price = ObRes.oneEveningPleasure(3, 33, Female, false);
	price.show();

	price = ObRes.oneNightPleasure(6, 26, Male, false);
	price.show();

	price = ObRes.holidaysPleasure(5, 24, Female, false);
	price.show();


}

