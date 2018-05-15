#include<iostream>
int main()
{
	using namespace std;
	cout << "Please put in a number:";
	double mo,tva;
	while (cin>>mo)
	{
		if (mo <= 0)
			break;
		else if (mo < 5000)
			tva = 0;
		else if (mo < 15000)
			tva = (mo - 5000)*0.1;
		else if (mo < 35000)
			tva = 10000 * 0.1 + (mo - 15000)*0.15;
		else
			tva = 10000 * 0.1 + 20000 * 0.15 + (mo - 35000)*0.2;
		cout << "Your tva is " << tva << endl;
	}
	system("pause");
}