#include<iostream>
template <typename T>
T Sel_Max(T *);
int main()
{
	using namespace std;
	int a[] = { 1, 9, 4, 1, 5 };
	double b[] = { 12, 43, 25, 764, 1111.11 };
	cout << Sel_Max(a) << endl << Sel_Max(b) << endl;;
	
	system("pause");
}
template <typename T>
T Sel_Max(T* a)
{
	for (int i = 0; i < 5-1; i++)
		for (int j = i+1; j < 5; j++)
		{
			T c;
			if (a[i] > a[j])
			{
				c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	return a[4];
}
