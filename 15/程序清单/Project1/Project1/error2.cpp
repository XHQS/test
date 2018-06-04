#include<iostream>
#include<cfloat>
bool hmean(double a, double b, double * ans);

int main()
{
	double x, y, z;

	std::cout << "Enter two numbers: ";
	while (std::cin >> x >> y)
	{
		if (hmean(x, y, &z))
			std::cout << "Harmonic mean of " << x << " nad " << y
			<< " is " << z << std::endl;
		else
			std::cout << "One value should not be the negative "
			<< "of the other - try again.\n";
		std::cout << "Enter next set of numberss <q to quit>: ";
	}
	std::cout << "Bye\n";
	system("pause");
}
bool hmean(double a, double b, double * ans)
{
	if (a == -b)
	{
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0* a*b / (a + b);
		return true;
	}
}