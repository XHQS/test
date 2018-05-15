#include"person.h"
#include<iostream>
int main()
{
	using namespace std;
	Person one;
	Person two("Symthecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	cout << endl;
	one.FormalShow();
	two.Show();
	cout << endl;
	two.FormalShow();
	three.Show();
	cout << endl;
	three.FormalShow();
	system("pause");
}