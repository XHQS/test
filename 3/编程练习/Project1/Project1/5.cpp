#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter the world's population : ";
	long long w_pop, us_pop;
	cin >> w_pop;
	cout << "Enter the population of the US :";
	cin >> us_pop;
	double proportion;
	proportion = double(us_pop) / w_pop;
	cout << "The population of the US is " << proportion * 100 
		<< "% of the world population"<<endl;
	system("PAUSE");
}