#include<iostream>
#include<fstream>
#include<string>
const int Size = 10;
struct donation
{
	std::string name;
	int money;
};
int main()
{
	using namespace std;
	ifstream inFile;
	char f_name[Size];
	cout << "Please enter the filename:";
	cin.getline(f_name,Size);

	inFile.open(f_name);
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << f_name << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	int num;
	inFile >> num;
	donation* GP = new donation [num];
	int i = 0;

	while (inFile.good())
	{
		inFile.get();
		getline(inFile, GP[i].name);
		inFile >> GP[i].money;
		i++;
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";


	int up_num = 0;
	cout << "Grand Patrons:\n";
	for (int i = 0; i < num; i++)
	{
		if (GP[i].money > 10000)
		{
			up_num++;
			cout << GP[i].name << ":  " << GP[i].money << endl;
		}
	}
	if (up_num == 0)
		cout << "none" << endl;
	cout << "Patrons:\n";
	for (int i = 0; i < num; i++)
	{
		if (GP[i].money <= 10000)
			cout << GP[i].name << ":  " << GP[i].money << endl;
	}
	if (up_num == num)
		cout << "none" << endl;

	inFile.close();
	system("pause");

}