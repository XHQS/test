#ifndef ERROR_H_
#define ERROR_H_
#include<iostream>
#include<stdexcept>
#include<string>
class error_test:public  std::logic_error
{
public:
	int a;
	int b;

	error_test(int st1, int st2) :logic_error(what()){ a = st1; b = st2; };
	const char * what(){ return "bad arguments to bad_gmean"; }
};
#endif