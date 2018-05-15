#include"move.h"
#include<iostream>
int main()
{
	Move st1;
	Move st2 = Move(2, 2);
	st1.showmove();
	st2.showmove();
	st1 = st1.add(st2);
	st1.showmove();
	system("pause");
}