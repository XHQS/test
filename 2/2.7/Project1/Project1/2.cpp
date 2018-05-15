#include<iostream>
int cal(int sts);
int main()
{
	using namespace std;
	cout << "please enter into your long: ";
	int lenght;
	cin >> lenght;

	cout << endl << "the fin is " << cal(lenght);

	system("PAUSE");

}
int cal(int sts)
{
	return 220 * sts;
}