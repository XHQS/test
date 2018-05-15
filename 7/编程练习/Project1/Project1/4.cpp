#include<iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks);
int main()
{
	unsigned  total1,total2, choices;
	cout << "Enter the total number of choices on the game caed and\n"
		"the number of picks allowed:\n";
	while ((cin >> total1 >> choices >> total2) && (choices <= total1))
	{
		cout << "You have one chance in ";
		cout << probability(total1, choices)*probability(total2, 1);
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit): ";
	}
	cout << "bye\n";
	system("pause");
}
long double probability(unsigned numbers, unsigned picks)
{
	long double pro =1.0;
	for (unsigned i = 0; i < picks; i++)
	{
		pro = pro*1.0 *picks / numbers;
		picks -= 1;
		numbers -= 1;
	}
	return pro;
}