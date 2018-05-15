#include<iostream>
#include<string>
#include<cstring>

int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;
	cout << animal << " and ";
	cout << bird << "\n";
//cout << ps<< "\n";
	cout << "Enter a kind of anmial: ";
	cin >> animal;
//cin >> ps;
	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After sing strcpy()\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	delete[] ps;
	system("PAUSE");
}