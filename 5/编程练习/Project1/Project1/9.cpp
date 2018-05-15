#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "Enter word (to stop, type the world done):\n";
	int num=0;
	string word;
	do{
		num++;
		cin >> word;
	} while (word!="done");
	cout << "You entered a total of " << num -1<< " words" << endl;
	system("PAUSE");

}