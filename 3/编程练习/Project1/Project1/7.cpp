#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter the car's eup_journey: ";
	int eup_jour, eup_gas;
	cin >> eup_jour;
	cout << "Enter the car's eup_gas: ";
	cin >> eup_gas;
	double ratio;
	ratio = (eup_jour*100/62.14)/(eup_gas/3.875);
	cout << "the car's ratio is " << ratio * 100 << "%" << endl;
	system("PAUSE");
}