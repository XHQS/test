#include"error.h"
#include<iostream>
int main()
{
	using namespace std;
	int x, y;
	while (cin >> x >> y)
	{
		
		try
		{
			if (x + y == 0)
				throw error_test(x, y);
			cout << "\nNow everything is good\n";
		}
		catch (logic_error & a)
		{
			cout <<a.what();
			continue;
		}

	}

}