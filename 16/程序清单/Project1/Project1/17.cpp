#include<iostream>
#include<string>
#include<algorithm>

int main()
{
	using namespace std;
	string letters;
	cout << "Enter the letter grouping (q to quit): ";
	while (cin >> letters && letters != "q")
	{
		cout << "Permutations of " << letters << endl;
		//sort(letters.begin(), letters.end());//对其进行从递增排序
		cout << letters << endl;
		//对数列进行重新排列
		//隐藏条件，若想实现全排列，则必须将数列进行递增排列
		//因为permutatio仅仅能列出比输入大的数列.
		while (next_permutation(letters.begin(), letters.end()))
			cout << letters << endl;
		cout << "Enter next sequence (q to quit): ";
	}
	cout << "Done!\n";
	system("pause");
}