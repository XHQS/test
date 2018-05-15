#ifndef PLORG_H_
#define PLORG_H_
class Plorg
{
private:
	char name[19];
	int CI=50;
public:
	Plorg(char* ch="Plorga");
	void change(int n);
	void show();
};
#endif