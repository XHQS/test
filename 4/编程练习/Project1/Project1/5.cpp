#include<iostream>
/*ע��
	����˴�����string��
	���������
	��Ϊstring���I/O���洢��stringͷ�ļ���
*/
#include<string>

using namespace std;

struct Candy
{
	string brand;
	double weight;
	int calorie;
}snack = {"Mocha Munch",2.3,350};
int main()
{

	cout << "Brand: " << snack.brand << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Calorie: " << snack.calorie << endl;
	system("PAUSE");
}