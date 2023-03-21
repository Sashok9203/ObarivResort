#include "Time.h"

Time::Time(int hours, int minutes)
{
	this->hours = (hours < 0 || hours   > 23) ? 0 : hours;
	this->minutes = (minutes < 0 || minutes > 59) ? 0 : minutes;
}
void Time::addMinutes(int minutes)
{
	minutes = abs(minutes);
	this->minutes += minutes;
	if ((this->minutes) > 59)
	{
		addHours(this->minutes / 60);
		this->minutes = this->minutes % 60;
	}
}
void Time::addHours(int hours)
{
	hours = abs(hours);
	this->hours += hours;
	if ((this->hours) > 23)
		this->hours = this->hours % 24;

}
Time Time::operator + (const Time& other) const
{
	Time t_time = *this;
	t_time.addHours(other.hours);
	t_time.addMinutes(other.minutes);
	return t_time;
}
const std::string Time::toStr() const { return (hours < 10 ? "0" : "") + std::to_string(hours) + ":" + (minutes < 10 ? "0" : "") + std::to_string(minutes); }