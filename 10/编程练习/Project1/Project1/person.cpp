#include"person.h"
#include<string>
Person::Person()
{
	cout << "Please enter your lastname: ";
	cin >> this->lname;
	cout << "enter your firstname: ";
	cin >> this->fname;
}
Person::Person(const string & ln, const char * fn)
{
	strncpy_s(this->fname, fn,this->LIMIT);
	this->lname = ln;
}
void Person::Show() const
{
	cout << this->fname << " " << this->lname<<endl;

}
void Person::FormalShow() const
{
	cout << this->lname << " " << this->fname<<endl;

}