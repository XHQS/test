#include<iostream>
double turn(double year);
int main()
{
	using namespace std;
	double light_year;
	cout << "enter the number of light years :";
	cin >> light_year;
	cout << light_year << "light years = " << turn(light_year) << " astronomical units" << endl;
	system("PAUSE");
}
double turn(double year)
{
	return 632440 * year;
}