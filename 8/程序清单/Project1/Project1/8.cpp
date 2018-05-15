#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;
int main()
{
	ofstream fout;
	const char * fn = "ep-data.txt";
	fout.open(fn);
	if (!fout.is_open())
	{
		cout << "Can't open " << fn << ". Bye.\n";
		exit(EXIT_FAILURE);
	}

	double objective;
	cout << "Enter the focal length of your "
		"telecsope objective in mm: ";
	cin >> objective;
	double eps[LIMIT];
	cout << "Enter the focal lengths ,in mm, of " << LIMIT
		<< " eyepieces:\n";
	for (int i = 0; i < LIMIT; i++)
	{
		cout << "Eyepiece # " << i + 1 << ": ";
		cin >> eps[i];
	}
	file_it(fout, objective, eps, LIMIT);
	file_it(cout, objective, eps, LIMIT);
	cout << "Done.\n";
	system("pause");
}
void file_it(ostream & os, double  fo, const double fe[], int n)
{
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed);
	os.precision(0);
	os << "Focal length of objective: " << fo << " mm\n";
	/*
	setf（）：
		设置各种格式化状态，
		fixed为讲对象置于使用定点表示法的模式，
		showpoint为讲对象置于显示小数点的模式
	precision（）：
		指定显示多少位的小数
	width():
		设置下一次输出操作使用的字段宽度
	*/
	os.setf(ios::showpoint);
	os.precision(1);
	os.widen(12);
	os << "f.1. eyepiece";
	os.width(15);
	os << "magnification" << endl;
	for (int i = 0; i < n; i++)
	{
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << endl;
	}
	os.setf(initial);
}