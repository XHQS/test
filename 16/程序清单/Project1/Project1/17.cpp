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
		//sort(letters.begin(), letters.end());//������дӵ�������
		cout << letters << endl;
		//�����н�����������
		//��������������ʵ��ȫ���У�����뽫���н��е�������
		//��Ϊpermutatio�������г�������������.
		while (next_permutation(letters.begin(), letters.end()))
			cout << letters << endl;
		cout << "Enter next sequence (q to quit): ";
	}
	cout << "Done!\n";
	system("pause");
}