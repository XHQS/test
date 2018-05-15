#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char c_name[20];
	
	string name;
	cout << "Enter your name:";
	getline(cin, name);
	string dessert;
	cout << "Enter your favorite dessert:";
	getline(cin, dessert);

	string output;
	output = "I have some delicious " + dessert + " for you, " + name + ".\n";
	cout << output;
	system("PAUSE");
}