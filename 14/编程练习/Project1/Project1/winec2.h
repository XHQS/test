#ifndef WINEC2_H_
#define WINEC2_H_
#include"pairs.cpp"
#include<valarray>
#include<iostream>
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine2 :private PairArray
{
private:
	std::string name;
public:
	Wine2(const char *l, int y, const int yr[], const int bot[]);
	Wine2(const char * l, int y);
	~Wine2(){}
	void GetBottles();
	std::string & Label();
	int sum();
	void show();
};
#endif