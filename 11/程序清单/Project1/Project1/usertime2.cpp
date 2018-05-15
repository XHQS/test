#include<iostream>
#include"mytime2.h"
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;

	cout << "weeding time = ";
	weeding.show();
	cout << endl;

	cout << "waxing time = ";
	waxing.show();
	cout << endl;

	cout << "total work = ";
	total = weeding + waxing;
	total.show();
	cout << endl;

	cout << "division work = ";
	diff = weeding - waxing;
	diff.show();
	cout << endl;

	cout << "adjusted work = ";
	adjusted = total*1.5;
	adjusted.show();
	cout << endl;

	system("pause");

}