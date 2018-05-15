#include"sale.h"
#include<iostream>
int main()
{
	Sale ex1;
	double ar[] = { 1.0, 2, 3 };
	Sale ex2 = { ar, 3 };
	ex1.showSales();
	ex2.showSales();

	system("pause");
}
