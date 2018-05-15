#include<iostream>
#include<cctype>
double add_1(double x, double y);
double add_2(double x, double y);
double add_3(double x, double y);
double calculate(double, double, double *ad(double, double));

int main()
{
	using namespace std;
	double(*pf[3])(double, double) = { add_1, add_2, add_3 };
	double a, b;
	cout << "Please enter two numbers (alpha to quit): " << endl;;
	cin >> a >> b;
	do{
		cout << "Now loading...\n";
		cout << "add_1:" << pf[0](a, b) << "\t";
		cout << "add_2:" << pf[1](a, b) << "\t";
		cout << "add_3:" << pf[2](a, b) << "\n";
		cout << "Please enter two numbers (alpha to quit): " << endl;;
		

	} while (cin >> a >> b);
	cout << endl << "Done.\n";
	system("pause");
}

double add_1(double x, double y)
{
	return x + y;
}
double add_2(double x, double y)
{
	return x - y;
}
double add_3(double x, double y)
{
	return x * y;
}

double calculate(double x, double y, double *ad(double,double))
{
	return *ad(x, y);
}