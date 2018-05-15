#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "What is your first name? ";
	char f_name[20];
	cin.getline(f_name,20);
	cout << "Whar is your last name? ";
	string l_name;
	cin >> l_name;
	cout << "What letter grade do you deserve?";
	char grade;
	cin >> grade;
	cout << "What is your age?";
	int age;
	cin >> age;

	cout << "Name: " << l_name << ", " << f_name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age;
	system("PAUSE");
}