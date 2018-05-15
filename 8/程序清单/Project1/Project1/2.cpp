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

	system("pause");
}