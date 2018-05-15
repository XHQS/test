#include<iostream>
const int turn = 12;
int main()
{
	using namespace std;
	cout << "Please put in your weight ______\b\b\b\b\b\b";
	int weight;
	cin >> weight;
	int weight_1, weight_2;
	weight_1 = weight / turn;
	weight_2 = weight %turn;
	cout << "your weight is " << weight_1 << "." << weight_2 << endl;
	system("PAUSE");
}