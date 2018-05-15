#include<iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable* ps = new inflatable;
	cout << "Enter name of in flatable item: ";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << " cubic feet \n";
	cout << "Price: $" << ps->price << endl;
	delete ps;
	system("PAUSE");                                                          
}