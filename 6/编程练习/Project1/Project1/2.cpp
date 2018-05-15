#include<iostream>
#include<array>

int main()
{
	using namespace std;
	array<double, 10>  don;
	int num;
	double aver = 0;
	for (int i = 0; i < 10; i++)
	{

		if (!(cin >> don[i]))
		{
			num = i;
			break;
		}
		aver += don[i];
		num = 10;
	}
	int up_num=0;
	for (int i = 0; i < num; i++)
	{
		if (don[i]>(aver / num))
			up_num++;
	}
	if (num != 0)
	{
		cout << aver / num << endl;
		cout << up_num << endl;
	}
	system("pause");
}