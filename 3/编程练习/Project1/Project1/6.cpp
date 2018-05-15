#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter the car's journey: ";
	int jour, gas;
	cin >> jour;
	cout << "Enter the car's gas: ";
	cin >> gas;
	double ratio;
	ratio = double(gas) / jour;
	cout << "the car's ratio is " << ratio * 100 << "%" << endl;
	system("PAUSE");
}