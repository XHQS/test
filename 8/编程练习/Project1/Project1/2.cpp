#include<iostream>
#include<string>
struct candy
{
	char name[40];
	double weight;
	int calori;
};

void candybar(candy & str,char * nam="Millennium Munch",double wei=2.85,int temp=350);
void ShowC(const candy & str);



int main()
{
	using namespace std;
	candy exa;
	candybar(exa);
	ShowC(exa);
	candybar(exa,"My life is for air",11.1,22);
	ShowC(exa);
	system("pause");
}

void candybar(candy & str,char * nam, double wei, int temp)
{
	strcpy(str.name, nam);
	str.calori = temp;
	str.weight = wei;
}

void ShowC(const candy & str)
{
	using namespace std;
	cout << "name: " << str.name << endl;
	cout << "weight: " << str.weight << endl;
	cout << "calori: " << str.calori << endl;
}
