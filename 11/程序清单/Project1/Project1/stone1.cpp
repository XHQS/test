#include<iostream>
#include"stonewt1.h"
int main()
{
	using std::cout;
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;
	cout << "Conevert to double => ";
	cout << "Poppins: " << p_wt << " pounds.\n";
	cout << "Convert to int => ";
	cout << "Popppins: " << int(poppins) << " pounds.\n";
	system("pause");
}