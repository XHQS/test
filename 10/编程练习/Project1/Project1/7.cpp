#include<iostream>
#include"plorg.h"
int main()
{
	using namespace std;
	Plorg st1;
	Plorg st2 = Plorg("23333");
	st1.show();
	st2.show();
	st1.change(1);
	st1.show();
	system("pause");
}