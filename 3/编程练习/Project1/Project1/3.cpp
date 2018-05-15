#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degreesof arc: ";
	int degree;
	cin >> degree;
	cout << "Next, enter the minutesof arc: ";
	int minute;
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	int second;
	cin >> second;

	cout << degree << " degrees, " << minute << " minutes, "
		<< second << " seconds = ";
	double time;
	/*注：下面这个式子如果不使用小数点的形式，则在执行运算时，就会被约分*/
	time = double(degree) + double(minute / 60.0) + double(second / 60.0 / 60.0);
	cout << time << " degrees";
	system("PAUSE");
}