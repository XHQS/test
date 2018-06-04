#include<iostream>
#include"worker0.h"
const int LIM = 4;
int main()
{
	Waiter bob("Bob Apple", 314L, 5);
	Waiter w_temp;
	Singer bev("Beverly Hills",522L,3);
	Singer s_temp;

	Worker * pw[LIM] = { &bob, &bev, &w_temp, &s_temp };
	int i;
	for (i = 2; i < LIM; i++)
		pw[i]->Set();
	for (i = 0; i < LIM; i++)
	{
		pw[i]->Show();
		std::cout << std::endl;
	}
	system("pause");
}