#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter number of rows:";
	int row;
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - i - 1; j++)
			cout << ".";
		for (int j = row - i - 1; j < row; j++)
			cout << "*";
		cout << endl;
	}
	system("PAUSE");
}