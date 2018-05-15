#include<iostream>
const double* f1(const double ar[], int n);
const double* f2(const double[], int);
const double* f3(const double *, int);

int main()
{
	using namespace std;
	double av[3] = { 1112.3, 1542.6, 2227.9 };

	const double *(*p1)(const double *, int) = f1;
	/*此处p1指向f1，为一个函数指针，返回值为一个double的地址*/

	auto p2 = f2;
	cout << "Using pointers to functions:\n";
	cout << " Address Value\n";

	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	/*执行f1函数的操作，并且将地址以及结构均显示出来*/
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	const double *(*pa[3])(const double *, int) = { f1, f2, f3 };
	/*此处pa为一个(一维)指针数组，数组的每个元素都是指针，
	此处传输虽然为f1,f2,f3为函数名，但实际传输为函数地址
	这些指针为函数指针，分别指向f1,f2,f3，
	*/
	auto pb = pa;
	cout << "\nUsing an array of pointers to functions:\n";
	cout << " Addresss Value\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	/*分别对f1,f2,f3执行操作，
	原因：函数指针可以直接放入地址使用，相当于执行函数
	将返回值的地址以及其值本身显示出来*/
	cout << "\nUsing an pointer to a pointer to a function:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	/*结果应同上，因为二者指向同一个地址*/
	cout << ":\nUsing pointer to an array of function pointers:\n";
	cout << " Address Value\n";

	auto pc = &pa;
	/*注：指针的赋值（初始化赋值时，用地址赋值），pc为指向pa指向区域的另一个指针*/
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	/*相当于执行了f1的地址（既执行了f1）的操作*/

	const double *(*(*pd)[3])(const double *, int) = &pa;
	/*	const double *(*pa[3])(const double *, int) = { f1, f2, f3 };

		*(*pd)[3]的内容与pa相同，
		pa为指向指针数组的一个指针，
		指针数组的内容是f1,f2,f3的地址,
		对pa的赋值是对数组的赋值，并不是指针的赋值，
		pa[0]=&f1
		由此可知，pd指向pa的地址，与pc相同，
	*/

	const double * pdb = /*"& *(*pd)[1](av, 3)"*/(*pd)[1](av, 3);
	/*pdb的内容为*(*pd)[1](av, 3)：为f2的返回double地址的double值*/
	cout << pdb << ": " << *pdb << endl;
	/*与f2同*/
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
	/*与f3同*/
	system("pause");
}

const double* f1(const double *ar, int n)
{
	return ar;
}
const double * f2(const double ar[], int n)
{
	return ar + 1;
}
const double * f3(const double ar[], int n)
{
	return ar + 2;
}