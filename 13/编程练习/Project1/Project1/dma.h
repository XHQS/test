#ifndef DMA_H_
#define DMA_H_
#include<iostream>
class Abc
{
private:
	char * label;
	int rating;
public:
	Abc(const char * l = "null", int r = 0);
	Abc(const Abc & rs);
	virtual ~Abc();
	Abc & operator=(const Abc & rs);
	virtual void View()const = 0;
	friend std::ostream & operator<<(std::ostream & os, const Abc & rs);
};



class baseDMA :public Abc
{
public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA();
	baseDMA & operator=(const baseDMA & rs);
	virtual void View()const;
	friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

class lacksDMA :public Abc
{
private:
	enum{ COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char * c ="blank", const char * l = "null",
		int r = 0);
	lacksDMA(const char * c, const Abc & rs);
	virtual void View()const;
	friend std::ostream & operator<<(std::ostream & os,
		const lacksDMA & rs);
};

class hasDMA :public Abc
{
private:
	char * style;
public:
	hasDMA(const char * s ="none", const char *  l = "null",
		int r = 0);
	hasDMA(const char *s, const Abc & rs);
	hasDMA(const hasDMA & hs);
	~hasDMA();
	virtual void View()const;
	hasDMA & operator=(const hasDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};
#endif