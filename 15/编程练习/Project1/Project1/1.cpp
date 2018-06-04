#include<iostream>
#include"tv.h"

int main()
{
	using std::cout;
	using std::endl;
	Tv st1;
	Remote re1;
	if (!st1.ison())
		re1.onoff(st1);
	re1.show_condition();
	st1.settingc(re1);
	re1.show_condition();
	system("pause");
}