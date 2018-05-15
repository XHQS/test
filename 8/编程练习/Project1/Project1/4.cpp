#include<iostream>
using namespace std;
#include<cstring>
#include<string>
struct stringy{
	char * str;
	int ct;
};
template <typename T>
void show(T,const int n = 1);

void show(stringy,const int n = 1);

void set(stringy&,const char[]);
int main()
{
	stringy beany ;
	char testing[] = "Reality isn't what it used to be.";
	set(beany,testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	delete beany.str;
	system("pause");
}
template <typename  T>
void show(T str,const int n)
{
	for (int i = 0; i < n; i++)
		cout << str << endl;
}
void show(stringy str,const int n)
{
	for (int i = 0; i < n; i++)
		cout << str.str << endl;
}
void set(stringy& str,const char dec[])
{
	str.ct = strlen(dec);

	str.str = new char[str.ct+1];

	strcpy(str.str,dec);


}