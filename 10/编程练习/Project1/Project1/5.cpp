#include"stack.h"
#include<iostream>
#include<cctype>
int main()
{
	using namespace std;
	Stack st;
	customer st2;
	char ch;
	std::cout << "a to add one date,d to delete one date,q to quit:\n";
	while (cin>>ch && toupper(ch)!='Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			std::cout << "\a";
			continue;
		}
		switch(ch)
		{
		case 'a':
		case 'A':
		{
			std::cout << "enter your fullname¡¢payment:";
			cin.getline(st2.fullname, 35);
			cin >> st2.payment;
			cin.get();
			if (st.isfull())
				std::cout << "\nthe stack is full\n";
			else
			{
				st.push(st2);
				std::cout << "push success!";
			}
			break;
		}
		case 'd':
		case 'D':
		{
			if (st.isempty())
				std::cout << "\nthe stack is empty!\n";
			else
			{
				st.total += st2.payment;
				st.pop(st2);
				std::cout << "pop success!\ntotal = "
					<< st.total << endl;
			}
			break;
		}
		}
		std::cout << "a to add one date,d to delete ont date,q to quit:";
	}
	system("pause");
}