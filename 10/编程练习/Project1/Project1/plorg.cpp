#include<iostream>
#include"plorg.h"
using namespace std;
Plorg::Plorg(char *ch)
{
	strncpy_s(this->name, ch, 19);
}
void Plorg::change(int n)
{
	this->CI = n;
}
void Plorg::show()
{
	cout << "\nthe name:" << this->name;
	cout << endl << "CI:" << this->CI;
}