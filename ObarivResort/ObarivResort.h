#pragma once
#include <string>
#include "Bar.h"
#include "Billiard.h"
#include "Massage.h"
#include "Pool.h"
#include "Restaurant.h"
#include "NightClub.h"
#include "Cinema.h"

enum Sex
{
	Male,
	Female
};

class ObarivResort
{
private:
	Bar bar;
	Billiard billiard;
	Massage massage;
	Pool pool;
	NightClub NC;
	Cinema cinema;
	Restaurant restaurant;
public:

	Price oneHourPleasure(int count, int age, Sex sex,bool alcohol);
	Price oneEveningPleasure(int count, int age, Sex sex, bool alcohol);
	Price oneNightPleasure(int count, int age, Sex sex, bool alcohol);
	Price holidaysPleasure(int count, int age, Sex sex, bool alcohol);
};

