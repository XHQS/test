#include<iostream>
#include<string>
#include <algorithm> 
bool swap_compare(std::string & st1);
bool function2(std::string  & st);
int main()
{
	using std::cin;
	using std::cout;
	std::string st;
	cout << "test the function1:\n";
	while (cin >> st)
	{
		if (swap_compare(st))
			cout << st << std::endl;
		else
			cout << "not the otto!\n";
		if (!st.compare("q"))
			break;
	}	
	cout << "test the function2:\n";
	while (cin >> st)
	{
		if (function2(st))
			cout << st << std::endl;
		else
			cout << "not the otto!\n";
		if (!st.compare("q"))
			break;
	}
	system("pause");
}
bool swap_compare(std::string & st1)
{
	using std::string;
	string st=st1;
	reverse_copy(st1.begin(),st1.end(),st.begin());

	if (!st1.compare(st))
		return true;
	return false;
}
bool function2(std::string  & st)
{
	int num = st.size();
	std::string::iterator pr1=st.begin();//迭代器
	std::string::reverse_iterator pr2=st.rbegin();//反向迭代器
	for (int i = 0; i<num/2 ; i++)
	{
		if ((*pr1 - *pr2) != 0)
			break;
		pr1++;
		pr2++;
	}
	if ((*pr1 - *pr2) == 0)
		return true;
	return false;
}