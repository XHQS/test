#include<iostream>
using namespace std;
const int MaxSize = 10;
int fill_array(double *,int);
void show_array(double *,int);
double cal_array(double *,int);
int main()
{
	double grade[MaxSize] = {0};
	int num=0;
	num = fill_array(grade,MaxSize);
	show_array(grade,num);
	cout << "\naverage: " << cal_array(grade, num) << endl;
	system("pause");
}

int fill_array(double ar[],int n)
{
	int i;
	cout << "Please enter your grade(enter 'q' to quit):";
	for (i = 0; i < n; i++)
	{
		if (!(cin >> ar[i]))
		{
			cin.clear();
			char ch;
			cin >> ch;
			if (ch == 'q')
				break;
			else{
				cout << "error\n";
				exit(EXIT_FAILURE);
			}
		}
	}
	return i;
}

void show_array(double ar[], int n)
{
	for (int i = 0; i < n; i++)
		cout << ar[i] << " ";
}

double cal_array(double ar[], int n)
{
	double average = 0;
	for (int i = 0; i < n; i++)
		average += ar[i];
	average = average / n;
	return average;
}