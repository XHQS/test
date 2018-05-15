#include<iostream>
long long factorial(int n);
int main()
{
	using namespace std;
	cout << "Please enter a number: ";
	int num;
	cin >> num;
	cout << num << "! = " << factorial(num) << endl;

	system("pause");
}
long long factorial(int n)
{
	if (n > 1)
		return n*factorial(n - 1);
	return 1;
}