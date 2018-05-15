#include<iostream>
#include<fstream>
#include<string>
const int Size = 10;
int main()
{
	using namespace std; 
	ifstream inFile;
	cout << "Please enter the name of file:";
	char f_name[Size];
	cin.getline(f_name,Size);

	inFile.open(f_name);
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << f_name << endl;
		cout << " Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	int num = 0;
	string alpha;

	while (inFile.good())//good() 表示文件正常，没有读写错误，也不是坏的，也没有结束
	{
		num++;
		inFile >> alpha;
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";
	if (num == 0)
		cout << "No data processed.\n";
	else
		cout << num << " numbers alpha contain" << endl;
	inFile.close();
	system("pause");
}