#include"dma.h"
#include<cstring>
/*Abc的定义*/
Abc::Abc(const char * l , int r )
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}
Abc::Abc(const Abc & rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}
Abc::~Abc()
{
	delete[] label;
}
Abc & Abc::operator = (const Abc & rs)
{
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}
std::ostream & operator<<(std::ostream & os, const Abc & rs)
{
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}
/*baseDMA的定义*/

baseDMA::baseDMA(const char * l, int r) :Abc(l,r)
{}
baseDMA::baseDMA(const baseDMA & rs) : Abc(rs)
{}
baseDMA::~baseDMA()
{}
baseDMA & baseDMA::operator=(const baseDMA & rs)
{
	Abc::operator=(rs);
	return *this;
}
void baseDMA::View()const
{
	std::cout << (const Abc &)(*this);
}
std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
	os << (const Abc &)rs;
	return os;
}
lacksDMA::lacksDMA(const char *c, const char *l, int r)
	:Abc(l,r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}
lacksDMA::lacksDMA(const char *c, const Abc & rs)
	: Abc(rs)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}
void lacksDMA::View()const
{
	std::cout << (const Abc &)(*this);
	std::cout << "\n" << this->color;
}
std::ostream &  operator<<(std::ostream & os, const lacksDMA & ls)
{
	os << (const baseDMA &)ls;
	os << "Color: " << ls.color << std::endl;
	return os;
}
hasDMA::hasDMA(const char * s, const char * l, int r)
	:Abc(l,r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
hasDMA::hasDMA(const char * s, const Abc & rs)
	: Abc(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA &  hs)
	: Abc(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}
hasDMA::~hasDMA()
{
	delete[] style;
}

void hasDMA::View()const
{
	std::cout << (const Abc &)(*this);
	std::cout << "\n" << this->style;
}
hasDMA & hasDMA::operator=(const hasDMA & hs)
{
	if (this == &hs)
		return *this;
	Abc::operator=(hs);
	delete[] style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
	os << (const baseDMA &)hs;
	os << "Style: " << hs.style << std::endl;
	return os;
}