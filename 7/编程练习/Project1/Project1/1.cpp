#include<iostream>
using namespace std;
double avera(double x, double y);
int main()
{
	double num_1, num_2;
	cout << "Please enter two numbers:";
	cin >> num_1 >> num_2;
	double aver = 1;;
	while (1)
	{
		if (num_1 + num_2 == 0)
		{
			cout << "numbers error\n";
			cout << "Please enter two numbers:";
			cin >> num_1 >> num_2;
			continue;
		}
		else 
		{
			aver = avera(num_1, num_2);
			if (aver == 0)
				break;
			else
				cout << aver << endl;
		}
		cout << "Please enter two numbers:";
		cin >> num_1 >> num_2;
	}
	system("pause");
}
double avera(double x, double y)
{
	return 2.0*x*y / (x + y);
}