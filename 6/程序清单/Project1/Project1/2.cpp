#include<iostream>
int main()
{
	char ch;
	std::cout << "Type, and I shall repear.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;
		else
			/*注：此处如果使用ch+1，
			系统则会将char型变量转换为int型变量*/
			std::cout << ch++;
		std::cin.get(ch);
	}
	std::cout << "\nPlease excuse the slight confusion.\n";
	system("PAUSE");
}