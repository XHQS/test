#include<iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed,ios_base::floatfield);
	float tree = 3;
	int guess(3.9832);//也是一种給变量赋值的表示形式
	int debt = 7.2e12;
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt= " << debt << endl;
	system("PAUSE");
}