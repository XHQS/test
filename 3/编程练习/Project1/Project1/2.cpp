#include<iostream>
const int t_height = 12;
const double t_weight = 2.2;
int main()
{
	using namespace std;
	cout << "please put in your height_1 ____\b\b\b\b";
	int height_1,height_2;
	cin >> height_1;
	cout << " height_2 ____\b\b\b\b";
	cin >> height_2;
	double weight;
	cout << " please put in your weight ____\b\b\b\b";
	cin >> weight;
	cout << "now ,loading . . ." << endl;
	int height;
	height = height_1*t_height + height_2;
	weight = weight /t_weight;
	double BMI;
	BMI = weight / height / height;
	cout << "your BMI is " << BMI;
	system("PAUSE");

}