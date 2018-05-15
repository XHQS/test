#include "golf.h"
#include<iostream>

int main()
{
	Setgolf st1;
	Setgolf st2 = { "li", 2 };
	st1.showgolf();
	st2.showgolf();
	st2.handicap1(1);
	st2.showgolf();
	system("pause");
	
}