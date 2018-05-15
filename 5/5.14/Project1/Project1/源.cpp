#include<iostream>
#include<ctime>

int main()
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	/*delay试计算我们所需延时时间乘上系统工作频率，
	用于计算需要进行多少次计算才可达到要求*/
	clock_t delay = secs*CLOCKS_PER_SEC;
	cout << "starting\a\n";

	clock_t start = clock();
	while (clock()-start < delay);
	
	cout << "done \a\n";
	system("PAUSE");
}
