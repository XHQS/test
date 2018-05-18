#include<iostream>
#include<cstdlib>
#include<ctime>
#include"queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	int qs=10;
	Queue line(qs);


	long served = 0;
	long line_wait = 0;
	/*目标，找到最大的perhour*/

	double perhour=10;
	do
	{
		int hours = 100;
		long cyclelimit = MIN_PER_HR * hours;//hour与min的转换
		Item temp;
		long turnaways = 0;
		long customers = 0;
		served = 0;


		long sum_line = 0;
		double min_per_cust;
		int wait_time = 0;
		line_wait = 0;
		min_per_cust = MIN_PER_HR / perhour;

		/*开始模拟*/

		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))
			{
				if (line.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);
					line.enqueue(temp);
				}
			}
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue(temp);
				wait_time = temp.ptime();
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;
			sum_line += line.queuecount();
		}
		perhour += 1;
	
	} while (((double)line_wait / served)<=1);
	cout << "\n" << perhour-1;
	cout << "\nDone!\n";
	system("pause");

}
bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}