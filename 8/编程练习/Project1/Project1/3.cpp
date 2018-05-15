#include<iostream>
#include<cctype>
#include<string>
using namespace std;
void r(string &);
int main()
{
	cout << "Enter a string (q to quit): ";
	string turn;
	getline(cin, turn);
	r(turn);
	system("pause");
}
void r(string & str)
{
	while (str!="q")
	{

		for (unsigned int i = 0; i < str.length(); i++)
			str[i] = toupper(str[i]);

		cout << str << endl;
		cout << "Enter a string (q to quit): ";
		getline(cin,str);
	}
	cout << "Bye!\n";
}