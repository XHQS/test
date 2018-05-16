#include<string>
#include"string2.h"
using std::cin;
using std::cout;

int String::num_strings = 0;
int String::HowMany()
{
	return num_strings;
}
String::String(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}
String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}
String::String(const String & st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}
String::~String()
{
	--num_strings;
	delete[] str;
}
String & String::stringlow()
{
	for (int i = 0; i < len; i++)
		str[i]=tolower(str[i]);
	return (*this);
}
String & String::stringupper()
{
	for (int i = 0; i < len; i++)
		str[i] = toupper(str[i]);
	return (*this);
}
int String::search(char s)
{
	int num=0;
	for (int i = 0; i < len; i++)
		if (str[i]== s)
			num++;
	return num;
}
String & String::operator=(const String & st)
{
	if (this == &st)
		return  *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}
String & String::operator+(const String & s)
{
	char *a = new char[len + 1];
	strcpy(a, str);
	delete[] str;
	str = new char[len+strlen(s.str) + 1];
	strcpy(str, a);
	strcat(str, s.str);
	delete[]a;
	len = len + strlen(s.str);
	return (*this);
}
char *  operator+(const char * a, const String & s)
{
	char * c;
	c  = new char[s.len + strlen(a) + 1];
	strcpy(c, a);
	strcat(c, s.str);
	return c;
}
String & String::operator=(const char * s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}
char & String::operator[](int i)
{
	return str[i];
}
const char & String::operator[](int i)const
{
	return str[i];
}
bool operator<(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
	return st2 < st1;
}
bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}
ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}
istream & operator>>(istream & is, String & st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}