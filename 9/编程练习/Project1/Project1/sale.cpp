#include"sale.h"
#include<iostream>
namespace SALES{
	void setSales(Sales & s, const double ar[], int n)
	{
		int i;
		for (i = 0; i < QUARTERS; i++)
			if (i < n)
				s.sales[i] = ar[i];
			else
				s.sales[i] = 0;

		s.max = s.sales[0];
		s.min = s.sales[0];
		s.average = s.sales[0];
		for (int j = 1; j < QUARTERS; j++)
		{
			s.average += s.sales[j];
			if (s.sales[j] > s.max)
				s.max = s.sales[j];
			if (s.sales[j] < s.min)
				s.min = s.sales[j];
		}
		s.average = s.average / QUARTERS;
	}
	void setSales(Sales & s)
	{

		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "please enter into the sale#" << 1 + i << ": ";
			std::cin >> s.sales[i];
		}
		s.max = s.sales[0];
		s.min = s.sales[0];
		s.average = s.sales[0];
		for (int j = 1; j < QUARTERS; j++)
		{
			s.average += s.sales[j];
			if (s.sales[j] > s.max)
				s.max = s.sales[j];
			if (s.sales[j] < s.min)
				s.min = s.sales[j];
		}
		s.average = s.average / QUARTERS;
	}

	void showSales(const Sales & s)
	{
		using std::cout;
		using std::endl;
		for (int i = 0; i < QUARTERS; i++)
			cout << "the sale#" << 1 + i << ": " << s.sales[i] << endl;
		cout << "the max :" << s.max << endl;
		cout << "the min :" << s.min << endl;
		cout << "the average :" << s.average << endl;
	}
}