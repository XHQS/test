#include<iostream>
void simon(int);

int main()
{
	using namespace std;
	simon(3);
	cout << "pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "done!" << endl;
	system("PAUSE");
	return 0;
}
void simon(int n)
{
	using namespace std;
	cout << "simon says touch your toes " << n << " times." << endl;
}