#include<iostream>

int main()
{
	using namespace std;
	cout << "Enter an integer: ";
	int n;
	cin >> n;

	cout << "n	n*n\n";
	cout << n << "	" << n*n << " (decimal)\n";

	cout << hex;
	cout << n << "	";
	cout << n*n << " (hexdecimal)\n";

	cout << oct << n << "	" << n*n << " (otcal)\n";

	dec(cout);
	cout << n << "	" << n*n << " (decimal)\n";
	system("pause");
}