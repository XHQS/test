#include"mytime3.h"
Time::Time()
{
	this->hours = this->minutes = 0;
}
Time::Time(int h, int m)
{
	this->hours = h;
	this->minutes = m;
}
Time Time::operator+(const Time & tim)const
{
	Time sum;
	sum.minutes = (*this).minutes + tim.minutes;
	sum.hours = (*this).hours + tim.hours;
	sum.hours += (sum.minutes / 60);
	sum.minutes = sum.minutes % 60;
	return sum;
}
Time Time::operator-(const Time & tim)const
{
	Time div;
	div.minutes = (*this).minutes - tim.minutes;
	div.hours = (*this).hours - tim.hours;
	div.hours += (div.minutes / 60);
	div.minutes = div.minutes % 60;
	return div;
}
Time Time::operator*(const double n)const
{
	Time mul;
	mul.minutes = int((*this).minutes*n + (*this).hours*n * 60) % 60;
	mul.hours = int((*this).minutes*n + (*this).hours*n * 60) / 60;
	return mul;
}
std::ostream & operator<<(std::ostream & os, const Time & t)
{
	os << t.hours << " hours, "
		<< t.minutes << " minutes."; 		
	return os;
}
