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
	pizza* ww= new pizza;

	cout << "Enter the pizza's diameter: \n";
	cin >> ww->diameter;
	cout << "Enter the pizza's weight: \n";
	cin >> ww->weight;
	/*���ڵ�����cin������������ϴ�����ĩβ�Ļ��з�
	����ʹ��get�����������*/
	cout << "Enter the coperation's name: \n";
	cin.get();
	getline(cin, ww->name);

	cout << "the coperation's name: " << ww->name << endl;
	cout << "the pizza's diameter: " << ww->diameter << endl;
	cout << "the pizza's weight: " << ww->weight << endl;
	delete ww;
	system("PAUSE");
}