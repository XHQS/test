#include"stack4.h"
#include<iostream>
int main()
{
	using namespace std;
	Stack a(1);
	Item b ;
	if (a.pop(b))
		cout << "pop ok\n";
	else
		cout << "a  is empty\n";
	b = 12;
	if (a.push(b))
		cout << "push ok\n";

	Stack c = a;
	if (!c.push(b)){
		cout << "c is full\n";
		c.pop(b);
	}
	a = c;
	if (!a.pop(b))
		cout << "a is empty\n";
	system("pause");

}