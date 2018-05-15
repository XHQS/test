#include<iostream>
#include<string>
void ShowOne(std::string str, int n = 0);
int num=0;
int main()
{
	using namespace std;
	string exam="This is an example!";
	ShowOne(exam);
	ShowOne(exam);
	ShowOne(exam,1);
	system("pause");
}

void ShowOne(std::string str,int n)
{
	if (n != 0)
		for (int i = 0; i < num;i++)
			std::cout << str << std::endl;
	else 
		std::cout << str << std::endl;
	num++;
}