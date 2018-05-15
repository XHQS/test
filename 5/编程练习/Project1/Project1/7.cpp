#include<iostream>
#include<string>
struct car
{
	std::string host;
	int year;
};
int main()
{
	using namespace std;
	cout << "How many cars do you wish to catalog?:";
	int num;
	cin >> num;

	car* car7 = new car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		cin.get();//消除末尾的换行符的影响
		getline(cin, car7[i].host);
		cout << "Please enter the year made: ";
		cin >> car7[i].year;
	}
	cout << "Here is your collection:\n";
	for (int i = 0; i < num; i++)
	{
		cout << car7[i].year << "\t" << car7[i].host << endl;
	}
	system("PAUSE");
}