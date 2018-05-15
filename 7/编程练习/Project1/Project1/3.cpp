#include<iostream>
#include<string>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void full_box(box*,int);
void modify_box(box*,int);
int main()
{
	int n;
	cout << "Please enter the number of box:";
	cin >> n;
	box* mem = new box[n];
	full_box(mem,n);
	modify_box(mem, n);
	for (int i = 0; i < n; i++)
		cout << mem[i].maker << ":" << mem[i].volume << endl;
	delete mem;
	system("pause");
}
void full_box(box* m,int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << "Please enter the maker: ";
		cin.get();
		cin.getline(m[i].maker,40);
		cout << "Please enter the height,width,length,volume: ";
		cin >> m[i].height >> m[i].width >> m[i].length >> m[i].volume;
	}
}
void modify_box(box* m,int num)
{
	for (int i = 0; i < num; i++)
		m[i].volume = m[i].height + m[i].length + m[i].width;
}