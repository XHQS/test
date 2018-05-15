#include<iostream>
int main()
{
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	ch = ch + 1;
	i = ch;
	cout << "Displaying char ch using cout.put(ch) :";
	cout.put(ch);

	cout.put('!');
	
	cout << endl << "Done" << endl;
	system("PAUSE");
}