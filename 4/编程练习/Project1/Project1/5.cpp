#include<iostream>
/*注：
	如果此处不加string，
	则后面会出错，
	因为string类的I/O均存储在string头文件中
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