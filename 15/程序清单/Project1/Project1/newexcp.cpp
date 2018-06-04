#include<iostream>
#include<new>
#include<cstdlib>

using namespace std;

struct Big
{
	double stuff[20000];
};

int main()
{
	Big * pb;
	try
	{
		cout << "Trying to get a big bolck of memory:\n";
		pb = new Big[10000];
		cout << "Got past the new request:\n";
	}
	catch (bad_alloc & ba)
	{
		cout << "vaught the exception!\n";
		cout << ba.what() << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	cout << "Memory successfully allocated\n";
	pb[0].stuff[0] = 4;
	cout << pb[0].stuff[0] << endl;
	delete[] pb;
	system("pause");

}