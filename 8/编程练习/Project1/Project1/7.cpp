#include<iostream>

template<typename T>
T SumArray(T str[], int n);

template<typename T>
T SumArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};
int main()
{
	using namespace std;
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};
	double * pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Listing Mr.E's couts of things:\n";
	cout << SumArray(things, 6) << endl;// use template A
	cout << "Listing Mr.E's debts:\n";
	cout << SumArray(pd, 3) << endl;;
	system("pause");
}

template <typename T>
T SumArray(T arr[], int n)
{
	using namespace std;
	cout << "template A\n";
	T sum=0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	cout << endl;
	return sum;
}
template <typename T>
T SumArray(T * arr[], int n)
{
	using namespace std;
	cout << "template B\n";
	T sum=0;
	for (int i= 0; i < n; i++)
		sum+=*arr[i];
	return sum;
}
