#include<iostream>
#include<array>
const int ArSize = 101;
int main()
{
	using namespace std;
	array<long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1;
	for (int i = 2; i <= 100; i++)
		factorials[i] = i* factorials[i - 1];
	cout << endl << factorials[100] << endl;
	system("PAUSE");
}