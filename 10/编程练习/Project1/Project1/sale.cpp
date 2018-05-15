#include"sale.h"
#include<iostream>
using namespace std;
Sale::Sale()
{
	cout << "Please enter into four sales:";
	cin >> this->sales[0]
		>> this->sales[1]
		>> this->sales[2]
		>> this->sales[3];
	this->min=this->max = this->sales[0];
	for (int i = 0; i < 4; i++)
	{
		if (this->sales[i] < this->min)
			this->min = this->sales[i];
		if (this->sales[i]>this->max)
			this->max = this->sales[i];
		this->average += this->sales[i];
	}
	this->average /= 4;
}
Sale::Sale(const double ar[], int n)
{
	int i;
	this->min = this->max = this->sales[0] = this->average = ar[0];
	for (i = 1; i < n; i++)
	{
		this->sales[i] = ar[i];
		if (this->sales[i] < this->min)
			this->min = this->sales[i];
		if (this->sales[i]>this->max)
			this->max = this->sales[i];
		this->average += this->sales[i];
	}

	this->average /= n;
}
void Sale::showSales() const
{
	cout << this->average << endl
		<< this->min << endl
		<< this->max << endl;
}