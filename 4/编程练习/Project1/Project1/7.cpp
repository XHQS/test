#include<iostream>
#include<string>
struct pizza
{
	std::string name;
	double diameter;
	double weight;
};
int main()
{
	using namespace std;
	pizza ww;
	cout << "Enter the coperation's name: \n";
	getline(cin,ww.name);
	cout << "Enter the pizza's diameter: \n";
	cin >> ww.diameter;
	cout << "Enter the pizza's weight: \n";
	cin >> ww.weight;

	cout << "the coperation's name: " << ww.name << endl;
	cout << "the pizza's diameter: " << ww.diameter << endl;
	cout << "the pizza's weight: " << ww.weight << endl;
	system("PAUSE");
}