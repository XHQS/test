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
			/*ע���˴����ʹ��ch+1��
			ϵͳ��Ὣchar�ͱ���ת��Ϊint�ͱ���*/
			std::cout << ch++;
		std::cin.get(ch);
	}
	std::cout << "\nPlease excuse the slight confusion.\n";
	system("PAUSE");
}