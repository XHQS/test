#include<iostream>
#include<string>
void strcount(const std::string str);
int main()
{
	using namespace std;
	string input;
	char next;

	cout << "Enter a line:\n";
	getline(cin,input);

	while (cin&&(input.length()!=0))
	{
		//cin.get(next);
		//while (next != '\n')
		//	cin.get(next);
		strcount(input);
		cout << "Enter next line (empty line to quit ):\n";
		getline(cin,input);
	}
	cout << "Bye!\n";
	system("pause");
}
void strcount(const std::string str)
{
	using std::cout;

	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\"contains ";
	count = str.length();
	total += count;
	cout << count << " characters \n";
	cout << total << " characters total \n";
}