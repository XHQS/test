#include<iostream>
#include<climits>
bool is_int(double);
int main()
{
	using namespace std;
	double num;

	cout << "Yo,dude!Enter an integer value: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int val = int(num);
	cout << "You have entered the integer " << val << "\nbye\n";
	system("PAUSE");
}
bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}