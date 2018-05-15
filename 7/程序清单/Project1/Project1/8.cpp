#include<iostream>
unsigned int c_in_str(const char* str, char ch);
int main()
{
	using namespace std;
	char mmm[15] = "minimum";
	char* wail = "ululate";

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u chararcters in " << wail << endl;
	system("pause");
}
unsigned int c_in_str(const char* str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}