#include"mytime2.h"
#include<iostream>
Time::Time()
{
	this->hours = 0;
	this->minutes = 0;
}
Time::Time(int h, int m )
{
	this->hours = h;
	this->minutes = m;
}
void Time::AddMin(int m)
{
	this->minutes += m;
	this->hours += (this->minutes / 60);
	this->minutes = this->minutes % 60;
}
void Time::AddHr(int h)
{
	this->hours += h;
}
void Time::Reset(int h, int m)
{
	this->hours = h;
	this->minutes = m;
}
Time Time::operator+(const Time & tim) const
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
	mul.minutes = int((*this).minutes*n + (*this).hours*n*60)%60;
	mul.hours = int((*this).minutes*n + (*this).hours*n*60) / 60;
	return mul;
}
void Time::show()const
{
	std::cout << "\nhours: " << this->hours
		<< "\nminutes: " << this->minutes << "\n";
}