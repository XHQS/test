#include"account.h"
int main()
{
	Account poor;
	Account rich;
		
	poor.show_acc();
	rich.show_acc();

	poor.push_acc( 20000);
	rich.pop_acc( 20000);

	poor.show_acc();
	rich.show_acc();
	system("pause");
}