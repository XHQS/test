#include"golf.h"
#include<iostream>
#include<string>
void setgolf(golf  &g, const char *name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf &g)
{
	using namespace std;
	cout << "Please enter the golf's fullname: ";
	char name[Len];
	cin.getline(name,Len);
	strcpy(g.fullname,name);
	cout << "Please enter the golf's handicap: ";
	cin>>g.handicap,6;
	cin.get();
	if (strlen(g.fullname)!=0)
		return 1;
	return 0;
}
void handicap(golf &g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf &g)
{
	std::cout << "the golf's fullname: " << g.fullname;
	std::cout << "the golf's handicap: " << g.handicap << std::endl;
}
