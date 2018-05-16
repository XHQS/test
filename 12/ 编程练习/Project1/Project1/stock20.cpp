#include<iostream>
#include"stock20.h"
Stock::Stock()
{
	company = new char [1];
	company[0] = '\0';
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const char * co, long n, double pr)
{
	company =new char[ strlen(co)+1];
	strcpy(company, co);
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
Stock::Stock(Stock & st)
{
	company = new char[strlen(st.company) + 1];
	strcpy(company, st.company);
	shares = st.shares;
	share_val = st.share_val;
	total_val = st.total_val;
}
Stock &  Stock::operator=(const Stock & st)
{
	
	company = new char[strlen(st.company) + 1];
	strcpy(company, st.company);
	shares = st.shares;
	share_val = st.share_val;
	total_val = st.total_val;
	return (*this);
}
Stock::~Stock()
{
	delete[]company;
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
	std::cout << "Number of shares purchased can't be negative. "
		<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num,double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell nmore than you have ! "
			<< "Transacton is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

const Stock & Stock::topval(const Stock &s)const
{
	if (s.total_val > total_val)
	{
		return s;
	}
	else
		return *this;
}
std::ostream & operator<<(std::ostream & os, const Stock & st) 
{
	os << "\ncompany: " << st.company
		<< "\nshares: " << st.shares
		<< "\nshare_val: " << st.share_val
		<< "\ntotal_val: " << st.total_val << std::endl;
	return os;
}