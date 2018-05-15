#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	cout << "Enter word (to stop, type the world done):\n";
	int num = 0;
	char word[20];
	do{
		num++;
		cin >> word;
	} while (strcmp(word,"done"));
	cout << "You entered a total of " << num - 1 << " words" << endl;
	system("PAUSE");

}