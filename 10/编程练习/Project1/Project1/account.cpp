#include"account.h"
#include<iostream>
#include<string>
using std::cout;
using std::cin;
Account::Account()
{
	cout << "Please enter you name: ";
	getline(cin, this->name);
	cout << "Please enter you account: ";
	getline(cin, this->account);
	cout << "Please enter you money: ";
	cin >> this->money;
	cin.get();
	//while (cin.get() != '\n')
	//	;
}
Account::~Account()
{
	;
}
void Account::show_acc() 
{
	cout << "This account's datas are:" << std::endl
		<< "Name: " << this->name << std::endl
		<< "Account: " << this->account << std::endl
		<< "Money: " << this->money << std::endl;
}
int Account::push_acc( int n)
{
	cout << this->name << "save money: " << n << std::endl;
	this->money += n;
	return  this->money;
}
int Account::pop_acc(int n)
{
	cout << this->name << "take off " << n << " money\n";
	this->money -= n;
	return this->money;
}
