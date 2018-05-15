#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charr[20];
	string str;

	cout << "Length of string in charr before input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str before input: "
		<< str.size() << endl;
	cout << "Enter a line of text: \n";
	cin.getline(charr,20);
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of text:\n";
	/*注意此处getline的使用，
	第一个getline是isream类的一个类方法，
	其常常使用句点表示法，
	第二个getline就不是类方法，
	暂时（2018/4/30）可以将其是做一个函数理解
	第一个变量是指出去哪里查找输入参数
	第二个变量是保存的位置
	*/
	getline(cin, str);
	cout << "You entered: " << str << endl;
	cout << "Length of string in charr after input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str after input: "
		<< str.size() << endl;
	system("PAUSE");
}