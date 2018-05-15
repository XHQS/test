#include<iostream>
int fill_array(double* ar, int n);
void show_array(double* ar,int n);
void reverse_array(double* ar, int n);
const int MaxSize = 6;
int main()
{
	using namespace std;
	int real_num;

	double text[MaxSize];
	real_num = fill_array(text, MaxSize);
	cout << "\nthe original array:\n";
	show_array(text, real_num);
	reverse_array(text, real_num);
	cout << "\nthe reversal array\n";
	show_array(text, real_num);
	double* condition;
	condition = text;
	reverse_array(condition + 1, real_num - 2);
	cout << "\nthe conditional array\n";
	show_array(text, real_num);
	system("pause");
}
int fill_array(double *ar, int n)
{
	int i = 0;
	std::cout << "Please put in a double number:";
	for (i = 0; i < n; i++)
	{
		if (!(std::cin >> ar[i]))
			break;
	}
	return i;
}

void show_array(double* ar, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << ar[i] << "  ";
}

void reverse_array(double* ar, int n)
{
	double c;
	for (int i = 0; i < n / 2; i++)
	{
		c = ar[i];
		ar[i] = ar[n - i-1];
		ar[n - i - 1] = c;
	}
}
