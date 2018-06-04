#include<iostream>
#include"tv.h"
void Tv::settingc(Remote &a)
{
	
	if (this->state == On)
		a.condition=(a.show_condition() == 1) ? 0 : 1;
	else
		std::cout << "Tv is off" << std::endl;
}