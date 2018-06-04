#ifndef WINEC_H_
#define WINEC_H_
#include<iostream>
#include<string>
#include<valarray>
#include"pairs.cpp"
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine
{
private:
	std::string name;
	PairArray data;
public:
	Wine(const char *l, int y,const int yr[], const int bot[]);
	Wine(const char * l, int y);
	~Wine(){}
	void GetBottles();
	std::string & Label();
	int sum();
	void show();
};

#endif