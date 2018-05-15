#include<iostream>
const double* f1(const double ar[], int n);
const double* f2(const double[], int);
const double* f3(const double *, int);

int main()
{
	using namespace std;
	double av[3] = { 1112.3, 1542.6, 2227.9 };

	const double *(*p1)(const double *, int) = f1;
	/*�˴�p1ָ��f1��Ϊһ������ָ�룬����ֵΪһ��double�ĵ�ַ*/

	auto p2 = f2;
	cout << "Using pointers to functions:\n";
	cout << " Address Value\n";

	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	/*ִ��f1�����Ĳ��������ҽ���ַ�Լ��ṹ����ʾ����*/
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;

	const double *(*pa[3])(const double *, int) = { f1, f2, f3 };
	/*�˴�paΪһ��(һά)ָ�����飬�����ÿ��Ԫ�ض���ָ�룬
	�˴�������ȻΪf1,f2,f3Ϊ����������ʵ�ʴ���Ϊ������ַ
	��Щָ��Ϊ����ָ�룬�ֱ�ָ��f1,f2,f3��
	*/
	auto pb = pa;
	cout << "\nUsing an array of pointers to functions:\n";
	cout << " Addresss Value\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	/*�ֱ��f1,f2,f3ִ�в�����
	ԭ�򣺺���ָ�����ֱ�ӷ����ַʹ�ã��൱��ִ�к���
	������ֵ�ĵ�ַ�Լ���ֵ������ʾ����*/
	cout << "\nUsing an pointer to a pointer to a function:\n";
	cout << " Address Value\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	/*���Ӧͬ�ϣ���Ϊ����ָ��ͬһ����ַ*/
	cout << ":\nUsing pointer to an array of function pointers:\n";
	cout << " Address Value\n";

	auto pc = &pa;
	/*ע��ָ��ĸ�ֵ����ʼ����ֵʱ���õ�ַ��ֵ����pcΪָ��paָ���������һ��ָ��*/
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	/*�൱��ִ����f1�ĵ�ַ����ִ����f1���Ĳ���*/

	const double *(*(*pd)[3])(const double *, int) = &pa;
	/*	const double *(*pa[3])(const double *, int) = { f1, f2, f3 };

		*(*pd)[3]��������pa��ͬ��
		paΪָ��ָ�������һ��ָ�룬
		ָ�������������f1,f2,f3�ĵ�ַ,
		��pa�ĸ�ֵ�Ƕ�����ĸ�ֵ��������ָ��ĸ�ֵ��
		pa[0]=&f1
		�ɴ˿�֪��pdָ��pa�ĵ�ַ����pc��ͬ��
	*/

	const double * pdb = /*"& *(*pd)[1](av, 3)"*/(*pd)[1](av, 3);
	/*pdb������Ϊ*(*pd)[1](av, 3)��Ϊf2�ķ���double��ַ��doubleֵ*/
	cout << pdb << ": " << *pdb << endl;
	/*��f2ͬ*/
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
	/*��f3ͬ*/
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