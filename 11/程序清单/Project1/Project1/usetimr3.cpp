#include<iostream>
#include"mytime3.h"

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "aida and tosca:\n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	temp = aida* 1.17;
	cout << "aida* 1.17: " << temp << endl;
	cout << "10*tosca: " << 10.0 * tosca << endl;
	system("pause");

}