#include<iostream>
#include<fstream>

int main()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;
	outFile.open("text.txt");

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile,50);
	cout << "Enter the original asking year: ";
	cin >> year;

	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;
	/*cout << fixed: 将数字以原型输出，而非科学标准型
	cout.precision(4): 用于规范输出数据的标准，既精确到第几位
	cout.setf(ios_base::showpoint): 显示浮点数小数点后面的零。
	*/
	cout << fixed;
	cout.precision(4);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	outFile << fixed;
	outFile.precision(4);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;
	outFile.close();
	system("pause");
}