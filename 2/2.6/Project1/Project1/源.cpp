#include<iostream>
int stonetolb(int);
int main()
{
	using namespace std;
	int stone;
	cout << "enter the weright in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	system("PAUSE");
	return 0;
}
int stonetolb(int sts)
{
	return 14 * sts;
}