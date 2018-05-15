#include<iostream>
const int Max = 5;
double * fill_array(double* ar, double* limit);
void show_array(const double* ar, double* limit);
void revalue(double r,double* ar, double* limit);

int main()
{
	using namespace std;
	double * arr = new double[Max];
	double* end;
	end = arr;
	end = fill_array(arr, end);
	show_array(arr, end);
	revalue(2, arr, end);
	show_array(arr, end);
	delete arr;
	system("pause");
}

double * fill_array(double* ar, double* limit)
{
	using namespace std;
	double temp;
	int i=0;
	while (i<Max)
	{
		cout << "Enter value #" << i + 1 << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		*(ar+i) = temp;
		i++;
	}
	return ar+i;
}
void show_array(const double ar[], double* limit)
{
	using namespace std;
	for (int i = 0; ar[i]!=limit[0]; i++)
	{
		cout << "Property #" << i + 1 << ": $";
		cout << ar[i] << endl;
	}
}
void revalue(double r, double ar[], double* limit)
{
	for (int i = 0; ar[i]!=limit[0]; i++)
		ar[i] *= r;
}