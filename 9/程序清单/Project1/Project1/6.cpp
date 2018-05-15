#include<iostream>
extern double warming;
void update(double dt);
void local();
using std::cout;
void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "Updating global warming to " << warming;
	cout << " degrees.\n";
}
void local()
{
	double warming = 0.8;
	cout << "Local warming = " << warming << " degrees.\n";
	cout << "But global warming = " << ::warming;//::符号表示使用这个变量的全局版本
	cout << " degrees\n";
}