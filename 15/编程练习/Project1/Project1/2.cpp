#include<iostream>
#include<cmath>
#include<stdexcept>
#include"exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;
	
	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y
				<< " is " << z << endl;
			cout << "Geometric mean of " << x << " and " << y
				<< " is " << gmean(x, y) << endl;
		}
		catch (std::logic_error &  bg)
		{
			cout <<	bg.what();
			continue;
		}
	}
	cout << "Bye.\n";
	system("pause");
}
double hmean(double a, double b)
{
	if (a == -b)
		throw (std::logic_error &)bad_hmean(a, b);
	return 2.0*a*b / (a + b);
}
double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw (std::logic_error &)bad_gmean(a, b);
	return std::sqrt(a*b);
}
