#include<iostream>
#include<string>
int a[100];
struct chaff
{
	char dross[20];
	int slag;
};
int main()
{
	using namespace std;
	chaff* c = new (a) chaff[2];
	char b[20];
	for (int i = 0; i < 2; i++)
	{	
		
		cout << "please enter into the dross: ";
		cin.getline(b, 20);
		strcpy(c[i].dross,b);
		cout << "enter into the slag: ";
		cin >> c[i].slag;
		cin.get();
	}
	for (int i = 0; i < 2; i++)
		cout << endl << c[i].dross << "\t" << c[i].slag;
	system("pause");
}
