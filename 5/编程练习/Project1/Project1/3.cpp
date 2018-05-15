#include<iostream>

int main()
{
	using namespace std;
	cout << "Please enter numbers " <<
		"which will end up with zero: " << endl;
	int num,add;
	num = 1; add = 0;
	while (num)
	{
		cin >> num;
		add += num;
		cout << "The result is :" << add << endl;
	}
}