#include<iostream>
#include<ctime>

int main()
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	/*delay�Լ�������������ʱʱ�����ϵͳ����Ƶ�ʣ�
	���ڼ�����Ҫ���ж��ٴμ���ſɴﵽҪ��*/
	clock_t delay = secs*CLOCKS_PER_SEC;
	cout << "starting\a\n";

	clock_t start = clock();
	while (clock()-start < delay);
	
	cout << "done \a\n";
	system("PAUSE");
}
