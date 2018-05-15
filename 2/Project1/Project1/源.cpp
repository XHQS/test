#include <iostream>
int main()
{
	using namespace std;
	int carrots;
	cout << "how many carrots do you have?" << endl;
	cin >> carrots;
	cout << "here are two more"<< endl; 
	carrots += 2;
	cout << "now you have " << carrots << " carrots." << endl;
	system("PAUSE");
}