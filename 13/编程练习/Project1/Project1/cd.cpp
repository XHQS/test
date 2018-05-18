#include"cd.h"
#include<iostream>
Cd::Cd(char * s1, char * s2, int n, double x)
{
	performers = new char[strlen(s1)+1];
	strcpy(performers,s1);
	performers[strlen(s1)] = '\0';

	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	label[strlen(s2)] = '\0';

	selections = n;
	playtime = x;
}
Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	performers[strlen(d.performers)] = '\0';

	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	label[strlen(d.label)] = '\0';


	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers = new char[1];
	performers[0] = '\0';
	label = new char[1];
	label[0] = '\0';
	selections = 0;
	playtime = 0;
}
Cd::~Cd()
{
	delete[] performers;
	delete[]label;
}
void Cd::Report()const
{
	std::cout << *this;
}
Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;

	delete[] performers;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	performers[strlen(d.performers)] = '\0';

	delete[]label;
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	label[strlen(d.label)] = '\0';

	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
std::ostream  & operator<<(std::ostream & os, const Cd & st)
{
	os << st.performers << "\n"
		<< st.label << "\n"
		<< st.selections << "\n"
		<< st.playtime << "\n";
	return os;
}
/*Classic类函数定义*/
Classic::Classic() : Cd()
{
	st = new char[1];
	st[0] = '\0';
}
Classic::Classic(char * st, char * s1, char * s2, int n, double x) 
	: Cd( s1,  s2,  n,  x)
{
	this->st = new char[strlen(st) + 1];
	strcpy(this->st, st);
	this->st[strlen(st)] = '\0';
}
Classic::~Classic() 
{
	delete[] this->st;
}
void Classic::Report()const
{
	std::cout << *this;
}
Classic & Classic::operator=(const Classic & d)
{
	if (this == &d)
		return *this;

	Cd::operator=(d);

	delete[] this->st;
	this->st = new char[strlen(d.st) + 1];
	strcpy(this->st, d.st);
	this->st[strlen(d.st)] = '\0';
	return *this;
}
std::ostream  & operator<<(std::ostream & os,const Classic & st)
{
	os << (const Cd &)st<<"\n";
	os << st.st << "\n";
	return os;
}