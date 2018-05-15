#include<iostream>
#include"list.h"
void show(int & n);
int main()
{
	using namespace std;
	List st;
	st.add(2);
	st.add(3);
	st.add(4);
	cout << "is empty?" << st.li_isempty() << endl;
	cout << "is full?" << st.li_isfull() << endl;
	void(*pf)(int &n) = show(int & i);
	st.visit();

}
void show(int & n)
{
	std::cout << n;
}