#include<iostream>
using namespace std;
void tim(int h,int m);
int main()
{
	int hour, min;
	cout << "enter the number of hours: ";
	cin >> hour;
	cout << "enter the number of min: ";
	cin >> min;
	tim(hour,min);
	system("PAUSE");

}
void tim(int h, int m)
{
	cout << "TIME: " << h << ":" << m;
}