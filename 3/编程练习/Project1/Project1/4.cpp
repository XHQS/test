#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter the number of seconds:";
	long time;
	cin >> time;
	int days, hours, minutes, seconds;
	seconds = time % 60;
	minutes = time / 60 % 60;
	hours = time / 60 / 60 %24;
	days = time / 60 / 60 / 24;
	cout << time << "seconds = " << days << " days, "
		<< hours << " hours, " << minutes << " minutes, "
		<< seconds << " seconds" << endl;
	system("PAUSE");
}