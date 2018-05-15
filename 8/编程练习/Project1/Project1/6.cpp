#include<iostream>
#include<string>
template<typename T>
T maxn(T*, int);
template <> char* maxn(char* [], int);
int main()
{
	using namespace std;
	int a[6] = {3,46,8,7,9,4};
	double b[] = {1.1,2.2,3.4,1};
	char* c[] = {"1234","1","12","1234","12"};
	cout << maxn(a, 6) << endl
		<< maxn(b, 4) << endl
		<< maxn(c, 5) << endl;
	system("pause");
}
template<typename T>
T maxn(T* arr, int n)
{
	T max=arr[0];
	for (int i = 1; i < n; i++)
		max = max>arr[i] ? max:arr[i];
	return max;

}

template <> char* maxn(char* arr[], int n)
{
	char* max=arr[0];
	for (int i = 1; i < n; i++)
		if (sizeof(max) < sizeof(arr[i]))
			max = arr[i];
	return max;
}
