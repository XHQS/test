#include"sale.h"
#include<iostream>
using  namespace SALES;
int main()
{
	double ar[4] = {1,2,3,4};
	Sales a = {  };
	Sales* b = new Sales;
	setSales(a);
	showSales(a);
	setSales(*b, ar, 4);
	showSales(*b);
	system("pause");

}