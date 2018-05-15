#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "Enter your first name: ";
	string f_name;
	cin>> f_name;

	cout << "Enter your last name: ";
	string l_name;
	cin >> l_name;

	string output;
	output = "Here's the information in a single string: " + l_name + ". " + f_name;
	cout << output;

	system("PAUSE");
}