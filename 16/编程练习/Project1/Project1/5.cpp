/**************************
使用sort进行排序，并且使用unique函数删除重复的数据
***************************/
#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
const int Num = 10;

template<class T>
int reduce(T ar[], int n);

template<class T>
int reduce_2(T ar[], int n);

template<class T>
int reduce_3(T ar[], int n);
int main()
{
	using namespace std;
	long ar[Num] = { 2, 2, 2, 2, 4, 2, 3, 2, 1, 1 };
	cout << reduce_3(ar, Num) << endl;
	string abr[Num] = { "a", "c", "b", "g", "e",
		"g", "a", "b", "b", "c" };
	cout << reduce_3(abr, Num) << endl;
	string abc = "aasssdddaaa";
	cout << reduce_3(&abc[0], Num) << endl;
	system("pause");
}
template<class T>
int reduce(T ar[], int n)
{
	using std::unique;
	int i = 0;
	std::sort(ar, ar + Num);
	T *st;
	st = unique(ar, ar + Num);
	for (i = 0; i < Num; i++)
		if (ar + i == st)//比较地址
			break;
	return i;
}
template<class T>
int reduce_2(T ar[], int n)
{
	using namespace std;
	vector st;
	for (int i = 0; i < n; i++)
		st.push_back(ar[i]);
	sort(st.begin(), st.end());
	int i;
	std::vector<long>::iterator a = unique(st.begin(), st.end());
	for (i = 0; i < n; i++)
		if (a == st.begin() + i)
			break;
	return i;
}
template <class T>
int reduce_3(T ar[], int n)
{
	std::list<T> st;
	for (int i = 0; i < n; i++)
		st.push_back(ar[i]);
	st.sort();
	st.unique();
	return st.size();
}