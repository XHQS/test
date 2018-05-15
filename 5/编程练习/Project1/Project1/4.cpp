#include<iostream>
int main()
{
	using namespace std;
	double dap, cle;
	dap = cle = 100;
	do{
		dap += 100*0.1;
		cle = cle*1.05;
	} while (cle <= dap);
	cout << "dap: " << dap << "\tcle: " << cle << endl;
	system("PAUSE");
}