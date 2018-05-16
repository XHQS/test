#include"crow.h"
#include<iostream>
int main()
{
	Crow a;
	Crow b("2b","2b",2);
	Crow c = b;
	a.ShowCrow();
	c.ShowCrow();
	a = b;
	a.ShowCrow();
	system("pause");
}
