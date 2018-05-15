#include<iostream>
#include<array>
int main()
{
	using namespace std;
	array<int, 3> run;
	cout << "Enter the first grade:";
	cin >> run[0];
	cout << "Enter the second grade:";
	cin >> run[1];
	cout << "Enter the third grade:";
	cin >> run[2];

	double average;
	average = (run[0] + run[1] + run[2]) / 3.0;

	cout << "Average: " << average << endl;
	system("PAUSE");
}