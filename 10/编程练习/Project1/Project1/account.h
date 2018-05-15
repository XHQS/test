#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include<iostream>
class Account
{
private:
	std::string name;
	std::string account;
	int money;
public:
	Account();
	~Account();
	void show_acc( );
	int push_acc(int n);
	int pop_acc(int n);
};
#endif