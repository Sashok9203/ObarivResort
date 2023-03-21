#pragma once
#include <string>
class Time
{
private:
	int hours;
	int minutes;
public:
	Time() :Time(0, 0) {}
	Time(int hours, int minutes);
	void addMinutes(int minutes);
	void addHours(int hours);
	Time operator + (const Time& other) const;
	const std::string toStr() const;
};

