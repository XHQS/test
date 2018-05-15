#include<iostream>
int main()
{
	using namespace std;
	int higgens = 5;
	int* pt = &higgens;
	cout << "Value of higggens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt
		<< "; Value of pt = " << pt << endl;
	system("PAUSE");
}