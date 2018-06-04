#include<iostream>
#include<stdexcept>
class bad_hmean:public std::logic_error
{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0) :logic_error(what()){}
	const char * what(){ return "bad arguments to bad_hmean"; }
};

class bad_gmean :public std::logic_error
{
public:

	bad_gmean(double a = 0, double b = 0) :logic_error(what()){}
	const char * what(){ return "bad arguments to bad_gmean"; }
};
