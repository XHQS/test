#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;
	cout << "rats = " << rats;
	cout << ", rodents: " << rodents << endl;

	cout << "rat addresss = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl;
	system("pause");
}