#include<iostream>
void cheers(int);
double cube(double x); 
int main()
{
	using namespace std;
	cheers(5);
	cout << "Give me a number";
	double size;
	cin >> size;
	double volume = cube(size);
	cout << "A " << size << "-foot cube  has a volume of ";
	cout << volume << " cubic feet.\n";
	cheers(cube(2));
	system("pause");
}
void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers!";
	cout << endl;
}
double cube(double x)
{
	return x*x*x;
}
