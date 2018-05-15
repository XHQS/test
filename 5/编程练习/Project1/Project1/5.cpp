#include<iostream>
int main()
{
	using namespace std;
	char* month[12] = { "jan", "fre", "mar", "apr",
						"may", "june", "july", "aug",
						"sep", "oct", "nov", "dec" };
	int data[12];
	int total=0;
	cout << "Please enter the sale: ";
	for (int i = 0; i < 12; i++)
	{
		cout << month[i] << ": ";
		cin >> data[i];
		total += data[i];
	}
	cout << "Total: " << total << endl;
	system("PAUSE");
}