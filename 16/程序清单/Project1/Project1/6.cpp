#include<iostream>
#include<string>
#include<memory>
int main()
{
	using namespace std;
	shared_ptr<string> films[5] =
	{
		shared_ptr<string>(new string("A")),
		shared_ptr<string>(new string("B")),
		shared_ptr < string >(new string("C")),
		shared_ptr < string >(new string("D")),
		shared_ptr < string >(new string("E"))
	};
	shared_ptr<string> pwin;
	pwin = films[2];

	cout << "The nominees for best avian baseball film are\n";
	for (int i = 0; i < 5; i++)
		cout << *films[i] << endl;
	cout << "The winner is " << *pwin << endl;
	cin.get();
	system("pause");
}