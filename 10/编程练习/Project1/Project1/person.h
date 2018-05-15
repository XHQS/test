#ifndef PERSON_H_
#define PERSON_H_
#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person();
	Person(const string & ln,const char * fn = "Heyyou");
	void Show() const;
	void FormalShow() const;
};
#endif