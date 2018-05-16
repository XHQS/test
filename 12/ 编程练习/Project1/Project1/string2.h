#ifndef STRING2_H_
#define STRING2_H_
#include<iostream>
#include<cctype>
using std::ostream;
using std::istream;

class String
{
private:
	char * str;
	int len;
	static int  num_strings;
	static const int CINLIM = 80;
public:
	String(const char * s);
	String();
	String(const String &);
	~String();
	String & stringlow();
	String & stringupper();
	int search(char );
	int length()const{ return len; }
	//initial overloading
	String & operator=(const String &);
	String & operator=(const char *);
	String & operator+(const String &);
	char & operator[](int i);
	const char & operator[](int i)const;
	//initial friends
	friend char *  operator+(const char * a, const String & s);
	friend bool operator<(const String & st, const String &st2);
	friend bool operator>(const String & st1, const String &st2);
	friend bool operator==(const String & st, const String &st2);
	friend ostream & operator<<(ostream & os, const String &st2);
	friend istream & operator>>(istream & is, String & st);
	static int HowMany();
};
#endif