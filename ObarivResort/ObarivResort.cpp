#include "ObarivResort.h"

Price ObarivResort::oneHourPleasure(int count, int age, Sex sex, bool alcohol)
{
	Price tmp(" -= One-hour-pleasure =-\n", 0, {0,0});
	Time stime(16,0) ;
	switch (sex)
	{
	case Male:
		if (alcohol)
			tmp = tmp + bar.drink—ocktail(count, stime);
		else
			tmp = tmp + massage.doMassage(count, stime);
		break;
	case Female:
		if (alcohol)
	    	tmp = tmp + bar.drink—ocktail(count, stime);
		else
			tmp = tmp + billiard.playBilliard(60, count / 2, stime);
	}
    return tmp;
}

Price ObarivResort::oneEveningPleasure(int count, int age, Sex sex, bool alcohol)
{
	Price tmp(" -= One-evening-pleasure =-\n", 0, { 0,0 });
	Time stime{ 18,0 };
	switch (sex)
	{
	case Male:
		tmp = tmp + massage.doMassage(count, stime);
		tmp = tmp + restaurant.resMenu(count, alcohol, tmp.getEndTime());
		break;
	case Female:
		tmp = tmp + pool.goToPool(count,60, stime);
		if (alcohol)
			tmp = tmp + bar.drink—ocktail(count, tmp.getEndTime());
		else
			tmp = tmp + billiard.playBilliard(60, count / 2, tmp.getEndTime());
	}
	return tmp;
}

Price ObarivResort::oneNightPleasure(int count, int age, Sex sex, bool alcohol)
{
	Price tmp(" -= One-night-pleasure =-\n", 0, { 0,0 });
	Time stime( 20,0 );
	switch (sex)
	{
	case Male:
		tmp = tmp + massage.doMassage(count, stime);
		tmp = tmp + restaurant.resMenu(count, alcohol, tmp.getEndTime());
		break;
	case Female:
		tmp = tmp + billiard.playBilliard(60, count / 2, stime);
		if (alcohol)
			tmp = tmp + bar.drink—ocktail(count, tmp.getEndTime());
		else
			tmp = tmp + massage.doMassage(count, tmp.getEndTime());
	}
	tmp = tmp + NC.goDisco(count, tmp.getEndTime());
	return tmp;
}

Price ObarivResort::holidaysPleasure(int count, int age, Sex sex, bool alcohol)
{
	Time stime{ 15,0 };
	Price tmp(" -= Holidays-pleasure =-\n", 0, { 0,0 });
	switch (sex)
	{
	case Male:
		tmp = tmp + pool.goToPool(count,120, stime);
		tmp = tmp + massage.doMassage(count, tmp.getEndTime());
		tmp = tmp + cinema.watchMovie(count, tmp.getEndTime());
		tmp = tmp + restaurant.resMenu(count, alcohol, tmp.getEndTime());
		tmp = tmp + NC.goDisco(count, tmp.getEndTime());
		break;
	case Female:
		tmp = tmp + pool.goToPool(count, 120, stime);
		if (alcohol)
			tmp = tmp + bar.drink—ocktail(count, tmp.getEndTime());
		else
			tmp = tmp + billiard.playBilliard(120, count / 2, tmp.getEndTime());
		tmp = tmp + cinema.watchMovie(count, tmp.getEndTime());
		tmp = tmp + restaurant.resMenu(count, alcohol, tmp.getEndTime());
		tmp = tmp + NC.goDisco(count, tmp.getEndTime());
	}
	return tmp;
}
