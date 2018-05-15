#include<iostream>
double turn(double temp);
int main()
{
	using namespace std;
	cout << "please enter a celsius value : ";
	int tem;
	cin >> tem;
	cout << tem << " degrees celsis is " << turn(tem) << " degrees fahrenheit";
	system("PAUSE");
}
double turn(double temp)
{
	return 1.8*temp + 32;
}