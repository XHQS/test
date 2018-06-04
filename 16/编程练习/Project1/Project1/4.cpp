/**************************
使用sort进行排序，并且使用unique函数删除重复的数据
***************************/
#include<iostream>
#include<vector>
#include<algorithm>
const int Num = 10;
int reduce(long ar[], int n);
int reduce_2(long ar[],int n);
int main()
{
	using namespace std;
	long ar[Num] = {2,2,2,2,4,2,3,2,1,1};
	cout << reduce_2(ar, Num) << endl;
	system("pause");
}

int reduce(long ar[], int n)
{
	using std::unique;
	int i = 0;
	std::sort(ar,ar+Num);
	long *st;
	st = unique(ar,ar+Num);
	for (i = 0; i < Num; i++)
		if (ar + i == st)//比较地址
			break;
	return i;
}
int reduce_2(long ar[], int n)
{
	using namespace std;
	vector<long> st;
	for (int i = 0; i < n; i++)
		st.push_back(ar[i]);
	sort(st.begin(),st.end());
	int i;
	std::vector<long>::iterator a = unique(st.begin(),st.end());
	for (i = 0; i < n; i++)
		if (a == st.begin()+i)
			break;
	return i;
}