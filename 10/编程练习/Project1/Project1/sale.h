#ifndef SALE_H_
#define SALE_H_
class Sale
{
private:
	static const int QUARTERS = 4;
	double sales[QUARTERS];
	double average = 0;
	double max;
	double min;
public:
	Sale(const double ar[], int n);
	Sale();
	void showSales() const;
};
#endif