#include"move.h"
#include<iostream>
Move::Move(double a, double b)
{
	this->x = a;
	this->y = b;
}
void Move::showmove() const 
{
	std::cout << std::endl << this->x << "\t" << this->y << std::endl;
}
Move Move::add(const Move & m) const
{
	Move st =Move((this->x+m.x),(this->y+m.y));
	return st;
}
void Move::reset(double a, double b)
{
	this->x = a;
	this->y = b;
}