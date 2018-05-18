#ifndef CD_H_
#define CD_H_
#include<iostream>
class Cd
{
private:
	char *performers;
	char *label;
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report()const;
	//overloading
	Cd & operator=(const Cd & d);
	//friend
	friend std::ostream  & operator<<(std::ostream & os,const Cd & st);
};
class Classic:public Cd
{
private:
	char *st;
public:
	Classic(char * st, char * s1, char * s2, int n, double x);
	Classic();
	~Classic();
	void Report()const;
	Classic & operator=(const Classic & d);
	friend std::ostream  & operator<<(std::ostream & os, const Classic & st);
};
#endif