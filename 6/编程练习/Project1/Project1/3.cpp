#include<iostream>
int main()
{
	using namespace std;
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore\t\tp) pianist\n";
	cout << "t) tree\t\t\tg)game\n";
	char ch;
	int key = 1;
	while (key)
	{
		cin >> ch;
		switch (ch)
		{
		case 'c':cout << "A maple is a carnivore\n"; key = 0; break;
		case 'p':cout << "A maple is a pianist\n"; key = 0; break;
		case 't':cout << "A maple is a tree\n"; key = 0; break;
		case 'g':cout << "A maple is a game\n"; key = 0; break;
		default:cout << "Please enter one of the choices:";
		}
	}
	system("pause");

}