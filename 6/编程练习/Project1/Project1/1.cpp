#include<iostream>
#include<cctype>
int main()
{
	using namespace std;
	char ch;
	do{
		cin >> ch;
		if (isalpha(ch))
		{
			if (iswupper(ch))
				ch = tolower(ch);
			else
				ch = toupper(ch);
			cout << ch;
		}
	} while (ch != '@');
	return 0;
}