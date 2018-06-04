#include<iostream>
#include"winec2.h"
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "Enter name of  wine: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of years: ";
	int yrs;
	cin >> yrs;

	Wine2 holding(lab, yrs);
	holding.GetBottles();
	holding.show();

	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };
	Wine2 more("Gushing Grape Red", YRS, y, b);
	more.show();
	cout << "Total bottles for " << more.Label()
		<< ": " << more.sum() << endl;
	cout << "Bye\n";
	system("pause");
}