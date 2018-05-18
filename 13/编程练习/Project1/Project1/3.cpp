#include<iostream>
#include<string>
#include"dma.h"
const int CLIENTS = 3;
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	Abc *p_clients[CLIENTS];
	char *lab= new char [40];
	int rate;
	char kind;
	for (int i = 0; i < CLIENTS; i++)
	{
		cout << "Enter  lab: ";
		cin>> lab;
		cout << "Enter rate: ";
		cin >> rate;

		cout << "Enter 1 for baseDMA or "
			<< "2 for lacksDMA or 3 for hasDMA: ";
		while (cin >> kind && (kind != '1'&&kind != '2'&& kind !='3'))
			cout << "Enter either 1 , 2 or 3: ";
		if (kind == '1')
			p_clients[i] = new baseDMA(lab,rate);
		else if (kind == '2')
		{
			char color[40] ;
			cout << "Enter the overdraft limit: $";
			cin >> color;

			p_clients[i] = new lacksDMA(color, lab, rate);
		}
		else
		{
			char * style = new char[40];
			cout << "Enter the overdraft limit: $";
			cin >> style;
			p_clients[i] = new hasDMA(style, lab, rate);
			delete[]style;
		}
	}
	cout << endl;
	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->View();
		cout << endl;
	}
	for (int i = 0; i < CLIENTS; i++)
		delete p_clients[i];
	cout << "Done!";
	delete[]lab;
	system("pause");
}