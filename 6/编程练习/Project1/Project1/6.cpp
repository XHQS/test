#include<iostream>
#include<string>
struct mem
{
	std::string name;
	double money;
};
int main()
{
	using namespace std;
	int num;
	cout << "Please put in the num:";
	cin >> num;
	mem* GP = new mem[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Please enter the name:";
		cin.get();
		getline(cin, GP[i].name);		
		cout << "Please enter the money:";
		cin >> GP[i].money;
	}
	int up_num=0;
	cout << "Grand Patrons\n";
	for (int i = 0; i < num; i++)
	{
		if (GP[i].money > 10000)
		{
			up_num++;
			cout << GP[i].name<<":\t"<<GP[i].money << endl;
		}
	}
	if (up_num == 0)
		cout << "none" << endl;
	cout << "Patrons\n";
	for (int i = 0; i < num; i++)
	{
		if (GP[i].money <= 10000)
			cout << GP[i].name << endl;
	}
	if (up_num == num)
		cout << "none" << endl;
	system("pause");
}