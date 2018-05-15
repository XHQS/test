#include<iostream>
using namespace std;
const int SLEN = 30;
struct student{
	char fillname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * pa);
void display3(const student pa[],int n);

int main()
{
	cout << "Enter classs size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	delete[] ptr_stu;
	cout << "Done\n";
	system("pause");
}


int getinfo(student pa[], int n)
{
	int i;
	for (i = 0; i < n; i++){
		cout << "Please enter the student's name:";
		cin.getline(pa[i].fillname,SLEN);
		if (pa[i].fillname == NULL)
			break;

		cout << "Please enter the student's hobby:";
		cin.getline(pa[i].hobby, SLEN);

		cout << "Please enter the student's ooplevel:";
		cin >> pa[i].ooplevel;
		cin.get();
	}
	return i;

}
void display1(student st)
{
	cout << "\nthis student's fullname : " << st.fillname << endl;
	cout << "this student's hobby : " << st.hobby << endl;
	cout << "this student's ooplevel : " << st.ooplevel << endl;
}

void display2(const student * pa)
{
	cout << "\nthis student's fullname : " << (*pa).fillname << endl;
	cout << "this student's hobby : " << (*pa).hobby << endl;
	cout << "this student's ooplevel : " << (*pa).ooplevel << endl;
}
void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nthis student's fullname : " << (*(pa+i)).fillname << endl;
		cout << "this student's hobby : " << (*(pa + i)).hobby << endl;
		cout << "this student's ooplevel : " << (*(pa + i)).ooplevel << endl;
	}
}
