#include<iostream>
int main()
{
	using namespace std;
	char* month[12] = { "jan", "fre", "mar", "apr",
		"may", "june", "july", "aug",
		"sep", "oct", "nov", "dec" };
	int data[3][12];
	int total[4] = {0};
	cout << "Please enter the sale: ";
	for (int i = 0; i < 3; i++)
	{
		cout << "This is No." << 1+i << " year's sale: " << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << month[j] << ": ";
			cin >> data[i][j];
			total[i] += data[i][j];
			
		}
		total[3] += total[i];
	}
	cout << "every years' sales are:"
		<< total[0] << endl
		<< total[1] << endl
		<< total[2] << endl << endl;
	cout << "The total sale :" << total[3] << endl;
	system("PAUSE");

}