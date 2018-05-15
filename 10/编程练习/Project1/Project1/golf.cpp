#include"golf.h"
#include<iostream>
#include<string>
Setgolf::Setgolf(const char *name, int hc)
{
	strncpy_s(this->fullname, name,this->handicap);
	this->handicap = hc;
}
Setgolf::Setgolf()
{
	using namespace std;
	cout << "Please enter the golf's fullname: ";
	char name[Len];
	cin.getline(name,Len);
	strncpy_s(this->fullname,name,Len);
	cout << "Please enter the golf's handicap: ";
	cin >> this->handicap;
	cin.get();
	if (strlen(this->fullname) != 0)
		return ;

}
void Setgolf::handicap1(int hc)
{
	this->handicap = hc;
}
void Setgolf::showgolf()
{
	std::cout << "the golf's fullname: " << this->fullname;
	std::cout << "the golf's handicap: " << this->handicap << std::endl;
}
