#include<iostream>
#include<cmath>

int main()
{
	using namespace std;
	double area;
	cout << "enter the floor area,in square feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "that is the equivalent of a square " << side
		<< " feet to the side." << endl;
	cout << "how fascinating!" << endl;
	system("PAUSE");
	return 0;
}