#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter two numbers for adddition: ";
	int num_1,num_2,addition;
	cin >> num_1 >> num_2;
	addition = 0;
	for (int i = num_1; i <= num_2; i++)
		addition += i;
	cout << "Addition: " << addition << endl;
	system("PAUSE");

}