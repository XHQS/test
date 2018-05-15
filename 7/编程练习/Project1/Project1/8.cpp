#include<iostream>
#include<string>
using namespace std;
const int Seasons = 4;
const char *sea[Seasons] =
{ "Spring", "Summer", "Fall", "Winter" };
void fill_a(double*);
void show_a(double*);


int main()
{
	double text[Seasons];
	fill_a(text);
	show_a(text);
	system("pause");
}
void fill_a(double* Snames)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << sea[i] << " expenses: ";
		cin >> Snames[i];
	}
}
void show_a(double* Snames)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << sea[i] << ": $" << Snames[i] << endl;
		total += Snames[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
