#include<iostream>
#include<cstring>
const int Name_size = 10;

int main()
{
	using namespace std;
	cout << "Enter your first name: ";
	char f_name[Name_size];
	cin.getline(f_name, Name_size);
	cout << "Enter your last name: ";
	char l_name[Name_size];
	cin.getline(l_name,Name_size);

	char output[22];
	strcpy(output,l_name);
	strcat(output,". ");
	strcat(output,f_name);

	cout << "Here's the information in a single string: " << output << endl;
	system("PAUSE");
}